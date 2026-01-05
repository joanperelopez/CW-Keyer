#ifndef keyer_pere_modif_h
#define keyer_pere_modif_h
// Do not change these !

// Variable macros
#define led_ptt     43
#define led_tx      28

void config_leds_pere(){
    pinMode(led_ptt,OUTPUT);
    digitalWrite(led_ptt,LOW);
    pinMode(led_tx,OUTPUT);
    digitalWrite(led_tx,LOW);

}

void activate_led_ptt(){
    digitalWrite(led_ptt,HIGH);
}

void deactivate_led_ptt(){
    digitalWrite(led_ptt,LOW);
}


void activate_led_tx(){
    digitalWrite(led_tx,HIGH);
}


void deactivate_led_tx(){
    digitalWrite(led_tx,LOW);
}


#endif //keyer_pere_modif_h
