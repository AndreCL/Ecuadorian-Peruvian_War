#####################
# Country main data #
#####################

country =
{ tag                    = PRU
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 1000
  money                  = 10
  capital                = 830
  manpower               = 200
  diplomacy =
  { relation = { tag = ARG value = 20 }
    relation = { tag = BOL value = 30 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -25 }
    relation = { tag = COL value = -35 }
    relation = { tag = ECU value = -50 }
    relation = { tag = PAR value = 25 }
    relation = { tag = URU value = 25 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  nationalprovinces      = { 831 829 830 821 816 818 908 1835 2497 2003 1988
2997 817 2928 2929 2930 2049 2738
3820 3821 3822 3823 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840
3785 3786 3787 3790 3789 3788 3886 839
  }
  ownedprovinces         = { 831 829 830 821 816 2497 2003 1988
2997 908 818 2928 2929 2930 2049
3820 3821 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840
  }
  controlledprovinces    = { 831 829 830 821 816 2497 2003 1988
2997 908 818 2928 2929 2930 2049
3820 3821 3824 3825 3826 3827 3828 3829 3830 3831 3832 3833 3834 3835 3836 3837 3838 3839 3840
  }
# ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {
#Interwar Fighter  
4500 4510 4520 4530 4540 4550
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Great War Infantry Division  
1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Interbellum Supply 
1910 1920 1930 1940 1950 1960
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080 
#Early Light Cruiser 
3110 3120 3130
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Short Range Submarine 
3610 3620 3630
#Great War Destroyer 
3010 3020 3030 3040

# Naval Firepower Doctrine
8010 8020 8040 8050  
#Naval Infantry
#1560 1570
#Engineers
1830 1840 1850
#Torpedo & ASW 18
3720 3730 3736 3740 3750 3900
#Troopships
3810 
#Medicine
5600 5610 
# Land Doctrines WWI - Entente line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
# Land Doctrines WWII - none

#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
}  
 policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 6 
     political_left    = 4 
     freedom           = 4 
     free_market       = 4 
     professional_army = 6 
     defense_lobby     = 5 
     interventionism   = 5 
    } 

   SpyInfo                = {  country = "PRU" NumberOfSpies = 4  } 
   headofstate            = {  type = 9 id = 185012  } 
   headofgovernment       = {  type = 9 id = 185019  } 
   foreignminister        = {  type = 9 id = 185029  } 
   armamentminister       = {  type = 9 id = 185041  } 
   ministerofsecurity     = {  type = 9 id = 185005  } 
   ministerofintelligence = {  type = 9 id = 185069  } 
   chiefofstaff           = {  type = 9 id = 185079  } 
   chiefofarmy            = {  type = 9 id = 185086  } 
   chiefofnavy            = {  type = 9 id = 185091  } 
   chiefofair             = {  type = 9 id = 185098  } 

   landunit = 
   {  id       = {  type = 17600 id = 1  } 
     name     = "Comando General del Agrupamiento" 
     location = 3825
     Division = 
     {  id       = {  type = 17600 id = 2  } 
       name     = "Agrupamiento del Norte" 
       strength = 50
       type     = hq
	   model = 3 
      } 
     Division = 
     {  id       = {  type = 17600 id = 3  } 
       name     = "5to y 7mo Regimiento de Caballería" 
       strength = 50
       type     = cavalry 
	   model = 6 
	extra = artillery
	brigade_model = 9
      } 
     Division = 
     {  id       = {  type = 17600 id = 4  } 
       name     = "Destacamento de Tanques del Ejército" 
       strength = 50
       type     = light_armor 
	   model = 4
      }
}
landunit =
 {  id       = {  type = 17600 id = 10  } 
     name     = "1a División de Infantería Ligera" 
     location = 908
     Division = 
     {  id       = {  type = 17600 id = 5  } 
       name     = "1er Batallón de Infantería" 
       strength = 50 
	   model = 8 
       type     = infantry
	extra = artillery
	brigade_model = 9 
      } 
 Division = 
     {  id       = {  type = 17600 id = 13  } 
       name     = "5to Batallón de Infantería" 
       strength = 50 
	   model = 8 
       type     = infantry
	extra = engineer
	brigade_model = 3 
      } 
Division = 
     {  id       = {  type = 17600 id = 14  } 
       name     = "19 Batallón de Infantería" 
       strength =  50
	   model = 8 
       type     = infantry
	extra = anti_air
	brigade_model = 2 
      } 
    } 
landunit =
 {  id       = {  type = 17600 id = 15  } 
     name     = "8a División de Infantería Ligera" 
     location = 3824
     Division = 
     {  id       = {  type = 17600 id = 16  } 
       name     = "20 Batallón de Infantería" 
       strength = 50
	   model = 8 
       type     = infantry
	extra1 = artillery
	brigade_model1 = 9 
        extra2 = engineer
	brigade_model2 = 3
      } 
    } 
landunit =
 {  id       = {  type = 17600 id = 17  } 
     name     = "Destacmento Militar Chinchipe" 
     location = 818
     Division = 
     {  id       = {  type = 17600 id = 18 } 
       name     = "33 Batallón de Infantería" 
       strength = 50
	   model = 8 
       type     = infantry
      } 
    } 
landunit =
 {  id       = {  type = 17600 id = 19  } 
     name     = "División de Selva del Ejército (Nororiente)" 
     location = 3820
     Division = 
     {  id       = {  type = 17600 id = 20 } 
       name     = "Guardia Civil" 
       strength = 50
	   model = 6 
       type     = infantry
      } 
    }

landunit =
 {  id       = {  type = 17600 id = 21  } 
     name     = "Division De Infantería de Trujillo" 
     location = 816
     Division = 
     {  id       = {  type = 17600 id = 22 } 
       name     = "1do Batallón de Infantería" 
	locked = yes
       strength = 50
	   model = 8 
       type     = infantry
      } 
    } 

landunit =
 {  id       = {  type = 17600 id = 23  } 
     name     = "Division De Infantería de Lima" 
     location = 830
     Division = 
     {  id       = {  type = 17600 id = 24 } 
       name     = "3er Batallón de Infantería" 
	locked = yes
       strength = 100
	   model = 8 
       type     = infantry
      } 
Division = 
     {  id       = {  type = 17600 id = 25 } 
       name     = "Guardia Presidencial" 
	locked = yes
       strength = 100
	   model = 8 
       type     = infantry
      } 
     Division = 
     {  id       = {  type = 17600 id = 26 } 
       name     = "4to Batallón de Infantería" 
	locked = yes
       strength = 100
	   model = 8 
       type     = infantry
      } 
     Division = 
     {  id       = {  type = 17600 id = 27 } 
       name     = "6to Batallón de Infantería" 
	locked = yes
       strength = 100
	   model = 8 
       type     = infantry
      } 
     Division = 
     {  id       = {  type = 17600 id = 28 } 
       name     = "7mo Batallón de Infantería" 
	locked = yes
       strength = 100
	   model = 8 
       type     = infantry
      } 
     Division = 
     {  id       = {  type = 17600 id = 29 } 
       name     = "8vo Batallón de Infantería" 
	locked = yes
       strength = 100
	   model = 8 
       type     = infantry
      } 
    } 

	navalunit = { 
		id = { type = 17600 id = 6 } 
		name = "Marina del Guerra del Peru" 
		location = 830 
		base = 830
		division = { 
			id = { type = 17600 id = 7 } 
			name = "Almirante Villar" 
			type = destroyer 
			} 
		division = { 
			id = { type = 17600 id = 8 } 
			name = "ARP Almirante Grau" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 17600 id = 9 } 
			name = "ARP Coronel Bolognesi" 
			type = heavy_cruiser 
			model = 1 
			} 
		division = { 
			id = { type = 17600 id = 2433 } 
			name = "Almirante Guise" 
			type = destroyer 
			} 
		} 

	navalunit = { 
		id = { type = 17600 id = 11 } 
		name = "I Flotilla de la Armada" 
		location = 830
		base = 830
		division = { 
			id = { type = 17600 id = 12 } 
			name = "R-1" 
			type = submarine 
			model = 1 
			} 
		division = { 
			id = { type = 17600 id = 35 } 
			name = "R-2" 
			type = submarine 
			model = 1 
			} 
		} 

	airunit = {
	id = { type = 17600 id = 36 }
		name = "Agrupamiento Norte"
		location = 2049 #Chiclayo
		base = 2049
		leader = 185031 #Ureta Montehermoso
			division = {
				id = { type = 17600 id = 37 }
				name = "11 Escuadrón de Bombardeo"
				type = tactical_bomber
				model = 6 #Caproni Ca.135 + Caproni Ca.310
				strength = 90
				max_strength = 90
				}
			division = {
				id = { type = 17600 id = 39 }
				name = "105 Escuadrilla de Transporte"
				type = transport_plane
				model = 1 #Caproni Ca.111
				strength = 40
				max_strength = 40
				}
	}

	airunit = {
		id = { type = 17600 id = 40 }
		name = "21 Escuadrón de Caza"
		location = 3825
		base = 3825
			division = {
				id = { type = 17600 id = 38 }
				name = "Caproni Ca.114"
				type = interceptor
				model = 9 
				strength = 60
				max_strength = 60
				}
      				division = {
				id = { type = 17600 id = 41 }
				name = "North American NA-50 'Torito'"
				type = interceptor
				model = 9 
				strength = 70
				max_strength = 70
				}
	}

  } 
 
