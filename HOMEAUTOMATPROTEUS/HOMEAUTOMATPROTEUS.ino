String voice;
void setup() {
Serial.begin(9600);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
while(Serial.available()){
  delay(3);
  char c = Serial.read();
  voice+=c;}

if(voice.length() >0){
  Serial.println(voice);
  if(voice == "lamp on")
  {digitalWrite(6, HIGH);}
  else if(voice == "lamp off" || voice == "lamp of")
  {digitalWrite(6, LOW);}
  else if(voice == "fan on")
  {digitalWrite(5, HIGH);}
  else if(voice == "fan off" || voice == "fan of")
  {digitalWrite(5, LOW);}
  else if(voice == "light on")
  {digitalWrite(4, HIGH);}
  else if(voice == "light off" || voice == "light of")
  {digitalWrite(4, LOW);}
  else if(voice == "all on")
  {digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);}
  else if(voice == "all off" || voice == "all of")
  {digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  digitalWrite(6, LOW);}
  voice = "";}
}

