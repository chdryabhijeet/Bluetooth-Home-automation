String text;
void setup() 
{
pinMode (13,OUTPUT);
pinMode (12,OUTPUT);
pinMode (11,OUTPUT);
pinMode (10,OUTPUT);
Serial.begin(9600) ;
}

void loop ( ) {
while (Serial.available ( )) 
{
delay (5) ;
char c = Serial.read() ;
text +=c;
}
if (text. length() > 0)
  {   
        Serial.println(text) ;
        if (text == "light")
        {
          digitalWrite (13, HIGH) ;
        }
        else if (text =="lightoff")
        {
          digitalWrite (13,LOW);
        }
        else if (text == "light2")
        {
          digitalWrite (12, HIGH) ;
        }
        else if (text =="light2off")
        {
          digitalWrite (12,LOW);
        }
        else if (text == "fanon")
        {
          digitalWrite (11, HIGH) ;
        }
       else if (text =="fanoff")
        {
        digitalWrite (11,LOW);
        }
        else if (text == "new")
        {
          digitalWrite (10, HIGH) ;
        }
        else if (text =="newoff")
        {
        digitalWrite (10,LOW);
        }
        text="";
  }
}