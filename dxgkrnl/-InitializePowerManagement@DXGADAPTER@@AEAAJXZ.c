__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rbx
  __int64 v6; // rsi
  unsigned int v7; // r12d
  bool v8; // cc
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  __int64 v14; // rax
  DXGADAPTER *v15; // rcx
  __int64 v16; // r8
  int AdapterInfo; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // r14
  unsigned int v22; // ebx
  unsigned int v23; // edx
  unsigned int v24; // eax
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rbx
  int v30; // eax
  __int16 v31; // dx
  int v32; // ecx
  __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned int v35; // eax
  int v36; // eax
  unsigned int *v37; // rcx
  char *v38; // r10
  unsigned int *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // r9d
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 j; // r8
  __int64 v52; // r10
  __int64 v53; // r9
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned int k; // ecx
  __int64 v66; // rdx
  __int64 v67; // rax
  void *v68; // rcx
  unsigned int v69; // edx
  ADAPTER_RENDER *v70; // rcx
  int v71; // eax
  ADAPTER_DISPLAY *v72; // rcx
  int v73; // eax
  int v74; // eax
  unsigned __int64 TimeIncrement; // r8
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned __int64 v79; // rtt
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned __int64 v90; // rtt
  __int64 v91; // rax
  unsigned __int64 v92; // rtt
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned __int64 v96; // rtt
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  unsigned int v114; // r15d
  __int64 v115; // rsi
  __int64 v116; // rbx
  DXGADAPTER *v117; // rdx
  int v118; // ecx
  int v119; // ecx
  __int64 v120; // rax
  unsigned int v121; // edx
  __int64 v122; // r8
  DXGADAPTER *v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  unsigned int v129; // r10d
  unsigned int v130; // ecx
  unsigned __int64 v131; // r10
  unsigned __int64 v132; // rcx
  DXGADAPTER **v133; // rcx
  unsigned __int64 v134; // rcx
  unsigned int v135; // eax
  unsigned __int64 *v136; // rdx
  __int64 v137; // r8
  unsigned __int64 v138; // rax
  unsigned __int64 *v139; // rdx
  unsigned int v140; // eax
  unsigned int v141; // edx
  __int64 v142; // rcx
  unsigned __int16 *v143; // rax
  __int64 v144; // r9
  unsigned __int16 *v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rax
  unsigned __int16 v148; // r9
  unsigned __int16 *v149; // rax
  const wchar_t *v150; // r9
  __int64 v151; // rbx
  const wchar_t *v152; // r9
  __int64 v153; // rbx
  unsigned int v154; // eax
  __int64 v155; // r8
  __int64 v156; // rax
  unsigned int v157; // r10d
  __int64 v158; // r9
  unsigned int v159; // ecx
  __int64 v160; // rbx
  __int64 v161; // rsi
  unsigned int v162; // r11d
  __int64 v163; // r15
  __int64 v164; // rbx
  __int64 v165; // rbx
  __int64 v166; // r13
  const wchar_t *v167; // r9
  const wchar_t *v168; // r9
  int v169; // ecx
  int v170; // ecx
  int v171; // ecx
  int v172; // ecx
  DXGADAPTER **v173; // rcx
  struct _SLIST_ENTRY *v174; // rbx
  __int64 v175; // rsi
  NTSTATUS v176; // eax
  NTSTATUS v177; // eax
  PCLIENT_ID ClientId; // [rsp+28h] [rbp-E0h]
  __int64 StartRoutine; // [rsp+30h] [rbp-D8h]
  char v180; // [rsp+58h] [rbp-B0h]
  unsigned int v181; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v182; // [rsp+60h] [rbp-A8h] BYREF
  int v183; // [rsp+64h] [rbp-A4h] BYREF
  BOOL v184; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v185; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v186; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v187; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v188; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v189; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v190; // [rsp+80h] [rbp-88h] BYREF
  int v191; // [rsp+84h] [rbp-84h]
  int v192; // [rsp+88h] [rbp-80h]
  unsigned int v193; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v194; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v195; // [rsp+94h] [rbp-74h] BYREF
  void *i; // [rsp+98h] [rbp-70h] BYREF
  int v197; // [rsp+A0h] [rbp-68h] BYREF
  int v198; // [rsp+A4h] [rbp-64h] BYREF
  int v199; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v200; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v201; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v202; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v203; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v204; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v205; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v206; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v207; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v208; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v209; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v210; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v211; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v212; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v213; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v214; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v215; // [rsp+E8h] [rbp-20h] BYREF
  int v216; // [rsp+ECh] [rbp-1Ch] BYREF
  unsigned int v217; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v218; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v219; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v220; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v221; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v222; // [rsp+104h] [rbp-4h] BYREF
  unsigned int v223; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v224; // [rsp+10Ch] [rbp+4h] BYREF
  unsigned int v225; // [rsp+110h] [rbp+8h] BYREF
  int v226; // [rsp+114h] [rbp+Ch] BYREF
  __int64 v227; // [rsp+118h] [rbp+10h]
  unsigned int v228; // [rsp+120h] [rbp+18h] BYREF
  int v229; // [rsp+124h] [rbp+1Ch] BYREF
  int v230; // [rsp+128h] [rbp+20h] BYREF
  int v231; // [rsp+12Ch] [rbp+24h] BYREF
  int v232; // [rsp+130h] [rbp+28h] BYREF
  int v233; // [rsp+134h] [rbp+2Ch] BYREF
  int v234; // [rsp+138h] [rbp+30h] BYREF
  int v235; // [rsp+13Ch] [rbp+34h] BYREF
  int v236; // [rsp+140h] [rbp+38h] BYREF
  int v237; // [rsp+144h] [rbp+3Ch] BYREF
  int v238; // [rsp+148h] [rbp+40h] BYREF
  int v239; // [rsp+14Ch] [rbp+44h] BYREF
  int v240; // [rsp+150h] [rbp+48h] BYREF
  int v241; // [rsp+154h] [rbp+4Ch] BYREF
  int v242; // [rsp+158h] [rbp+50h] BYREF
  int v243; // [rsp+15Ch] [rbp+54h] BYREF
  int v244; // [rsp+160h] [rbp+58h] BYREF
  int v245; // [rsp+164h] [rbp+5Ch] BYREF
  int v246; // [rsp+168h] [rbp+60h] BYREF
  int v247; // [rsp+16Ch] [rbp+64h] BYREF
  int v248; // [rsp+170h] [rbp+68h] BYREF
  int v249; // [rsp+174h] [rbp+6Ch] BYREF
  int v250; // [rsp+178h] [rbp+70h] BYREF
  int v251; // [rsp+17Ch] [rbp+74h] BYREF
  int v252; // [rsp+180h] [rbp+78h] BYREF
  int v253; // [rsp+184h] [rbp+7Ch] BYREF
  int v254; // [rsp+188h] [rbp+80h] BYREF
  int v255; // [rsp+18Ch] [rbp+84h] BYREF
  int v256; // [rsp+190h] [rbp+88h] BYREF
  int v257; // [rsp+194h] [rbp+8Ch] BYREF
  int v258; // [rsp+198h] [rbp+90h] BYREF
  int v259; // [rsp+19Ch] [rbp+94h] BYREF
  int v260; // [rsp+1A0h] [rbp+98h] BYREF
  int v261; // [rsp+1A4h] [rbp+9Ch] BYREF
  int v262; // [rsp+1A8h] [rbp+A0h] BYREF
  int v263; // [rsp+1ACh] [rbp+A4h] BYREF
  int v264; // [rsp+1B0h] [rbp+A8h] BYREF
  int v265; // [rsp+1B4h] [rbp+ACh] BYREF
  int v266; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v267; // [rsp+1C0h] [rbp+B8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1C8h] [rbp+C0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v269; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v270; // [rsp+228h] [rbp+120h]
  __int64 v271; // [rsp+230h] [rbp+128h]
  __int64 v272; // [rsp+238h] [rbp+130h] BYREF
  int v273; // [rsp+240h] [rbp+138h]
  const wchar_t *v274; // [rsp+248h] [rbp+140h]
  BOOL *v275; // [rsp+250h] [rbp+148h]
  int v276; // [rsp+258h] [rbp+150h]
  int *v277; // [rsp+260h] [rbp+158h]
  int v278; // [rsp+268h] [rbp+160h]
  __int64 v279; // [rsp+270h] [rbp+168h]
  int v280; // [rsp+278h] [rbp+170h]
  __int128 v281; // [rsp+280h] [rbp+178h]
  __int128 v282; // [rsp+290h] [rbp+188h]
  __int64 v283; // [rsp+2A0h] [rbp+198h]
  __int64 v284; // [rsp+2A8h] [rbp+1A0h] BYREF
  int v285; // [rsp+2B0h] [rbp+1A8h]
  const wchar_t *v286; // [rsp+2B8h] [rbp+1B0h]
  int *v287; // [rsp+2C0h] [rbp+1B8h]
  int v288; // [rsp+2C8h] [rbp+1C0h]
  int *v289; // [rsp+2D0h] [rbp+1C8h]
  int v290; // [rsp+2D8h] [rbp+1D0h]
  __int64 v291; // [rsp+2E0h] [rbp+1D8h]
  int v292; // [rsp+2E8h] [rbp+1E0h]
  const wchar_t *v293; // [rsp+2F0h] [rbp+1E8h]
  unsigned int *v294; // [rsp+2F8h] [rbp+1F0h]
  int v295; // [rsp+300h] [rbp+1F8h]
  int *v296; // [rsp+308h] [rbp+200h]
  int v297; // [rsp+310h] [rbp+208h]
  __int64 v298; // [rsp+318h] [rbp+210h]
  int v299; // [rsp+320h] [rbp+218h]
  const wchar_t *v300; // [rsp+328h] [rbp+220h]
  unsigned int *v301; // [rsp+330h] [rbp+228h]
  int v302; // [rsp+338h] [rbp+230h]
  int *v303; // [rsp+340h] [rbp+238h]
  int v304; // [rsp+348h] [rbp+240h]
  __int64 v305; // [rsp+350h] [rbp+248h]
  int v306; // [rsp+358h] [rbp+250h]
  const wchar_t *v307; // [rsp+360h] [rbp+258h]
  unsigned int *v308; // [rsp+368h] [rbp+260h]
  int v309; // [rsp+370h] [rbp+268h]
  int *v310; // [rsp+378h] [rbp+270h]
  int v311; // [rsp+380h] [rbp+278h]
  __int64 v312; // [rsp+388h] [rbp+280h]
  int v313; // [rsp+390h] [rbp+288h]
  const wchar_t *v314; // [rsp+398h] [rbp+290h]
  unsigned int *v315; // [rsp+3A0h] [rbp+298h]
  int v316; // [rsp+3A8h] [rbp+2A0h]
  int *v317; // [rsp+3B0h] [rbp+2A8h]
  int v318; // [rsp+3B8h] [rbp+2B0h]
  __int64 v319; // [rsp+3C0h] [rbp+2B8h]
  int v320; // [rsp+3C8h] [rbp+2C0h]
  const wchar_t *v321; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v322; // [rsp+3D8h] [rbp+2D0h]
  int v323; // [rsp+3E0h] [rbp+2D8h]
  int *v324; // [rsp+3E8h] [rbp+2E0h]
  int v325; // [rsp+3F0h] [rbp+2E8h]
  __int64 v326; // [rsp+3F8h] [rbp+2F0h]
  int v327; // [rsp+400h] [rbp+2F8h]
  const wchar_t *v328; // [rsp+408h] [rbp+300h]
  unsigned int *v329; // [rsp+410h] [rbp+308h]
  int v330; // [rsp+418h] [rbp+310h]
  int *v331; // [rsp+420h] [rbp+318h]
  int v332; // [rsp+428h] [rbp+320h]
  __int64 v333; // [rsp+430h] [rbp+328h]
  int v334; // [rsp+438h] [rbp+330h]
  const wchar_t *v335; // [rsp+440h] [rbp+338h]
  unsigned int *v336; // [rsp+448h] [rbp+340h]
  int v337; // [rsp+450h] [rbp+348h]
  int *v338; // [rsp+458h] [rbp+350h]
  int v339; // [rsp+460h] [rbp+358h]
  __int64 v340; // [rsp+468h] [rbp+360h]
  int v341; // [rsp+470h] [rbp+368h]
  const wchar_t *v342; // [rsp+478h] [rbp+370h]
  unsigned int *v343; // [rsp+480h] [rbp+378h]
  int v344; // [rsp+488h] [rbp+380h]
  int *v345; // [rsp+490h] [rbp+388h]
  int v346; // [rsp+498h] [rbp+390h]
  __int64 v347; // [rsp+4A0h] [rbp+398h]
  int v348; // [rsp+4A8h] [rbp+3A0h]
  const wchar_t *v349; // [rsp+4B0h] [rbp+3A8h]
  unsigned int *v350; // [rsp+4B8h] [rbp+3B0h]
  int v351; // [rsp+4C0h] [rbp+3B8h]
  int *v352; // [rsp+4C8h] [rbp+3C0h]
  int v353; // [rsp+4D0h] [rbp+3C8h]
  __int64 v354; // [rsp+4D8h] [rbp+3D0h]
  int v355; // [rsp+4E0h] [rbp+3D8h]
  const wchar_t *v356; // [rsp+4E8h] [rbp+3E0h]
  int *v357; // [rsp+4F0h] [rbp+3E8h]
  int v358; // [rsp+4F8h] [rbp+3F0h]
  int *v359; // [rsp+500h] [rbp+3F8h]
  int v360; // [rsp+508h] [rbp+400h]
  __int64 v361; // [rsp+510h] [rbp+408h]
  int v362; // [rsp+518h] [rbp+410h]
  const wchar_t *v363; // [rsp+520h] [rbp+418h]
  unsigned int *v364; // [rsp+528h] [rbp+420h]
  int v365; // [rsp+530h] [rbp+428h]
  int *v366; // [rsp+538h] [rbp+430h]
  int v367; // [rsp+540h] [rbp+438h]
  __int64 v368; // [rsp+548h] [rbp+440h]
  int v369; // [rsp+550h] [rbp+448h]
  const wchar_t *v370; // [rsp+558h] [rbp+450h]
  int *v371; // [rsp+560h] [rbp+458h]
  int v372; // [rsp+568h] [rbp+460h]
  int *v373; // [rsp+570h] [rbp+468h]
  int v374; // [rsp+578h] [rbp+470h]
  __int64 v375; // [rsp+580h] [rbp+478h]
  int v376; // [rsp+588h] [rbp+480h]
  const wchar_t *v377; // [rsp+590h] [rbp+488h]
  unsigned int *v378; // [rsp+598h] [rbp+490h]
  int v379; // [rsp+5A0h] [rbp+498h]
  int *v380; // [rsp+5A8h] [rbp+4A0h]
  int v381; // [rsp+5B0h] [rbp+4A8h]
  __int64 v382; // [rsp+5B8h] [rbp+4B0h]
  int v383; // [rsp+5C0h] [rbp+4B8h]
  const wchar_t *v384; // [rsp+5C8h] [rbp+4C0h]
  unsigned int *v385; // [rsp+5D0h] [rbp+4C8h]
  int v386; // [rsp+5D8h] [rbp+4D0h]
  int *v387; // [rsp+5E0h] [rbp+4D8h]
  int v388; // [rsp+5E8h] [rbp+4E0h]
  __int64 v389; // [rsp+5F0h] [rbp+4E8h]
  int v390; // [rsp+5F8h] [rbp+4F0h]
  const wchar_t *v391; // [rsp+600h] [rbp+4F8h]
  unsigned int *v392; // [rsp+608h] [rbp+500h]
  int v393; // [rsp+610h] [rbp+508h]
  int *v394; // [rsp+618h] [rbp+510h]
  int v395; // [rsp+620h] [rbp+518h]
  __int64 v396; // [rsp+628h] [rbp+520h]
  int v397; // [rsp+630h] [rbp+528h]
  const wchar_t *v398; // [rsp+638h] [rbp+530h]
  unsigned int *v399; // [rsp+640h] [rbp+538h]
  int v400; // [rsp+648h] [rbp+540h]
  int *v401; // [rsp+650h] [rbp+548h]
  int v402; // [rsp+658h] [rbp+550h]
  __int64 v403; // [rsp+660h] [rbp+558h]
  int v404; // [rsp+668h] [rbp+560h]
  const wchar_t *v405; // [rsp+670h] [rbp+568h]
  unsigned int *v406; // [rsp+678h] [rbp+570h]
  int v407; // [rsp+680h] [rbp+578h]
  int *v408; // [rsp+688h] [rbp+580h]
  int v409; // [rsp+690h] [rbp+588h]
  __int64 v410; // [rsp+698h] [rbp+590h]
  int v411; // [rsp+6A0h] [rbp+598h]
  const wchar_t *v412; // [rsp+6A8h] [rbp+5A0h]
  unsigned int *v413; // [rsp+6B0h] [rbp+5A8h]
  int v414; // [rsp+6B8h] [rbp+5B0h]
  int *v415; // [rsp+6C0h] [rbp+5B8h]
  int v416; // [rsp+6C8h] [rbp+5C0h]
  __int64 v417; // [rsp+6D0h] [rbp+5C8h]
  int v418; // [rsp+6D8h] [rbp+5D0h]
  const wchar_t *v419; // [rsp+6E0h] [rbp+5D8h]
  unsigned int *v420; // [rsp+6E8h] [rbp+5E0h]
  int v421; // [rsp+6F0h] [rbp+5E8h]
  int *v422; // [rsp+6F8h] [rbp+5F0h]
  int v423; // [rsp+700h] [rbp+5F8h]
  __int64 v424; // [rsp+708h] [rbp+600h]
  int v425; // [rsp+710h] [rbp+608h]
  const wchar_t *v426; // [rsp+718h] [rbp+610h]
  unsigned int *v427; // [rsp+720h] [rbp+618h]
  int v428; // [rsp+728h] [rbp+620h]
  int *v429; // [rsp+730h] [rbp+628h]
  int v430; // [rsp+738h] [rbp+630h]
  __int64 v431; // [rsp+740h] [rbp+638h]
  int v432; // [rsp+748h] [rbp+640h]
  const wchar_t *v433; // [rsp+750h] [rbp+648h]
  int *v434; // [rsp+758h] [rbp+650h]
  int v435; // [rsp+760h] [rbp+658h]
  int *v436; // [rsp+768h] [rbp+660h]
  int v437; // [rsp+770h] [rbp+668h]
  __int64 v438; // [rsp+778h] [rbp+670h]
  int v439; // [rsp+780h] [rbp+678h]
  const wchar_t *v440; // [rsp+788h] [rbp+680h]
  int *v441; // [rsp+790h] [rbp+688h]
  int v442; // [rsp+798h] [rbp+690h]
  int *v443; // [rsp+7A0h] [rbp+698h]
  int v444; // [rsp+7A8h] [rbp+6A0h]
  __int64 v445; // [rsp+7B0h] [rbp+6A8h]
  int v446; // [rsp+7B8h] [rbp+6B0h]
  const wchar_t *v447; // [rsp+7C0h] [rbp+6B8h]
  int *v448; // [rsp+7C8h] [rbp+6C0h]
  int v449; // [rsp+7D0h] [rbp+6C8h]
  int *v450; // [rsp+7D8h] [rbp+6D0h]
  int v451; // [rsp+7E0h] [rbp+6D8h]
  __int64 v452; // [rsp+7E8h] [rbp+6E0h]
  int v453; // [rsp+7F0h] [rbp+6E8h]
  const wchar_t *v454; // [rsp+7F8h] [rbp+6F0h]
  unsigned int *v455; // [rsp+800h] [rbp+6F8h]
  int v456; // [rsp+808h] [rbp+700h]
  int *v457; // [rsp+810h] [rbp+708h]
  int v458; // [rsp+818h] [rbp+710h]
  __int64 v459; // [rsp+820h] [rbp+718h]
  int v460; // [rsp+828h] [rbp+720h]
  const wchar_t *v461; // [rsp+830h] [rbp+728h]
  unsigned int *v462; // [rsp+838h] [rbp+730h]
  int v463; // [rsp+840h] [rbp+738h]
  int *v464; // [rsp+848h] [rbp+740h]
  int v465; // [rsp+850h] [rbp+748h]
  __int64 v466; // [rsp+858h] [rbp+750h]
  int v467; // [rsp+860h] [rbp+758h]
  const wchar_t *v468; // [rsp+868h] [rbp+760h]
  unsigned int *v469; // [rsp+870h] [rbp+768h]
  int v470; // [rsp+878h] [rbp+770h]
  int *v471; // [rsp+880h] [rbp+778h]
  int v472; // [rsp+888h] [rbp+780h]
  __int64 v473; // [rsp+890h] [rbp+788h]
  int v474; // [rsp+898h] [rbp+790h]
  const wchar_t *v475; // [rsp+8A0h] [rbp+798h]
  unsigned int *v476; // [rsp+8A8h] [rbp+7A0h]
  int v477; // [rsp+8B0h] [rbp+7A8h]
  int *v478; // [rsp+8B8h] [rbp+7B0h]
  int v479; // [rsp+8C0h] [rbp+7B8h]
  __int64 v480; // [rsp+8C8h] [rbp+7C0h]
  int v481; // [rsp+8D0h] [rbp+7C8h]
  const wchar_t *v482; // [rsp+8D8h] [rbp+7D0h]
  unsigned int *v483; // [rsp+8E0h] [rbp+7D8h]
  int v484; // [rsp+8E8h] [rbp+7E0h]
  int *v485; // [rsp+8F0h] [rbp+7E8h]
  int v486; // [rsp+8F8h] [rbp+7F0h]
  __int64 v487; // [rsp+900h] [rbp+7F8h]
  int v488; // [rsp+908h] [rbp+800h]
  const wchar_t *v489; // [rsp+910h] [rbp+808h]
  unsigned int *v490; // [rsp+918h] [rbp+810h]
  int v491; // [rsp+920h] [rbp+818h]
  int *v492; // [rsp+928h] [rbp+820h]
  int v493; // [rsp+930h] [rbp+828h]
  __int64 v494; // [rsp+938h] [rbp+830h]
  int v495; // [rsp+940h] [rbp+838h]
  const wchar_t *v496; // [rsp+948h] [rbp+840h]
  unsigned int *v497; // [rsp+950h] [rbp+848h]
  int v498; // [rsp+958h] [rbp+850h]
  int *v499; // [rsp+960h] [rbp+858h]
  int v500; // [rsp+968h] [rbp+860h]
  __int64 v501; // [rsp+970h] [rbp+868h]
  int v502; // [rsp+978h] [rbp+870h]
  const wchar_t *v503; // [rsp+980h] [rbp+878h]
  unsigned int *v504; // [rsp+988h] [rbp+880h]
  int v505; // [rsp+990h] [rbp+888h]
  int *v506; // [rsp+998h] [rbp+890h]
  int v507; // [rsp+9A0h] [rbp+898h]
  __int64 v508; // [rsp+9A8h] [rbp+8A0h]
  int v509; // [rsp+9B0h] [rbp+8A8h]
  const wchar_t *v510; // [rsp+9B8h] [rbp+8B0h]
  unsigned int *v511; // [rsp+9C0h] [rbp+8B8h]
  int v512; // [rsp+9C8h] [rbp+8C0h]
  int *v513; // [rsp+9D0h] [rbp+8C8h]
  int v514; // [rsp+9D8h] [rbp+8D0h]
  __int64 v515; // [rsp+9E0h] [rbp+8D8h]
  int v516; // [rsp+9E8h] [rbp+8E0h]
  const wchar_t *v517; // [rsp+9F0h] [rbp+8E8h]
  unsigned int *v518; // [rsp+9F8h] [rbp+8F0h]
  int v519; // [rsp+A00h] [rbp+8F8h]
  int *v520; // [rsp+A08h] [rbp+900h]
  int v521; // [rsp+A10h] [rbp+908h]
  __int64 v522; // [rsp+A18h] [rbp+910h]
  int v523; // [rsp+A20h] [rbp+918h]
  const wchar_t *v524; // [rsp+A28h] [rbp+920h]
  unsigned int *v525; // [rsp+A30h] [rbp+928h]
  int v526; // [rsp+A38h] [rbp+930h]
  int *v527; // [rsp+A40h] [rbp+938h]
  int v528; // [rsp+A48h] [rbp+940h]
  __int64 v529; // [rsp+A50h] [rbp+948h]
  int v530; // [rsp+A58h] [rbp+950h]
  const wchar_t *v531; // [rsp+A60h] [rbp+958h]
  unsigned int *v532; // [rsp+A68h] [rbp+960h]
  int v533; // [rsp+A70h] [rbp+968h]
  int *v534; // [rsp+A78h] [rbp+970h]
  int v535; // [rsp+A80h] [rbp+978h]
  __int64 v536; // [rsp+A88h] [rbp+980h]
  int v537; // [rsp+A90h] [rbp+988h]
  const wchar_t *v538; // [rsp+A98h] [rbp+990h]
  unsigned int *v539; // [rsp+AA0h] [rbp+998h]
  int v540; // [rsp+AA8h] [rbp+9A0h]
  int *v541; // [rsp+AB0h] [rbp+9A8h]
  int v542; // [rsp+AB8h] [rbp+9B0h]
  __int64 v543; // [rsp+AC0h] [rbp+9B8h]
  int v544; // [rsp+AC8h] [rbp+9C0h]
  const wchar_t *v545; // [rsp+AD0h] [rbp+9C8h]
  unsigned int *v546; // [rsp+AD8h] [rbp+9D0h]
  int v547; // [rsp+AE0h] [rbp+9D8h]
  int *v548; // [rsp+AE8h] [rbp+9E0h]
  int v549; // [rsp+AF0h] [rbp+9E8h]
  __int64 v550; // [rsp+AF8h] [rbp+9F0h]
  int v551; // [rsp+B00h] [rbp+9F8h]
  const wchar_t *v552; // [rsp+B08h] [rbp+A00h]
  unsigned int *v553; // [rsp+B10h] [rbp+A08h]
  int v554; // [rsp+B18h] [rbp+A10h]
  int *v555; // [rsp+B20h] [rbp+A18h]
  int v556; // [rsp+B28h] [rbp+A20h]
  __int64 v557; // [rsp+B30h] [rbp+A28h]
  int v558; // [rsp+B38h] [rbp+A30h]
  __int128 v559; // [rsp+B40h] [rbp+A38h]
  __int128 v560; // [rsp+B50h] [rbp+A48h]
  __int64 v561; // [rsp+B60h] [rbp+A58h]
  _DWORD v562[64]; // [rsp+B68h] [rbp+A60h] BYREF
  unsigned __int16 v563[264]; // [rsp+C68h] [rbp+B60h] BYREF

  v3 = (unsigned __int8 *)this + 2757;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &Dxgk_PowerManagementSupport, a3, this, *v3);
  if ( !*v3 )
  {
    WdLogSingleEntry1(3LL, 4736LL);
    return 0LL;
  }
  v247 = 0;
  v264 = -1;
  v193 = -1;
  v265 = 2000;
  v230 = 35000;
  v202 = 35000;
  v194 = 2000;
  v232 = 50000;
  LODWORD(v6) = 0;
  v205 = 50000;
  v7 = 0;
  v231 = 2000;
  v233 = 100000;
  v206 = 100000;
  v238 = 300000;
  v224 = 300000;
  v239 = 17000;
  v223 = 17000;
  v234 = 200;
  v199 = 200;
  v235 = 200;
  v203 = 200;
  v237 = 100;
  v236 = 100;
  v240 = 25000;
  v225 = 25000;
  v242 = 300;
  v188 = 300;
  v243 = 700;
  v187 = 700;
  v244 = 900;
  v186 = 900;
  v245 = 500;
  v185 = 500;
  v251 = 140000;
  v212 = 140000;
  v252 = 200000;
  v214 = 200000;
  v253 = 250000;
  v215 = 250000;
  v254 = 250000;
  v222 = 250000;
  v204 = 2000;
  v241 = 2000;
  v207 = 2000;
  v255 = 10000;
  v266 = 80;
  v200 = 80;
  v229 = 15000;
  v201 = 15000;
  v246 = 3;
  v198 = 3;
  v226 = 0;
  v248 = 0;
  v197 = 0;
  v249 = 80;
  v208 = 80;
  v250 = 80000;
  v210 = 80000;
  v8 = *((_DWORD *)this + 705) < 2400;
  v209 = 10000;
  v256 = 60000;
  v211 = 60000;
  v257 = 60000;
  v213 = 60000;
  v263 = 80000;
  v228 = 80000;
  v259 = 30000;
  v218 = 30000;
  v262 = 30000;
  v221 = 30000;
  v258 = 15000;
  v217 = 15000;
  v260 = 80;
  v219 = 80;
  v261 = 15000;
  v220 = 15000;
  v216 = 1;
  v184 = 1;
  v190 = 1;
  v183 = 1;
  v189 = 0;
  v182 = 0;
  if ( v8 )
  {
    v274 = L"UseSelfRefreshVRAMInS3";
    v273 = 288;
    v275 = &v184;
    v276 = 67108868;
    v277 = &v216;
    v278 = 4;
    v283 = 0LL;
    v272 = 0LL;
    v279 = 0LL;
    v280 = 0;
    v281 = 0LL;
    v282 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v272, 0LL, 0LL);
  }
  else
  {
    v184 = (*((_DWORD *)this + 571) & 0x1000) == 0;
  }
  v284 = 0LL;
  v286 = L"EnableRuntimePowerManagement";
  v287 = &v183;
  v289 = &v190;
  v293 = L"DisableDevicePowerRequired";
  v294 = &v182;
  v296 = (int *)&v189;
  v300 = L"DefaultLatencyToleranceOther";
  v301 = &v193;
  v303 = &v264;
  v307 = L"DefaultExpectedResidency";
  v308 = &v194;
  v310 = &v265;
  v314 = L"DefaultLatencyToleranceIdle0";
  v315 = &v200;
  v317 = &v266;
  v321 = L"DefaultLatencyToleranceIdle1";
  v322 = &v201;
  v324 = &v229;
  v328 = L"DefaultLatencyToleranceNoContext";
  v329 = &v202;
  v331 = &v230;
  v335 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v336 = &v204;
  v338 = &v231;
  v285 = 288;
  v288 = 67108868;
  v290 = 4;
  v291 = 0LL;
  v292 = 288;
  v295 = 67108868;
  v297 = 4;
  v298 = 0LL;
  v299 = 288;
  v302 = 67108868;
  v304 = 4;
  v305 = 0LL;
  v306 = 288;
  v309 = 67108868;
  v311 = 4;
  v312 = 0LL;
  v313 = 288;
  v316 = 67108868;
  v318 = 4;
  v319 = 0LL;
  v320 = 288;
  v323 = 67108868;
  v325 = 4;
  v326 = 0LL;
  v327 = 288;
  v330 = 67108868;
  v332 = 4;
  v333 = 0LL;
  v334 = 288;
  v337 = 67108868;
  v339 = 4;
  v340 = 0LL;
  v341 = 288;
  v342 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v343 = &v205;
  v345 = &v232;
  v349 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v350 = &v206;
  v352 = &v233;
  v356 = L"DefaultLatencyToleranceTimerPeriod";
  v357 = &v199;
  v359 = &v234;
  v363 = L"DefaultIdleThresholdIdle0";
  v364 = &v203;
  v366 = &v235;
  v370 = L"DefaultIdleThresholdIdle0MonitorOff";
  v371 = &v236;
  v373 = &v237;
  v377 = L"MonitorLatencyTolerance";
  v378 = &v224;
  v380 = &v238;
  v384 = L"MonitorRefreshLatencyTolerance";
  v385 = &v223;
  v387 = &v239;
  v391 = L"DefaultPowerNotRequiredTimeout";
  v392 = &v225;
  v394 = &v240;
  v344 = 67108868;
  v346 = 4;
  v347 = 0LL;
  v348 = 288;
  v351 = 67108868;
  v353 = 4;
  v354 = 0LL;
  v355 = 288;
  v358 = 67108868;
  v360 = 4;
  v361 = 0LL;
  v362 = 288;
  v365 = 67108868;
  v367 = 4;
  v368 = 0LL;
  v369 = 288;
  v372 = 67108868;
  v374 = 4;
  v375 = 0LL;
  v376 = 288;
  v379 = 67108868;
  v381 = 4;
  v382 = 0LL;
  v383 = 288;
  v386 = 67108868;
  v388 = 4;
  v389 = 0LL;
  v390 = 288;
  v393 = 67108868;
  v395 = 4;
  v396 = 0LL;
  v397 = 288;
  v400 = 67108868;
  v398 = L"DefaultActiveIdleThreshold";
  v399 = &v207;
  v401 = &v241;
  v405 = L"ulow";
  v406 = &v188;
  v408 = &v242;
  v412 = L"uhigh";
  v413 = &v187;
  v415 = &v243;
  v419 = L"uglitch";
  v420 = &v186;
  v422 = &v244;
  v426 = L"uideal";
  v427 = &v185;
  v429 = &v245;
  v433 = L"lowdebounce";
  v434 = &v198;
  v436 = &v246;
  v440 = L"EnablePODebounce";
  v441 = &v226;
  v443 = &v247;
  v447 = L"DisablePStateManagement";
  v448 = &v197;
  v450 = &v248;
  v402 = 4;
  v403 = 0LL;
  v404 = 288;
  v407 = 67108868;
  v409 = 4;
  v410 = 0LL;
  v411 = 288;
  v414 = 67108868;
  v416 = 4;
  v417 = 0LL;
  v418 = 288;
  v421 = 67108868;
  v423 = 4;
  v424 = 0LL;
  v425 = 288;
  v428 = 67108868;
  v430 = 4;
  v431 = 0LL;
  v432 = 288;
  v435 = 67108868;
  v437 = 4;
  v438 = 0LL;
  v439 = 288;
  v442 = 67108868;
  v444 = 4;
  v445 = 0LL;
  v446 = 288;
  v449 = 67108868;
  v451 = 4;
  v452 = 0LL;
  v453 = 288;
  v454 = L"DefaultD3TransitionLatencyActivelyUsed";
  v455 = &v208;
  v457 = &v249;
  v461 = L"DefaultD3TransitionLatencyIdleShortTime";
  v462 = &v210;
  v464 = &v250;
  v468 = L"DefaultD3TransitionLatencyIdleLongTime";
  v469 = &v212;
  v471 = &v251;
  v475 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v476 = &v214;
  v478 = &v252;
  v482 = L"DefaultD3TransitionLatencyIdleNoContext";
  v483 = &v215;
  v485 = &v253;
  v489 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v490 = &v222;
  v492 = &v254;
  v496 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v497 = &v209;
  v499 = &v255;
  v503 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v504 = &v211;
  v506 = &v256;
  v510 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v456 = 67108868;
  v458 = 4;
  v459 = 0LL;
  v460 = 288;
  v463 = 67108868;
  v465 = 4;
  v466 = 0LL;
  v467 = 288;
  v470 = 67108868;
  v472 = 4;
  v473 = 0LL;
  v474 = 288;
  v477 = 67108868;
  v479 = 4;
  v480 = 0LL;
  v481 = 288;
  v484 = 67108868;
  v486 = 4;
  v487 = 0LL;
  v488 = 288;
  v491 = 67108868;
  v493 = 4;
  v494 = 0LL;
  v495 = 288;
  v498 = 67108868;
  v500 = 4;
  v501 = 0LL;
  v502 = 288;
  v505 = 67108868;
  v507 = 4;
  v508 = 0LL;
  v509 = 288;
  v512 = 67108868;
  v511 = &v213;
  v514 = 4;
  v513 = &v257;
  v516 = 288;
  v517 = L"DefaultLatencyToleranceMemory";
  v518 = &v217;
  v520 = &v258;
  v524 = L"DefaultLatencyToleranceMemoryNoContext";
  v525 = &v218;
  v527 = &v259;
  v531 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v532 = &v219;
  v534 = &v260;
  v538 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v539 = &v220;
  v541 = &v261;
  v545 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v546 = &v221;
  v548 = &v262;
  v552 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v553 = &v228;
  v555 = &v263;
  v519 = 67108868;
  v521 = 4;
  v523 = 288;
  v526 = 67108868;
  v528 = 4;
  v530 = 288;
  v533 = 67108868;
  v535 = 4;
  v537 = 288;
  v540 = 67108868;
  v542 = 4;
  v544 = 288;
  v547 = 67108868;
  v549 = 4;
  v551 = 288;
  v554 = 67108868;
  v556 = 4;
  v561 = 0LL;
  v515 = 0LL;
  v522 = 0LL;
  v529 = 0LL;
  v536 = 0LL;
  v543 = 0LL;
  v550 = 0LL;
  v557 = 0LL;
  v558 = 0;
  v559 = 0LL;
  v560 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v284, 0LL, 0LL);
  if ( *((int *)this + 705) < 2400 )
  {
    v142 = *((_QWORD *)this + 27);
    i = 0LL;
    if ( (int)DpiGetPnpRegistryKeyName(v142, 2, (__int64 *)&i) >= 0
      && RtlStringCbCopyW(v563, 0x208uLL, *((size_t **)i + 1)) >= 0 )
    {
      v143 = v563;
      v9 = 260LL;
      do
      {
        if ( !*v143 )
          break;
        ++v143;
        --v9;
      }
      while ( v9 );
      v144 = (260 - v9) & -(__int64)(v9 != 0);
      if ( v9 )
      {
        v145 = &v563[v144];
        v146 = 260 - v144;
        if ( 260 != v144 )
        {
          v147 = 2147483646LL;
          v9 = (char *)L"\\DxgkSettings" - (char *)v145;
          do
          {
            if ( !v147 )
              break;
            v148 = *(unsigned __int16 *)((char *)v145 + v9);
            if ( !v148 )
              break;
            *v145 = v148;
            --v147;
            ++v145;
            --v146;
          }
          while ( v146 );
        }
        v149 = v145 - 1;
        if ( v146 )
          v149 = v145;
        *v149 = 0;
        if ( v146 )
        {
          v272 = 0LL;
          v273 = 288;
          v274 = L"UseSelfRefreshVRAMInS3";
          v276 = 67108868;
          v275 = &v184;
          v278 = 4;
          v277 = &v216;
          v279 = 0LL;
          v283 = 0LL;
          v280 = 0;
          v281 = 0LL;
          v282 = 0LL;
          RtlQueryRegistryValuesEx(0LL, v563, &v272, 0LL, 0LL);
        }
      }
    }
  }
  if ( !v183 )
    return 0LL;
  v10 = !v184;
  *((_BYTE *)this + 204) = v182 != 0;
  *((_BYTE *)this + 207) = !v10;
  v11 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
  v12 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 28LL);
  if ( v12 < 0x5019 || *((int *)this + 638) < 0x2000 )
    v13 = 1;
  else
    v13 = *((_DWORD *)this + 72);
  v182 = v13;
  v181 = 0;
  if ( v13 )
  {
    v14 = 0LL;
    do
    {
      *(_QWORD *)&ObjectAttributes.Attributes = &v562[v14];
      memset(&ObjectAttributes, 0, 24);
      ObjectAttributes.Length = 6;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      LODWORD(ObjectAttributes.SecurityDescriptor) = 4;
      if ( DXGADAPTER::IsDxgmms2(this) && v12 >= 0x5019 )
      {
        LODWORD(ObjectAttributes.ObjectName) = 4;
        ObjectAttributes.RootDirectory = &v181;
      }
      AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v15, (struct _DXGKARG_QUERYADAPTERINFO *)&ObjectAttributes, v16);
      v6 = AdapterInfo;
      if ( AdapterInfo < 0 )
      {
        WdLogSingleEntry2(2LL, this, AdapterInfo);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiQueryAdapterInfo failed. Adapter: 0x%p Status: 0x%I64x",
          (__int64)this,
          v6,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v6;
      }
      v7 += v562[v181];
      v14 = v181 + 1;
      v181 = v14;
    }
    while ( (unsigned int)v14 < v13 );
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
  {
    LODWORD(ClientId) = v6;
    McTemplateK0pqq_EtwWriteTransfer(v11, &Dxgk_PowerManagementComponents, v9, this, ClientId, v7);
  }
  if ( !v7 )
  {
    WdLogSingleEntry1(3LL, 4948LL);
    return 0LL;
  }
  if ( v7 > 0xFFFF )
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Miniport returned invalid number of power components:0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v6) = -1073741811;
    goto LABEL_230;
  }
  *((_DWORD *)this + 792) = v7;
  v18 = 520LL * v7;
  if ( !is_mul_ok(v7, 0x208uLL) )
    v18 = -1LL;
  v19 = operator new[](v18, 0x4B677844u, 64LL);
  *((_QWORD *)this + 378) = v19;
  if ( !v19 )
  {
    WdLogSingleEntry1(6LL, this);
    v150 = L"Adapter 0x%I64x: Out of memory allocating m_pPowerComponents";
LABEL_153:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v150, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v6) = -1073741801;
    goto LABEL_230;
  }
  v20 = operator new[](312 * v7 + 160, 0x4B677844u, 256LL);
  v21 = (char *)v20;
  if ( !v20 )
  {
    WdLogSingleEntry1(6LL, this);
    v150 = L"Adapter 0x%I64x: Out of memory allocating pRegistrationInfo";
    goto LABEL_153;
  }
  *(_DWORD *)v20 = 3;
  *(_QWORD *)(v20 + 8) = 2LL;
  *(_DWORD *)(v20 + 96) = v7;
  *(_QWORD *)(v20 + 64) = DxgkPowerRuntimeDeviceDirectedPowerUpCallback;
  *(_QWORD *)(v20 + 72) = DxgkPowerRuntimeDeviceDirectedPowerDownCallback;
  *(_QWORD *)(v20 + 32) = DxgkPowerRuntimeComponentIdleStateCallback;
  *(_QWORD *)(v20 + 16) = DxgkPowerRuntimeComponentActiveCallback;
  *(_QWORD *)(v20 + 24) = DxgkPowerRuntimeComponentIdleCallback;
  *(_QWORD *)(v20 + 40) = DxgkPowerRuntimeDevicePowerRequiredCallback;
  *(_QWORD *)(v20 + 48) = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  *(_QWORD *)(v20 + 56) = DxgkPowerRuntimeControlCallback;
  *(_QWORD *)(v20 + 88) = this;
  v22 = 0;
  v189 = 0;
  v267 = 56LL * v7 + v20 + 104;
  memset(&v269, 0, sizeof(v269));
  v269.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v23 = 0;
  i = (void *)(v267 + 192LL * v7);
  v24 = 0;
  v183 = 0;
  v192 = 0;
  v269.InputDataSize = 4;
  v269.OutputDataSize = 336;
  if ( !v13 )
    goto LABEL_59;
  v25 = 0;
  v190 = 0;
  do
  {
    v26 = 0LL;
    v271 = v24;
    v191 = 0;
    *((_WORD *)this + v24 + 1520) = v23;
    if ( !v562[v24] )
      goto LABEL_58;
    do
    {
      v27 = v23;
      v28 = *((_QWORD *)this + 378) + 8LL;
      v29 = 520LL * v23;
      v227 = 56LL * v23;
      v195 = v26 + v25;
      v269.pInputData = &v195;
      v270 = v29;
      v269.pOutputData = (void *)(v29 + v28);
      v30 = DXGADAPTER::DdiQueryAdapterInfo(this, &v269, v26);
      v6 = v30;
      if ( v30 < 0 )
      {
        WdLogSingleEntry2(2LL, v27, v30);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Miniport failed QueryAdapterInfo(DXGKQAITYPE_POWERCOMPONENTINFO). Component: 0x%I64x, Status: 0x%I64x",
          v27,
          v6,
          0LL,
          0LL,
          0LL);
        goto LABEL_229;
      }
      v31 = v191;
      v32 = v192;
      v33 = v227;
      *(_DWORD *)(v29 + *((_QWORD *)this + 378)) = v192;
      *(_WORD *)(*((_QWORD *)this + 378) + v29 + 4) = v31;
      *(_WORD *)(*((_QWORD *)this + 378) + v29 + 6) = v183;
      v34 = *((_QWORD *)this + 378) + v29;
      *(_DWORD *)&v21[v33 + 132] = *(_DWORD *)(v34 + 8);
      if ( (unsigned int)(*(_DWORD *)(v34 + 8) - 1) > 7 )
      {
        WdLogSingleEntry3(2LL, v27, *(unsigned int *)(v34 + 8), 0LL);
        v152 = L"Miniport returned invalid number of F states for component:0x%I64x 0x%I64x";
        StartRoutine = *(unsigned int *)(v34 + 8);
        goto LABEL_174;
      }
      *(_OWORD *)&v21[v33 + 104] = *(_OWORD *)(v34 + 220);
      *(_BYTE *)(v34 + 275) = 0;
      v35 = *(_DWORD *)(v34 + 216);
      if ( v35 >= 0x20 )
      {
        v151 = 2LL;
        WdLogSingleEntry2(2LL, v27, 2LL);
        v152 = L"Reserved flags are not zero. Component:0x%I64x";
LABEL_172:
        StartRoutine = v151;
LABEL_174:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v152, v27, StartRoutine, 0LL, 0LL, 0LL);
        goto LABEL_176;
      }
      if ( (v35 & 4) != 0 )
        *(_QWORD *)&v21[v33 + 120] |= 1uLL;
      if ( !v226 )
        *(_QWORD *)&v21[v33 + 120] |= 2uLL;
      if ( (*(_DWORD *)(v34 + 216) & 0x10) != 0 )
      {
        if ( ((*(_DWORD *)(v34 + 208) - 3) & 0xFFFFFFFB) != 0 )
        {
          v151 = 5095LL;
          WdLogSingleEntry2(2LL, v27, 5095LL);
          v152 = L"Power component ActiveInD3 flag can only be used with DXGK_POWER_COMPONENT_MEMORY and DXGK_POWER_COMPON"
                  "ENT_SHARED. Component:0x%I64x";
          goto LABEL_172;
        }
        if ( *(_DWORD *)(v34 + 8) != 2 )
        {
          v151 = 5101LL;
          WdLogSingleEntry2(2LL, v27, 5101LL);
          v152 = L"F state count must be 2 when the ActiveInD3 flag is set. Component:0x%I64x";
          goto LABEL_172;
        }
        if ( *(_QWORD *)(v34 + 40) )
        {
          v151 = 5107LL;
          WdLogSingleEntry2(2LL, v27, 5107LL);
          v152 = L"TransitionLatency for the F1 state must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          goto LABEL_172;
        }
        v227 = v34 + 276;
        if ( *(_DWORD *)(v34 + 276) )
        {
          v151 = 5113LL;
          WdLogSingleEntry2(2LL, v27, 5113LL);
          v152 = L"Provider count must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          goto LABEL_172;
        }
      }
      else
      {
        v8 = *(_DWORD *)(v34 + 276) <= 0x10u;
        v227 = v34 + 276;
        if ( !v8 )
        {
          WdLogSingleEntry2(2LL, v27, 3LL);
          v152 = L"Invalid component ProviderCount. Component:0x%I64x";
          StartRoutine = 3LL;
          goto LABEL_174;
        }
      }
      v36 = *(_DWORD *)(v34 + 208);
      if ( v36 == 4 )
      {
        if ( *((_DWORD *)this + 794) == -1 )
        {
          *((_DWORD *)this + 794) = v32;
          goto LABEL_42;
        }
        v151 = 5161LL;
        WdLogSingleEntry2(2LL, v27, 5161LL);
        v152 = L"DXGK_POWER_COMPONENT_MEMORY_REFRESH component is defined second time. Component:0x%I64x";
        goto LABEL_172;
      }
      if ( v36 != 6 )
        goto LABEL_42;
      if ( *((_DWORD *)this + 793) != -1 )
      {
        WdLogSingleEntry2(3LL, v27, 5135LL);
        goto LABEL_42;
      }
      *((_DWORD *)this + 793) = v32;
      *((_QWORD *)this + 423) = *((_QWORD *)this + 378) + v270;
      if ( *(_DWORD *)(v34 + 8) == 2 )
      {
        *((_BYTE *)this + 3464) = 1;
        goto LABEL_42;
      }
      if ( *(_DWORD *)(v34 + 8) > 2u )
      {
        v151 = 5151LL;
        WdLogSingleEntry2(2LL, v27, 5151LL);
        v152 = L"F state count for the DXGK_POWER_COMPONENT_D3_TRANSITION component must be 1 or 2. Component:0x%I64x";
        goto LABEL_172;
      }
LABEL_42:
      v37 = (unsigned int *)v227;
      *(_DWORD *)&v21[v33 + 144] = *(_DWORD *)v227;
      memmove(i, (const void *)(v34 + 280), 4LL * *v37);
      v38 = (char *)i;
      v39 = (unsigned int *)v227;
      v40 = v267;
      *(_QWORD *)&v21[v33 + 152] = i;
      v41 = *v39;
      *(_QWORD *)&v21[v33 + 136] = v40;
      v42 = 0;
      for ( i = &v38[4 * v41]; v42 < *(_DWORD *)(v34 + 8); v267 = v40 )
      {
        v43 = *(_QWORD *)(v34 + 24LL * v42 + 16);
        *(_QWORD *)v40 = v43;
        *(_QWORD *)(v40 + 8) = *(_QWORD *)(v34 + 24LL * v42 + 24);
        *(_DWORD *)(v40 + 16) = *(_DWORD *)(v34 + 24LL * v42 + 32);
        v44 = *(_QWORD *)(v40 + 8);
        if ( *(_QWORD *)(v34 + 24LL * v42 + 16) == -1LL )
          v43 = -1LL;
        *(_QWORD *)v40 = v43;
        if ( *(_QWORD *)(v34 + 24LL * v42 + 24) == -1LL )
          v44 = -1LL;
        *(_QWORD *)(v40 + 8) = v44;
        v45 = *(_DWORD *)(v40 + 16);
        if ( *(_DWORD *)(v34 + 24LL * v42 + 32) == -1 )
          v45 = -1;
        *(_DWORD *)(v40 + 16) = v45;
        if ( v42 )
        {
          v129 = *(_DWORD *)(v34 + 24LL * v42 + 32);
          if ( v129 != -1 )
          {
            v130 = *(_DWORD *)(v34 + 24 * (v42 - 1 + 1LL) + 8);
            if ( v130 != -1 && v129 > v130 )
            {
              WdLogSingleEntry2(2LL, v27, 5LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"NominalPower must be decreasing for higher F states. Component:0x%I64x",
                v27,
                5LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_150;
            }
          }
          v131 = *(_QWORD *)(v34 + 24LL * v42 + 16);
          if ( v131 != -1LL )
          {
            v132 = *(_QWORD *)(v34 + 24LL * (v42 - 1) + 16);
            if ( v131 < v132 && v132 != -1LL )
            {
              WdLogSingleEntry2(2LL, v27, 6LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"TransitionLatency must be increasing for higher F states. Component:0x%I64x",
                v27,
                6LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_150;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v34 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v34 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            WdLogSingleEntry2(2LL, v27, 3LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"TransitionLatency and ResidencyRequirement must be zero for the F0 state. Component:0x%I64x",
              v27,
              3LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_150;
          }
          if ( !*(_DWORD *)(v34 + 32) )
          {
            WdLogSingleEntry2(2LL, v27, 4LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"NominalPower must not be zero for the F0 state. Component:0x%I64x",
              v27,
              4LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_150;
          }
        }
        v40 += 24LL;
        ++v42;
      }
      v46 = *(_DWORD *)(v34 + 208);
      v26 = (unsigned int)(v191 + 1);
      v25 = v190;
      v23 = v192 + 1;
      ++v191;
      v47 = v189 + 1;
      if ( v46 )
        v47 = v189;
      ++v192;
      v22 = v47;
      v189 = v47;
    }
    while ( (unsigned int)v26 < v562[v271] );
    v13 = v182;
    v24 = v183;
LABEL_58:
    ++v24;
    v25 += 0x10000;
    v183 = v24;
    v190 = v25;
  }
  while ( v24 < v13 );
LABEL_59:
  if ( *((_DWORD *)this + 794) == -1 && !*((_BYTE *)this + 3464) )
    *((_QWORD *)this + 423) = 0LL;
  if ( *((int *)this + 705) < 1300 || !v22 || v197 )
    goto LABEL_88;
  if ( v188 > 0x3E8 || v187 > 0x3E8 || v186 > 0x3E8 || v185 > 0x3E8 || v188 >= v185 || v185 >= v187 || v187 >= v186 )
  {
    WdLogSingleEntry4(2LL, v188, v187, v186, v185);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"P-State engine regkey validation error - low: 0x%I64x high: 0x%I64x glitch: 0x%I64x ideal: 0x%I64x",
      v188,
      v187,
      v186,
      v185,
      0LL);
    goto LABEL_150;
  }
  v48 = 248LL * v22;
  v269.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v269.OutputDataSize = 136;
  if ( !is_mul_ok(v22, 0xF8uLL) )
    v48 = -1LL;
  v49 = operator new[](v48, 0x4B677844u, 64LL);
  *((_QWORD *)this + 529) = v49;
  *((_DWORD *)this + 1060) = v22;
  if ( !v49 )
  {
    WdLogSingleEntry1(6LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Adapter 0x%I64x: Out of memory allocating m_NodePStateData",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v6) = -1073741801;
    goto LABEL_229;
  }
  v50 = 0;
  for ( j = 0LL; v50 < *((_DWORD *)this + 792); ++v50 )
  {
    v52 = *((_QWORD *)this + 378);
    v53 = 520LL * v50;
    if ( !*(_DWORD *)(v53 + v52 + 208) )
    {
      *(_QWORD *)(v53 + v52 + 512) = *((_QWORD *)this + 529) + 248LL * (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
  }
  v54 = 0;
  *((_DWORD *)this + 1112) = v186;
  *((_DWORD *)this + 1113) = v187;
  *((_DWORD *)this + 1114) = v188;
  *((_DWORD *)this + 1115) = v185;
  *((_DWORD *)this + 1116) = v198;
  v181 = 0;
  v55 = 0LL;
  while ( 2 )
  {
    v56 = *(_QWORD *)(520 * v55 + *((_QWORD *)this + 378) + 512);
    if ( !v56 )
    {
LABEL_186:
      v181 = ++v54;
      v55 = v54;
      if ( v54 >= v7 )
        goto LABEL_87;
      continue;
    }
    break;
  }
  v269.pOutputData = *(void **)(520 * v55 + *((_QWORD *)this + 378) + 512);
  v269.pInputData = &v181;
  v57 = DXGADAPTER::DdiQueryAdapterInfo(this, &v269, j);
  v62 = v57;
  if ( v57 >= 0 )
  {
    v154 = v181;
    *(_QWORD *)(v56 + 136) = this;
    *(_DWORD *)(v56 + 144) = v154;
    *(_QWORD *)(v56 + 152) = v56;
    KeInitializeSpinLock((PKSPIN_LOCK)(v56 + 160));
    *(_DWORD *)(v56 + 244) = -1;
    *(_BYTE *)(v56 + 240) = 0;
    v54 = v181;
    goto LABEL_186;
  }
  v63 = WdLogNewEntry5_WdTrace(v59, v58, v60, v61);
  v64 = v181;
  *(_QWORD *)(v63 + 32) = v62;
  *(_QWORD *)(v63 + 24) = v64;
  for ( k = 0; k < *((_DWORD *)this + 792); ++k )
  {
    v66 = 520LL * k;
    v67 = *((_QWORD *)this + 378);
    if ( !*(_DWORD *)(v66 + v67 + 208) )
      *(_QWORD *)(v66 + v67 + 512) = 0LL;
  }
  v68 = (void *)*((_QWORD *)this + 529);
  *((_DWORD *)this + 1060) = 0;
  operator delete(v68);
  *((_QWORD *)this + 529) = 0LL;
LABEL_87:
  v69 = 0;
  v195 = *((_DWORD *)this + 1060);
  if ( v195 )
  {
    v155 = *((_QWORD *)this + 529);
    while ( 1 )
    {
      v156 = 248LL * v69;
      v157 = *(_DWORD *)(v156 + v155);
      v158 = *(unsigned int *)(v156 + v155 + 144);
      if ( v157 > 0x20 )
        break;
      v159 = 0;
      if ( v157 )
      {
        v160 = 62LL * v69;
        while ( 1 )
        {
          v161 = v159;
          v162 = *(_DWORD *)(v155 + 4 * (v159 + v160) + 4);
          if ( !v162 )
            break;
          if ( v159 )
          {
            v163 = v159 - 1;
            if ( v162 > *(_DWORD *)(v155 + 4 * (v160 + v163) + 4) )
            {
              v164 = *(unsigned int *)(v156 + v155 + 144);
              WdLogSingleEntry3(2LL, v158, v159, (unsigned int)v163);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"P-States must have monotonically decreasing operating frequency. Component:0x%I64x, P-State1:0x"
                          "%I64x, P-State2:0x%I64x",
                v164,
                v161,
                v163,
                0LL,
                0LL);
              goto LABEL_176;
            }
          }
          if ( ++v159 >= v157 )
            goto LABEL_197;
        }
        v153 = *(unsigned int *)(v156 + v155 + 144);
        WdLogSingleEntry2(2LL, v158, v159);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"P-State cannot specify 0 operating frequency. Component:0x%I64x, P-State:0x%I64x",
          v153,
          v161,
          0LL,
          0LL,
          0LL);
LABEL_176:
        LODWORD(v6) = -1073741811;
        goto LABEL_229;
      }
LABEL_197:
      if ( ++v69 >= v195 )
        goto LABEL_88;
    }
    v165 = *(unsigned int *)(v156 + v155 + 144);
    WdLogSingleEntry1(2LL, v165);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"P-State StateCount cannot be larger than DXGK_MAX_P_STATES. Component:0x%I64x",
      v165,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_150:
    LODWORD(v6) = -1073741811;
    goto LABEL_229;
  }
LABEL_88:
  v70 = (ADAPTER_RENDER *)*((_QWORD *)this + 366);
  *((_DWORD *)this + 864) = v199;
  if ( v70 )
  {
    v71 = ADAPTER_RENDER::InitializePowerManagement(v70);
    v6 = v71;
    if ( v71 < 0 )
    {
      v166 = 7LL;
      WdLogSingleEntry2(2LL, v71, 7LL);
      v167 = L"InitializePowerManagement failed for render adapter:0x%I64x";
      goto LABEL_228;
    }
  }
  v72 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 365);
  if ( v72 )
  {
    v73 = ADAPTER_DISPLAY::InitializePowerManagement(v72);
    v6 = v73;
    if ( v73 < 0 )
    {
      WdLogSingleEntry2(2LL, v73, 8LL);
      v168 = L"InitializePowerManagement failed for display adapter:0x%I64x";
      goto LABEL_203;
    }
  }
  v74 = PoFxRegisterDevice(*((_QWORD *)this + 27), v21, (char *)this + 3032);
  v6 = v74;
  if ( v74 < 0 )
  {
    WdLogSingleEntry1(2LL, v74);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoFxRegisterDevice failed with status:0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_229;
  }
  KeInitializeEvent((PRKEVENT)this + 133, SynchronizationEvent, 0);
  *((_BYTE *)this + 3460) = 0;
  *((_QWORD *)this + 435) = (char *)this + 3472;
  *((_QWORD *)this + 434) = (char *)this + 3472;
  TimeIncrement = KeQueryTimeIncrement();
  *((_QWORD *)this + 405) = 0LL;
  *((_QWORD *)this + 407) = 0LL;
  *((_QWORD *)this + 411) = 0LL;
  *((_QWORD *)this + 413) = 0LL;
  v76 = v201;
  *((_QWORD *)this + 402) = 10LL * v200;
  v77 = 5 * v76;
  v78 = v202;
  *((_QWORD *)this + 404) = 2 * v77;
  v79 = 10000LL * v203;
  *((_QWORD *)this + 406) = 10 * v78;
  v80 = (unsigned int)(v79 / TimeIncrement);
  v81 = v204;
  *((_QWORD *)this + 403) = v80;
  *((_QWORD *)this + 409) = v80;
  v82 = 5 * v81;
  v83 = v205;
  *((_QWORD *)this + 408) = 2 * v82;
  v84 = 5 * v83;
  v85 = v206;
  *((_QWORD *)this + 410) = 2 * v84;
  v86 = 5 * v85;
  v87 = v207;
  *((_QWORD *)this + 412) = 2 * v86;
  *((_QWORD *)this + 414) = (char *)this + 3216;
  v88 = 5 * v87;
  v89 = v208;
  *((_QWORD *)this + 446) = 2 * v88;
  v90 = 10000LL * v209;
  *((_QWORD *)this + 415) = 10 * v89;
  v91 = v210;
  *((_QWORD *)this + 416) = (unsigned int)(v90 / TimeIncrement);
  v92 = 10000LL * v211;
  *((_QWORD *)this + 417) = 10 * v91;
  v93 = v212;
  *((_QWORD *)this + 418) = (unsigned int)(v92 / TimeIncrement);
  v94 = 5 * v93;
  v95 = 10000LL * v213;
  *((_QWORD *)this + 419) = 2 * v94;
  v96 = v95;
  v97 = v214;
  *((_QWORD *)this + 422) = 0LL;
  *((_QWORD *)this + 420) = (unsigned int)(v96 / TimeIncrement);
  v98 = 5 * v97;
  v99 = v215;
  *((_QWORD *)this + 421) = 2 * v98;
  v100 = 5 * v99;
  v101 = v222;
  *((_QWORD *)this + 424) = 2 * v100;
  v102 = 5 * v101;
  v103 = v217;
  *((_QWORD *)this + 425) = 2 * v102;
  v104 = 5 * v103;
  v105 = v218;
  *((_QWORD *)this + 426) = 2 * v104;
  v106 = 5 * v105;
  v107 = v219;
  *((_QWORD *)this + 427) = 2 * v106;
  v108 = 5 * v107;
  v109 = v220;
  *((_QWORD *)this + 428) = 2 * v108;
  v110 = 5 * v109;
  v111 = v221;
  *((_QWORD *)this + 429) = 2 * v110;
  v112 = 5 * v111;
  v113 = v228;
  *((_QWORD *)this + 430) = 2 * v112;
  v180 = 0;
  *((_QWORD *)this + 431) = 10 * v113;
  *((_QWORD *)this + 440) = (char *)this + 3512;
  *((_QWORD *)this + 439) = (char *)this + 3512;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 445);
  v114 = 0;
  while ( 2 )
  {
    v115 = *((_QWORD *)this + 378);
    v116 = 520LL * v114;
    v117 = (DXGADAPTER *)(v116 + v115 + 424);
    *(_BYTE *)(v116 + v115 + 356) = 1;
    *(_OWORD *)v117 = 0LL;
    v118 = *(_DWORD *)(v116 + v115 + 208);
    if ( v118 )
    {
      v119 = v118 - 1;
      if ( !v119 )
      {
        v120 = v224;
        goto LABEL_97;
      }
      v169 = v119 - 1;
      if ( v169 )
      {
        v170 = v169 - 1;
        if ( v170 )
        {
          v171 = v170 - 1;
          if ( v171 )
          {
            v172 = v171 - 2;
            if ( v172 )
            {
              if ( v172 != 1 )
              {
                v121 = *(_DWORD *)(v116 + v115 + 4);
                v123 = this;
                if ( v193 == -1 )
                  v122 = -1LL;
                else
                  v122 = 10LL * v193;
                goto LABEL_98;
              }
              v180 = 1;
              if ( (*(_DWORD *)(v116 + v115 + 216) & 0x10) != 0 )
              {
                *(_BYTE *)(v116 + v115 + 360) = 1;
                *(_BYTE *)(v116 + v115 + 356) = 0;
                *(_DWORD *)(v116 + v115 + 344) = 1;
              }
            }
          }
        }
        else
        {
          v173 = (DXGADAPTER **)*((_QWORD *)this + 442);
          if ( *v173 != (DXGADAPTER *)((char *)this + 3528) )
LABEL_126:
            __fastfail(3u);
          *(_QWORD *)v117 = (char *)this + 3528;
          *((_QWORD *)v117 + 1) = v173;
          *v173 = v117;
          *((_QWORD *)this + 442) = v117;
          if ( (*(_DWORD *)(v116 + v115 + 216) & 0x10) != 0 )
            *(_BYTE *)(v116 + v115 + 360) = 1;
        }
      }
      else
      {
        v120 = v223;
LABEL_97:
        v121 = *(_DWORD *)(v116 + v115 + 4);
        v122 = 10 * v120;
        v123 = this;
LABEL_98:
        DXGADAPTER::SetPowerComponentLatencyCB(v123, v121, v122);
      }
    }
    else
    {
      *(_BYTE *)(v116 + v115 + 357) = 1;
      v133 = (DXGADAPTER **)*((_QWORD *)this + 444);
      if ( *v133 != (DXGADAPTER *)((char *)this + 3544) )
        goto LABEL_126;
      *((_QWORD *)v117 + 1) = v133;
      *(_QWORD *)v117 = (char *)this + 3544;
      *v133 = v117;
      v134 = 0LL;
      *((_QWORD *)this + 444) = v117;
      v135 = *(_DWORD *)(v116 + v115 + 8);
      if ( v135 > 1 )
      {
        v136 = (unsigned __int64 *)(v116 + v115 + 40);
        v137 = v135 - 1;
        do
        {
          v138 = *v136;
          v136 += 3;
          if ( v134 >= v138 )
            v138 = v134;
          v134 = v138;
          --v137;
        }
        while ( v137 );
      }
      *(_DWORD *)(v116 + v115 + 388) = 1;
      v139 = (unsigned __int64 *)((char *)this + 3216);
      v140 = 0;
      while ( *v139 < v134 )
      {
        ++v140;
        v139 += 2;
        if ( v140 >= 2 )
          goto LABEL_125;
      }
      *(_DWORD *)(v116 + v115 + 388) = v140;
LABEL_125:
      v141 = *(_DWORD *)(v116 + v115 + 4);
      *(_DWORD *)(v116 + v115 + 384) = 2;
      DXGADAPTER::SetPowerComponentLatencyCB(this, v141, *(_QWORD *)(*((_QWORD *)this + 414) + 32LL));
      ++*((_DWORD *)this + 796);
    }
    if ( v194 == -1 )
      v124 = -1LL;
    else
      v124 = 10000LL * v194;
    DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v116 + v115 + 4), v124);
    KeInitializeSpinLock((PKSPIN_LOCK)(v116 + v115 + 504));
    if ( *(_DWORD *)(v116 + v115 + 8) <= 1u || (v125 = *(_QWORD *)(v116 + v115 + 48), v125 == -1) )
    {
      v126 = *((_QWORD *)this + 446);
    }
    else
    {
      v126 = *((_QWORD *)this + 446);
      if ( v125 > v126 )
        v126 = *(_QWORD *)(v116 + v115 + 48);
    }
    ++v114;
    *(_QWORD *)(v116 + v115 + 496) = v126;
    if ( v114 < v7 )
      continue;
    break;
  }
  DXGADAPTER::UpdateLatencyTolerances(this);
  PoFxSetDeviceIdleTimeout(*((_QWORD *)this + 379), 10LL * v225);
  if ( *((_DWORD *)this + 103) != 1297040209 )
    goto LABEL_107;
  if ( *((_DWORD *)this + 638) != 4608 )
    goto LABEL_107;
  KeInitializeEvent((PRKEVENT)((char *)this + 3712), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 3736), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 3760), SynchronizationEvent, 0);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 473);
  *((_QWORD *)this + 476) = (char *)this + 3800;
  *((_QWORD *)this + 475) = (char *)this + 3800;
  InitializeSListHead((PSLIST_HEADER)this + 239);
  v174 = (struct _SLIST_ENTRY *)((char *)this + 3856);
  v175 = 8LL;
  do
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 239, v174);
    v174 += 2;
    --v175;
  }
  while ( v175 );
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v176 = PsCreateSystemThread(
           (PHANDLE)this + 480,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
           this);
  v6 = v176;
  if ( v176 >= 0 )
  {
LABEL_107:
    v127 = *((_QWORD *)this + 379);
    v128 = *(_QWORD *)(*((_QWORD *)this + 27) + 64LL);
    *(_BYTE *)(v128 + 482) = 1;
    *(_QWORD *)(v128 + 488) = v127;
    *(_BYTE *)(v128 + 5680) = v180;
    if ( !v180
      || (v177 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v128 + 152),
                   &GUID_DEVINTERFACE_GRAPHICSPOWER,
                   0LL,
                   (PUNICODE_STRING)(v128 + 5664)),
          v6 = v177,
          v177 >= 0) )
    {
      operator delete(v21);
      return 0LL;
    }
    WdLogSingleEntry2(2LL, v177, 8LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"InitializePowerManagement failed to register GRAPHICSPOWER interface:0x%I64x",
      v6,
      8LL,
      0LL,
      0LL,
      0LL);
    DXGADAPTER::DestroySerializeFStateTransitWorker(this);
    v166 = 9LL;
    WdLogSingleEntry2(2LL, v6, 9LL);
    v167 = L"Port power management enable failed:0x%I64x";
LABEL_228:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v167, v6, v166, 0LL, 0LL, 0LL);
    goto LABEL_229;
  }
  WdLogSingleEntry2(2LL, v176, 8LL);
  v168 = L"InitializePowerManagement failed to create worker thread for display adapter:0x%I64x";
LABEL_203:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v168, v6, 8LL, 0LL, 0LL, 0LL);
LABEL_229:
  operator delete(v21);
LABEL_230:
  if ( *((_QWORD *)this + 379) )
  {
    PoFxUnregisterDevice();
    *((_QWORD *)this + 379) = 0LL;
  }
  return (unsigned int)v6;
}
