
int R = 12;
int Y = 11;
int G = 10;
int B = 9;

void setup()
{
	pinMode(R, OUTPUT);
	pinMode(Y, OUTPUT);
	pinMode(G, OUTPUT);
	pinMode(B, OUTPUT);
}

void loop()
{
	int Slider = analogRead(A0);
	int Temp = map(Slider, 0, 1023 , -10, 50);
	delay(100);
	digitalWrite(G, LOW);
	digitalWrite(Y, LOW);
	digitalWrite(R, LOW);
	digitalWrite(B, LOW);

	if (Temp < 0){
		digitalWrite(B, HIGH);
		delay(100);
		digitalWrite(B, LOW);
	}

	else if ((Temp >= 0) && (Temp <= 15)){
		digitalWrite(B, HIGH);

	}
	else if ((Temp > 15) && (Temp <= 25)){
		digitalWrite(G, HIGH);

	}
	else if ((Temp > 25) && (Temp <= 40)){
		digitalWrite(Y, HIGH);

	}
	else if (Temp > 40){
		digitalWrite(R, HIGH);
		delay(100);
		digitalWrite(R, LOW);

	}
}