#include <Adafruit_NeoPixel.h>

// Definition du pin de data qui pilote les LEDs
#define PIN            6

// Nombre de LEDs sur la strip
#define NUMPIXELS      223

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  // Initialisation. Tout éteint.
  delay(2000);
  strip.begin();
  delay(2000);
  strip.show();
  delay(2000);
}

// Déclaration des fonctions qui définissent les LEDs qui composent chaque case

// Dustybeavers

void BlocA(int couleur1, int couleur2, int couleur3) {
  int Debut = 12;
  int Fin = 24;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dUstybeavers

void BlocB(int couleur1, int couleur2, int couleur3) {
  int Debut = 25;
  int Fin = 38;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// duStybeavers

void BlocC(int couleur1, int couleur2, int couleur3) {
  int Debut = 39;
  int Fin = 52;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dusTybeavers

void BlocD(int couleur1, int couleur2, int couleur3) {
  int Debut = 53;
  int Fin = 66;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dustYbeavers

void BlocE(int couleur1, int couleur2, int couleur3) {
  int Debut = 67;
  int Fin = 79;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dustyBeavers

void BlocF(int couleur1, int couleur2, int couleur3) {
  int Debut = 201;
  int Fin = 223;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dustybEavers

void BlocG(int couleur1, int couleur2, int couleur3) {
  int Debut = 187;
  int Fin = 199;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dustybeAvers

void BlocH(int couleur1, int couleur2, int couleur3) {
  int Debut = 173;
  int Fin = 186;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dustybeaVers

void BlocI(int couleur1, int couleur2, int couleur3) {
  int Debut = 159;
  int Fin = 172;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dustybeavErs

void BlocJ(int couleur1, int couleur2, int couleur3) {
  int Debut = 145;
  int Fin = 158;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dustybeaveRs

void BlocK(int couleur1, int couleur2, int couleur3) {
  int Debut = 132;
  int Fin = 144;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}

// dustybeaverS

void BlocL(int couleur1, int couleur2, int couleur3) {
  int Debut = 117;
  int Fin = 130;
  for (int i = Debut; i < Fin; i = i + 1) {
    strip.setPixelColor(i, couleur1, couleur2, couleur3);
  }
}



void VertJauneRouge() {
// variables

  // Rouge
  int c1[]={255,0,0};
  // Jaune 
  int c2[]={255,255,0};
  // Vert
  int c3[]={0,255,0};
  // Variable pour interversion des couleurs
  int cTemp[]={0,255,0};

  // Assignation des couleurs aux cases
  for (int i = 0; i < 30; i = i + 1) {
    BlocA(c1[0],c1[1],c1[2]);
    BlocB(c2[0],c2[1],c2[2]);
    BlocC(c3[0],c3[1],c3[2]);
    BlocD(c1[0],c1[1],c1[2]);
    BlocE(c2[0],c2[1],c2[2]);
    BlocF(c3[0],c3[1],c3[2]);
    BlocG(c2[0],c2[1],c2[2]);
    BlocH(c3[0],c3[1],c3[2]);
    BlocI(c1[0],c1[1],c1[2]);
    BlocJ(c2[0],c2[1],c2[2]);
    BlocK(c3[0],c3[1],c3[2]);
    BlocL(c1[0],c1[1],c1[2]);
    strip.show();
    delay(1000);

   // On décale les couleurs

   cTemp[0] = c3[0];
   cTemp[1] = c3[1];
   cTemp[2] = c3[2];

   c3[0] = c2[0];
   c3[1] = c2[1];
   c3[2] = c2[2];

   c2[0] = c1[0];
   c2[1] = c1[1];
   c2[2] = c1[2];

   c1[0] = cTemp[0];
   c1[1] = cTemp[1];
   c1[2] = cTemp[2];
    
  }
}

void BleuFlash() {
// variables
  // BLeu
  int c1 []={0,0,255};
  // Blanc
  int c2 []={255,255,255};
  // LED random
  int randNumber;


// Mise à bleu de tout
  for (int i = 0; i < 30; i = i + 1) {
    BlocA(c1[0],c1[1],c1[2]);
    BlocB(c1[0],c1[1],c1[2]);
    BlocC(c1[0],c1[1],c1[2]);
    BlocD(c1[0],c1[1],c1[2]);
    BlocE(c1[0],c1[1],c1[2]);
    BlocF(c1[0],c1[1],c1[2]);
    BlocG(c1[0],c1[1],c1[2]);
    BlocH(c1[0],c1[1],c1[2]);
    BlocI(c1[0],c1[1],c1[2]);
    BlocJ(c1[0],c1[1],c1[2]);
    BlocK(c1[0],c1[1],c1[2]);
    BlocL(c1[0],c1[1],c1[2]);
    randNumber = random(0, 11);
    // Allume en blanc une case au hasard
    switch (randNumber) {
    case 0:
      BlocA(c2[0],c2[1],c2[2]);
      break;
    case 1:
      BlocB(c2[0],c2[1],c2[2]);
      break;
    case 2:
      BlocC(c2[0],c2[1],c2[2]);
      break;
    case 3:
      BlocD(c2[0],c2[1],c2[2]);
      break;
    case 4:
      BlocE(c2[0],c2[1],c2[2]);
      break;
    case 5:
      BlocF(c2[0],c2[1],c2[2]);
      break;
    case 6:
      BlocG(c2[0],c2[1],c2[2]);
      break;
    case 7:
      BlocH(c2[0],c2[1],c2[2]);
      break;
    case 8:
      BlocI(c2[0],c2[1],c2[2]);
      break;
    case 9:
      BlocJ(c2[0],c2[1],c2[2]);
      break;
    case 10:
      BlocK(c2[0],c2[1],c2[2]);
      break;
  }
    strip.show();
    delay(200);
   
    // Remet la case en bleu
    switch (randNumber) {
    case 0:
     BlocA(c1[0],c1[1],c1[2]);
      break;
    case 1:
      BlocB(c1[0],c1[1],c1[2]);
      break;
    case 2:
      BlocC(c1[0],c1[1],c1[2]);
      break;
    case 3:
      BlocD(c1[0],c1[1],c1[2]);
      break;
    case 4:
      BlocE(c1[0],c1[1],c1[2]);
      break;
    case 5:
      BlocF(c1[0],c1[1],c1[2]);
      break;
    case 6:
      BlocG(c1[0],c1[1],c1[2]);
      break;
    case 7:
      BlocH(c1[0],c1[1],c1[2]);
      break;
    case 8:
      BlocI(c1[0],c1[1],c1[2]);
      break;
    case 9:
      BlocJ(c1[0],c1[1],c1[2]);
      break;
    case 10:
      BlocK(c1[0],c1[1],c1[2]);
      break;
    }
    strip.show();
    delay(1000);
  }
}

void Variation()
{
  // variables de couleurs
   int Rouge[]={255,0,0};
   int Vert[]={0,255,0};
   int Bleu[]={0,0,255};
   int Jaune[]={255,255,0};
   int Mauve[]={255,0,255};
   int Ciel[]={0,255,255};
   int Blanc[]={255,255,255};
   
   // Rouge

   // Allume progressivement
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Rouge[0]/255) , (level*Rouge[1]/255), (level*Rouge[2]/255));
        }
        strip.show();
   }
   // Eteint progressivement
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Rouge[0]/255) , (level*Rouge[1]/255), (level*Rouge[2]/255));
        }
        strip.show();
   }

   // Vert
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Vert[0]/255) , (level*Vert[1]/255), (level*Vert[2]/255));
        }
        strip.show();
   }
   
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Vert[0]/255) , (level*Vert[1]/255), (level*Vert[2]/255));
        }
        strip.show();
   }


   // Bleu
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Bleu[0]/255) , (level*Bleu[1]/255), (level*Bleu[2]/255));
        }
        strip.show();
   }
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Bleu[0]/255) , (level*Bleu[1]/255), (level*Bleu[2]/255));
        }
        strip.show();
   }


   // Jaune
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Jaune[0]/255) , (level*Jaune[1]/255), (level*Jaune[2]/255));
        }
        strip.show();
   }
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Jaune[0]/255) , (level*Jaune[1]/255), (level*Jaune[2]/255));
        }
        strip.show();
   }


   // Mauve
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Mauve[0]/255) , (level*Mauve[1]/255), (level*Mauve[2]/255));
        }
        strip.show();
   }
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Mauve[0]/255) , (level*Mauve[1]/255), (level*Mauve[2]/255));
        }
        strip.show();
   }


   // Ciel
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Ciel[0]/255) , (level*Ciel[1]/255), (level*Ciel[2]/255));
        }
        strip.show();
   }
   
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Ciel[0]/255) , (level*Ciel[1]/255), (level*Ciel[2]/255));
        }
        strip.show();
   }


   // Blanc
   for (int level = 0; level < 255; level = level + 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Blanc[0]/255) , (level*Blanc[1]/255), (level*Blanc[2]/255));
        }
        strip.show();
   }
   
   for (int level = 255; level > 0; level = level - 1) {
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, (level*Blanc[0]/255) , (level*Blanc[1]/255), (level*Blanc[2]/255));
        }
        strip.show();
   }


   // Eteint tout, car les LEDs non utilisées sont allumées avec ce mode, pour simplifier le code.
     for (int i = 0; i < NUMPIXELS; i = i + 1) {  
        strip.setPixelColor(i, 0, 0, 0);
  }
}

void SLF() {
// variables

  // violet
  int c1[]={145,0,255};
  // Jaune
  int c2[]={255,255,0};
  // variable d'intervertion
  int cTemp[3];

  // Initialisation des cases avec leurs couleurs
  for (int i = 0; i < 30; i = i + 1) {
    BlocA(c1[0],c1[1],c1[2]);
    BlocB(c2[0],c2[1],c2[2]);
    BlocC(c1[0],c1[1],c1[2]);
    BlocD(c2[0],c2[1],c2[2]);
    BlocE(c1[0],c1[1],c1[2]);
    BlocF(c1[0],c1[1],c1[2]);
    BlocG(c2[0],c2[1],c2[2]);
    BlocH(c1[0],c1[1],c1[2]);
    BlocI(c2[0],c2[1],c2[2]);
    BlocJ(c1[0],c1[1],c1[2]);
    BlocK(c2[0],c2[1],c2[2]);
    BlocL(c1[0],c1[1],c1[2]);
    strip.show();
    delay(1000);

   // On décale les couleurs

   cTemp[0] = c2[0];
   cTemp[1] = c2[1];
   cTemp[2] = c2[2];

   c2[0] = c1[0];
   c2[1] = c1[1];
   c2[2] = c1[2];

   c1[0] = cTemp[0];
   c1[1] = cTemp[1];
   c1[2] = cTemp[2];
  }
}


void loop() {
  SLF(); // Testé OK
  VertJauneRouge(); // Testé OK
  BleuFlash(); // Testé OK
  Variation(); // Testé OK
}






