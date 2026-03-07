char PopDiagTraceDirtyTransition()
{
  char result; // al
  __int64 *v1; // rcx
  char *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r10
  unsigned __int8 v6; // al
  char v7; // al
  bool v8; // al
  char v9; // al
  bool v10; // al
  bool v11; // al
  bool v12; // al
  bool v13; // al
  bool v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  bool v20; // al
  char v21; // al
  bool v22; // al
  char v23; // [rsp+48h] [rbp-C0h] BYREF
  char v24; // [rsp+49h] [rbp-BFh] BYREF
  char v25; // [rsp+4Ah] [rbp-BEh] BYREF
  char v26; // [rsp+4Bh] [rbp-BDh] BYREF
  char v27; // [rsp+4Ch] [rbp-BCh] BYREF
  char v28; // [rsp+4Dh] [rbp-BBh] BYREF
  char v29; // [rsp+4Eh] [rbp-BAh] BYREF
  char v30; // [rsp+4Fh] [rbp-B9h] BYREF
  char v31; // [rsp+50h] [rbp-B8h] BYREF
  char v32; // [rsp+51h] [rbp-B7h] BYREF
  bool v33; // [rsp+52h] [rbp-B6h] BYREF
  char v34; // [rsp+53h] [rbp-B5h] BYREF
  bool v35; // [rsp+54h] [rbp-B4h] BYREF
  bool v36; // [rsp+55h] [rbp-B3h] BYREF
  char v37; // [rsp+56h] [rbp-B2h] BYREF
  char v38; // [rsp+57h] [rbp-B1h] BYREF
  bool v39; // [rsp+58h] [rbp-B0h] BYREF
  bool v40; // [rsp+59h] [rbp-AFh] BYREF
  char v41; // [rsp+5Ah] [rbp-AEh] BYREF
  bool v42; // [rsp+5Bh] [rbp-ADh] BYREF
  char v43; // [rsp+5Ch] [rbp-ACh] BYREF
  char v44; // [rsp+5Dh] [rbp-ABh] BYREF
  char v45; // [rsp+5Eh] [rbp-AAh] BYREF
  char v46; // [rsp+5Fh] [rbp-A9h] BYREF
  char v47; // [rsp+60h] [rbp-A8h] BYREF
  char v48; // [rsp+61h] [rbp-A7h] BYREF
  char v49; // [rsp+62h] [rbp-A6h] BYREF
  bool v50; // [rsp+63h] [rbp-A5h] BYREF
  char v51; // [rsp+64h] [rbp-A4h] BYREF
  char v52; // [rsp+65h] [rbp-A3h] BYREF
  char v53; // [rsp+66h] [rbp-A2h] BYREF
  bool v54; // [rsp+67h] [rbp-A1h] BYREF
  char v55; // [rsp+68h] [rbp-A0h] BYREF
  bool v56; // [rsp+69h] [rbp-9Fh] BYREF
  bool v57; // [rsp+6Ah] [rbp-9Eh] BYREF
  char v58; // [rsp+6Bh] [rbp-9Dh] BYREF
  char v59; // [rsp+6Ch] [rbp-9Ch] BYREF
  char v60; // [rsp+6Dh] [rbp-9Bh] BYREF
  __int16 v61; // [rsp+70h] [rbp-98h] BYREF
  __int16 v62; // [rsp+74h] [rbp-94h] BYREF
  int v63; // [rsp+78h] [rbp-90h] BYREF
  int v64; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v65; // [rsp+80h] [rbp-88h] BYREF
  int v66; // [rsp+84h] [rbp-84h] BYREF
  int v67; // [rsp+88h] [rbp-80h] BYREF
  int v68; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v69; // [rsp+90h] [rbp-78h] BYREF
  int v70; // [rsp+94h] [rbp-74h] BYREF
  int v71; // [rsp+98h] [rbp-70h] BYREF
  int v72; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v73; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v74; // [rsp+A4h] [rbp-64h] BYREF
  int v75; // [rsp+A8h] [rbp-60h] BYREF
  int v76; // [rsp+ACh] [rbp-5Ch] BYREF
  int v77; // [rsp+B0h] [rbp-58h] BYREF
  int v78; // [rsp+B4h] [rbp-54h] BYREF
  int v79; // [rsp+B8h] [rbp-50h] BYREF
  int v80; // [rsp+BCh] [rbp-4Ch] BYREF
  int v81; // [rsp+C0h] [rbp-48h] BYREF
  int v82; // [rsp+C4h] [rbp-44h] BYREF
  int v83; // [rsp+C8h] [rbp-40h] BYREF
  int v84; // [rsp+CCh] [rbp-3Ch] BYREF
  int v85; // [rsp+D0h] [rbp-38h] BYREF
  int v86; // [rsp+D4h] [rbp-34h] BYREF
  int v87; // [rsp+D8h] [rbp-30h] BYREF
  int v88; // [rsp+DCh] [rbp-2Ch] BYREF
  int v89; // [rsp+E0h] [rbp-28h] BYREF
  int v90; // [rsp+E4h] [rbp-24h] BYREF
  int v91; // [rsp+E8h] [rbp-20h] BYREF
  int v92; // [rsp+ECh] [rbp-1Ch] BYREF
  int v93; // [rsp+F0h] [rbp-18h] BYREF
  int v94; // [rsp+F4h] [rbp-14h] BYREF
  int v95; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v96; // [rsp+100h] [rbp-8h] BYREF
  __int64 v97; // [rsp+108h] [rbp+0h] BYREF
  __int64 v98; // [rsp+110h] [rbp+8h] BYREF
  __int64 v99; // [rsp+118h] [rbp+10h] BYREF
  __int64 v100; // [rsp+120h] [rbp+18h] BYREF
  __int64 v101; // [rsp+128h] [rbp+20h] BYREF
  __int64 v102; // [rsp+130h] [rbp+28h] BYREF
  __int64 v103; // [rsp+138h] [rbp+30h] BYREF
  __int64 v104; // [rsp+140h] [rbp+38h] BYREF
  __int64 v105; // [rsp+148h] [rbp+40h] BYREF
  __int64 v106; // [rsp+150h] [rbp+48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+158h] [rbp+50h] BYREF
  char *v108; // [rsp+178h] [rbp+70h]
  __int64 v109; // [rsp+180h] [rbp+78h]
  int *v110; // [rsp+188h] [rbp+80h]
  __int64 v111; // [rsp+190h] [rbp+88h]
  int *v112; // [rsp+198h] [rbp+90h]
  __int64 v113; // [rsp+1A0h] [rbp+98h]
  __int64 *v114; // [rsp+1A8h] [rbp+A0h]
  __int64 v115; // [rsp+1B0h] [rbp+A8h]
  __int64 *v116; // [rsp+1B8h] [rbp+B0h]
  __int64 v117; // [rsp+1C0h] [rbp+B8h]
  __int64 *v118; // [rsp+1C8h] [rbp+C0h]
  __int64 v119; // [rsp+1D0h] [rbp+C8h]
  __int64 *v120; // [rsp+1D8h] [rbp+D0h]
  __int64 v121; // [rsp+1E0h] [rbp+D8h]
  __int64 *v122; // [rsp+1E8h] [rbp+E0h]
  __int64 v123; // [rsp+1F0h] [rbp+E8h]
  int *v124; // [rsp+1F8h] [rbp+F0h]
  __int64 v125; // [rsp+200h] [rbp+F8h]
  char *v126; // [rsp+208h] [rbp+100h]
  __int64 v127; // [rsp+210h] [rbp+108h]
  char *v128; // [rsp+218h] [rbp+110h]
  __int64 v129; // [rsp+220h] [rbp+118h]
  char *v130; // [rsp+228h] [rbp+120h]
  __int64 v131; // [rsp+230h] [rbp+128h]
  char *v132; // [rsp+238h] [rbp+130h]
  __int64 v133; // [rsp+240h] [rbp+138h]
  char *v134; // [rsp+248h] [rbp+140h]
  __int64 v135; // [rsp+250h] [rbp+148h]
  char *v136; // [rsp+258h] [rbp+150h]
  __int64 v137; // [rsp+260h] [rbp+158h]
  bool *v138; // [rsp+268h] [rbp+160h]
  __int64 v139; // [rsp+270h] [rbp+168h]
  char *v140; // [rsp+278h] [rbp+170h]
  __int64 v141; // [rsp+280h] [rbp+178h]
  bool *v142; // [rsp+288h] [rbp+180h]
  __int64 v143; // [rsp+290h] [rbp+188h]
  bool *v144; // [rsp+298h] [rbp+190h]
  __int64 v145; // [rsp+2A0h] [rbp+198h]
  char *v146; // [rsp+2A8h] [rbp+1A0h]
  __int64 v147; // [rsp+2B0h] [rbp+1A8h]
  char *v148; // [rsp+2B8h] [rbp+1B0h]
  __int64 v149; // [rsp+2C0h] [rbp+1B8h]
  int *v150; // [rsp+2C8h] [rbp+1C0h]
  __int64 v151; // [rsp+2D0h] [rbp+1C8h]
  unsigned int *v152; // [rsp+2D8h] [rbp+1D0h]
  __int64 v153; // [rsp+2E0h] [rbp+1D8h]
  __int16 *v154; // [rsp+2E8h] [rbp+1E0h]
  __int64 v155; // [rsp+2F0h] [rbp+1E8h]
  bool *v156; // [rsp+2F8h] [rbp+1F0h]
  __int64 v157; // [rsp+300h] [rbp+1F8h]
  bool *v158; // [rsp+308h] [rbp+200h]
  __int64 v159; // [rsp+310h] [rbp+208h]
  char *v160; // [rsp+318h] [rbp+210h]
  __int64 v161; // [rsp+320h] [rbp+218h]
  bool *v162; // [rsp+328h] [rbp+220h]
  __int64 v163; // [rsp+330h] [rbp+228h]
  __int64 *v164; // [rsp+338h] [rbp+230h]
  __int64 v165; // [rsp+340h] [rbp+238h]
  char *v166; // [rsp+348h] [rbp+240h]
  __int64 v167; // [rsp+350h] [rbp+248h]
  char *v168; // [rsp+358h] [rbp+250h]
  __int64 v169; // [rsp+360h] [rbp+258h]
  char *v170; // [rsp+368h] [rbp+260h]
  __int64 v171; // [rsp+370h] [rbp+268h]
  char *v172; // [rsp+378h] [rbp+270h]
  __int64 v173; // [rsp+380h] [rbp+278h]
  __int64 *v174; // [rsp+388h] [rbp+280h]
  __int64 v175; // [rsp+390h] [rbp+288h]
  __int64 v176; // [rsp+398h] [rbp+290h]
  __int64 v177; // [rsp+3A0h] [rbp+298h]
  int *v178; // [rsp+3A8h] [rbp+2A0h]
  __int64 v179; // [rsp+3B0h] [rbp+2A8h]
  char *v180; // [rsp+3B8h] [rbp+2B0h]
  __int64 v181; // [rsp+3C0h] [rbp+2B8h]
  char *v182; // [rsp+3C8h] [rbp+2C0h]
  __int64 v183; // [rsp+3D0h] [rbp+2C8h]
  char *v184; // [rsp+3D8h] [rbp+2D0h]
  __int64 v185; // [rsp+3E0h] [rbp+2D8h]
  __int16 *v186; // [rsp+3E8h] [rbp+2E0h]
  __int64 v187; // [rsp+3F0h] [rbp+2E8h]
  __int64 *v188; // [rsp+3F8h] [rbp+2F0h]
  __int64 v189; // [rsp+400h] [rbp+2F8h]
  int *v190; // [rsp+408h] [rbp+300h]
  __int64 v191; // [rsp+410h] [rbp+308h]
  __int64 *v192; // [rsp+418h] [rbp+310h]
  __int64 v193; // [rsp+420h] [rbp+318h]
  int *v194; // [rsp+428h] [rbp+320h]
  __int64 v195; // [rsp+430h] [rbp+328h]
  int *v196; // [rsp+438h] [rbp+330h]
  __int64 v197; // [rsp+440h] [rbp+338h]
  int *v198; // [rsp+448h] [rbp+340h]
  __int64 v199; // [rsp+450h] [rbp+348h]
  bool *v200; // [rsp+458h] [rbp+350h]
  __int64 v201; // [rsp+460h] [rbp+358h]
  char *v202; // [rsp+468h] [rbp+360h]
  __int64 v203; // [rsp+470h] [rbp+368h]
  char *v204; // [rsp+478h] [rbp+370h]
  __int64 v205; // [rsp+480h] [rbp+378h]
  char *v206; // [rsp+488h] [rbp+380h]
  __int64 v207; // [rsp+490h] [rbp+388h]
  int *v208; // [rsp+498h] [rbp+390h]
  __int64 v209; // [rsp+4A0h] [rbp+398h]
  int *v210; // [rsp+4A8h] [rbp+3A0h]
  __int64 v211; // [rsp+4B0h] [rbp+3A8h]
  int *v212; // [rsp+4B8h] [rbp+3B0h]
  __int64 v213; // [rsp+4C0h] [rbp+3B8h]
  bool *v214; // [rsp+4C8h] [rbp+3C0h]
  __int64 v215; // [rsp+4D0h] [rbp+3C8h]
  __int64 v216; // [rsp+4D8h] [rbp+3D0h]
  __int64 v217; // [rsp+4E0h] [rbp+3D8h]
  int *v218; // [rsp+4E8h] [rbp+3E0h]
  __int64 v219; // [rsp+4F0h] [rbp+3E8h]
  int *v220; // [rsp+4F8h] [rbp+3F0h]
  __int64 v221; // [rsp+500h] [rbp+3F8h]
  char *v222; // [rsp+508h] [rbp+400h]
  __int64 v223; // [rsp+510h] [rbp+408h]
  int *v224; // [rsp+518h] [rbp+410h]
  __int64 v225; // [rsp+520h] [rbp+418h]
  int *v226; // [rsp+528h] [rbp+420h]
  __int64 v227; // [rsp+530h] [rbp+428h]
  int *v228; // [rsp+538h] [rbp+430h]
  __int64 v229; // [rsp+540h] [rbp+438h]
  int *v230; // [rsp+548h] [rbp+440h]
  __int64 v231; // [rsp+550h] [rbp+448h]
  int *v232; // [rsp+558h] [rbp+450h]
  __int64 v233; // [rsp+560h] [rbp+458h]
  int *v234; // [rsp+568h] [rbp+460h]
  __int64 v235; // [rsp+570h] [rbp+468h]
  __int64 *v236; // [rsp+578h] [rbp+470h]
  __int64 v237; // [rsp+580h] [rbp+478h]
  int *v238; // [rsp+588h] [rbp+480h]
  __int64 v239; // [rsp+590h] [rbp+488h]
  int *v240; // [rsp+598h] [rbp+490h]
  __int64 v241; // [rsp+5A0h] [rbp+498h]
  int *v242; // [rsp+5A8h] [rbp+4A0h]
  __int64 v243; // [rsp+5B0h] [rbp+4A8h]
  int *v244; // [rsp+5B8h] [rbp+4B0h]
  __int64 v245; // [rsp+5C0h] [rbp+4B8h]
  bool *v246; // [rsp+5C8h] [rbp+4C0h]
  __int64 v247; // [rsp+5D0h] [rbp+4C8h]
  bool *v248; // [rsp+5D8h] [rbp+4D0h]
  __int64 v249; // [rsp+5E0h] [rbp+4D8h]
  int *v250; // [rsp+5E8h] [rbp+4E0h]
  __int64 v251; // [rsp+5F0h] [rbp+4E8h]
  char *v252; // [rsp+5F8h] [rbp+4F0h]
  __int64 v253; // [rsp+600h] [rbp+4F8h]
  char *v254; // [rsp+608h] [rbp+500h]
  __int64 v255; // [rsp+610h] [rbp+508h]
  int *v256; // [rsp+618h] [rbp+510h]
  __int64 v257; // [rsp+620h] [rbp+518h]
  char *v258; // [rsp+628h] [rbp+520h]
  __int64 v259; // [rsp+630h] [rbp+528h]
  int *v260; // [rsp+638h] [rbp+530h]
  __int64 v261; // [rsp+640h] [rbp+538h]
  __int64 *v262; // [rsp+648h] [rbp+540h]
  __int64 v263; // [rsp+650h] [rbp+548h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+658h] [rbp+550h] BYREF
  char v265; // [rsp+674h] [rbp+56Ch] BYREF
  unsigned int *v266; // [rsp+6A8h] [rbp+5A0h]
  __int64 v267; // [rsp+6B0h] [rbp+5A8h]
  __int64 v268; // [rsp+6B8h] [rbp+5B0h]
  __int64 v269; // [rsp+6C0h] [rbp+5B8h]
  int *v270; // [rsp+6C8h] [rbp+5C0h]
  __int64 v271; // [rsp+6D0h] [rbp+5C8h]
  char *v272; // [rsp+6D8h] [rbp+5D0h]
  __int64 v273; // [rsp+6E0h] [rbp+5D8h]
  int *v274; // [rsp+6E8h] [rbp+5E0h]
  __int64 v275; // [rsp+6F0h] [rbp+5E8h]
  int *v276; // [rsp+6F8h] [rbp+5F0h]
  __int64 v277; // [rsp+700h] [rbp+5F8h]
  char *v278; // [rsp+708h] [rbp+600h]
  __int64 v279; // [rsp+710h] [rbp+608h]
  int *v280; // [rsp+718h] [rbp+610h]
  __int64 v281; // [rsp+720h] [rbp+618h]
  char *v282; // [rsp+728h] [rbp+620h]
  __int64 v283; // [rsp+730h] [rbp+628h]
  __int64 v284; // [rsp+738h] [rbp+630h]
  __int64 v285; // [rsp+740h] [rbp+638h]
  int *v286; // [rsp+748h] [rbp+640h]
  __int64 v287; // [rsp+750h] [rbp+648h]
  int *v288; // [rsp+758h] [rbp+650h]
  __int64 v289; // [rsp+760h] [rbp+658h]
  __int64 v290; // [rsp+768h] [rbp+660h]
  __int64 v291; // [rsp+770h] [rbp+668h]
  __int64 v292; // [rsp+778h] [rbp+670h]
  __int64 v293; // [rsp+780h] [rbp+678h]
  char *v294; // [rsp+788h] [rbp+680h]
  __int64 v295; // [rsp+790h] [rbp+688h]

  v97 = 0LL;
  v98 = 0LL;
  v96 = 0LL;
  v69 = (*(unsigned __int8 *)(qword_140D16848 + 1) >> 4) & 1;
  v66 = (*(unsigned __int8 *)(qword_140D16840 + 8) >> 1) & 1;
  v25 = *(_BYTE *)(qword_140D16840 + 11) >> 6;
  v68 = (*(unsigned __int8 *)(qword_140D16840 + 14) >> 5) & 1;
  v24 = *(_BYTE *)(qword_140D16840 + 14) & 0xF;
  v65 = *(unsigned __int8 *)(qword_140D16840 + 8) >> 4;
  v23 = *(_BYTE *)(qword_140D16848 + 24);
  v67 = *(unsigned __int16 *)(qword_140D16840 + 12);
  PopPotsLogDirtyPowerTransition(v65, (unsigned int)dword_140D16864, (unsigned int)dword_140D16810);
  result = SshSessionManagerTraceDirtyTransition();
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION);
    if ( result )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&dword_140D16810;
      v1 = &qword_140D16818;
      v2 = &v265;
      v3 = 4LL;
      do
      {
        *(_QWORD *)(v2 - 12) = v1++;
        *(_QWORD *)(v2 - 4) = 8LL;
        v2 += 16;
        --v3;
      }
      while ( v3 );
      v266 = &v65;
      v268 = qword_140D16840;
      v267 = 4LL;
      v270 = &dword_140D16864;
      v272 = &byte_140D16850;
      v274 = &v66;
      v276 = &v67;
      v278 = &v23;
      v280 = &dword_140D16838;
      v282 = &v24;
      v284 = qword_140D16848 + 24;
      v286 = &v68;
      v288 = &v69;
      v290 = qword_140D16848 + 3;
      v292 = qword_140D16848 + 4;
      v294 = &v25;
      v269 = 8LL;
      v271 = 4LL;
      v273 = 1LL;
      v275 = 4LL;
      v277 = 4LL;
      v279 = 1LL;
      v281 = 4LL;
      v283 = 1LL;
      v285 = 8LL;
      v287 = 4LL;
      v289 = 4LL;
      v291 = 1LL;
      v293 = 1LL;
      v295 = 1LL;
      result = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION, 0LL, 0, 0LL, 0LL, 0x14u, &UserData);
    }
  }
  if ( dword_140C03928 )
  {
    result = tlgKeywordOn((__int64)&dword_140C03928, 0x800000000000LL);
    if ( result )
    {
      PopDiagInterruptTimeToSystemTime(*(_QWORD *)qword_140D16858, &v97);
      PopDiagInterruptTimeToSystemTime(*(_QWORD *)(qword_140D16858 + 32), &v98);
      result = PopDiagInterruptTimeToSystemTime(*(_QWORD *)qword_140D16840, &v96);
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        result = tlgKeywordOn(v4, 0x800000000000LL);
        if ( result )
        {
          v26 = PopDirtyTransitionDiagInfo;
          v108 = &v26;
          v70 = dword_140D16808;
          v110 = &v70;
          v71 = dword_140D1680C;
          v112 = &v71;
          v99 = (unsigned int)dword_140D16810;
          v114 = &v99;
          v100 = qword_140D16818;
          v116 = &v100;
          v101 = qword_140D16820;
          v118 = &v101;
          v102 = qword_140D16828;
          v120 = &v102;
          v103 = qword_140D16830;
          v122 = &v103;
          v72 = dword_140D16838;
          v124 = &v72;
          v109 = 1LL;
          v111 = 4LL;
          v113 = 4LL;
          v115 = 8LL;
          v117 = 8LL;
          v119 = 8LL;
          v121 = 8LL;
          v123 = 8LL;
          v125 = 4LL;
          v6 = ~*(_BYTE *)(qword_140D16840 + 15);
          v127 = 1LL;
          v27 = v6 >> 7;
          v126 = &v27;
          v28 = *(_BYTE *)(qword_140D16840 + 11) >> 6;
          v128 = &v28;
          v129 = 1LL;
          v29 = *(_BYTE *)(qword_140D16840 + 14) >> 6;
          v130 = &v29;
          v131 = 1LL;
          v7 = *(_BYTE *)(qword_140D16840 + 15) & 0x7F;
          v133 = 1LL;
          v30 = v7;
          v132 = &v30;
          v31 = *(_BYTE *)(qword_140D16840 + 10) >> 6;
          v134 = &v31;
          v135 = 1LL;
          v32 = *(_BYTE *)(qword_140D16840 + 8) & 1;
          v136 = &v32;
          v137 = 1LL;
          v8 = (*(_BYTE *)(qword_140D16840 + 14) & 0x10) != 0;
          v139 = 1LL;
          v33 = v8;
          v138 = &v33;
          v9 = *(_BYTE *)(qword_140D16848 + 1) & 1;
          v141 = 1LL;
          v34 = v9;
          v140 = &v34;
          v10 = (*(_BYTE *)(qword_140D16848 + 1) & 2) != 0;
          v143 = 1LL;
          v35 = v10;
          v142 = &v35;
          v11 = (*(_BYTE *)(qword_140D16848 + 1) & 0x10) != 0;
          v145 = 1LL;
          v36 = v11;
          v144 = &v36;
          v37 = *(_BYTE *)(qword_140D16848 + 3);
          v146 = &v37;
          v147 = 1LL;
          v38 = *(_BYTE *)(qword_140D16848 + 4);
          v148 = &v38;
          v149 = 1LL;
          v73 = *(_DWORD *)(qword_140D16840 + 28);
          v150 = &v73;
          v74 = v65;
          v152 = &v74;
          v151 = 4LL;
          v153 = 4LL;
          v61 = *(_WORD *)(qword_140D16840 + 12);
          v154 = &v61;
          v155 = 2LL;
          v12 = (*(_BYTE *)(qword_140D16840 + 8) & 4) != 0;
          v157 = 1LL;
          v39 = v12;
          v156 = &v39;
          v13 = (*(_BYTE *)(qword_140D16840 + 8) & 8) != 0;
          v159 = 1LL;
          v40 = v13;
          v158 = &v40;
          v41 = *(_BYTE *)qword_140D16848;
          v160 = &v41;
          v161 = 1LL;
          v14 = (*(_BYTE *)(qword_140D16840 + 8) & 2) != 0;
          v163 = 1LL;
          v42 = v14;
          v162 = &v42;
          v104 = *(_QWORD *)(qword_140D16848 + 24);
          v164 = &v104;
          v165 = 8LL;
          v15 = *(_BYTE *)(qword_140D16848 + 23) & 0xF;
          v167 = 1LL;
          v43 = v15;
          v166 = &v43;
          v16 = *(_BYTE *)(qword_140D16840 + 10) & 0x3F;
          v169 = 1LL;
          v44 = v16;
          v168 = &v44;
          v45 = *(_BYTE *)(qword_140D16848 + 23) >> 4;
          v170 = &v45;
          v171 = 1LL;
          v17 = *(_BYTE *)(qword_140D16840 + 11) & 0x3F;
          v173 = 1LL;
          v46 = v17;
          v172 = &v46;
          v174 = &v96;
          v176 = qword_140D16840 + 16;
          v175 = 8LL;
          v177 = 8LL;
          v75 = *(_DWORD *)(qword_140D16840 + 24);
          v178 = &v75;
          v179 = 4LL;
          v47 = *(_BYTE *)(qword_140D16848 + 2);
          v180 = &v47;
          v181 = 1LL;
          v18 = *(_BYTE *)(qword_140D16840 + 14) & 0xF;
          v183 = 1LL;
          v48 = v18;
          v182 = &v48;
          v19 = (*(_BYTE *)(qword_140D16848 + 1) >> 2) & 3;
          v185 = 1LL;
          v49 = v19;
          v184 = &v49;
          v62 = *(_WORD *)(qword_140D16858 + 12);
          v186 = &v62;
          v188 = &v97;
          v187 = 2LL;
          v189 = 8LL;
          LOWORD(v63) = *(_WORD *)(qword_140D16858 + 44);
          v190 = &v63;
          v192 = &v98;
          v191 = 2LL;
          v193 = 8LL;
          v76 = *(_DWORD *)(qword_140D16858 + 8);
          v194 = &v76;
          v195 = 4LL;
          v77 = *(_DWORD *)(qword_140D16858 + 40);
          v196 = &v77;
          v197 = 4LL;
          LOWORD(v64) = *(_WORD *)(qword_140D16858 + 46);
          v198 = &v64;
          v199 = 2LL;
          v20 = (*(_BYTE *)(qword_140D16858 + 15) & 2) != 0;
          v201 = 1LL;
          v50 = v20;
          v200 = &v50;
          v21 = *(_BYTE *)(qword_140D16858 + 15) & 1;
          v203 = 1LL;
          v51 = v21;
          v202 = &v51;
          v52 = *(_BYTE *)(qword_140D16858 + 14);
          v204 = &v52;
          v205 = 1LL;
          v53 = *(_BYTE *)(qword_140D16858 + 48);
          v206 = &v53;
          v207 = 1LL;
          v78 = *(_DWORD *)(qword_140D16858 + 52);
          v208 = &v78;
          v209 = 4LL;
          v79 = *(_DWORD *)(qword_140D16858 + 56);
          v210 = &v79;
          v211 = 4LL;
          v80 = *(_DWORD *)(qword_140D16858 + 60);
          v212 = &v80;
          v213 = 4LL;
          v22 = (*(_BYTE *)(qword_140D16858 + 15) & 4) != 0;
          v215 = 1LL;
          v54 = v22;
          v214 = &v54;
          v216 = qword_140D16858 + 16;
          v81 = dword_140D16864;
          v218 = &v81;
          v82 = dword_140D16860;
          v220 = &v82;
          v55 = byte_140D16878;
          v222 = &v55;
          v83 = dword_140D16888;
          v224 = &v83;
          v84 = dword_140D1688C;
          v226 = &v84;
          v217 = 16LL;
          v219 = 4LL;
          v221 = 4LL;
          v223 = 1LL;
          v225 = 4LL;
          v85 = dword_140D16890;
          v228 = &v85;
          v56 = dword_140D168C0 != 0;
          v86 = dword_140D1689C;
          v230 = &v86;
          v57 = dword_140D168C4 != 0;
          v87 = dword_140D16894;
          v232 = &v87;
          v88 = dword_140D16898;
          v234 = &v88;
          v105 = qword_140D168A0;
          v236 = &v105;
          v89 = dword_140D168B0;
          v238 = &v89;
          v90 = dword_140D168B4;
          v240 = &v90;
          v91 = dword_140D168B8;
          v242 = &v91;
          v92 = dword_140D168A8;
          v244 = &v92;
          v246 = &v56;
          v248 = &v57;
          v93 = dword_140D168C8;
          v250 = &v93;
          v227 = 4LL;
          v229 = 4LL;
          v231 = 4LL;
          v233 = 4LL;
          v235 = 4LL;
          v237 = 8LL;
          v239 = 4LL;
          v241 = 4LL;
          v243 = 4LL;
          v245 = 4LL;
          v247 = 1LL;
          v249 = 1LL;
          v251 = 4LL;
          v58 = *(_BYTE *)qword_140D168D0;
          v252 = &v58;
          v253 = 1LL;
          v59 = *(_BYTE *)(qword_140D168D0 + 8);
          v254 = &v59;
          v255 = 1LL;
          v94 = *(_DWORD *)(qword_140D168D0 + 16);
          v256 = &v94;
          v257 = 4LL;
          v60 = *(_BYTE *)(qword_140D168D0 + 9);
          v258 = &v60;
          v259 = 1LL;
          v95 = *(_DWORD *)(qword_140D168D0 + 20);
          v261 = 4LL;
          v260 = &v95;
          v106 = 0x1000000LL;
          v262 = &v106;
          v263 = 8LL;
          return tlgWriteTransfer_EtwWriteTransfer(v5, (unsigned __int8 *)&word_14002FA86, 0LL, 0LL, 0x50u, &v107);
        }
      }
    }
  }
  return result;
}
