__int64 __fastcall PropertyEval(
        unsigned int a1,
        wchar_t *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        wchar_t *Str2,
        unsigned int a7,
        int *a8)
{
  size_t v8; // r10
  int v10; // edi
  unsigned int v11; // ebx
  int v12; // r12d
  int v13; // r8d
  unsigned int v14; // r9d
  int v15; // r15d
  int v16; // eax
  bool v17; // zf
  int v18; // edx
  bool v19; // zf
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  bool v24; // cf
  int v25; // eax
  bool v26; // zf
  int v27; // ecx
  unsigned int v28; // r9d
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r9d
  unsigned int v33; // ecx
  bool v34; // cf
  bool v35; // zf
  unsigned int v36; // ecx
  bool v37; // cf
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  bool v40; // cf
  bool v41; // zf
  int v42; // ecx
  unsigned int v43; // r9d
  unsigned int v44; // r9d
  unsigned int v45; // r9d
  unsigned int v46; // r9d
  int v47; // ecx
  bool v48; // zf
  bool v49; // sf
  bool v50; // of
  int v51; // ecx
  bool v52; // sf
  bool v53; // of
  int v54; // ecx
  bool v55; // sf
  bool v56; // of
  int v57; // ecx
  bool v58; // zf
  bool v59; // sf
  bool v60; // of
  unsigned int v61; // r9d
  unsigned int v62; // r9d
  unsigned int v63; // r9d
  unsigned int v64; // r9d
  unsigned int v65; // r9d
  unsigned int v66; // r9d
  unsigned int v67; // r9d
  int v68; // edx
  int v69; // ecx
  int v70; // edx
  int v71; // ecx
  int v72; // edx
  int v73; // ecx
  int v74; // edx
  int v75; // ecx
  int v76; // edx
  int v77; // ecx
  unsigned int v78; // r9d
  unsigned int v79; // r9d
  unsigned int v80; // r9d
  unsigned int v81; // r9d
  wchar_t v82; // cx
  bool v83; // cf
  bool v84; // zf
  bool v85; // cf
  unsigned int v86; // ecx
  bool v87; // cf
  unsigned int v88; // ecx
  wchar_t v89; // cx
  bool v90; // cf
  bool v91; // zf
  double v92; // xmm1_8
  wchar_t v93; // cx
  bool v94; // zf
  unsigned int v95; // r9d
  unsigned int v96; // r9d
  unsigned int v97; // r9d
  unsigned int v98; // r9d
  bool v99; // zf
  bool v100; // sf
  bool v101; // of
  bool v102; // sf
  bool v103; // of
  __int64 v104; // rcx
  bool v105; // sf
  bool v106; // of
  __int64 v107; // rcx
  bool v108; // zf
  bool v109; // sf
  bool v110; // of
  __int64 v111; // rcx
  __int64 v112; // rcx
  unsigned int v113; // r9d
  unsigned int v114; // r9d
  unsigned int v115; // r9d
  unsigned int v116; // r9d
  unsigned int v117; // eax
  unsigned int v118; // r9d
  unsigned int v119; // r9d
  unsigned int v120; // r9d
  unsigned int v121; // r9d
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 v125; // rcx
  __m128i v126; // xmm1
  double v127; // xmm1_8
  bool v128; // cf
  unsigned int v129; // eax
  __m128i v130; // xmm0
  double v131; // xmm0_8
  unsigned int v132; // eax
  __m128i v133; // xmm1
  double v134; // xmm1_8
  bool v135; // cf
  bool v136; // zf
  unsigned int v137; // eax
  __m128i v138; // xmm0
  double v139; // xmm0_8
  unsigned int v140; // eax
  __m128i v141; // xmm0
  double v142; // xmm0_8
  unsigned __int64 v143; // rcx
  float v144; // xmm1_4
  unsigned int v145; // r9d
  unsigned int v146; // r9d
  unsigned int v147; // r9d
  unsigned int v148; // r9d
  unsigned int v149; // eax
  __m128i v150; // xmm1
  float v151; // xmm1_4
  unsigned int v152; // eax
  __m128i v153; // xmm0
  float v154; // xmm0_4
  unsigned int v155; // eax
  __m128i v156; // xmm1
  float v157; // xmm1_4
  unsigned int v158; // eax
  __m128i v159; // xmm0
  float v160; // xmm0_4
  unsigned int v161; // eax
  __m128i v162; // xmm0
  float v163; // xmm0_4
  unsigned int v164; // r9d
  unsigned int v165; // r9d
  unsigned int v166; // r9d
  unsigned int v167; // r9d
  unsigned __int64 v168; // rcx
  unsigned __int64 v169; // rcx
  unsigned __int64 v170; // rcx
  unsigned __int64 v171; // rcx
  __int64 v172; // rcx
  unsigned int v173; // r9d
  unsigned int v174; // r9d
  unsigned int v175; // r9d
  unsigned int v176; // r9d
  unsigned int v177; // r9d
  unsigned int v178; // r9d
  unsigned int v179; // r9d
  unsigned int v180; // r9d
  unsigned int v181; // r9d
  unsigned int v182; // r9d
  unsigned int v183; // r9d
  unsigned int v184; // r9d
  unsigned int v185; // r9d
  unsigned int v186; // r9d
  unsigned int v187; // r9d
  unsigned int v188; // r9d
  unsigned int v189; // r9d
  unsigned int v190; // r9d
  unsigned int v191; // r9d
  unsigned int v192; // r9d
  wchar_t v193; // cx
  __int16 v194; // cx
  __int16 v195; // cx
  wchar_t v196; // cx
  unsigned int v197; // r9d
  unsigned int v198; // r9d
  unsigned int v199; // r9d
  unsigned int v200; // r9d
  unsigned int v201; // r9d
  unsigned int v202; // r9d
  unsigned int v203; // r9d
  unsigned int v204; // r9d
  unsigned int v205; // r9d
  unsigned int v206; // r9d
  unsigned int v207; // r9d
  unsigned int v208; // r9d
  unsigned int v209; // r9d
  unsigned int v210; // r9d
  unsigned int v211; // r9d
  unsigned int v212; // r9d
  unsigned int v213; // r9d
  unsigned int v214; // r9d
  unsigned int v215; // r9d
  unsigned int v216; // r9d
  unsigned int v217; // r9d
  unsigned int v218; // r9d
  unsigned int v219; // r9d
  unsigned int v220; // r9d
  unsigned int v221; // r9d
  unsigned int v222; // r9d
  unsigned int v223; // r9d
  unsigned int v224; // r9d
  unsigned int v225; // r9d
  unsigned int v226; // r9d
  unsigned int v227; // r9d
  unsigned int v228; // r9d
  wchar_t v229; // cx
  wchar_t v230; // cx
  __int16 v231; // cx
  unsigned int v232; // r9d
  unsigned int v233; // r9d
  unsigned int v234; // r9d
  unsigned int v235; // r9d
  __int16 v236; // dx
  __int16 v237; // dx
  __int16 v238; // dx
  __int16 v239; // dx
  unsigned int v240; // r9d
  unsigned int v241; // r9d
  unsigned int v242; // r9d
  unsigned int v243; // r9d
  unsigned int v244; // r9d
  unsigned int v245; // r9d
  unsigned int v246; // r9d
  unsigned int v247; // r9d
  unsigned int v248; // r9d
  unsigned int v249; // r9d
  unsigned int v250; // r9d
  unsigned int v251; // r9d
  unsigned int v252; // r9d
  unsigned int v253; // r9d
  unsigned int v254; // r9d
  unsigned int v255; // r9d
  unsigned int v256; // r9d
  unsigned int v257; // r9d
  unsigned int v258; // r9d
  unsigned int v259; // r9d
  unsigned int v260; // r9d
  unsigned int v261; // r9d
  unsigned int v262; // r9d
  unsigned int v263; // r9d
  unsigned int v264; // r9d
  unsigned int v265; // r9d
  unsigned int v266; // r9d
  unsigned int v267; // r9d
  unsigned int v268; // r9d
  unsigned int v269; // r9d
  unsigned int v270; // r9d
  unsigned int v271; // r9d
  unsigned int v272; // r9d
  unsigned int v273; // r9d
  unsigned int v274; // r9d
  unsigned int v275; // r9d
  unsigned int v276; // r9d
  unsigned int v277; // r9d
  unsigned int v278; // r9d
  unsigned int v279; // r9d
  unsigned int v280; // r9d
  unsigned int v281; // r9d
  unsigned int v282; // r9d
  unsigned int v283; // r9d
  unsigned int v284; // r9d
  unsigned int v285; // r9d
  unsigned int v286; // r9d
  unsigned int v287; // r9d
  unsigned int v288; // r9d
  unsigned int v289; // r9d
  unsigned int v290; // r9d
  unsigned int v291; // r9d
  unsigned int v292; // r9d
  unsigned int v293; // r9d
  unsigned int v294; // r9d
  unsigned int v295; // r9d
  unsigned int v296; // r9d
  unsigned int v297; // r9d
  unsigned int v298; // r9d
  unsigned int v299; // r9d
  unsigned int v300; // r9d
  unsigned int v301; // r9d
  unsigned int v302; // r9d
  unsigned int v303; // r9d
  unsigned int v304; // r9d
  unsigned int v305; // r9d
  unsigned int v306; // r9d
  unsigned int v307; // r9d
  unsigned int v308; // r9d
  unsigned int v309; // r9d
  unsigned int v310; // r9d
  unsigned int v311; // r9d
  unsigned int v312; // r9d
  int v313; // ecx
  int v314; // ecx
  int v315; // ecx
  int v316; // ecx
  int v317; // ecx
  unsigned int v318; // r9d
  unsigned int v319; // r9d
  unsigned int v320; // r9d
  unsigned int v321; // r9d
  unsigned int v322; // r9d
  unsigned int v323; // r9d
  unsigned int v324; // r9d
  unsigned int v325; // r9d
  unsigned int v326; // r9d
  unsigned int v327; // r9d
  unsigned int v328; // r9d
  unsigned int v329; // r9d
  unsigned int v330; // r9d
  unsigned int v331; // r9d
  unsigned int v332; // r9d
  unsigned int v333; // r9d
  unsigned int v334; // r9d
  unsigned int v335; // r9d
  unsigned int v336; // r9d
  unsigned int v337; // r9d
  unsigned int v338; // r9d
  unsigned int v339; // r9d
  unsigned int v340; // r9d
  unsigned int v341; // r9d
  unsigned int v342; // r9d
  unsigned int v343; // r9d
  unsigned int v344; // r9d
  unsigned int v345; // r9d
  bool v346; // zf
  bool v347; // zf
  int v348; // eax
  unsigned int v349; // r9d
  unsigned int v350; // r9d
  unsigned int v351; // r9d
  unsigned int v352; // r9d
  unsigned __int64 v353; // rcx
  double v354; // xmm0_8
  unsigned __int64 v355; // rcx
  double v356; // xmm1_8
  unsigned __int64 v357; // rcx
  double v358; // xmm0_8
  __int64 v359; // rcx
  unsigned __int64 v360; // rcx
  double v361; // xmm1_8
  unsigned int v362; // r9d
  unsigned int v363; // r9d
  unsigned int v364; // r9d
  unsigned int v365; // r9d
  __m128i v366; // xmm0
  __m128i v367; // xmm1
  __m128i v368; // xmm0
  __m128i v369; // xmm1
  __m128i v370; // xmm1
  unsigned int v371; // ecx
  unsigned int v372; // r9d
  unsigned int v373; // r9d
  unsigned int v374; // r9d
  unsigned int v375; // r9d
  unsigned int v376; // ecx
  unsigned int v377; // ecx
  unsigned int v378; // ecx
  unsigned int v379; // ecx
  unsigned int v380; // r9d
  unsigned int v381; // r9d
  unsigned int v382; // r9d
  unsigned int v383; // r9d
  unsigned int v384; // r9d
  unsigned int v385; // r9d
  unsigned int v386; // r9d
  unsigned int v387; // r9d
  unsigned int v388; // r9d
  unsigned int v389; // r9d
  unsigned int v390; // r9d
  unsigned int v391; // r9d
  unsigned int v392; // r9d
  unsigned int v393; // r9d
  unsigned int v394; // r9d
  unsigned int v395; // r9d
  unsigned int v396; // r9d
  unsigned int v397; // r9d
  unsigned int v398; // r9d
  unsigned int v399; // r9d
  unsigned int v400; // r9d
  unsigned int v401; // r9d
  unsigned int v402; // r9d
  unsigned int v403; // r9d
  unsigned int v404; // r9d
  unsigned int v405; // r9d
  unsigned int v406; // r9d
  unsigned int v407; // r9d
  unsigned __int64 v408; // rcx
  float v409; // xmm0_4
  unsigned __int64 v410; // rcx
  float v411; // xmm1_4
  unsigned __int64 v412; // rcx
  float v413; // xmm0_4
  unsigned __int64 v414; // rcx
  float v415; // xmm1_4
  unsigned int v416; // r9d
  unsigned int v417; // r9d
  unsigned int v418; // r9d
  unsigned int v419; // r9d
  __m128i v420; // xmm0
  __m128i v421; // xmm1
  __m128i v422; // xmm0
  __m128i v423; // xmm1
  __m128i v424; // xmm1
  unsigned int v425; // ecx
  unsigned int v426; // r9d
  unsigned int v427; // r9d
  unsigned int v428; // r9d
  unsigned int v429; // r9d
  unsigned int v430; // ecx
  unsigned int v431; // ecx
  unsigned int v432; // ecx
  unsigned int v433; // ecx
  unsigned int v434; // r9d
  unsigned int v435; // r9d
  unsigned int v436; // r9d
  unsigned int v437; // r9d
  unsigned int v438; // r9d
  unsigned int v439; // r9d
  unsigned int v440; // r9d
  unsigned int v441; // r9d
  unsigned int v442; // r9d
  unsigned int v443; // r9d
  unsigned int v444; // r9d
  unsigned int v445; // r9d
  unsigned int v446; // r9d
  unsigned int v447; // r9d
  unsigned int v448; // r9d
  unsigned int v449; // r9d
  unsigned int v450; // r9d
  unsigned int v451; // r9d
  unsigned int v452; // r9d
  unsigned int v453; // r9d
  unsigned int v454; // r9d
  unsigned int v455; // r9d
  unsigned int v456; // r9d
  unsigned int v457; // r9d
  unsigned int v458; // r9d
  unsigned int v459; // r9d
  unsigned int v460; // r9d
  unsigned int v461; // r9d
  unsigned int v462; // r9d
  unsigned int v463; // r9d
  unsigned int v464; // r9d
  unsigned int v465; // r9d
  unsigned __int64 v466; // rcx
  unsigned __int64 v467; // rcx
  unsigned __int64 v468; // rcx
  unsigned __int64 v469; // rcx
  unsigned int v470; // r9d
  unsigned int v471; // r9d
  unsigned int v472; // r9d
  unsigned int v473; // r9d
  unsigned int v474; // r9d
  unsigned int v475; // r9d
  unsigned int v476; // r9d
  unsigned int v477; // r9d
  unsigned int v478; // r9d
  unsigned int v479; // r9d
  unsigned int v480; // r9d
  unsigned int v481; // r9d
  unsigned int v482; // r9d
  unsigned int v483; // r9d
  unsigned int v484; // r9d
  unsigned int v485; // r9d
  unsigned int v486; // r9d
  unsigned int v487; // r9d
  unsigned int v488; // r9d
  unsigned int v489; // r9d
  unsigned int v490; // r9d
  unsigned int v491; // r9d
  unsigned int v492; // r9d
  unsigned int v493; // r9d
  unsigned __int64 v494; // rcx
  unsigned int v495; // r9d
  unsigned int v496; // r9d
  unsigned int v497; // r9d
  unsigned int v498; // r9d
  unsigned __int64 v499; // rcx
  unsigned __int64 v500; // rcx
  unsigned __int64 v501; // rcx
  unsigned __int64 v502; // rcx
  unsigned int v503; // r9d
  unsigned int v504; // r9d
  unsigned int v505; // r9d
  unsigned int v506; // r9d
  unsigned __int64 v507; // rcx
  unsigned __int64 v508; // rcx
  unsigned __int64 v509; // rcx
  unsigned __int64 v510; // rcx
  unsigned __int64 v511; // rcx
  unsigned int v512; // r9d
  unsigned int v513; // r9d
  unsigned int v514; // r9d
  unsigned int v515; // r9d
  __int64 v516; // rcx
  unsigned int v517; // r9d
  unsigned int v518; // r9d
  unsigned int v519; // r9d
  unsigned int v520; // r9d
  unsigned int v521; // r9d
  unsigned int v522; // r9d
  unsigned int v523; // r9d
  unsigned int v524; // r9d
  unsigned int v525; // r9d
  unsigned int v526; // r9d
  unsigned int v527; // r9d
  unsigned int v528; // r9d
  unsigned int v529; // r9d
  unsigned int v530; // r9d
  unsigned int v531; // r9d
  unsigned int v532; // r9d
  unsigned int v533; // r9d
  unsigned int v534; // r9d
  unsigned int v535; // r9d
  unsigned int v536; // r9d
  unsigned int v537; // r9d
  unsigned int v538; // r9d
  unsigned int v539; // r9d
  unsigned int v540; // r9d
  unsigned int v541; // r9d
  unsigned int v542; // r9d
  unsigned int v543; // r9d
  unsigned int v544; // r9d
  unsigned int v545; // r9d
  unsigned int v546; // r9d
  unsigned int v547; // r9d
  unsigned int v548; // r9d
  unsigned int v549; // ecx
  unsigned int v550; // ecx
  unsigned int v551; // r9d
  unsigned int v552; // r9d
  unsigned int v553; // r9d
  unsigned int v554; // r9d
  unsigned int v555; // r9d
  unsigned int v556; // r9d
  unsigned int v557; // r9d
  unsigned int v558; // r9d
  unsigned int v559; // r9d
  unsigned int v560; // r9d
  unsigned int v561; // r9d
  unsigned int v562; // r9d
  unsigned int v563; // r9d
  unsigned int v564; // r9d
  unsigned int v565; // r9d
  unsigned int v566; // r9d
  unsigned int v567; // r9d
  unsigned int v568; // r9d
  unsigned int v569; // r9d
  unsigned int v570; // r9d
  unsigned int v571; // r9d
  unsigned int v572; // r9d
  unsigned int v573; // r9d
  unsigned int v574; // r9d
  unsigned int v575; // r9d
  unsigned int v576; // r9d
  unsigned int v577; // r9d
  unsigned int v578; // r9d
  float v579; // ecx
  int v580; // edx
  unsigned int v581; // r9d
  unsigned int v582; // r9d
  unsigned int v583; // r9d
  unsigned int v584; // r9d
  bool v585; // zf
  unsigned int v586; // r9d
  unsigned int v587; // r9d
  unsigned int v588; // r9d
  unsigned int v589; // r9d
  unsigned int v590; // r9d
  unsigned int v591; // r9d
  unsigned int v592; // r9d
  unsigned int v593; // r9d
  bool v594; // zf
  __int64 v595; // rcx

  v8 = a3;
  v10 = 0;
  v11 = 0;
  v12 = a4 & 0x10000;
  v13 = a4 & 0x20000;
  v14 = a4 & 0xF000FFFF;
  *a8 = 0;
  if ( v13 && a1 != 18 && a1 != 8210 && a1 != 25 )
  {
    v11 = -1073741637;
    goto LABEL_1373;
  }
  v15 = 1;
  if ( v14 == 1 )
  {
    *a8 = a1 != 0;
    goto LABEL_1373;
  }
  if ( !a1 || !a5 )
    goto LABEL_1373;
  if ( a1 > 0x1003 )
  {
    if ( a1 == 4109 )
    {
      if ( ((a5 - 13) & 0xFFFFEFFF) != 0 )
        goto LABEL_331;
      if ( v14 == 2 )
        goto LABEL_757;
      if ( v14 != 0x10000000 )
        goto LABEL_331;
      v16 = ArrayContains((__int64)a2, v8, (__int64)Str2, a7);
    }
    else
    {
      if ( a1 != 8210 || ((a5 - 18) & 0xFFFFDFFF) != 0 )
        goto LABEL_331;
      switch ( v14 )
      {
        case 0x1000u:
          v16 = StringListContains(a2);
          break;
        case 2u:
          v347 = v13 == 0;
LABEL_756:
          if ( !v347 )
            goto LABEL_331;
          goto LABEL_757;
        case 0x2000u:
        case 0x3000u:
        case 0x4000u:
          v16 = StringListElementSubstringMatch((_DWORD)a2, a5, (_DWORD)Str2, v13, v14);
          break;
        default:
          goto LABEL_331;
      }
    }
LABEL_20:
    *a8 = v16;
    goto LABEL_1373;
  }
  if ( a1 == 4099 )
  {
LABEL_754:
    v347 = v14 == 2;
    goto LABEL_756;
  }
  if ( a1 <= 0xD )
  {
    if ( a1 == 13 )
    {
      if ( a5 == 13 && v14 == 2 )
      {
        if ( *(_DWORD *)a2 == *(_DWORD *)Str2
          && *((_DWORD *)a2 + 1) == *((_DWORD *)Str2 + 1)
          && *((_DWORD *)a2 + 2) == *((_DWORD *)Str2 + 2) )
        {
          v19 = *((_DWORD *)a2 + 3) == *((_DWORD *)Str2 + 3);
          goto LABEL_36;
        }
LABEL_12:
        v15 = 0;
LABEL_13:
        *a8 = v15;
        goto LABEL_1373;
      }
LABEL_331:
      v11 = -1073741637;
      goto LABEL_1373;
    }
    if ( a1 > 6 )
    {
      if ( a1 == 7 )
      {
        if ( v14 - 7 > 1 )
        {
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 != 2 )
              {
                if ( a5 != 3 )
                {
                  if ( a5 != 4 )
                  {
                    if ( a5 != 5 )
                    {
                      v20 = a5 - 6;
                      if ( a5 == 6 )
                        goto LABEL_49;
                      goto LABEL_48;
                    }
                    v545 = v14 - 2;
                    if ( v545 )
                    {
                      v546 = v545 - 1;
                      if ( v546 )
                      {
                        v547 = v546 - 1;
                        if ( v547 )
                        {
                          v548 = v547 - 1;
                          if ( v548 )
                          {
                            if ( v548 != 1 )
                              goto LABEL_331;
                            v549 = *Str2;
                            goto LABEL_148;
                          }
                          v86 = *Str2;
                          goto LABEL_152;
                        }
                        v88 = *Str2;
                        goto LABEL_156;
                      }
                      v550 = *Str2;
                      goto LABEL_1253;
                    }
                    goto LABEL_666;
                  }
                  v551 = v14 - 2;
                  if ( v551 )
                  {
                    v552 = v551 - 1;
                    if ( v552 )
                    {
                      v553 = v552 - 1;
                      if ( v553 )
                      {
                        v554 = v553 - 1;
                        if ( v554 )
                        {
                          if ( v554 != 1 )
                            goto LABEL_331;
                          v549 = (__int16)*Str2;
                          goto LABEL_148;
                        }
                        v86 = (__int16)*Str2;
LABEL_152:
                        v85 = *(_DWORD *)a2 < v86;
                        goto LABEL_153;
                      }
                      v88 = (__int16)*Str2;
LABEL_156:
                      v87 = *(_DWORD *)a2 < v88;
                      goto LABEL_157;
                    }
                    v550 = (__int16)*Str2;
LABEL_1253:
                    v90 = *(_DWORD *)a2 < v550;
                    v91 = *(_DWORD *)a2 == v550;
                    goto LABEL_161;
                  }
LABEL_676:
                  v317 = (__int16)*Str2;
                  goto LABEL_701;
                }
                v555 = v14 - 2;
                if ( v555 )
                {
                  v556 = v555 - 1;
                  if ( !v556 )
                  {
                    v550 = *(unsigned __int8 *)Str2;
                    goto LABEL_1253;
                  }
                  v557 = v556 - 1;
                  if ( !v557 )
                  {
                    v88 = *(unsigned __int8 *)Str2;
                    goto LABEL_156;
                  }
                  v558 = v557 - 1;
                  if ( !v558 )
                  {
                    v86 = *(unsigned __int8 *)Str2;
                    goto LABEL_152;
                  }
                  if ( v558 != 1 )
                    goto LABEL_331;
                  v549 = *(unsigned __int8 *)Str2;
LABEL_148:
                  v83 = *(_DWORD *)a2 < v549;
                  v84 = *(_DWORD *)a2 == v549;
LABEL_149:
                  v16 = v83 || v84;
                  goto LABEL_20;
                }
LABEL_686:
                v317 = *(unsigned __int8 *)Str2;
                goto LABEL_701;
              }
              v559 = v14 - 2;
              if ( v559 )
              {
                v560 = v559 - 1;
                if ( !v560 )
                {
                  v550 = *(char *)Str2;
                  goto LABEL_1253;
                }
                v561 = v560 - 1;
                if ( !v561 )
                {
                  v88 = *(char *)Str2;
                  goto LABEL_156;
                }
                v562 = v561 - 1;
                if ( !v562 )
                {
                  v86 = *(char *)Str2;
                  goto LABEL_152;
                }
                if ( v562 != 1 )
                  goto LABEL_331;
                v549 = *(char *)Str2;
                goto LABEL_148;
              }
LABEL_700:
              v317 = *(char *)Str2;
              goto LABEL_701;
            }
LABEL_1265:
            v567 = v14 - 2;
            if ( v567 )
            {
              v568 = v567 - 1;
              if ( v568 )
              {
                v569 = v568 - 1;
                if ( v569 )
                {
                  v570 = v569 - 1;
                  if ( v570 )
                  {
                    if ( v570 != 1 )
                      goto LABEL_331;
                    v122 = *(unsigned int *)a2;
LABEL_224:
                    v50 = __OFSUB__(v122, *(_QWORD *)Str2);
                    v48 = v122 == *(_QWORD *)Str2;
                    v49 = v122 - *(_QWORD *)Str2 < 0;
                    goto LABEL_225;
                  }
                  v123 = *(unsigned int *)a2;
                  goto LABEL_228;
                }
                v124 = *(unsigned int *)a2;
                goto LABEL_233;
              }
              v125 = *(unsigned int *)a2;
              goto LABEL_238;
            }
            goto LABEL_630;
          }
          if ( a5 != 9 )
          {
            if ( a5 != 10 )
            {
              if ( a5 != 11 )
              {
                if ( a5 == 14 )
                  goto LABEL_1265;
                if ( a5 != 15 )
                  goto LABEL_331;
              }
              v563 = v14 - 2;
              if ( v563 )
              {
                v564 = v563 - 1;
                if ( v564 )
                {
                  v565 = v564 - 1;
                  if ( v565 )
                  {
                    v566 = v565 - 1;
                    if ( v566 )
                    {
                      if ( v566 != 1 )
                        goto LABEL_331;
                      v127 = (double)*(int *)a2;
                      goto LABEL_243;
                    }
                    v131 = (double)*(int *)a2;
LABEL_250:
                    v128 = v131 < *(double *)Str2;
                    goto LABEL_288;
                  }
                  v134 = (double)*(int *)a2;
                  goto LABEL_257;
                }
                v139 = (double)*(int *)a2;
LABEL_264:
                v135 = v139 < *(double *)Str2;
                v136 = v139 == *(double *)Str2;
                goto LABEL_300;
              }
              v142 = (double)*(int *)a2;
              goto LABEL_271;
            }
            v571 = v14 - 2;
            if ( v571 )
            {
              v572 = v571 - 1;
              if ( v572 )
              {
                v573 = v572 - 1;
                if ( v573 )
                {
                  v574 = v573 - 1;
                  if ( v574 )
                  {
                    if ( v574 != 1 )
                      goto LABEL_331;
                    v151 = (float)*(int *)a2;
                    goto LABEL_283;
                  }
                  v154 = (float)*(int *)a2;
LABEL_287:
                  v128 = v154 < *(float *)Str2;
                  goto LABEL_288;
                }
                v157 = (float)*(int *)a2;
                goto LABEL_295;
              }
              v160 = (float)*(int *)a2;
              goto LABEL_299;
            }
            v163 = (float)*(int *)a2;
            goto LABEL_307;
          }
          v575 = v14 - 2;
          if ( !v575 )
          {
LABEL_630:
            v172 = *(unsigned int *)a2;
            goto LABEL_631;
          }
          v576 = v575 - 1;
          if ( v576 )
          {
            v577 = v576 - 1;
            if ( v577 )
            {
              v578 = v577 - 1;
              if ( v578 )
              {
                if ( v578 != 1 )
                  goto LABEL_331;
                v168 = *(unsigned int *)a2;
LABEL_736:
                v34 = v168 < *(_QWORD *)Str2;
                v35 = v168 == *(_QWORD *)Str2;
                goto LABEL_124;
              }
              v169 = *(unsigned int *)a2;
              goto LABEL_739;
            }
            v170 = *(unsigned int *)a2;
            goto LABEL_742;
          }
          v171 = *(unsigned int *)a2;
          goto LABEL_745;
        }
        if ( a5 != 7 )
          goto LABEL_331;
        v579 = *(float *)a2;
        v580 = *(_DWORD *)Str2;
        if ( v14 == 7 )
          v27 = v580 & LODWORD(v579);
        else
          v27 = v580 | LODWORD(v579);
LABEL_63:
        *a8 = v27;
        goto LABEL_1373;
      }
      if ( a1 != 8 )
      {
        if ( a1 != 9 )
        {
          if ( a1 != 10 )
          {
            if ( a1 != 11 )
            {
              v346 = a5 == 12;
              goto LABEL_753;
            }
            goto LABEL_1307;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              switch ( a5 )
              {
                case 2u:
                  v442 = v14 - 2;
                  if ( !v442 )
                  {
                    v425 = *(char *)Str2;
                    goto LABEL_909;
                  }
                  v443 = v442 - 1;
                  if ( !v443 )
                  {
                    v433 = *(char *)Str2;
                    goto LABEL_955;
                  }
                  v444 = v443 - 1;
                  if ( !v444 )
                  {
                    v432 = *(char *)Str2;
                    goto LABEL_952;
                  }
                  v445 = v444 - 1;
                  if ( !v445 )
                  {
                    v431 = *(char *)Str2;
                    goto LABEL_949;
                  }
                  if ( v445 != 1 )
                    goto LABEL_331;
                  v430 = *(char *)Str2;
                  break;
                case 3u:
                  v438 = v14 - 2;
                  if ( !v438 )
                  {
                    v425 = *(unsigned __int8 *)Str2;
                    goto LABEL_909;
                  }
                  v439 = v438 - 1;
                  if ( !v439 )
                  {
                    v433 = *(unsigned __int8 *)Str2;
                    goto LABEL_955;
                  }
                  v440 = v439 - 1;
                  if ( !v440 )
                  {
                    v432 = *(unsigned __int8 *)Str2;
                    goto LABEL_952;
                  }
                  v441 = v440 - 1;
                  if ( !v441 )
                  {
                    v431 = *(unsigned __int8 *)Str2;
                    goto LABEL_949;
                  }
                  if ( v441 != 1 )
                    goto LABEL_331;
                  v430 = *(unsigned __int8 *)Str2;
                  break;
                case 4u:
                  v434 = v14 - 2;
                  if ( !v434 )
                  {
                    v425 = (__int16)*Str2;
                    goto LABEL_909;
                  }
                  v435 = v434 - 1;
                  if ( !v435 )
                  {
                    v433 = (__int16)*Str2;
                    goto LABEL_955;
                  }
                  v436 = v435 - 1;
                  if ( !v436 )
                  {
                    v432 = (__int16)*Str2;
                    goto LABEL_952;
                  }
                  v437 = v436 - 1;
                  if ( !v437 )
                  {
                    v431 = (__int16)*Str2;
                    goto LABEL_949;
                  }
                  if ( v437 != 1 )
                    goto LABEL_331;
                  v430 = (__int16)*Str2;
                  break;
                case 5u:
                  v426 = v14 - 2;
                  if ( v426 )
                  {
                    v427 = v426 - 1;
                    if ( v427 )
                    {
                      v428 = v427 - 1;
                      if ( v428 )
                      {
                        v429 = v428 - 1;
                        if ( v429 )
                        {
                          if ( v429 != 1 )
                            goto LABEL_331;
                          v430 = *Str2;
                          break;
                        }
                        v431 = *Str2;
LABEL_949:
                        v421 = _mm_cvtsi32_si128(v431);
                        goto LABEL_950;
                      }
                      v432 = *Str2;
LABEL_952:
                      v422 = _mm_cvtsi32_si128(v432);
                      goto LABEL_953;
                    }
                    v433 = *Str2;
LABEL_955:
                    v423 = _mm_cvtsi32_si128(v433);
                    goto LABEL_956;
                  }
                  v425 = *Str2;
LABEL_909:
                  v424 = _mm_cvtsi32_si128(v425);
                  goto LABEL_910;
                case 6u:
                  v416 = v14 - 2;
                  if ( v416 )
                  {
                    v417 = v416 - 1;
                    if ( v417 )
                    {
                      v418 = v417 - 1;
                      if ( v418 )
                      {
                        v419 = v418 - 1;
                        if ( v419 )
                        {
                          if ( v419 != 1 )
                            goto LABEL_331;
                          v420 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                          goto LABEL_947;
                        }
                        v421 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_950:
                        LODWORD(v411) = _mm_cvtepi32_ps(v421).m128_u32[0];
                        goto LABEL_977;
                      }
                      v422 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_953:
                      LODWORD(v413) = _mm_cvtepi32_ps(v422).m128_u32[0];
                      goto LABEL_979;
                    }
                    v423 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_956:
                    LODWORD(v415) = _mm_cvtepi32_ps(v423).m128_u32[0];
                    goto LABEL_981;
                  }
                  v424 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
LABEL_910:
                  LODWORD(v144) = _mm_cvtepi32_ps(v424).m128_u32[0];
                  goto LABEL_274;
                case 7u:
                  v404 = v14 - 2;
                  if ( v404 )
                  {
                    v405 = v404 - 1;
                    if ( v405 )
                    {
                      v406 = v405 - 1;
                      if ( v406 )
                      {
                        v407 = v406 - 1;
                        if ( v407 )
                        {
                          if ( v407 != 1 )
                            goto LABEL_331;
                          LODWORD(v408) = *(_DWORD *)Str2;
LABEL_891:
                          v409 = (float)(int)v408;
LABEL_975:
                          v85 = v409 < *(float *)a2;
                          goto LABEL_153;
                        }
                        LODWORD(v410) = *(_DWORD *)Str2;
LABEL_893:
                        v411 = (float)(int)v410;
                        goto LABEL_977;
                      }
                      LODWORD(v412) = *(_DWORD *)Str2;
LABEL_895:
                      v413 = (float)(int)v412;
                      goto LABEL_979;
                    }
                    LODWORD(v414) = *(_DWORD *)Str2;
LABEL_897:
                    v415 = (float)(int)v414;
                    goto LABEL_981;
                  }
                  LODWORD(v143) = *(_DWORD *)Str2;
LABEL_273:
                  v144 = (float)(int)v143;
                  goto LABEL_274;
                default:
                  goto LABEL_331;
              }
              v420 = _mm_cvtsi32_si128(v430);
LABEL_947:
              LODWORD(v409) = _mm_cvtepi32_ps(v420).m128_u32[0];
              goto LABEL_975;
            }
LABEL_969:
            v450 = v14 - 2;
            if ( v450 )
            {
              v451 = v450 - 1;
              if ( v451 )
              {
                v452 = v451 - 1;
                if ( v452 )
                {
                  v453 = v452 - 1;
                  if ( v453 )
                  {
                    if ( v453 != 1 )
                      goto LABEL_331;
                    v409 = (float)(int)*(_QWORD *)Str2;
                    goto LABEL_975;
                  }
                  v411 = (float)(int)*(_QWORD *)Str2;
LABEL_977:
                  v85 = *(float *)a2 < v411;
                  goto LABEL_153;
                }
                v413 = (float)(int)*(_QWORD *)Str2;
LABEL_979:
                v90 = v413 < *(float *)a2;
                v91 = v413 == *(float *)a2;
                goto LABEL_161;
              }
              v415 = (float)(int)*(_QWORD *)Str2;
LABEL_981:
              v90 = *(float *)a2 < v415;
              v91 = *(float *)a2 == v415;
              goto LABEL_161;
            }
            v144 = (float)(int)*(_QWORD *)Str2;
LABEL_274:
            v19 = *(float *)a2 == v144;
            goto LABEL_36;
          }
          if ( a5 == 9 )
          {
            v458 = v14 - 2;
            if ( v458 )
            {
              v459 = v458 - 1;
              if ( v459 )
              {
                v460 = v459 - 1;
                if ( v460 )
                {
                  v461 = v460 - 1;
                  if ( v461 )
                  {
                    if ( v461 != 1 )
                      goto LABEL_331;
                    v408 = *(_QWORD *)Str2;
                    if ( *(__int64 *)Str2 < 0 )
                    {
                      v409 = (float)(int)(v408 & 1 | (v408 >> 1)) + (float)(int)(v408 & 1 | (v408 >> 1));
                      goto LABEL_975;
                    }
                    goto LABEL_891;
                  }
                  v410 = *(_QWORD *)Str2;
                  if ( *(__int64 *)Str2 < 0 )
                  {
                    v411 = (float)(int)(v410 & 1 | (v410 >> 1)) + (float)(int)(v410 & 1 | (v410 >> 1));
                    goto LABEL_977;
                  }
                  goto LABEL_893;
                }
                v412 = *(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                {
                  v413 = (float)(int)(v412 & 1 | (v412 >> 1)) + (float)(int)(v412 & 1 | (v412 >> 1));
                  goto LABEL_979;
                }
                goto LABEL_895;
              }
              v414 = *(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
              {
                v415 = (float)(int)(v414 & 1 | (v414 >> 1)) + (float)(int)(v414 & 1 | (v414 >> 1));
                goto LABEL_981;
              }
              goto LABEL_897;
            }
            v143 = *(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
            {
              v144 = (float)(int)(v143 & 1 | (v143 >> 1)) + (float)(int)(v143 & 1 | (v143 >> 1));
              goto LABEL_274;
            }
            goto LABEL_273;
          }
          if ( a5 != 10 )
          {
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
                goto LABEL_969;
              if ( a5 != 15 )
                goto LABEL_331;
            }
            v446 = v14 - 2;
            if ( !v446 )
            {
              v142 = *(float *)a2;
              goto LABEL_271;
            }
            v447 = v446 - 1;
            if ( !v447 )
            {
              v139 = *(float *)a2;
              goto LABEL_264;
            }
            v448 = v447 - 1;
            if ( v448 )
            {
              v449 = v448 - 1;
              if ( v449 )
              {
                if ( v449 != 1 )
                  goto LABEL_331;
                v127 = *(float *)a2;
                goto LABEL_243;
              }
              v131 = *(float *)a2;
              goto LABEL_250;
            }
            v134 = *(float *)a2;
LABEL_257:
            v135 = *(double *)Str2 < v134;
            v136 = *(double *)Str2 == v134;
            goto LABEL_300;
          }
          v454 = v14 - 2;
          if ( v454 )
          {
            v455 = v454 - 1;
            if ( v455 )
            {
              v456 = v455 - 1;
              if ( !v456 )
              {
                v135 = *(float *)Str2 < *(float *)a2;
                v136 = *(float *)Str2 == *(float *)a2;
                goto LABEL_300;
              }
              v457 = v456 - 1;
              if ( v457 )
              {
                if ( v457 != 1 )
                  goto LABEL_331;
                v128 = *(float *)Str2 < *(float *)a2;
                goto LABEL_288;
              }
              v154 = *(float *)a2;
              goto LABEL_287;
            }
            v160 = *(float *)a2;
            goto LABEL_299;
          }
          v163 = *(float *)a2;
LABEL_307:
          v19 = v163 == *(float *)Str2;
          goto LABEL_36;
        }
        if ( a5 > 8 )
        {
          if ( a5 == 9 )
            goto LABEL_1095;
          if ( a5 == 10 )
          {
            v503 = v14 - 2;
            if ( v503 )
            {
              v504 = v503 - 1;
              if ( v504 )
              {
                v505 = v504 - 1;
                if ( v505 )
                {
                  v506 = v505 - 1;
                  if ( v506 )
                  {
                    if ( v506 != 1 )
                      goto LABEL_331;
                    v507 = *(_QWORD *)a2;
                    if ( *(__int64 *)a2 < 0 )
                      v151 = (float)(int)(v507 & 1 | (v507 >> 1)) + (float)(int)(v507 & 1 | (v507 >> 1));
                    else
                      v151 = (float)(int)v507;
                    goto LABEL_283;
                  }
                  v508 = *(_QWORD *)a2;
                  if ( *(__int64 *)a2 < 0 )
                    v154 = (float)(int)(v508 & 1 | (v508 >> 1)) + (float)(int)(v508 & 1 | (v508 >> 1));
                  else
                    v154 = (float)(int)v508;
                  goto LABEL_287;
                }
                v509 = *(_QWORD *)a2;
                if ( *(__int64 *)a2 < 0 )
                  v157 = (float)(int)(v509 & 1 | (v509 >> 1)) + (float)(int)(v509 & 1 | (v509 >> 1));
                else
                  v157 = (float)(int)v509;
LABEL_295:
                v135 = *(float *)Str2 < v157;
                v136 = *(float *)Str2 == v157;
                goto LABEL_300;
              }
              v510 = *(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v160 = (float)(int)(v510 & 1 | (v510 >> 1)) + (float)(int)(v510 & 1 | (v510 >> 1));
              else
                v160 = (float)(int)v510;
LABEL_299:
              v135 = v160 < *(float *)Str2;
              v136 = v160 == *(float *)Str2;
              goto LABEL_300;
            }
            v511 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v163 = (float)(int)(v511 & 1 | (v511 >> 1)) + (float)(int)(v511 & 1 | (v511 >> 1));
            else
              v163 = (float)(int)v511;
            goto LABEL_307;
          }
          if ( a5 != 11 )
          {
            if ( a5 == 14 )
              goto LABEL_1095;
            if ( a5 != 15 )
              goto LABEL_331;
          }
          v490 = v14 - 2;
          if ( !v490 )
          {
            v502 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v142 = (double)(int)(v502 & 1 | (v502 >> 1)) + (double)(int)(v502 & 1 | (v502 >> 1));
            else
              v142 = (double)(int)v502;
            goto LABEL_271;
          }
          v491 = v490 - 1;
          if ( !v491 )
          {
            v501 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v139 = (double)(int)(v501 & 1 | (v501 >> 1)) + (double)(int)(v501 & 1 | (v501 >> 1));
            else
              v139 = (double)(int)v501;
            goto LABEL_264;
          }
          v492 = v491 - 1;
          if ( v492 )
          {
            v493 = v492 - 1;
            if ( v493 )
            {
              if ( v493 != 1 )
                goto LABEL_331;
              v494 = *(_QWORD *)a2;
              if ( *(__int64 *)a2 < 0 )
                v127 = (double)(int)(v494 & 1 | (v494 >> 1)) + (double)(int)(v494 & 1 | (v494 >> 1));
              else
                v127 = (double)(int)v494;
              goto LABEL_243;
            }
            v499 = *(_QWORD *)a2;
            if ( *(__int64 *)a2 < 0 )
              v131 = (double)(int)(v499 & 1 | (v499 >> 1)) + (double)(int)(v499 & 1 | (v499 >> 1));
            else
              v131 = (double)(int)v499;
            goto LABEL_250;
          }
          v500 = *(_QWORD *)a2;
          if ( *(__int64 *)a2 < 0 )
            v134 = (double)(int)(v500 & 1 | (v500 >> 1)) + (double)(int)(v500 & 1 | (v500 >> 1));
          else
            v134 = (double)(int)v500;
          goto LABEL_257;
        }
        if ( a5 != 8 )
        {
          if ( a5 != 2 )
          {
            if ( a5 != 3 )
            {
              if ( a5 != 4 )
              {
                if ( a5 != 5 )
                {
                  if ( a5 != 6 )
                  {
                    if ( a5 != 7 )
                      goto LABEL_331;
                    v462 = v14 - 2;
                    if ( v462 )
                    {
                      v463 = v462 - 1;
                      if ( v463 )
                      {
                        v464 = v463 - 1;
                        if ( v464 )
                        {
                          v465 = v464 - 1;
                          if ( v465 )
                          {
                            if ( v465 != 1 )
                              goto LABEL_331;
                            v466 = *(unsigned int *)Str2;
                            goto LABEL_1076;
                          }
                          v467 = *(unsigned int *)Str2;
LABEL_1078:
                          v85 = *(_QWORD *)a2 < v467;
                          goto LABEL_153;
                        }
                        v468 = *(unsigned int *)Str2;
LABEL_1080:
                        v87 = *(_QWORD *)a2 < v468;
                        goto LABEL_157;
                      }
                      v469 = *(unsigned int *)Str2;
LABEL_1082:
                      v90 = *(_QWORD *)a2 < v469;
                      v91 = *(_QWORD *)a2 == v469;
                      goto LABEL_161;
                    }
                    goto LABEL_1029;
                  }
                  v470 = v14 - 2;
                  if ( v470 )
                  {
                    v471 = v470 - 1;
                    if ( !v471 )
                    {
                      v469 = *(int *)Str2;
                      goto LABEL_1082;
                    }
                    v472 = v471 - 1;
                    if ( !v472 )
                    {
                      v468 = *(int *)Str2;
                      goto LABEL_1080;
                    }
                    v473 = v472 - 1;
                    if ( !v473 )
                    {
                      v467 = *(int *)Str2;
                      goto LABEL_1078;
                    }
                    if ( v473 != 1 )
                      goto LABEL_331;
                    v466 = *(int *)Str2;
LABEL_1076:
                    v83 = *(_QWORD *)a2 < v466;
                    v84 = *(_QWORD *)a2 == v466;
                    goto LABEL_149;
                  }
LABEL_1039:
                  v112 = *(int *)Str2;
                  goto LABEL_205;
                }
                v474 = v14 - 2;
                if ( v474 )
                {
                  v475 = v474 - 1;
                  if ( !v475 )
                  {
                    v469 = *Str2;
                    goto LABEL_1082;
                  }
                  v476 = v475 - 1;
                  if ( !v476 )
                  {
                    v468 = *Str2;
                    goto LABEL_1080;
                  }
                  v477 = v476 - 1;
                  if ( !v477 )
                  {
                    v467 = *Str2;
                    goto LABEL_1078;
                  }
                  if ( v477 != 1 )
                    goto LABEL_331;
                  v466 = *Str2;
                  goto LABEL_1076;
                }
LABEL_1049:
                v112 = *Str2;
                goto LABEL_205;
              }
              v478 = v14 - 2;
              if ( v478 )
              {
                v479 = v478 - 1;
                if ( !v479 )
                {
                  v469 = (__int16)*Str2;
                  goto LABEL_1082;
                }
                v480 = v479 - 1;
                if ( !v480 )
                {
                  v468 = (__int16)*Str2;
                  goto LABEL_1080;
                }
                v481 = v480 - 1;
                if ( !v481 )
                {
                  v467 = (__int16)*Str2;
                  goto LABEL_1078;
                }
                if ( v481 != 1 )
                  goto LABEL_331;
                v466 = (__int16)*Str2;
                goto LABEL_1076;
              }
LABEL_1059:
              v112 = (__int16)*Str2;
              goto LABEL_205;
            }
            v482 = v14 - 2;
            if ( v482 )
            {
              v483 = v482 - 1;
              if ( !v483 )
              {
                v469 = *(unsigned __int8 *)Str2;
                goto LABEL_1082;
              }
              v484 = v483 - 1;
              if ( !v484 )
              {
                v468 = *(unsigned __int8 *)Str2;
                goto LABEL_1080;
              }
              v485 = v484 - 1;
              if ( !v485 )
              {
                v467 = *(unsigned __int8 *)Str2;
                goto LABEL_1078;
              }
              if ( v485 != 1 )
                goto LABEL_331;
              v466 = *(unsigned __int8 *)Str2;
              goto LABEL_1076;
            }
LABEL_1069:
            v112 = *(unsigned __int8 *)Str2;
            goto LABEL_205;
          }
          v486 = v14 - 2;
          if ( v486 )
          {
            v487 = v486 - 1;
            if ( !v487 )
            {
              v469 = *(char *)Str2;
              goto LABEL_1082;
            }
            v488 = v487 - 1;
            if ( !v488 )
            {
              v468 = *(char *)Str2;
              goto LABEL_1080;
            }
            v489 = v488 - 1;
            if ( !v489 )
            {
              v467 = *(char *)Str2;
              goto LABEL_1078;
            }
            if ( v489 != 1 )
              goto LABEL_331;
            v466 = *(char *)Str2;
            goto LABEL_1076;
          }
LABEL_204:
          v112 = *(char *)Str2;
LABEL_205:
          v94 = *(_QWORD *)a2 == v112;
          goto LABEL_206;
        }
LABEL_1095:
        v495 = v14 - 2;
        if ( v495 )
        {
          v496 = v495 - 1;
          if ( !v496 )
          {
            v40 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            v41 = *(_QWORD *)a2 == *(_QWORD *)Str2;
            goto LABEL_131;
          }
          v497 = v496 - 1;
          if ( !v497 )
          {
            v24 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            goto LABEL_53;
          }
          v498 = v497 - 1;
          if ( !v498 )
          {
            v37 = *(_QWORD *)a2 < *(_QWORD *)Str2;
            goto LABEL_127;
          }
          if ( v498 != 1 )
            goto LABEL_331;
          v34 = *(_QWORD *)a2 < *(_QWORD *)Str2;
          v35 = *(_QWORD *)a2 == *(_QWORD *)Str2;
LABEL_124:
          v18 = v34 || v35;
          goto LABEL_31;
        }
LABEL_1218:
        v17 = *(_QWORD *)a2 == *(_QWORD *)Str2;
        goto LABEL_30;
      }
      goto LABEL_1330;
    }
    if ( a1 != 6 )
    {
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          if ( a1 != 3 )
          {
            if ( a1 != 4 )
            {
              if ( a5 <= 8 )
              {
                if ( a5 != 8 )
                {
                  if ( a5 != 2 )
                  {
                    if ( a5 != 3 )
                    {
                      if ( a5 != 4 )
                      {
                        if ( a5 == 5 )
                        {
                          v28 = v14 - 2;
                          if ( v28 )
                          {
                            v61 = v28 - 1;
                            if ( v61 )
                            {
                              v62 = v61 - 1;
                              if ( !v62 )
                              {
                                v24 = *a2 < *Str2;
                                goto LABEL_53;
                              }
                              v63 = v62 - 1;
                              if ( v63 )
                              {
                                if ( v63 != 1 )
                                  goto LABEL_331;
                                v34 = *a2 < *Str2;
                                v35 = *a2 == *Str2;
                                goto LABEL_124;
                              }
                              v37 = *a2 < *Str2;
                              goto LABEL_127;
                            }
                            v40 = *a2 < *Str2;
                            v41 = *a2 == *Str2;
                            goto LABEL_131;
                          }
LABEL_76:
                          v17 = *a2 == *Str2;
                          goto LABEL_30;
                        }
                        if ( a5 != 6 )
                        {
                          if ( a5 != 7 )
                            goto LABEL_331;
                          v29 = v14 - 2;
                          if ( v29 )
                          {
                            v30 = v29 - 1;
                            if ( v30 )
                            {
                              v31 = v30 - 1;
                              if ( v31 )
                              {
                                v32 = v31 - 1;
                                if ( v32 )
                                {
                                  if ( v32 != 1 )
                                    goto LABEL_331;
                                  v33 = *a2;
                                  goto LABEL_90;
                                }
                                v36 = *a2;
LABEL_93:
                                v37 = v36 < *(_DWORD *)Str2;
                                goto LABEL_127;
                              }
                              v38 = *a2;
LABEL_96:
                              v24 = v38 < *(_DWORD *)Str2;
                              goto LABEL_53;
                            }
                            v39 = *a2;
LABEL_99:
                            v40 = v39 < *(_DWORD *)Str2;
                            v41 = v39 == *(_DWORD *)Str2;
                            goto LABEL_131;
                          }
                          goto LABEL_100;
                        }
                        v43 = v14 - 2;
                        if ( !v43 )
                        {
LABEL_100:
                          v42 = *a2;
LABEL_102:
                          v17 = v42 == *(_DWORD *)Str2;
                          goto LABEL_30;
                        }
                        v44 = v43 - 1;
                        if ( v44 )
                        {
                          v45 = v44 - 1;
                          if ( v45 )
                          {
                            v46 = v45 - 1;
                            if ( v46 )
                            {
                              if ( v46 != 1 )
                                goto LABEL_331;
                              v47 = *a2;
                              goto LABEL_109;
                            }
                            v51 = *a2;
LABEL_112:
                            v53 = __OFSUB__(v51, *(_DWORD *)Str2);
                            v52 = v51 - *(_DWORD *)Str2 < 0;
                            goto LABEL_230;
                          }
                          v54 = *a2;
LABEL_115:
                          v56 = __OFSUB__(v54, *(_DWORD *)Str2);
                          v55 = v54 - *(_DWORD *)Str2 < 0;
LABEL_235:
                          v18 = v55 ^ v56;
                          goto LABEL_31;
                        }
                        v57 = *a2;
LABEL_118:
                        v60 = __OFSUB__(v57, *(_DWORD *)Str2);
                        v58 = v57 == *(_DWORD *)Str2;
                        v59 = v57 - *(_DWORD *)Str2 < 0;
LABEL_240:
                        v18 = !(v59 ^ v60 | v58);
                        goto LABEL_31;
                      }
                      v64 = v14 - 2;
                      if ( v64 )
                      {
                        v65 = v64 - 1;
                        if ( v65 )
                        {
                          v66 = v65 - 1;
                          if ( v66 )
                          {
                            v67 = v66 - 1;
                            if ( v67 )
                            {
                              if ( v67 != 1 )
                                goto LABEL_331;
                              v68 = *a2;
                              v69 = (__int16)*Str2;
                              goto LABEL_172;
                            }
                            v70 = *a2;
                            v71 = (__int16)*Str2;
                            goto LABEL_179;
                          }
                          v72 = *a2;
                          v73 = (__int16)*Str2;
LABEL_187:
                          v106 = __OFSUB__(v72, v73);
                          v105 = v72 - v73 < 0;
LABEL_190:
                          v16 = v105 ^ v106;
                          goto LABEL_20;
                        }
                        v74 = *a2;
                        v75 = (__int16)*Str2;
LABEL_195:
                        v110 = __OFSUB__(v74, v75);
                        v108 = v74 == v75;
                        v109 = v74 - v75 < 0;
LABEL_198:
                        v16 = !(v109 ^ v110 | v108);
                        goto LABEL_20;
                      }
                      v76 = *a2;
                      v77 = (__int16)*Str2;
                      goto LABEL_203;
                    }
                    v78 = v14 - 2;
                    if ( v78 )
                    {
                      v79 = v78 - 1;
                      if ( v79 )
                      {
                        v80 = v79 - 1;
                        if ( v80 )
                        {
                          v81 = v80 - 1;
                          if ( v81 )
                          {
                            if ( v81 != 1 )
                              goto LABEL_331;
                            v82 = *(unsigned __int8 *)Str2;
                            v83 = *a2 < v82;
                            v84 = *a2 == v82;
                            goto LABEL_149;
                          }
                          v85 = *a2 < *(unsigned __int8 *)Str2;
LABEL_153:
                          v16 = !v85;
                          goto LABEL_20;
                        }
                        v87 = *a2 < *(unsigned __int8 *)Str2;
LABEL_157:
                        v16 = v87;
                        goto LABEL_20;
                      }
                      v89 = *(unsigned __int8 *)Str2;
                      v90 = *a2 < v89;
                      v91 = *a2 == v89;
LABEL_161:
                      v16 = !v90 && !v91;
                      goto LABEL_20;
                    }
                    goto LABEL_162;
                  }
                  v95 = v14 - 2;
                  if ( v95 )
                  {
                    v96 = v95 - 1;
                    if ( v96 )
                    {
                      v97 = v96 - 1;
                      if ( v97 )
                      {
                        v98 = v97 - 1;
                        if ( v98 )
                        {
                          if ( v98 != 1 )
                            goto LABEL_331;
                          v68 = *a2;
                          goto LABEL_171;
                        }
                        v70 = *a2;
LABEL_177:
                        v71 = *(char *)Str2;
                        goto LABEL_179;
                      }
                      v72 = *a2;
                      goto LABEL_185;
                    }
                    v74 = *a2;
                    goto LABEL_193;
                  }
                  v76 = *a2;
LABEL_201:
                  v77 = *(char *)Str2;
                  goto LABEL_203;
                }
LABEL_218:
                v118 = v14 - 2;
                if ( v118 )
                {
                  v119 = v118 - 1;
                  if ( v119 )
                  {
                    v120 = v119 - 1;
                    if ( v120 )
                    {
                      v121 = v120 - 1;
                      if ( v121 )
                      {
                        if ( v121 != 1 )
                          goto LABEL_331;
                        v122 = *a2;
                        goto LABEL_224;
                      }
                      v123 = *a2;
LABEL_228:
                      v53 = __OFSUB__(v123, *(_QWORD *)Str2);
                      v52 = v123 - *(_QWORD *)Str2 < 0;
                      goto LABEL_230;
                    }
                    v124 = *a2;
                    goto LABEL_233;
                  }
                  v125 = *a2;
                  goto LABEL_238;
                }
                goto LABEL_317;
              }
              if ( a5 == 9 )
              {
                v164 = v14 - 2;
                if ( v164 )
                {
                  v165 = v164 - 1;
                  if ( v165 )
                  {
                    v166 = v165 - 1;
                    if ( v166 )
                    {
                      v167 = v166 - 1;
                      if ( v167 )
                      {
                        if ( v167 != 1 )
                          goto LABEL_331;
                        v168 = *a2;
                        goto LABEL_736;
                      }
                      v169 = *a2;
                      goto LABEL_739;
                    }
                    v170 = *a2;
                    goto LABEL_742;
                  }
                  v171 = *a2;
                  goto LABEL_745;
                }
LABEL_317:
                v172 = *a2;
LABEL_631:
                v17 = v172 == *(_QWORD *)Str2;
                goto LABEL_30;
              }
              if ( a5 != 10 )
              {
                if ( a5 != 11 )
                {
                  if ( a5 == 14 )
                    goto LABEL_218;
                  if ( a5 != 15 )
                    goto LABEL_331;
                }
                v113 = v14 - 2;
                if ( v113 )
                {
                  v114 = v113 - 1;
                  if ( v114 )
                  {
                    v115 = v114 - 1;
                    if ( v115 )
                    {
                      v116 = v115 - 1;
                      if ( v116 )
                      {
                        if ( v116 != 1 )
                          goto LABEL_331;
                        v117 = *a2;
                        goto LABEL_241;
                      }
                      v129 = *a2;
                      goto LABEL_246;
                    }
                    v132 = *a2;
                    goto LABEL_253;
                  }
                  v137 = *a2;
                  goto LABEL_260;
                }
                v140 = *a2;
                goto LABEL_267;
              }
              v145 = v14 - 2;
              if ( v145 )
              {
                v146 = v145 - 1;
                if ( v146 )
                {
                  v147 = v146 - 1;
                  if ( v147 )
                  {
                    v148 = v147 - 1;
                    if ( v148 )
                    {
                      if ( v148 != 1 )
                        goto LABEL_331;
                      v149 = *a2;
                      goto LABEL_281;
                    }
                    v152 = *a2;
                    goto LABEL_285;
                  }
                  v155 = *a2;
                  goto LABEL_291;
                }
                v158 = *a2;
                goto LABEL_297;
              }
              v161 = *a2;
              goto LABEL_303;
            }
            if ( a5 <= 8 )
            {
              if ( a5 != 8 )
              {
                switch ( a5 )
                {
                  case 2u:
                    v197 = v14 - 2;
                    if ( !v197 )
                    {
                      v93 = *(char *)Str2;
                      goto LABEL_164;
                    }
                    v198 = v197 - 1;
                    if ( v198 )
                    {
                      v199 = v198 - 1;
                      if ( v199 )
                      {
                        v200 = v199 - 1;
                        if ( v200 )
                        {
                          if ( v200 != 1 )
                            goto LABEL_331;
                          v193 = *(char *)Str2;
LABEL_382:
                          v101 = __OFSUB__(*a2, v193);
                          v99 = *a2 == v193;
                          v100 = (__int16)(*a2 - v193) < 0;
                          goto LABEL_174;
                        }
                        v194 = *(char *)Str2;
LABEL_384:
                        v103 = __OFSUB__(*a2, v194);
                        v102 = (__int16)(*a2 - v194) < 0;
                        goto LABEL_182;
                      }
                      v195 = *(char *)Str2;
LABEL_386:
                      v106 = __OFSUB__(*a2, v195);
                      v105 = (__int16)(*a2 - v195) < 0;
                      goto LABEL_190;
                    }
                    v196 = *(char *)Str2;
                    break;
                  case 3u:
                    v189 = v14 - 2;
                    if ( !v189 )
                    {
LABEL_162:
                      v93 = *(unsigned __int8 *)Str2;
LABEL_164:
                      v94 = *a2 == v93;
LABEL_206:
                      v16 = v94;
                      goto LABEL_20;
                    }
                    v190 = v189 - 1;
                    if ( v190 )
                    {
                      v191 = v190 - 1;
                      if ( v191 )
                      {
                        v192 = v191 - 1;
                        if ( v192 )
                        {
                          if ( v192 != 1 )
                            goto LABEL_331;
                          v193 = *(unsigned __int8 *)Str2;
                          goto LABEL_382;
                        }
                        v194 = *(unsigned __int8 *)Str2;
                        goto LABEL_384;
                      }
                      v195 = *(unsigned __int8 *)Str2;
                      goto LABEL_386;
                    }
                    v196 = *(unsigned __int8 *)Str2;
                    break;
                  case 4u:
                    v185 = v14 - 2;
                    if ( v185 )
                    {
                      v186 = v185 - 1;
                      if ( !v186 )
                      {
                        v60 = __OFSUB__(*a2, *Str2);
                        v58 = *a2 == *Str2;
                        v59 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_240;
                      }
                      v187 = v186 - 1;
                      if ( !v187 )
                      {
                        v56 = __OFSUB__(*a2, *Str2);
                        v55 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_235;
                      }
                      v188 = v187 - 1;
                      if ( v188 )
                      {
                        if ( v188 != 1 )
                          goto LABEL_331;
                        v50 = __OFSUB__(*a2, *Str2);
                        v48 = *a2 == *Str2;
                        v49 = (__int16)(*a2 - *Str2) < 0;
                        goto LABEL_225;
                      }
                      v53 = __OFSUB__(*a2, *Str2);
                      v52 = (__int16)(*a2 - *Str2) < 0;
                      goto LABEL_230;
                    }
                    goto LABEL_76;
                  case 5u:
                    v181 = v14 - 2;
                    if ( v181 )
                    {
                      v182 = v181 - 1;
                      if ( v182 )
                      {
                        v183 = v182 - 1;
                        if ( v183 )
                        {
                          v184 = v183 - 1;
                          if ( v184 )
                          {
                            if ( v184 != 1 )
                              goto LABEL_331;
                            v68 = (__int16)*a2;
                            goto LABEL_345;
                          }
                          v70 = (__int16)*a2;
                          goto LABEL_348;
                        }
                        v72 = (__int16)*a2;
                        goto LABEL_351;
                      }
                      v74 = (__int16)*a2;
                      goto LABEL_354;
                    }
                    v76 = (__int16)*a2;
                    goto LABEL_357;
                  case 6u:
                    v177 = v14 - 2;
                    if ( !v177 )
                      goto LABEL_332;
                    v178 = v177 - 1;
                    if ( !v178 )
                    {
                      v57 = (__int16)*a2;
                      goto LABEL_118;
                    }
                    v179 = v178 - 1;
                    if ( !v179 )
                    {
                      v54 = (__int16)*a2;
                      goto LABEL_115;
                    }
                    v180 = v179 - 1;
                    if ( !v180 )
                    {
                      v51 = (__int16)*a2;
                      goto LABEL_112;
                    }
                    if ( v180 != 1 )
                      goto LABEL_331;
                    v47 = (__int16)*a2;
LABEL_109:
                    v50 = __OFSUB__(v47, *(_DWORD *)Str2);
                    v48 = v47 == *(_DWORD *)Str2;
                    v49 = v47 - *(_DWORD *)Str2 < 0;
LABEL_225:
                    v18 = v49 ^ v50 | v48;
                    goto LABEL_31;
                  case 7u:
                    v173 = v14 - 2;
                    if ( v173 )
                    {
                      v174 = v173 - 1;
                      if ( !v174 )
                      {
                        v39 = (__int16)*a2;
                        goto LABEL_99;
                      }
                      v175 = v174 - 1;
                      if ( !v175 )
                      {
                        v38 = (__int16)*a2;
                        goto LABEL_96;
                      }
                      v176 = v175 - 1;
                      if ( !v176 )
                      {
                        v36 = (__int16)*a2;
                        goto LABEL_93;
                      }
                      if ( v176 != 1 )
                        goto LABEL_331;
                      v33 = (__int16)*a2;
LABEL_90:
                      v34 = v33 < *(_DWORD *)Str2;
                      v35 = v33 == *(_DWORD *)Str2;
                      goto LABEL_124;
                    }
LABEL_332:
                    v42 = (__int16)*a2;
                    goto LABEL_102;
                  default:
                    goto LABEL_331;
                }
                v110 = __OFSUB__(*a2, v196);
                v108 = *a2 == v196;
                v109 = (__int16)(*a2 - v196) < 0;
                goto LABEL_198;
              }
              goto LABEL_400;
            }
            if ( a5 == 9 )
            {
              v213 = v14 - 2;
              if ( v213 )
              {
                v214 = v213 - 1;
                if ( v214 )
                {
                  v215 = v214 - 1;
                  if ( v215 )
                  {
                    v216 = v215 - 1;
                    if ( v216 )
                    {
                      if ( v216 != 1 )
                        goto LABEL_331;
                      v168 = (__int16)*a2;
                      goto LABEL_736;
                    }
                    v169 = (__int16)*a2;
                    goto LABEL_739;
                  }
                  v170 = (__int16)*a2;
                  goto LABEL_742;
                }
                v171 = (__int16)*a2;
                goto LABEL_745;
              }
LABEL_431:
              v172 = (__int16)*a2;
              goto LABEL_631;
            }
            if ( a5 != 10 )
            {
              if ( a5 != 11 )
              {
                if ( a5 == 14 )
                {
LABEL_400:
                  v205 = v14 - 2;
                  if ( v205 )
                  {
                    v206 = v205 - 1;
                    if ( v206 )
                    {
                      v207 = v206 - 1;
                      if ( v207 )
                      {
                        v208 = v207 - 1;
                        if ( v208 )
                        {
                          if ( v208 != 1 )
                            goto LABEL_331;
                          v122 = (__int16)*a2;
                          goto LABEL_224;
                        }
                        v123 = (__int16)*a2;
                        goto LABEL_228;
                      }
                      v124 = (__int16)*a2;
LABEL_233:
                      v56 = __OFSUB__(v124, *(_QWORD *)Str2);
                      v55 = v124 - *(_QWORD *)Str2 < 0;
                      goto LABEL_235;
                    }
                    v125 = (__int16)*a2;
LABEL_238:
                    v60 = __OFSUB__(v125, *(_QWORD *)Str2);
                    v58 = v125 == *(_QWORD *)Str2;
                    v59 = v125 - *(_QWORD *)Str2 < 0;
                    goto LABEL_240;
                  }
                  goto LABEL_431;
                }
                if ( a5 != 15 )
                  goto LABEL_331;
              }
              v201 = v14 - 2;
              if ( v201 )
              {
                v202 = v201 - 1;
                if ( v202 )
                {
                  v203 = v202 - 1;
                  if ( v203 )
                  {
                    v204 = v203 - 1;
                    if ( v204 )
                    {
                      if ( v204 != 1 )
                        goto LABEL_331;
                      v117 = (__int16)*a2;
                      goto LABEL_241;
                    }
                    v129 = (__int16)*a2;
LABEL_246:
                    v130 = _mm_cvtsi32_si128(v129);
                    goto LABEL_248;
                  }
                  v132 = (__int16)*a2;
LABEL_253:
                  v133 = _mm_cvtsi32_si128(v132);
                  goto LABEL_255;
                }
                v137 = (__int16)*a2;
LABEL_260:
                v138 = _mm_cvtsi32_si128(v137);
                goto LABEL_262;
              }
              v140 = (__int16)*a2;
LABEL_267:
              v141 = _mm_cvtsi32_si128(v140);
              goto LABEL_269;
            }
            v209 = v14 - 2;
            if ( v209 )
            {
              v210 = v209 - 1;
              if ( v210 )
              {
                v211 = v210 - 1;
                if ( v211 )
                {
                  v212 = v211 - 1;
                  if ( v212 )
                  {
                    if ( v212 != 1 )
                      goto LABEL_331;
                    v149 = (__int16)*a2;
                    goto LABEL_281;
                  }
                  v152 = (__int16)*a2;
LABEL_285:
                  v153 = _mm_cvtsi32_si128(v152);
                  goto LABEL_286;
                }
                v155 = (__int16)*a2;
LABEL_291:
                v156 = _mm_cvtsi32_si128(v155);
                goto LABEL_293;
              }
              v158 = (__int16)*a2;
LABEL_297:
              v159 = _mm_cvtsi32_si128(v158);
              goto LABEL_298;
            }
            v161 = (__int16)*a2;
LABEL_303:
            v162 = _mm_cvtsi32_si128(v161);
            goto LABEL_305;
          }
          if ( a5 <= 8 )
          {
            if ( a5 != 8 )
            {
              if ( a5 == 2 )
              {
                v244 = v14 - 2;
                if ( v244 )
                {
                  v245 = v244 - 1;
                  if ( v245 )
                  {
                    v246 = v245 - 1;
                    if ( v246 )
                    {
                      v247 = v246 - 1;
                      if ( v247 )
                      {
                        if ( v247 != 1 )
                          goto LABEL_331;
                        v68 = *(unsigned __int8 *)a2;
LABEL_171:
                        v69 = *(char *)Str2;
LABEL_172:
                        v101 = __OFSUB__(v68, v69);
                        v99 = v68 == v69;
                        v100 = v68 - v69 < 0;
LABEL_174:
                        v16 = v100 ^ v101 | v99;
                        goto LABEL_20;
                      }
                      v70 = *(unsigned __int8 *)a2;
                      goto LABEL_177;
                    }
                    v72 = *(unsigned __int8 *)a2;
LABEL_185:
                    v73 = *(char *)Str2;
                    goto LABEL_187;
                  }
                  v74 = *(unsigned __int8 *)a2;
LABEL_193:
                  v75 = *(char *)Str2;
                  goto LABEL_195;
                }
                v76 = *(unsigned __int8 *)a2;
                goto LABEL_201;
              }
              if ( a5 != 3 )
              {
                if ( a5 == 4 )
                {
                  v232 = v14 - 2;
                  if ( !v232 )
                  {
                    v94 = (unsigned __int16)*(unsigned __int8 *)a2 == *Str2;
                    goto LABEL_206;
                  }
                  v233 = v232 - 1;
                  if ( !v233 )
                  {
                    v239 = *(unsigned __int8 *)a2;
                    v110 = __OFSUB__(v239, *Str2);
                    v108 = v239 == (__int16)*Str2;
                    v109 = (__int16)(v239 - *Str2) < 0;
                    goto LABEL_198;
                  }
                  v234 = v233 - 1;
                  if ( !v234 )
                  {
                    v238 = *(unsigned __int8 *)a2;
                    v106 = __OFSUB__(v238, *Str2);
                    v105 = (__int16)(v238 - *Str2) < 0;
                    goto LABEL_190;
                  }
                  v235 = v234 - 1;
                  if ( v235 )
                  {
                    if ( v235 != 1 )
                      goto LABEL_331;
                    v236 = *(unsigned __int8 *)a2;
                    v101 = __OFSUB__(v236, *Str2);
                    v99 = v236 == (__int16)*Str2;
                    v100 = (__int16)(v236 - *Str2) < 0;
                    goto LABEL_174;
                  }
                  v237 = *(unsigned __int8 *)a2;
                  v103 = __OFSUB__(v237, *Str2);
                  v102 = (__int16)(v237 - *Str2) < 0;
LABEL_182:
                  v16 = v102 == v103;
                  goto LABEL_20;
                }
                if ( a5 != 5 )
                {
                  if ( a5 == 6 )
                  {
                    v221 = v14 - 2;
                    if ( v221 )
                    {
                      v222 = v221 - 1;
                      if ( !v222 )
                      {
                        v57 = *(unsigned __int8 *)a2;
                        goto LABEL_118;
                      }
                      v223 = v222 - 1;
                      if ( !v223 )
                      {
                        v54 = *(unsigned __int8 *)a2;
                        goto LABEL_115;
                      }
                      v224 = v223 - 1;
                      if ( !v224 )
                      {
                        v51 = *(unsigned __int8 *)a2;
                        goto LABEL_112;
                      }
                      if ( v224 != 1 )
                        goto LABEL_331;
                      v47 = *(unsigned __int8 *)a2;
                      goto LABEL_109;
                    }
                  }
                  else
                  {
                    if ( a5 != 7 )
                      goto LABEL_331;
                    v217 = v14 - 2;
                    if ( v217 )
                    {
                      v218 = v217 - 1;
                      if ( !v218 )
                      {
                        v39 = *(unsigned __int8 *)a2;
                        goto LABEL_99;
                      }
                      v219 = v218 - 1;
                      if ( !v219 )
                      {
                        v38 = *(unsigned __int8 *)a2;
                        goto LABEL_96;
                      }
                      v220 = v219 - 1;
                      if ( !v220 )
                      {
                        v36 = *(unsigned __int8 *)a2;
                        goto LABEL_93;
                      }
                      if ( v220 != 1 )
                        goto LABEL_331;
                      v33 = *(unsigned __int8 *)a2;
                      goto LABEL_90;
                    }
                  }
                  v42 = *(unsigned __int8 *)a2;
                  goto LABEL_102;
                }
                v225 = v14 - 2;
                if ( v225 )
                {
                  v226 = v225 - 1;
                  if ( v226 )
                  {
                    v227 = v226 - 1;
                    if ( !v227 )
                    {
                      v24 = *(unsigned __int8 *)a2 < *Str2;
                      goto LABEL_53;
                    }
                    v228 = v227 - 1;
                    if ( v228 )
                    {
                      if ( v228 != 1 )
                        goto LABEL_331;
                      v229 = *(unsigned __int8 *)a2;
                      v34 = v229 < *Str2;
                      v35 = v229 == *Str2;
                      goto LABEL_124;
                    }
                    v37 = *(unsigned __int8 *)a2 < *Str2;
                    goto LABEL_127;
                  }
                  v230 = *(unsigned __int8 *)a2;
                  v40 = v230 < *Str2;
                  v41 = v230 == *Str2;
                  goto LABEL_131;
                }
                v231 = *(unsigned __int8 *)a2;
                goto LABEL_470;
              }
              v240 = v14 - 2;
              if ( v240 )
              {
                v241 = v240 - 1;
                if ( v241 )
                {
                  v242 = v241 - 1;
                  if ( !v242 )
                  {
                    v24 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    goto LABEL_53;
                  }
                  v243 = v242 - 1;
                  if ( v243 )
                  {
                    if ( v243 != 1 )
                      goto LABEL_331;
                    v34 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                    v35 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                    goto LABEL_124;
                  }
                  v37 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                  goto LABEL_127;
                }
                v40 = *(_BYTE *)a2 < *(_BYTE *)Str2;
                v41 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_131:
                v18 = !v40 && !v41;
                goto LABEL_31;
              }
              goto LABEL_29;
            }
            goto LABEL_505;
          }
          if ( a5 == 9 )
          {
            v260 = v14 - 2;
            if ( v260 )
            {
              v261 = v260 - 1;
              if ( v261 )
              {
                v262 = v261 - 1;
                if ( v262 )
                {
                  v263 = v262 - 1;
                  if ( v263 )
                  {
                    if ( v263 != 1 )
                      goto LABEL_331;
                    v168 = *(unsigned __int8 *)a2;
                    goto LABEL_736;
                  }
                  v169 = *(unsigned __int8 *)a2;
                  goto LABEL_739;
                }
                v170 = *(unsigned __int8 *)a2;
                goto LABEL_742;
              }
              v171 = *(unsigned __int8 *)a2;
              goto LABEL_745;
            }
LABEL_537:
            v172 = *(unsigned __int8 *)a2;
            goto LABEL_631;
          }
          if ( a5 != 10 )
          {
            if ( a5 != 11 )
            {
              if ( a5 == 14 )
              {
LABEL_505:
                v252 = v14 - 2;
                if ( v252 )
                {
                  v253 = v252 - 1;
                  if ( v253 )
                  {
                    v254 = v253 - 1;
                    if ( v254 )
                    {
                      v255 = v254 - 1;
                      if ( v255 )
                      {
                        if ( v255 != 1 )
                          goto LABEL_331;
                        v122 = *(unsigned __int8 *)a2;
                        goto LABEL_224;
                      }
                      v123 = *(unsigned __int8 *)a2;
                      goto LABEL_228;
                    }
                    v124 = *(unsigned __int8 *)a2;
                    goto LABEL_233;
                  }
                  v125 = *(unsigned __int8 *)a2;
                  goto LABEL_238;
                }
                goto LABEL_537;
              }
              if ( a5 != 15 )
                goto LABEL_331;
            }
            v248 = v14 - 2;
            if ( !v248 )
            {
              v140 = *(unsigned __int8 *)a2;
              goto LABEL_267;
            }
            v249 = v248 - 1;
            if ( !v249 )
            {
              v137 = *(unsigned __int8 *)a2;
              goto LABEL_260;
            }
            v250 = v249 - 1;
            if ( !v250 )
            {
              v132 = *(unsigned __int8 *)a2;
              goto LABEL_253;
            }
            v251 = v250 - 1;
            if ( !v251 )
            {
              v129 = *(unsigned __int8 *)a2;
              goto LABEL_246;
            }
            if ( v251 != 1 )
              goto LABEL_331;
            v117 = *(unsigned __int8 *)a2;
LABEL_241:
            v126 = _mm_cvtsi32_si128(v117);
LABEL_242:
            *(_QWORD *)&v127 = *(_OWORD *)&_mm_cvtepi32_pd(v126);
LABEL_243:
            v128 = *(double *)Str2 < v127;
LABEL_288:
            v27 = !v128;
            goto LABEL_63;
          }
          v256 = v14 - 2;
          if ( !v256 )
          {
            v161 = *(unsigned __int8 *)a2;
            goto LABEL_303;
          }
          v257 = v256 - 1;
          if ( !v257 )
          {
            v158 = *(unsigned __int8 *)a2;
            goto LABEL_297;
          }
          v258 = v257 - 1;
          if ( !v258 )
          {
            v155 = *(unsigned __int8 *)a2;
            goto LABEL_291;
          }
          v259 = v258 - 1;
          if ( !v259 )
          {
            v152 = *(unsigned __int8 *)a2;
            goto LABEL_285;
          }
          if ( v259 != 1 )
            goto LABEL_331;
          v149 = *(unsigned __int8 *)a2;
LABEL_281:
          v150 = _mm_cvtsi32_si128(v149);
LABEL_282:
          LODWORD(v151) = _mm_cvtepi32_ps(v150).m128_u32[0];
          goto LABEL_283;
        }
        if ( a5 <= 8 )
        {
          if ( a5 != 8 )
          {
            if ( a5 != 2 )
            {
              if ( a5 == 3 )
              {
                v280 = v14 - 2;
                if ( v280 )
                {
                  v281 = v280 - 1;
                  if ( !v281 )
                  {
                    v74 = *(char *)a2;
                    v75 = *(unsigned __int8 *)Str2;
                    goto LABEL_195;
                  }
                  v282 = v281 - 1;
                  if ( !v282 )
                  {
                    v72 = *(char *)a2;
                    v73 = *(unsigned __int8 *)Str2;
                    goto LABEL_187;
                  }
                  v283 = v282 - 1;
                  if ( v283 )
                  {
                    if ( v283 != 1 )
                      goto LABEL_331;
                    v68 = *(char *)a2;
                    v69 = *(unsigned __int8 *)Str2;
                    goto LABEL_172;
                  }
                  v70 = *(char *)a2;
                  v71 = *(unsigned __int8 *)Str2;
LABEL_179:
                  v103 = __OFSUB__(v70, v71);
                  v102 = v70 - v71 < 0;
                  goto LABEL_182;
                }
                v76 = *(char *)a2;
                v77 = *(unsigned __int8 *)Str2;
LABEL_203:
                v94 = v76 == v77;
                goto LABEL_206;
              }
              if ( a5 != 4 )
              {
                if ( a5 != 5 )
                {
                  if ( a5 == 6 )
                  {
                    v268 = v14 - 2;
                    if ( v268 )
                    {
                      v269 = v268 - 1;
                      if ( !v269 )
                      {
                        v57 = *(char *)a2;
                        goto LABEL_118;
                      }
                      v270 = v269 - 1;
                      if ( !v270 )
                      {
                        v54 = *(char *)a2;
                        goto LABEL_115;
                      }
                      v271 = v270 - 1;
                      if ( !v271 )
                      {
                        v51 = *(char *)a2;
                        goto LABEL_112;
                      }
                      if ( v271 != 1 )
                        goto LABEL_331;
                      v47 = *(char *)a2;
                      goto LABEL_109;
                    }
                  }
                  else
                  {
                    if ( a5 != 7 )
                      goto LABEL_331;
                    v264 = v14 - 2;
                    if ( v264 )
                    {
                      v265 = v264 - 1;
                      if ( !v265 )
                      {
                        v39 = *(char *)a2;
                        goto LABEL_99;
                      }
                      v266 = v265 - 1;
                      if ( !v266 )
                      {
                        v38 = *(char *)a2;
                        goto LABEL_96;
                      }
                      v267 = v266 - 1;
                      if ( !v267 )
                      {
                        v36 = *(char *)a2;
                        goto LABEL_93;
                      }
                      if ( v267 != 1 )
                        goto LABEL_331;
                      v33 = *(char *)a2;
                      goto LABEL_90;
                    }
                  }
                  v42 = *(char *)a2;
                  goto LABEL_102;
                }
                v272 = v14 - 2;
                if ( v272 )
                {
                  v273 = v272 - 1;
                  if ( v273 )
                  {
                    v274 = v273 - 1;
                    if ( v274 )
                    {
                      v275 = v274 - 1;
                      if ( v275 )
                      {
                        if ( v275 != 1 )
                          goto LABEL_331;
                        v68 = *(char *)a2;
LABEL_345:
                        v69 = *Str2;
                        goto LABEL_172;
                      }
                      v70 = *(char *)a2;
LABEL_348:
                      v71 = *Str2;
                      goto LABEL_179;
                    }
                    v72 = *(char *)a2;
LABEL_351:
                    v73 = *Str2;
                    goto LABEL_187;
                  }
                  v74 = *(char *)a2;
LABEL_354:
                  v75 = *Str2;
                  goto LABEL_195;
                }
                v76 = *(char *)a2;
LABEL_357:
                v77 = *Str2;
                goto LABEL_203;
              }
              v276 = v14 - 2;
              if ( v276 )
              {
                v277 = v276 - 1;
                if ( !v277 )
                {
                  v60 = __OFSUB__(*(char *)a2, *Str2);
                  v58 = *(char *)a2 == (__int16)*Str2;
                  v59 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_240;
                }
                v278 = v277 - 1;
                if ( !v278 )
                {
                  v56 = __OFSUB__(*(char *)a2, *Str2);
                  v55 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_235;
                }
                v279 = v278 - 1;
                if ( v279 )
                {
                  if ( v279 != 1 )
                    goto LABEL_331;
                  v50 = __OFSUB__(*(char *)a2, *Str2);
                  v48 = *(char *)a2 == (__int16)*Str2;
                  v49 = (__int16)(*(char *)a2 - *Str2) < 0;
                  goto LABEL_225;
                }
                v53 = __OFSUB__(*(char *)a2, *Str2);
                v52 = (__int16)(*(char *)a2 - *Str2) < 0;
                goto LABEL_230;
              }
              v231 = *(char *)a2;
LABEL_470:
              v17 = v231 == (__int16)*Str2;
              goto LABEL_30;
            }
            v284 = v14 - 2;
            if ( v284 )
            {
              v285 = v284 - 1;
              if ( !v285 )
              {
                v60 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v58 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                v59 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_240;
              }
              v286 = v285 - 1;
              if ( !v286 )
              {
                v56 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v55 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_235;
              }
              v287 = v286 - 1;
              if ( v287 )
              {
                if ( v287 != 1 )
                  goto LABEL_331;
                v50 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
                v48 = *(_BYTE *)a2 == *(_BYTE *)Str2;
                v49 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
                goto LABEL_225;
              }
              v53 = __OFSUB__(*(_BYTE *)a2, *(_BYTE *)Str2);
              v52 = (char)(*(_BYTE *)a2 - *(_BYTE *)Str2) < 0;
              goto LABEL_230;
            }
LABEL_29:
            v17 = *(_BYTE *)a2 == *(_BYTE *)Str2;
LABEL_30:
            v18 = v17;
LABEL_31:
            *a8 = v18;
            goto LABEL_1373;
          }
          goto LABEL_602;
        }
        if ( a5 == 9 )
        {
          v300 = v14 - 2;
          if ( v300 )
          {
            v301 = v300 - 1;
            if ( v301 )
            {
              v302 = v301 - 1;
              if ( v302 )
              {
                v303 = v302 - 1;
                if ( v303 )
                {
                  if ( v303 != 1 )
                    goto LABEL_331;
                  v168 = *(char *)a2;
                  goto LABEL_736;
                }
                v169 = *(char *)a2;
                goto LABEL_739;
              }
              v170 = *(char *)a2;
              goto LABEL_742;
            }
            v171 = *(char *)a2;
            goto LABEL_745;
          }
LABEL_629:
          v172 = *(char *)a2;
          goto LABEL_631;
        }
        if ( a5 == 10 )
        {
          v296 = v14 - 2;
          if ( !v296 )
          {
            v161 = *(char *)a2;
            goto LABEL_303;
          }
          v297 = v296 - 1;
          if ( !v297 )
          {
            v158 = *(char *)a2;
            goto LABEL_297;
          }
          v298 = v297 - 1;
          if ( !v298 )
          {
            v155 = *(char *)a2;
            goto LABEL_291;
          }
          v299 = v298 - 1;
          if ( !v299 )
          {
            v152 = *(char *)a2;
            goto LABEL_285;
          }
          if ( v299 != 1 )
            goto LABEL_331;
          v149 = *(char *)a2;
          goto LABEL_281;
        }
        if ( a5 != 11 )
        {
          if ( a5 == 14 )
          {
LABEL_602:
            v292 = v14 - 2;
            if ( v292 )
            {
              v293 = v292 - 1;
              if ( v293 )
              {
                v294 = v293 - 1;
                if ( v294 )
                {
                  v295 = v294 - 1;
                  if ( v295 )
                  {
                    if ( v295 != 1 )
                      goto LABEL_331;
                    v122 = *(char *)a2;
                    goto LABEL_224;
                  }
                  v123 = *(char *)a2;
                  goto LABEL_228;
                }
                v124 = *(char *)a2;
                goto LABEL_233;
              }
              v125 = *(char *)a2;
              goto LABEL_238;
            }
            goto LABEL_629;
          }
          if ( a5 != 15 )
            goto LABEL_331;
        }
        v288 = v14 - 2;
        if ( !v288 )
        {
          v140 = *(char *)a2;
          goto LABEL_267;
        }
        v289 = v288 - 1;
        if ( !v289 )
        {
          v137 = *(char *)a2;
          goto LABEL_260;
        }
        v290 = v289 - 1;
        if ( !v290 )
        {
          v132 = *(char *)a2;
          goto LABEL_253;
        }
        v291 = v290 - 1;
        if ( !v291 )
        {
          v129 = *(char *)a2;
          goto LABEL_246;
        }
        if ( v291 != 1 )
          goto LABEL_331;
        v117 = *(char *)a2;
        goto LABEL_241;
      }
      if ( a5 != 1 || v14 != 2 )
        goto LABEL_331;
      if ( a2 )
        goto LABEL_12;
      v19 = Str2 == 0LL;
LABEL_36:
      if ( v19 )
        goto LABEL_13;
      goto LABEL_12;
    }
    if ( a5 <= 8 )
    {
      if ( a5 != 8 )
      {
        switch ( a5 )
        {
          case 2u:
            v326 = v14 - 2;
            if ( !v326 )
              goto LABEL_700;
            v327 = v326 - 1;
            if ( !v327 )
            {
              v316 = *(char *)Str2;
              goto LABEL_699;
            }
            v328 = v327 - 1;
            if ( !v328 )
            {
              v315 = *(char *)Str2;
              goto LABEL_697;
            }
            v329 = v328 - 1;
            if ( !v329 )
            {
              v314 = *(char *)Str2;
              goto LABEL_695;
            }
            if ( v329 != 1 )
              goto LABEL_331;
            v313 = *(char *)Str2;
            break;
          case 3u:
            v322 = v14 - 2;
            if ( !v322 )
              goto LABEL_686;
            v323 = v322 - 1;
            if ( !v323 )
            {
              v316 = *(unsigned __int8 *)Str2;
              goto LABEL_699;
            }
            v324 = v323 - 1;
            if ( !v324 )
            {
              v315 = *(unsigned __int8 *)Str2;
              goto LABEL_697;
            }
            v325 = v324 - 1;
            if ( !v325 )
            {
              v314 = *(unsigned __int8 *)Str2;
              goto LABEL_695;
            }
            if ( v325 != 1 )
              goto LABEL_331;
            v313 = *(unsigned __int8 *)Str2;
            break;
          case 4u:
            v318 = v14 - 2;
            if ( !v318 )
              goto LABEL_676;
            v319 = v318 - 1;
            if ( !v319 )
            {
              v316 = (__int16)*Str2;
              goto LABEL_699;
            }
            v320 = v319 - 1;
            if ( !v320 )
            {
              v315 = (__int16)*Str2;
              goto LABEL_697;
            }
            v321 = v320 - 1;
            if ( !v321 )
            {
              v314 = (__int16)*Str2;
              goto LABEL_695;
            }
            if ( v321 != 1 )
              goto LABEL_331;
            v313 = (__int16)*Str2;
            break;
          case 5u:
            v309 = v14 - 2;
            if ( !v309 )
            {
LABEL_666:
              v317 = *Str2;
LABEL_701:
              v94 = *(_DWORD *)a2 == v317;
              goto LABEL_206;
            }
            v310 = v309 - 1;
            if ( v310 )
            {
              v311 = v310 - 1;
              if ( v311 )
              {
                v312 = v311 - 1;
                if ( v312 )
                {
                  if ( v312 != 1 )
                    goto LABEL_331;
                  v313 = *Str2;
                  break;
                }
                v314 = *Str2;
LABEL_695:
                v103 = __OFSUB__(*(_DWORD *)a2, v314);
                v102 = *(_DWORD *)a2 - v314 < 0;
                goto LABEL_182;
              }
              v315 = *Str2;
LABEL_697:
              v106 = __OFSUB__(*(_DWORD *)a2, v315);
              v105 = *(_DWORD *)a2 - v315 < 0;
              goto LABEL_190;
            }
            v316 = *Str2;
LABEL_699:
            v110 = __OFSUB__(*(_DWORD *)a2, v316);
            v108 = *(_DWORD *)a2 == v316;
            v109 = *(_DWORD *)a2 - v316 < 0;
            goto LABEL_198;
          default:
            v20 = a5 - 6;
            if ( a5 != 6 )
            {
LABEL_48:
              if ( v20 != 1 )
                goto LABEL_331;
LABEL_49:
              v21 = v14 - 2;
              if ( v21 )
              {
                v22 = v21 - 1;
                if ( v22 )
                {
                  v23 = v22 - 1;
                  if ( !v23 )
                  {
                    v24 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_53:
                    v18 = v24;
                    goto LABEL_31;
                  }
                  v308 = v23 - 1;
                  if ( v308 )
                  {
                    if ( v308 != 1 )
                      goto LABEL_331;
                    v34 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                    v35 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                    goto LABEL_124;
                  }
                  v37 = *(_DWORD *)a2 < *(_DWORD *)Str2;
LABEL_127:
                  v18 = !v37;
                  goto LABEL_31;
                }
                v40 = *(_DWORD *)a2 < *(_DWORD *)Str2;
                v41 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                goto LABEL_131;
              }
              goto LABEL_1357;
            }
            v304 = v14 - 2;
            if ( v304 )
            {
              v305 = v304 - 1;
              if ( !v305 )
              {
                v60 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                v58 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                v59 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                goto LABEL_240;
              }
              v306 = v305 - 1;
              if ( !v306 )
              {
                v56 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                v55 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                goto LABEL_235;
              }
              v307 = v306 - 1;
              if ( v307 )
              {
                if ( v307 != 1 )
                  goto LABEL_331;
                v50 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
                v48 = *(_DWORD *)a2 == *(_DWORD *)Str2;
                v49 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
                goto LABEL_225;
              }
              v53 = __OFSUB__(*(_DWORD *)a2, *(_DWORD *)Str2);
              v52 = *(_DWORD *)a2 - *(_DWORD *)Str2 < 0;
              goto LABEL_230;
            }
LABEL_1357:
            v17 = *(_DWORD *)a2 == *(_DWORD *)Str2;
            goto LABEL_30;
        }
        v101 = __OFSUB__(*(_DWORD *)a2, v313);
        v99 = *(_DWORD *)a2 == v313;
        v100 = *(_DWORD *)a2 - v313 < 0;
        goto LABEL_174;
      }
      goto LABEL_713;
    }
    if ( a5 == 9 )
    {
      v342 = v14 - 2;
      if ( v342 )
      {
        v343 = v342 - 1;
        if ( v343 )
        {
          v344 = v343 - 1;
          if ( v344 )
          {
            v345 = v344 - 1;
            if ( v345 )
            {
              if ( v345 != 1 )
                goto LABEL_331;
              v168 = *(int *)a2;
              goto LABEL_736;
            }
            v169 = *(int *)a2;
LABEL_739:
            v37 = v169 < *(_QWORD *)Str2;
            goto LABEL_127;
          }
          v170 = *(int *)a2;
LABEL_742:
          v24 = v170 < *(_QWORD *)Str2;
          goto LABEL_53;
        }
        v171 = *(int *)a2;
LABEL_745:
        v40 = v171 < *(_QWORD *)Str2;
        v41 = v171 == *(_QWORD *)Str2;
        goto LABEL_131;
      }
      goto LABEL_746;
    }
    if ( a5 == 10 )
    {
      v338 = v14 - 2;
      if ( v338 )
      {
        v339 = v338 - 1;
        if ( v339 )
        {
          v340 = v339 - 1;
          if ( v340 )
          {
            v341 = v340 - 1;
            if ( v341 )
            {
              if ( v341 != 1 )
                goto LABEL_331;
              v150 = _mm_cvtsi32_si128(*(_DWORD *)a2);
              goto LABEL_282;
            }
            v153 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_286:
            LODWORD(v154) = _mm_cvtepi32_ps(v153).m128_u32[0];
            goto LABEL_287;
          }
          v156 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_293:
          LODWORD(v157) = _mm_cvtepi32_ps(v156).m128_u32[0];
          goto LABEL_295;
        }
        v159 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_298:
        LODWORD(v160) = _mm_cvtepi32_ps(v159).m128_u32[0];
        goto LABEL_299;
      }
      v162 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_305:
      LODWORD(v163) = _mm_cvtepi32_ps(v162).m128_u32[0];
      goto LABEL_307;
    }
    if ( a5 != 11 )
    {
      if ( a5 == 14 )
      {
LABEL_713:
        v334 = v14 - 2;
        if ( v334 )
        {
          v335 = v334 - 1;
          if ( v335 )
          {
            v336 = v335 - 1;
            if ( v336 )
            {
              v337 = v336 - 1;
              if ( v337 )
              {
                if ( v337 != 1 )
                  goto LABEL_331;
                v122 = *(int *)a2;
                goto LABEL_224;
              }
              v123 = *(int *)a2;
              goto LABEL_228;
            }
            v124 = *(int *)a2;
            goto LABEL_233;
          }
          v125 = *(int *)a2;
          goto LABEL_238;
        }
LABEL_746:
        v172 = *(int *)a2;
        goto LABEL_631;
      }
      if ( a5 != 15 )
        goto LABEL_331;
    }
    v330 = v14 - 2;
    if ( v330 )
    {
      v331 = v330 - 1;
      if ( v331 )
      {
        v332 = v331 - 1;
        if ( v332 )
        {
          v333 = v332 - 1;
          if ( v333 )
          {
            if ( v333 != 1 )
              goto LABEL_331;
            v126 = _mm_cvtsi32_si128(*(_DWORD *)a2);
            goto LABEL_242;
          }
          v130 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_248:
          *(_QWORD *)&v131 = *(_OWORD *)&_mm_cvtepi32_pd(v130);
          goto LABEL_250;
        }
        v133 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_255:
        *(_QWORD *)&v134 = *(_OWORD *)&_mm_cvtepi32_pd(v133);
        goto LABEL_257;
      }
      v138 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_262:
      *(_QWORD *)&v139 = *(_OWORD *)&_mm_cvtepi32_pd(v138);
      goto LABEL_264;
    }
    v141 = _mm_cvtsi32_si128(*(_DWORD *)a2);
LABEL_269:
    *(_QWORD *)&v142 = *(_OWORD *)&_mm_cvtepi32_pd(v141);
    goto LABEL_271;
  }
  if ( a1 > 0x14 )
  {
    switch ( a1 )
    {
      case 0x15u:
        if ( a5 != 21 || v14 != 2 )
          goto LABEL_331;
        if ( *((_DWORD *)a2 + 4) != *((_DWORD *)Str2 + 4) )
          goto LABEL_12;
        v595 = *(_QWORD *)a2 - *(_QWORD *)Str2;
        if ( *(_QWORD *)a2 == *(_QWORD *)Str2 )
          v595 = *((_QWORD *)a2 + 1) - *((_QWORD *)Str2 + 1);
        v19 = v595 == 0;
        goto LABEL_36;
      case 0x16u:
        v594 = a5 == 22;
        break;
      case 0x17u:
        v346 = a5 == 23;
LABEL_753:
        if ( !v346 )
          goto LABEL_331;
        goto LABEL_754;
      case 0x18u:
        v594 = a5 == 24;
        break;
      default:
        if ( a1 != 25 || a5 != 25 && a5 != 18 || v14 != 2 )
          goto LABEL_331;
        goto LABEL_57;
    }
    if ( !v594 || v14 != 2 )
      goto LABEL_331;
    goto LABEL_1357;
  }
  switch ( a1 )
  {
    case 0x14u:
      goto LABEL_331;
    case 0xEu:
LABEL_1330:
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          switch ( a5 )
          {
            case 2u:
              v533 = v14 - 2;
              if ( !v533 )
                goto LABEL_204;
              v534 = v533 - 1;
              if ( !v534 )
              {
                v111 = *(char *)Str2;
                goto LABEL_197;
              }
              v535 = v534 - 1;
              if ( !v535 )
              {
                v107 = *(char *)Str2;
                goto LABEL_189;
              }
              v536 = v535 - 1;
              if ( !v536 )
              {
                v104 = *(char *)Str2;
                goto LABEL_181;
              }
              if ( v536 != 1 )
                goto LABEL_331;
              v516 = *(char *)Str2;
              break;
            case 3u:
              v529 = v14 - 2;
              if ( !v529 )
                goto LABEL_1069;
              v530 = v529 - 1;
              if ( !v530 )
              {
                v111 = *(unsigned __int8 *)Str2;
                goto LABEL_197;
              }
              v531 = v530 - 1;
              if ( !v531 )
              {
                v107 = *(unsigned __int8 *)Str2;
                goto LABEL_189;
              }
              v532 = v531 - 1;
              if ( !v532 )
              {
                v104 = *(unsigned __int8 *)Str2;
                goto LABEL_181;
              }
              if ( v532 != 1 )
                goto LABEL_331;
              v516 = *(unsigned __int8 *)Str2;
              break;
            case 4u:
              v525 = v14 - 2;
              if ( !v525 )
                goto LABEL_1059;
              v526 = v525 - 1;
              if ( !v526 )
              {
                v111 = (__int16)*Str2;
                goto LABEL_197;
              }
              v527 = v526 - 1;
              if ( !v527 )
              {
                v107 = (__int16)*Str2;
                goto LABEL_189;
              }
              v528 = v527 - 1;
              if ( !v528 )
              {
                v104 = (__int16)*Str2;
                goto LABEL_181;
              }
              if ( v528 != 1 )
                goto LABEL_331;
              v516 = (__int16)*Str2;
              break;
            case 5u:
              v521 = v14 - 2;
              if ( !v521 )
                goto LABEL_1049;
              v522 = v521 - 1;
              if ( !v522 )
              {
                v111 = *Str2;
                goto LABEL_197;
              }
              v523 = v522 - 1;
              if ( !v523 )
              {
                v107 = *Str2;
                goto LABEL_189;
              }
              v524 = v523 - 1;
              if ( v524 )
              {
                if ( v524 != 1 )
                  goto LABEL_331;
                v516 = *Str2;
                break;
              }
              v104 = *Str2;
LABEL_181:
              v103 = __OFSUB__(*(_QWORD *)a2, v104);
              v102 = *(_QWORD *)a2 - v104 < 0;
              goto LABEL_182;
            case 6u:
              v517 = v14 - 2;
              if ( !v517 )
                goto LABEL_1039;
              v518 = v517 - 1;
              if ( v518 )
              {
                v519 = v518 - 1;
                if ( v519 )
                {
                  v520 = v519 - 1;
                  if ( v520 )
                  {
                    if ( v520 != 1 )
                      goto LABEL_331;
                    v516 = *(int *)Str2;
                    break;
                  }
                  v104 = *(int *)Str2;
                  goto LABEL_181;
                }
                v107 = *(int *)Str2;
                goto LABEL_189;
              }
              v111 = *(int *)Str2;
              goto LABEL_197;
            case 7u:
              v512 = v14 - 2;
              if ( !v512 )
              {
LABEL_1029:
                v112 = *(unsigned int *)Str2;
                goto LABEL_205;
              }
              v513 = v512 - 1;
              if ( v513 )
              {
                v514 = v513 - 1;
                if ( v514 )
                {
                  v515 = v514 - 1;
                  if ( v515 )
                  {
                    if ( v515 != 1 )
                      goto LABEL_331;
                    v516 = *(unsigned int *)Str2;
                    break;
                  }
                  v104 = *(unsigned int *)Str2;
                  goto LABEL_181;
                }
                v107 = *(unsigned int *)Str2;
LABEL_189:
                v106 = __OFSUB__(*(_QWORD *)a2, v107);
                v105 = *(_QWORD *)a2 - v107 < 0;
                goto LABEL_190;
              }
              v111 = *(unsigned int *)Str2;
LABEL_197:
              v110 = __OFSUB__(*(_QWORD *)a2, v111);
              v108 = *(_QWORD *)a2 == v111;
              v109 = *(_QWORD *)a2 - v111 < 0;
              goto LABEL_198;
            default:
              goto LABEL_331;
          }
          v101 = __OFSUB__(*(_QWORD *)a2, v516);
          v99 = *(_QWORD *)a2 == v516;
          v100 = *(_QWORD *)a2 - v516 < 0;
          goto LABEL_174;
        }
        goto LABEL_1200;
      }
      if ( a5 == 9 )
        goto LABEL_1095;
      if ( a5 != 10 )
      {
        if ( a5 != 11 )
        {
          if ( a5 == 14 )
          {
LABEL_1200:
            v541 = v14 - 2;
            if ( !v541 )
              goto LABEL_1218;
            v542 = v541 - 1;
            if ( !v542 )
            {
              v60 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
              v58 = *(_QWORD *)a2 == *(_QWORD *)Str2;
              v59 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
              goto LABEL_240;
            }
            v543 = v542 - 1;
            if ( !v543 )
            {
              v56 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
              v55 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
              goto LABEL_235;
            }
            v544 = v543 - 1;
            if ( v544 )
            {
              if ( v544 != 1 )
                goto LABEL_331;
              v50 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
              v48 = *(_QWORD *)a2 == *(_QWORD *)Str2;
              v49 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
              goto LABEL_225;
            }
            v53 = __OFSUB__(*(_QWORD *)a2, *(_QWORD *)Str2);
            v52 = (__int64)(*(_QWORD *)a2 - *(_QWORD *)Str2) < 0;
LABEL_230:
            v18 = v52 == v53;
            goto LABEL_31;
          }
          if ( a5 != 15 )
            goto LABEL_331;
        }
        v537 = v14 - 2;
        if ( v537 )
        {
          v538 = v537 - 1;
          if ( v538 )
          {
            v539 = v538 - 1;
            if ( v539 )
            {
              v540 = v539 - 1;
              if ( v540 )
              {
                if ( v540 != 1 )
                  goto LABEL_331;
                v127 = (double)(int)*(_QWORD *)a2;
                goto LABEL_243;
              }
              v131 = (double)(int)*(_QWORD *)a2;
              goto LABEL_250;
            }
            v134 = (double)(int)*(_QWORD *)a2;
            goto LABEL_257;
          }
          v139 = (double)(int)*(_QWORD *)a2;
          goto LABEL_264;
        }
        v142 = (double)(int)*(_QWORD *)a2;
        goto LABEL_271;
      }
      v590 = v14 - 2;
      if ( !v590 )
      {
        v163 = (float)(int)*(_QWORD *)a2;
        goto LABEL_307;
      }
      v591 = v590 - 1;
      if ( !v591 )
      {
        v160 = (float)(int)*(_QWORD *)a2;
        goto LABEL_299;
      }
      v592 = v591 - 1;
      if ( !v592 )
      {
        v157 = (float)(int)*(_QWORD *)a2;
        goto LABEL_295;
      }
      v593 = v592 - 1;
      if ( !v593 )
      {
        v154 = (float)(int)*(_QWORD *)a2;
        goto LABEL_287;
      }
      if ( v593 != 1 )
        goto LABEL_331;
      v151 = (float)(int)*(_QWORD *)a2;
LABEL_283:
      v128 = *(float *)Str2 < v151;
      goto LABEL_288;
    case 0xFu:
LABEL_1307:
      if ( a5 <= 8 )
      {
        if ( a5 != 8 )
        {
          switch ( a5 )
          {
            case 2u:
              v388 = v14 - 2;
              if ( !v388 )
              {
                v371 = *(char *)Str2;
                goto LABEL_790;
              }
              v389 = v388 - 1;
              if ( !v389 )
              {
                v379 = *(char *)Str2;
                goto LABEL_836;
              }
              v390 = v389 - 1;
              if ( !v390 )
              {
                v378 = *(char *)Str2;
                goto LABEL_833;
              }
              v391 = v390 - 1;
              if ( !v391 )
              {
                v377 = *(char *)Str2;
                goto LABEL_830;
              }
              if ( v391 != 1 )
                goto LABEL_331;
              v376 = *(char *)Str2;
              break;
            case 3u:
              v384 = v14 - 2;
              if ( !v384 )
              {
                v371 = *(unsigned __int8 *)Str2;
                goto LABEL_790;
              }
              v385 = v384 - 1;
              if ( !v385 )
              {
                v379 = *(unsigned __int8 *)Str2;
                goto LABEL_836;
              }
              v386 = v385 - 1;
              if ( !v386 )
              {
                v378 = *(unsigned __int8 *)Str2;
                goto LABEL_833;
              }
              v387 = v386 - 1;
              if ( !v387 )
              {
                v377 = *(unsigned __int8 *)Str2;
                goto LABEL_830;
              }
              if ( v387 != 1 )
                goto LABEL_331;
              v376 = *(unsigned __int8 *)Str2;
              break;
            case 4u:
              v380 = v14 - 2;
              if ( !v380 )
              {
                v371 = (__int16)*Str2;
                goto LABEL_790;
              }
              v381 = v380 - 1;
              if ( !v381 )
              {
                v379 = (__int16)*Str2;
                goto LABEL_836;
              }
              v382 = v381 - 1;
              if ( !v382 )
              {
                v378 = (__int16)*Str2;
                goto LABEL_833;
              }
              v383 = v382 - 1;
              if ( !v383 )
              {
                v377 = (__int16)*Str2;
                goto LABEL_830;
              }
              if ( v383 != 1 )
                goto LABEL_331;
              v376 = (__int16)*Str2;
              break;
            case 5u:
              v372 = v14 - 2;
              if ( v372 )
              {
                v373 = v372 - 1;
                if ( v373 )
                {
                  v374 = v373 - 1;
                  if ( v374 )
                  {
                    v375 = v374 - 1;
                    if ( v375 )
                    {
                      if ( v375 != 1 )
                        goto LABEL_331;
                      v376 = *Str2;
                      break;
                    }
                    v377 = *Str2;
LABEL_830:
                    v367 = _mm_cvtsi32_si128(v377);
LABEL_831:
                    *(_QWORD *)&v356 = *(_OWORD *)&_mm_cvtepi32_pd(v367);
                    goto LABEL_872;
                  }
                  v378 = *Str2;
LABEL_833:
                  v368 = _mm_cvtsi32_si128(v378);
LABEL_834:
                  *(_QWORD *)&v358 = *(_OWORD *)&_mm_cvtepi32_pd(v368);
                  goto LABEL_875;
                }
                v379 = *Str2;
LABEL_836:
                v369 = _mm_cvtsi32_si128(v379);
LABEL_837:
                *(_QWORD *)&v92 = *(_OWORD *)&_mm_cvtepi32_pd(v369);
                goto LABEL_160;
              }
              v371 = *Str2;
LABEL_790:
              v370 = _mm_cvtsi32_si128(v371);
LABEL_791:
              *(_QWORD *)&v361 = *(_OWORD *)&_mm_cvtepi32_pd(v370);
              goto LABEL_778;
            case 6u:
              v362 = v14 - 2;
              if ( v362 )
              {
                v363 = v362 - 1;
                if ( v363 )
                {
                  v364 = v363 - 1;
                  if ( v364 )
                  {
                    v365 = v364 - 1;
                    if ( v365 )
                    {
                      if ( v365 != 1 )
                        goto LABEL_331;
                      v366 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                      goto LABEL_828;
                    }
                    v367 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                    goto LABEL_831;
                  }
                  v368 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                  goto LABEL_834;
                }
                v369 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
                goto LABEL_837;
              }
              v370 = _mm_cvtsi32_si128(*(_DWORD *)Str2);
              goto LABEL_791;
            case 7u:
              v349 = v14 - 2;
              if ( v349 )
              {
                v350 = v349 - 1;
                if ( v350 )
                {
                  v351 = v350 - 1;
                  if ( v351 )
                  {
                    v352 = v351 - 1;
                    if ( v352 )
                    {
                      if ( v352 != 1 )
                        goto LABEL_331;
                      LODWORD(v353) = *(_DWORD *)Str2;
LABEL_768:
                      v354 = (double)(int)v353;
LABEL_869:
                      v85 = v354 < *(double *)a2;
                      goto LABEL_153;
                    }
                    LODWORD(v355) = *(_DWORD *)Str2;
LABEL_770:
                    v356 = (double)(int)v355;
                    goto LABEL_872;
                  }
                  LODWORD(v357) = *(_DWORD *)Str2;
                  goto LABEL_772;
                }
                LODWORD(v359) = *(_DWORD *)Str2;
LABEL_774:
                v92 = (double)(int)v359;
                goto LABEL_160;
              }
              LODWORD(v360) = *(_DWORD *)Str2;
              goto LABEL_776;
            default:
              goto LABEL_331;
          }
          v366 = _mm_cvtsi32_si128(v376);
LABEL_828:
          *(_QWORD *)&v354 = *(_OWORD *)&_mm_cvtepi32_pd(v366);
          goto LABEL_869;
        }
        goto LABEL_850;
      }
      if ( a5 == 9 )
      {
        v586 = v14 - 2;
        if ( v586 )
        {
          v587 = v586 - 1;
          if ( v587 )
          {
            v588 = v587 - 1;
            if ( v588 )
            {
              v589 = v588 - 1;
              if ( v589 )
              {
                if ( v589 != 1 )
                  goto LABEL_331;
                v353 = *(_QWORD *)Str2;
                if ( *(__int64 *)Str2 < 0 )
                {
                  v354 = (double)(int)(v353 & 1 | (v353 >> 1)) + (double)(int)(v353 & 1 | (v353 >> 1));
                  goto LABEL_869;
                }
                goto LABEL_768;
              }
              v355 = *(_QWORD *)Str2;
              if ( *(__int64 *)Str2 < 0 )
              {
                v356 = (double)(int)(v355 & 1 | (v355 >> 1)) + (double)(int)(v355 & 1 | (v355 >> 1));
                goto LABEL_872;
              }
              goto LABEL_770;
            }
            v357 = *(_QWORD *)Str2;
            if ( *(__int64 *)Str2 < 0 )
            {
              v358 = (double)(int)(v357 & 1 | (v357 >> 1)) + (double)(int)(v357 & 1 | (v357 >> 1));
              goto LABEL_875;
            }
LABEL_772:
            v358 = (double)(int)v357;
LABEL_875:
            v90 = v358 < *(double *)a2;
            v91 = v358 == *(double *)a2;
            goto LABEL_161;
          }
          v359 = *(_QWORD *)Str2;
          if ( *(__int64 *)Str2 < 0 )
          {
            v92 = (double)(int)(v359 & 1 | (*(_QWORD *)Str2 >> 1)) + (double)(int)(v359 & 1 | (*(_QWORD *)Str2 >> 1));
            goto LABEL_160;
          }
          goto LABEL_774;
        }
        v360 = *(_QWORD *)Str2;
        if ( *(__int64 *)Str2 < 0 )
        {
          v361 = (double)(int)(v360 & 1 | (v360 >> 1)) + (double)(int)(v360 & 1 | (v360 >> 1));
          goto LABEL_778;
        }
LABEL_776:
        v361 = (double)(int)v360;
LABEL_778:
        v19 = *(double *)a2 == v361;
        goto LABEL_36;
      }
      if ( a5 == 10 )
      {
        v400 = v14 - 2;
        if ( !v400 )
        {
          v361 = *(float *)Str2;
          goto LABEL_778;
        }
        v401 = v400 - 1;
        if ( !v401 )
        {
          v92 = *(float *)Str2;
LABEL_160:
          v90 = *(double *)a2 < v92;
          v91 = *(double *)a2 == v92;
          goto LABEL_161;
        }
        v402 = v401 - 1;
        if ( !v402 )
        {
          v358 = *(float *)Str2;
          goto LABEL_875;
        }
        v403 = v402 - 1;
        if ( v403 )
        {
          if ( v403 != 1 )
            goto LABEL_331;
          v354 = *(float *)Str2;
          goto LABEL_869;
        }
        v356 = *(float *)Str2;
LABEL_872:
        v85 = *(double *)a2 < v356;
        goto LABEL_153;
      }
      if ( a5 != 11 )
      {
        if ( a5 == 14 )
        {
LABEL_850:
          v396 = v14 - 2;
          if ( !v396 )
          {
            v361 = (double)(int)*(_QWORD *)Str2;
            goto LABEL_778;
          }
          v397 = v396 - 1;
          if ( !v397 )
          {
            v92 = (double)(int)*(_QWORD *)Str2;
            goto LABEL_160;
          }
          v398 = v397 - 1;
          if ( !v398 )
          {
            v358 = (double)(int)*(_QWORD *)Str2;
            goto LABEL_875;
          }
          v399 = v398 - 1;
          if ( v399 )
          {
            if ( v399 != 1 )
              goto LABEL_331;
            v354 = (double)(int)*(_QWORD *)Str2;
            goto LABEL_869;
          }
          v356 = (double)(int)*(_QWORD *)Str2;
          goto LABEL_872;
        }
        if ( a5 != 15 )
          goto LABEL_331;
      }
      v392 = v14 - 2;
      if ( v392 )
      {
        v393 = v392 - 1;
        if ( v393 )
        {
          v394 = v393 - 1;
          if ( v394 )
          {
            v395 = v394 - 1;
            if ( v395 )
            {
              if ( v395 != 1 )
                goto LABEL_331;
              v128 = *(double *)Str2 < *(double *)a2;
              goto LABEL_288;
            }
            v131 = *(double *)a2;
            goto LABEL_250;
          }
          v135 = *(double *)Str2 < *(double *)a2;
          v136 = *(double *)Str2 == *(double *)a2;
LABEL_300:
          v27 = !v135 && !v136;
          goto LABEL_63;
        }
        v139 = *(double *)a2;
        goto LABEL_264;
      }
      v142 = *(double *)a2;
LABEL_271:
      v19 = v142 == *(double *)Str2;
      goto LABEL_36;
    case 0x10u:
      if ( a5 != 16 )
        goto LABEL_331;
      v581 = v14 - 2;
      if ( v581 )
      {
        v582 = v581 - 1;
        if ( v582 )
        {
          v583 = v582 - 1;
          if ( v583 )
          {
            v584 = v583 - 1;
            if ( v584 )
            {
              if ( v584 != 1 )
                goto LABEL_331;
              v585 = (unsigned int)CompareFileTimeType(a2, Str2) == -1;
            }
            else
            {
              v585 = (unsigned int)CompareFileTimeType(a2, Str2) == 1;
            }
            if ( v585 )
              goto LABEL_13;
            v348 = CompareFileTimeType(a2, Str2);
            goto LABEL_760;
          }
          v26 = (unsigned int)CompareFileTimeType(a2, Str2) == -1;
        }
        else
        {
          v26 = (unsigned int)CompareFileTimeType(a2, Str2) == 1;
        }
LABEL_62:
        v27 = v26;
        goto LABEL_63;
      }
      v25 = CompareFileTimeType(a2, Str2);
LABEL_61:
      v26 = v25 == 0;
      goto LABEL_62;
    case 0x11u:
      if ( a5 != 17 || v14 != 2 )
        goto LABEL_331;
      goto LABEL_29;
  }
  if ( a1 != 18 || a5 != 18 )
    goto LABEL_331;
  if ( v14 != 2 )
  {
    if ( v14 != 9 && v14 - 10 > 1 )
      goto LABEL_331;
    v16 = SubstringMatch(a2, Str2);
    goto LABEL_20;
  }
LABEL_57:
  if ( !v13 )
  {
LABEL_757:
    if ( (_DWORD)v8 != a7 )
      goto LABEL_12;
    if ( !(_DWORD)v8 )
      goto LABEL_13;
    v348 = memcmp(a2, Str2, v8);
LABEL_760:
    v19 = v348 == 0;
    goto LABEL_36;
  }
  if ( (_DWORD)v8 && (_DWORD)v8 == a7 )
  {
    v25 = wcsicmp(a2, Str2);
    goto LABEL_61;
  }
LABEL_1373:
  if ( v12 )
  {
    LOBYTE(v10) = *a8 == 0;
    *a8 = v10;
  }
  return v11;
}
