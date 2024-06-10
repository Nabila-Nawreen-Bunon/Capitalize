String inputString="";
String outputString="";
bool isComplete=false;
void setup()
{
  Serial.begin(9600);
 inputString.reserve(200);
  Serial.print("Enter input string:");
}

void loop()
{
 
}
String captitalizeFirstlet(String str){
  bool capitalize=true;
  for(int i=0;i<str.length();i++){
    if(str[i]==' '){
    capitalize=true;
    }
    else if(capitalize && isAlpha(str[i])){
      str[i]=toupper(str[i]);
      capitalize=false;
    }
            }
            return str;
            }
            bool isAlpha(char c){
              return true;
            }
      
void SerialEvent(){
  while(Serial.available()>0){
    char inChar=(char)Serial.read();
    inputString+=inChar;
  }
}
  