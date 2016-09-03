#####################
# Country main data #
#####################

country =
{ tag                    = ECU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 1000
  money                  = 10
  capital                = 815
  manpower               = 200
  policy =
  { date              = { year = 0 month = january day = 0 }
     democratic        = 5 
     political_left    = 3 
     free_market       = 8 
     freedom           = 5 
     professional_army = 4 
     defense_lobby     = 5 
     interventionism   = 1 
  }
  nationalprovinces      = { 814 815 817 818 551 908 1835 3781 3782 3783 3784 3785 3786 3787
3824 3823 3820 2930 3822 3821 2738 3788 3789 3790
  }
  ownedprovinces         = { 814 815 817 551 3781 3782 3783 3784 3785 3786 3787 1835 3823 3822 }
  controlledprovinces    = { 814 815 817 551 3781 3782 3783 3784 3785 3786 3787 1835 3823 3822 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Naval Infantry
#1560
#Engineers
1830 1840 
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Medicine
5600 5610
#Modern Agriculture
5700 5710 5010
#Improved Construction Engineering
5800 5080  

#Troopships
3810 
 
 #Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
} 
   diplomacy = 
   {  relation = {  tag = ARG value = 10  } 
     relation = {  tag = BOL value = -20  } 
     relation = {  tag = BRA value = 10  } 
     relation = {  tag = CHL value = 20  } 
     relation = {  tag = COL value = 20  } 
	 
     relation = {  tag = PAR value = 25  } 
     relation = {  tag = PRU value = -50  } 
     relation = {  tag = URU value = 10  } 
     relation = {  tag = USA value = 75  } 
     relation = {  tag = VEN value = 20  } 
    } 
   SpyInfo                = {  country = "ECU" NumberOfSpies = 3  } 
   headofstate            = {  type = 9 id = 190023  } 
   headofgovernment       = {  type = 9 id = 190041  } 
   foreignminister        = {  type = 9 id = 190059  } 
   armamentminister       = {  type = 9 id = 190075  } 
   ministerofsecurity     = {  type = 9 id = 190087  } 
   ministerofintelligence = {  type = 9 id = 190100  } 
   chiefofstaff           = {  type = 9 id = 190007  } 
   chiefofarmy            = {  type = 9 id = 190008  } 
   chiefofnavy            = {  type = 9 id = 190122  } 
   chiefofair             = {  type = 9 id = 190126  } 

   landunit = 
   {  id       = {  type = 29000 id = 50  } 
     name     = "Ejercito de Ecuador" 
     location = 815 
     Division = 
     {  id       = {  type = 29000 id = 5000  } 
       name     = "Guardia Presidencial" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5005  } 
       name     = "1a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5006  } 
       name     = "2a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5007  } 
       name     = "3a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5008 } 
       name     = "4a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5009  } 
       name     = "5a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5010  } 
       name     = "6a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5011  } 
       name     = "7a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5012  } 
       name     = "8a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5013  } 
       name     = "9a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5014  } 
       name     = "10a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
Division = 
     {  id       = {  type = 29000 id = 5015  } 
       name     = "11a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
     
  } 
landunit = 
   {  id       = {  type = 29000 id = 53  } 
     name     = "Unidad de Guayaquil" 
     location = 814 
     Division = 
     {  id       = {  type = 29000 id = 5016  } 
       name     = "12a Brigada de Infantería" 
       strength = 100 
       locked = yes
       type     = infantry
	model = 8
      }
}

landunit = 
   {  id       = {  type = 29000 id = 51  } 
     name     = "Comando del Ejército de Frontera" 
     location = 3784 
     Division = 
     {  id       = {  type = 29000 id = 5001  } 
       name     = "Arenillas" 
       strength = 10
       type     = hq
	model = 3
      }
Division = 
     {  id       = {  type = 29000 id = 5002  } 
       name     = "Santa Rosa" 
       strength = 62
       type     = infantry
	model = 6
      }
}

landunit = 
   {  id       = {  type = 29000 id = 52  } 
     name     = "1er Ejército de Frontera" 
     location = 1835
Division = 
     {  id       = {  type = 29000 id = 5003  } 
       name     = "Batallón Cayambe" 
       strength = 53
       type     = infantry
	model = 6
      }
}

landunit = 
   {  id       = {  type = 29000 id = 54  } 
     name     = "2do Ejército de Frontera" 
     location = 3823
Division = 
     {  id       = {  type = 29000 id = 5004  } 
       name     = "Batallón Montecristi" 
       strength = 27
       type     = infantry
	model = 6
      }
}
}
 