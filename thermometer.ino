int sensorPin = A0;  //アナログ0番ピンを指定
int sensorValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);    //シリアルモニタに表示するための設定
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);  //アナログ0番ピンから入力値を取得
  float temp = modTemp(sensorValue);    //温度センサーからの入力値を変換
  Serial.print("Temp: ");
  Serial.println(temp);                 //結果をシリアルモニタに表示
  delay(1000);                           //0.5秒待ち
}

float modTemp(int analog_val){
  //Serial.println(analog_val);
  float v = 5.0;   
  //Serial.println(v);
  float tempC = (((float)analog_val/1024.0)*5.0)*100.0;//摂氏に換算
  
  return tempC;
}

