/*
 * XREFs of sub_140B0A7A8 @ 0x140B0A7A8
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140B0A7A8 @ 0x140B0A7A8 (sub_140B0A7A8.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     sub_1403EC00C @ 0x1403EC00C (sub_1403EC00C.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     sub_140B0A7A8 @ 0x140B0A7A8 (sub_140B0A7A8.c)
 *     sub_140B0C838 @ 0x140B0C838 (sub_140B0C838.c)
 *     sub_140B0E020 @ 0x140B0E020 (sub_140B0E020.c)
 *     $$ba @ 0x140B0E898 ($$ba.c)
 *     sub_140B0F0E0 @ 0x140B0F0E0 (sub_140B0F0E0.c)
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 *     sub_140B15070 @ 0x140B15070 (sub_140B15070.c)
 */

__int64 __fastcall sub_140B0A7A8(_QWORD *a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v3; // r13
  _QWORD *v4; // rdi
  __int64 v5; // r15
  int *v6; // r8
  __int64 result; // rax
  int v8; // ecx
  int *v9; // rax
  _BYTE *v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // esi
  _BYTE *v13; // r14
  int v14; // r12d
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  unsigned int v18; // r11d
  _BYTE *v19; // r10
  __int64 v20; // rdi
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  bool v26; // zf
  __int64 v27; // rax
  int v28; // eax
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // r10
  __int64 v33; // r11
  unsigned int v34; // r14d
  __int64 (__fastcall *v35)(ULONG_PTR, char *, int *, __int64); // rax
  __int64 v36; // rax
  int *v37; // r8
  ULONG_PTR v38; // r12
  int v39; // r15d
  int v40; // ecx
  unsigned int v41; // edi
  unsigned int *v42; // rax
  int v43; // ecx
  __int64 v44; // rdx
  unsigned int v45; // esi
  __int64 v46; // r9
  _BYTE *v47; // r14
  unsigned int v48; // ecx
  int v49; // r11d
  _BYTE *v50; // r10
  __int64 v51; // r11
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  bool v57; // zf
  __int64 v58; // rax
  int v59; // eax
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  unsigned __int64 v63; // r10
  __int64 v64; // rdi
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // r15d
  _BYTE *v68; // rbx
  char **v69; // rsi
  _BYTE *v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rdx
  char *v73; // rdx
  __int64 v74; // r9
  ULONG_PTR v75; // rax
  __int64 v76; // rdx
  __int64 (__fastcall *v77)(ULONG_PTR, __int64, _QWORD, __int64 *); // rax
  __int64 v78; // rdx
  __int64 (__fastcall *v79)(ULONG_PTR, __int64, __int64, __int64 *); // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 (__fastcall *v82)(ULONG_PTR, __int64, __int64, __int64 *); // rax
  __int64 (__fastcall *v83)(ULONG_PTR); // rax
  __int64 v84; // rdi
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // r8
  unsigned int v90; // eax
  __int64 v91; // r9
  _BYTE *v92; // rdi
  int v93; // ecx
  unsigned int v94; // eax
  __int64 v95; // r8
  int v96; // edx
  unsigned __int64 v97; // rcx
  int v98; // ebx
  ULONG_PTR *v99; // r13
  _BYTE *v100; // r15
  unsigned int *v101; // r14
  __int64 v102; // r12
  __int64 v103; // rdx
  _QWORD *v104; // rbx
  int v105; // ecx
  _QWORD *v106; // rax
  _QWORD *v107; // r9
  const char *v108; // rax
  int v109; // r11d
  __int64 v110; // rsi
  unsigned __int64 v111; // r8
  unsigned int v112; // r10d
  __int64 v113; // rax
  __int64 v114; // r8
  unsigned __int128 v115; // rax
  unsigned int v116; // edx
  unsigned __int64 v117; // rax
  unsigned __int64 i; // rax
  _DWORD *v119; // r14
  ULONG_PTR v120; // r13
  int v121; // ebx
  _QWORD *v122; // rsi
  __int64 v123; // rdx
  _BYTE *v124; // rdi
  int v125; // ecx
  _BYTE *v126; // r14
  unsigned int v127; // r9d
  _QWORD *v128; // rbx
  _DWORD *v129; // r12
  _QWORD *v130; // rax
  _QWORD *v131; // r10
  const char *v132; // rax
  int v133; // r11d
  __int64 v134; // r15
  unsigned __int64 v135; // rcx
  ULONG_PTR v136; // r8
  unsigned int v137; // esi
  __int64 v138; // rax
  __int64 v139; // r8
  unsigned __int128 v140; // rax
  unsigned __int64 v141; // r9
  unsigned __int64 v142; // rax
  __int64 v143; // rax
  ULONG_PTR j; // rax
  __int64 v145; // rdx
  _BYTE *v146; // rsi
  int v147; // r15d
  __int64 v148; // rsi
  unsigned int v149; // eax
  int v150; // ecx
  unsigned int v151; // eax
  __int64 v152; // r8
  int v153; // edx
  unsigned __int64 v154; // rcx
  int v155; // edi
  int v156; // ecx
  _QWORD *v157; // rax
  __int64 v158; // rdx
  unsigned __int64 v159; // r12
  __int64 v160; // r15
  int v161; // r10d
  __int64 v162; // rdi
  const char *v163; // rax
  unsigned int v164; // r11d
  __int64 v165; // rax
  __int64 v166; // r8
  unsigned __int128 v167; // rax
  unsigned __int64 v168; // rax
  __int64 v169; // rax
  ULONG_PTR k; // rax
  unsigned int v171; // eax
  __int64 v172; // rdi
  __int64 v173; // rax
  int v174; // ecx
  _QWORD *v175; // rax
  _QWORD *v176; // rax
  __int64 v177; // rax
  unsigned __int64 v178; // r8
  unsigned int v179; // r15d
  unsigned __int64 v180; // r9
  unsigned int *v181; // rdi
  unsigned int v182; // r10d
  __int64 v183; // r12
  unsigned int *v184; // r11
  unsigned int v185; // ecx
  unsigned int *v186; // r12
  unsigned int v187; // r15d
  unsigned int v188; // edx
  unsigned int v189; // r15d
  unsigned int v190; // eax
  __int64 v191; // rax
  unsigned int v192; // esi
  unsigned int v193; // r13d
  unsigned int v194; // esi
  unsigned int *v195; // rax
  __int64 v196; // r9
  unsigned int *v197; // r14
  ULONG_PTR v198; // r8
  unsigned int *v199; // rax
  unsigned int v200; // eax
  __int64 v201; // rsi
  __int64 v202; // r12
  _BYTE *v203; // rax
  unsigned int v204; // ecx
  __int64 v205; // rdi
  unsigned int v206; // eax
  _BYTE *v207; // r14
  int v208; // ecx
  unsigned int v209; // eax
  __int64 v210; // r8
  int v211; // edx
  unsigned __int64 v212; // rcx
  int v213; // ebx
  _BYTE *v214; // rdx
  _QWORD *v215; // rax
  __int64 v216; // rcx
  int v217; // r8d
  unsigned __int64 v218; // rcx
  unsigned __int64 m; // rax
  __int64 v220; // rax
  _DWORD *v221; // rsi
  unsigned int *v222; // r15
  _DWORD *v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rcx
  int v226; // r13d
  int v227; // eax
  char *v228; // rdx
  __int64 v229; // r8
  char *v230; // r10
  int v231; // r11d
  char *v232; // rbx
  char v233; // cl
  char v234; // al
  int v235; // ecx
  __int16 v236; // ax
  unsigned int v237; // edx
  char *v238; // r8
  __int64 v239; // rcx
  __int64 v240; // rax
  char v241; // cl
  char v242; // al
  int v243; // r8d
  __int64 v244; // rdx
  char v245; // cl
  char v246; // al
  int v247; // r8d
  __int64 v248; // rdx
  char v249; // cl
  char v250; // al
  unsigned int v251; // edi
  __int64 v252; // rdx
  unsigned int v253; // edi
  unsigned int v254; // r10d
  unsigned int v255; // r12d
  unsigned int v256; // eax
  unsigned int v257; // ecx
  unsigned int v258; // r15d
  bool v259; // cf
  unsigned __int64 v260; // r11
  unsigned int *v261; // rdx
  unsigned __int64 v262; // rbx
  unsigned __int64 *v263; // r8
  _QWORD *v264; // r10
  int v265; // edi
  const char *v266; // rax
  __int64 v267; // rsi
  unsigned __int64 v268; // r8
  unsigned int v269; // ebx
  __int64 v270; // rax
  __int64 v271; // r8
  unsigned __int128 v272; // rax
  unsigned __int64 v273; // rax
  __int64 v274; // rax
  unsigned __int64 v275; // rax
  bool v276; // cc
  unsigned int *v277; // r8
  unsigned int *v278; // rsi
  unsigned int v279; // r15d
  char *v280; // rax
  char v281; // r8
  __int64 v282; // rbx
  unsigned int *v283; // rcx
  unsigned __int64 v284; // r11
  unsigned __int64 *v285; // rdx
  unsigned __int64 v286; // rbx
  _QWORD *v287; // r10
  int v288; // edi
  const char *v289; // rax
  __int64 v290; // rsi
  unsigned __int64 v291; // r8
  unsigned int v292; // ebx
  __int64 v293; // rax
  __int64 v294; // r8
  unsigned __int128 v295; // rax
  unsigned __int64 v296; // rax
  __int64 v297; // rax
  unsigned __int64 v298; // rax
  _DWORD *v299; // rsi
  unsigned int *v300; // rcx
  unsigned __int64 v301; // r11
  unsigned __int64 *v302; // rdx
  unsigned __int64 v303; // rbx
  unsigned int v304; // r8d
  _QWORD *v305; // r10
  int v306; // edi
  const char *v307; // rax
  __int64 v308; // rsi
  unsigned __int64 v309; // r8
  unsigned int v310; // ebx
  __int64 v311; // rax
  __int64 v312; // r8
  _QWORD *v313; // r10
  __int64 v314; // r8
  unsigned __int128 v315; // rax
  unsigned __int64 v316; // rax
  __int64 v317; // rax
  unsigned __int64 n; // rax
  unsigned int *v319; // r8
  char *v320; // rax
  __int64 v321; // r15
  __int64 v322; // rax
  __int64 v323; // rcx
  __int64 v324; // rax
  __int64 v325; // rdi
  __int64 ii; // rbx
  __int64 v327; // rax
  __int64 v328; // rdx
  __int64 v329; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v330; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v331; // [rsp+58h] [rbp-B0h]
  __int64 v332; // [rsp+60h] [rbp-A8h]
  unsigned int *v333; // [rsp+68h] [rbp-A0h]
  char *v334; // [rsp+70h] [rbp-98h]
  ULONG_PTR v335; // [rsp+78h] [rbp-90h]
  unsigned int v336; // [rsp+80h] [rbp-88h]
  unsigned int *v337; // [rsp+88h] [rbp-80h]
  unsigned int *v338; // [rsp+90h] [rbp-78h]
  __int64 v339; // [rsp+98h] [rbp-70h]
  _BYTE *v340; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v341; // [rsp+A8h] [rbp-60h]
  _DWORD *v342; // [rsp+B0h] [rbp-58h]
  unsigned int v343; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v344; // [rsp+C0h] [rbp-48h]
  int v345; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v346; // [rsp+D0h] [rbp-38h]
  unsigned int v347; // [rsp+D8h] [rbp-30h] BYREF
  int v348; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD v349[6]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v350; // [rsp+100h] [rbp-8h]
  int v351; // [rsp+108h] [rbp+0h] BYREF
  ULONG_PTR v352; // [rsp+110h] [rbp+8h] BYREF
  __int64 v353; // [rsp+118h] [rbp+10h]
  __int64 v354; // [rsp+120h] [rbp+18h]
  __int64 v355; // [rsp+128h] [rbp+20h]
  __int64 v356; // [rsp+130h] [rbp+28h]
  __int64 v357; // [rsp+138h] [rbp+30h]
  char v358[8]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v359; // [rsp+148h] [rbp+40h]
  int v360; // [rsp+154h] [rbp+4Ch]
  __int64 v361; // [rsp+158h] [rbp+50h]
  __int64 v362; // [rsp+160h] [rbp+58h]
  __int64 v363; // [rsp+168h] [rbp+60h]
  __int64 v364; // [rsp+170h] [rbp+68h]
  __int64 v365; // [rsp+178h] [rbp+70h]
  __int64 v366; // [rsp+180h] [rbp+78h]
  char v367[8]; // [rsp+188h] [rbp+80h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+190h] [rbp+88h]
  int v369; // [rsp+19Ch] [rbp+94h]
  unsigned int v373; // [rsp+210h] [rbp+108h]
  unsigned __int16 v374; // [rsp+210h] [rbp+108h]
  unsigned int v375; // [rsp+210h] [rbp+108h]

  v3 = a2;
  v4 = a1;
  v330 = (_BYTE *)*a1;
  v5 = (*((__int64 (__fastcall **)(ULONG_PTR, char *))v330 + 64))(a2, v358);
  v6 = 0LL;
  v350 = v359;
  if ( !v359 )
  {
    if ( (*((_DWORD *)v330 + 612) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v3, 5uLL, 0LL);
    return 3221225595LL;
  }
  v8 = 4;
  v344 = 0LL;
  v9 = &v345;
  do
  {
    *(_BYTE *)v9 = 0;
    v9 = (int *)((char *)v9 + 1);
    --v8;
  }
  while ( v8 );
  v10 = v330;
  v11 = 0LL;
  v12 = *((_DWORD *)v330 + 515);
  if ( !v12 )
    goto LABEL_49;
  v13 = (_BYTE *)*((_QWORD *)v330 + 335);
  v14 = v360;
  v15 = v345;
  v16 = HIDWORD(v344);
  v17 = v344;
  while ( 1 )
  {
    v18 = 0;
    v19 = v330;
    if ( v13 )
      v19 = v13;
    v6 = (int *)&v19[*((unsigned int *)v19 + 514)];
    if ( v17 && v16 <= (unsigned int)v11 )
    {
      v18 = v16;
      v6 = (int *)&v19[v15];
    }
    if ( v18 != (_DWORD)v11 )
    {
      v20 = (unsigned int)v11 - v18;
      v18 = v11;
      while ( 1 )
      {
        v21 = *v6;
        if ( *v6 > 28 )
        {
          v29 = v21 - 30;
          if ( !v29 )
          {
            v27 = (((v6[9] != 0 ? v6[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v6 + 20) + 2);
            goto LABEL_36;
          }
          v30 = v29 - 3;
          if ( !v30 || (v31 = v30 - 1) == 0 )
          {
            v27 = 20 * (unsigned int)(((v6[8] & 0xFFF) + (unsigned __int64)(unsigned int)v6[10] + 4095) >> 12) + 48;
            goto LABEL_36;
          }
          v26 = v31 == 9;
        }
        else
        {
          if ( v21 == 28 )
          {
            v28 = *((unsigned __int16 *)v6 + 20);
            goto LABEL_24;
          }
          v22 = v21 - 1;
          if ( !v22 )
            goto LABEL_33;
          v23 = v22 - 6;
          if ( !v23 )
          {
            v27 = (unsigned int)(24 * (v6[6] + 2));
            goto LABEL_36;
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            v28 = *((unsigned __int16 *)v6 + 16);
LABEL_24:
            v27 = (v28 + 55) & 0xFFFFFFF8;
            goto LABEL_36;
          }
          v25 = v24 - 2;
          if ( !v25 )
          {
            v27 = (unsigned int)(16 * (v6[7] + 3));
            goto LABEL_36;
          }
          v26 = v25 == 2;
        }
        if ( v26 )
        {
LABEL_33:
          v27 = 4 * (v6[4] / 0xCu) + 48;
          goto LABEL_36;
        }
        v27 = 48LL;
LABEL_36:
        v6 = (int *)((char *)v6 + v27);
        if ( !--v20 )
        {
          v14 = v360;
          v3 = a2;
          break;
        }
      }
    }
    LODWORD(v344) = 1;
    v15 = (_DWORD)v6 - (_DWORD)v19;
    v16 = v18;
    v32 = *v6;
    v17 = 1;
    HIDWORD(v344) = v18;
    v345 = v15;
    if ( (unsigned int)v32 <= 0x2B )
    {
      v33 = 0x80000001002LL;
      if ( _bittest64(&v33, v32) )
      {
        if ( *((_QWORD *)v6 + 1) == v5 && v6[4] == v14 )
          break;
      }
    }
    if ( (unsigned int)(v32 - 33) <= 1 && *((_QWORD *)v6 + 4) == v350 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v12 )
      goto LABEL_48;
  }
  if ( v6 )
    return 3221225742LL;
LABEL_48:
  v4 = a1;
LABEL_49:
  v34 = a3;
  v35 = (__int64 (__fastcall *)(ULONG_PTR, char *, int *, __int64))*((_QWORD *)v330 + 64);
  v373 = a3;
  v340 = v330;
  v36 = v35(v3, v367, v6, v11);
  v38 = BugCheckParameter2;
  v39 = v369;
  v333 = (unsigned int *)v36;
  LODWORD(v329) = v369;
  v335 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
  {
    if ( (*((_DWORD *)v330 + 612) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v3, 5uLL, 0LL);
    v40 = -1073741701;
    *v4 = v330;
    return (unsigned int)v40;
  }
  v41 = 0;
  v42 = &v347;
  v346 = 0LL;
  v43 = 4;
  v44 = 1LL;
  do
  {
    *(_BYTE *)v42 = 0;
    v42 = (unsigned int *)((char *)v42 + 1);
    --v43;
  }
  while ( v43 );
  v45 = *((_DWORD *)v10 + 515);
  v46 = 0LL;
  if ( v45 )
  {
    v47 = (_BYTE *)*((_QWORD *)v10 + 335);
    v48 = v347;
    LODWORD(v44) = HIDWORD(v346);
    v49 = v346;
    while ( 1 )
    {
      v50 = v10;
      if ( v47 )
        v50 = v47;
      v37 = (int *)&v50[*((unsigned int *)v50 + 514)];
      if ( v49 && (unsigned int)v44 <= (unsigned int)v46 )
      {
        v41 = v44;
        v37 = (int *)&v50[v48];
      }
      if ( v41 != (_DWORD)v46 )
        break;
LABEL_86:
      LODWORD(v346) = 1;
      v48 = (_DWORD)v37 - (_DWORD)v50;
      v44 = v41;
      v63 = *v37;
      v49 = 1;
      HIDWORD(v346) = v41;
      v347 = v48;
      if ( (unsigned int)v63 <= 0x2B
        && (v64 = 0x80000001002LL, _bittest64(&v64, v63))
        && *((unsigned int **)v37 + 1) == v333
        && v37[4] == v39
        || (unsigned int)(v63 - 33) <= 1 && *((_QWORD *)v37 + 4) == v38 )
      {
        if ( !v37 )
        {
LABEL_95:
          v34 = a3;
          goto LABEL_96;
        }
LABEL_104:
        v68 = v330;
LABEL_488:
        v122 = a1;
        *a1 = v68;
        goto LABEL_489;
      }
      v46 = (unsigned int)(v46 + 1);
      if ( (unsigned int)v46 >= v45 )
        goto LABEL_95;
      v41 = 0;
    }
    v51 = (unsigned int)v46 - v41;
    v41 = v46;
    while ( 2 )
    {
      v52 = *v37;
      if ( *v37 > 28 )
      {
        v60 = v52 - 30;
        if ( !v60 )
        {
          v58 = (((v37[9] != 0 ? v37[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v37 + 20) + 2);
          goto LABEL_84;
        }
        v61 = v60 - 3;
        if ( !v61 || (v62 = v61 - 1) == 0 )
        {
          v58 = 20 * (unsigned int)(((v37[8] & 0xFFF) + (unsigned __int64)(unsigned int)v37[10] + 4095) >> 12) + 48;
          goto LABEL_84;
        }
        v57 = v62 == 9;
LABEL_79:
        if ( !v57 )
        {
          v58 = 48LL;
          goto LABEL_84;
        }
      }
      else
      {
        if ( v52 == 28 )
        {
          v59 = *((unsigned __int16 *)v37 + 20);
          goto LABEL_72;
        }
        v53 = v52 - 1;
        if ( v53 )
        {
          v54 = v53 - 6;
          if ( !v54 )
          {
            v58 = (unsigned int)(24 * (v37[6] + 2));
            goto LABEL_84;
          }
          v55 = v54 - 1;
          if ( v55 )
          {
            v56 = v55 - 2;
            if ( v56 )
            {
              v57 = v56 == 2;
              goto LABEL_79;
            }
            v58 = (unsigned int)(16 * (v37[7] + 3));
LABEL_84:
            v37 = (int *)((char *)v37 + v58);
            if ( !--v51 )
            {
              v3 = a2;
              v38 = v335;
              goto LABEL_86;
            }
            continue;
          }
          v59 = *((unsigned __int16 *)v37 + 16);
LABEL_72:
          v58 = (v59 + 55) & 0xFFFFFFF8;
          goto LABEL_84;
        }
      }
      break;
    }
    v58 = 4 * (v37[4] / 0xCu) + 48;
    goto LABEL_84;
  }
LABEL_96:
  v67 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, int *, __int64))v10 + 85))(v3, v44, v37, v46);
  LODWORD(v337) = v67;
  LODWORD(v332) = v329;
  if ( (a3 & 0x10) != 0 && (*((_DWORD *)v10 + 613) & 0x400) == 0 )
  {
    v34 = a3 & 0xFFFFFFEF;
    v373 = a3 & 0xFFFFFFEF;
  }
  if ( (v34 & 0x10) != 0 && !(unsigned int)sub_140B0F0E0(v10, v38, v65, v66) )
  {
    v34 &= ~0x10u;
    v373 = v34;
  }
  if ( (v34 & 2) != 0 && !v67 )
    goto LABEL_104;
  v69 = (char **)*((_QWORD *)v10 + 165);
  v336 = v34 & 1;
  _disable();
  v70 = v340;
  v71 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v340 + 202));
  _enable();
  (*((void (__fastcall **)(__int64))v70 + 45))(v71);
  LOBYTE(v72) = 1;
  (*((void (__fastcall **)(_QWORD, __int64))v70 + 29))(*((_QWORD *)v70 + 166), v72);
  v73 = *v69;
  if ( *v69 != (char *)v69 )
  {
    v74 = *((_QWORD *)v340 + 234);
    while ( 1 )
    {
      v75 = *(_QWORD *)&v73[*((_QWORD *)v340 + 235) - v74];
      if ( v38 >= v75 && v38 < v75 + *(unsigned int *)&v73[*((_QWORD *)v340 + 236) - v74] )
        break;
      v73 = *(char **)v73;
      if ( v73 == (char *)v69 )
        goto LABEL_112;
    }
    (*((void (__fastcall **)(char *, _QWORD))v340 + 27))(&v73[-v74], (unsigned int)!(v34 & 1) + 1);
  }
LABEL_112:
  (*((void (__fastcall **)(_QWORD))v340 + 35))(*((_QWORD *)v340 + 166));
  (*((void (**)(void))v340 + 46))();
  if ( (*((_DWORD *)v340 + 612) & 0x40000000) != 0 )
  {
    v40 = sub_140B15070(&v330, v38, v34);
    goto LABEL_303;
  }
  v77 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, __int64 *))*((_QWORD *)v340 + 62);
  LOBYTE(v76) = 1;
  v356 = 0LL;
  v349[4] = 0;
  v353 = v77(v38, v76, 0LL, &v329);
  v78 = v353 != 0 ? (unsigned int)v329 : 0;
  LODWORD(v329) = v78;
  v79 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, __int64 *))*((_QWORD *)v70 + 62);
  v349[1] = v78;
  LOBYTE(v78) = 1;
  v80 = v79(v38, v78, 12LL, &v329);
  v81 = v80;
  v338 = (unsigned int *)v80;
  v354 = v80;
  LOBYTE(v81) = 1;
  LODWORD(v329) = v80 != 0 ? v329 : 0;
  v82 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, __int64 *))*((_QWORD *)v70 + 62);
  LODWORD(v331) = v329;
  v349[2] = v329;
  v355 = v82(v38, v81, 10LL, &v329);
  LODWORD(v329) = v355 != 0 ? v329 : 0;
  v83 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v70 + 63);
  v349[3] = v329;
  v84 = v83(v38);
  if ( !v84 )
  {
    if ( (*((_DWORD *)v70 + 612) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v38, 7uLL, 0LL);
    if ( !*((_DWORD *)v70 + 574) )
    {
      *((_QWORD *)v70 + 289) = 0LL;
      *((_QWORD *)v70 + 290) = 271LL;
      *((_QWORD *)v70 + 288) = v70 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v70 + 291) = v38;
      *((_DWORD *)v70 + 574) = 1;
      __ba(v70, 0LL, v85, v86);
    }
    v40 = -1073741701;
    goto LABEL_239;
  }
  v87 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v70 + 148))(v38, &v351);
  v88 = *((unsigned int *)v70 + 505);
  v89 = *((unsigned int *)v70 + 585);
  v357 = v87;
  v349[5] = v351;
  v349[0] = *(_DWORD *)(v84 + 84);
  v352 = v38;
  v90 = v88 + 288;
  LODWORD(v91) = v67 != 0 ? 0xB : 0;
  LODWORD(v334) = v91;
  if ( (unsigned int)(v88 + 288) <= *((_DWORD *)v70 + 647) )
  {
    v92 = v70;
    v339 = (__int64)v70;
    *((_DWORD *)v70 + 505) = v90;
    goto LABEL_136;
  }
  v339 = sub_140B0E020(v70, v90, v89);
  v92 = (_BYTE *)v339;
  if ( !v339 )
  {
LABEL_238:
    v40 = -1073741670;
LABEL_239:
    *a1 = v330;
    return (unsigned int)v40;
  }
  v93 = *((_DWORD *)v70 + 612);
  if ( (v93 & 4) == 0 )
  {
    v94 = *((_DWORD *)v70 + 505);
    v95 = *((_QWORD *)v70 + 249);
    v96 = (v93 & 0x20000000) != 0 ? *((_DWORD *)v70 + 585) : 0;
    if ( v94 >= 8 )
    {
      v97 = (unsigned __int64)v94 >> 3;
      do
      {
        *(_QWORD *)v70 = 0LL;
        v94 -= 8;
        v70 += 8;
        --v97;
      }
      while ( v97 );
    }
    for ( ; v94; --v94 )
      *v70++ = 0;
    v98 = *((_DWORD *)v92 + 585);
    *((_DWORD *)v92 + 585) = v96;
    if ( v96 == 3 )
    {
      (*((void (__fastcall **)(__int64))v92 + 109))(v95);
    }
    else if ( (*((_DWORD *)v92 + 612) & 0x10000000) != 0 || !v96 )
    {
      (*((void (__fastcall **)(__int64))v92 + 31))(v95);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v92 + 69))(v95 - 8, *(_QWORD *)(v95 - 8));
    }
    *((_DWORD *)v92 + 585) = v98;
  }
  *((_DWORD *)v92 + 612) &= ~4u;
  LODWORD(v91) = (_DWORD)v334;
LABEL_136:
  *((_DWORD *)v92 + 515) += 6;
  v342 = &v92[v88];
  v99 = &v352;
  v100 = &v92[v88];
  v341 = 6LL;
  v101 = v349;
  do
  {
    v102 = *v101;
    v103 = 6LL;
    v104 = (_QWORD *)*v99;
    v105 = 48;
    v106 = v100;
    do
    {
      *v106 = 0LL;
      v105 -= 8;
      ++v106;
      --v103;
    }
    while ( v103 );
    for ( ; v105; --v105 )
    {
      *(_BYTE *)v106 = 0;
      v106 = (_QWORD *)((char *)v106 + 1);
    }
    *(_DWORD *)v100 = v91;
    *((_QWORD *)v100 + 1) = v104;
    v107 = v104;
    *((_DWORD *)v100 + 4) = v102;
    v108 = (const char *)v104;
    *((_DWORD *)v92 + 522) += v102;
    v109 = *((_DWORD *)v92 + 517);
    v110 = *((_QWORD *)v92 + 259);
    if ( v104 < (_QWORD *)((char *)v104 + v102) )
    {
      do
      {
        _mm_prefetch(v108, 0);
        v108 += 64;
      }
      while ( v108 < (const char *)v104 + v102 );
    }
    v111 = *((_QWORD *)v92 + 259);
    v112 = (unsigned int)v102 >> 7;
    if ( (unsigned int)v102 >> 7 )
    {
      do
      {
        v113 = 8LL;
        do
        {
          v114 = v107[1] ^ __ROL8__(*v107 ^ v111, v109);
          v107 += 2;
          v111 = __ROL8__(v114, v109);
          --v113;
        }
        while ( v113 );
        v115 = (__ROL8__(v110 ^ ((char *)v107 - (char *)v104), 17) ^ v110 ^ (unsigned __int64)((char *)v107
                                                                                             - (char *)v104))
             * (unsigned __int128)0x7010008004002001uLL;
        v361 = *((_QWORD *)&v115 + 1);
        v109 = ((unsigned __int8)v115 ^ (unsigned __int8)(BYTE8(v115) ^ v109)) & 0x3F;
        if ( !v109 )
          LOBYTE(v109) = 1;
        --v112;
      }
      while ( v112 );
      v92 = (_BYTE *)v339;
    }
    v116 = v102 & 0x7F;
    if ( v116 >= 8 )
    {
      v117 = (unsigned __int64)(v102 & 0x7F) >> 3;
      do
      {
        v111 = __ROL8__(*v107++ ^ v111, v109);
        v116 -= 8;
        --v117;
      }
      while ( v117 );
    }
    for ( ; v116; --v116 )
    {
      v111 = __ROL8__(*(unsigned __int8 *)v107 ^ v111, v109);
      v107 = (_QWORD *)((char *)v107 + 1);
    }
    for ( i = v111; ; v111 = (unsigned int)i ^ (unsigned int)v111 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v91 = (unsigned int)v334;
    LODWORD(v111) = v111 & 0x7FFFFFFF;
    ++v101;
    *((_DWORD *)v100 + 5) = v111;
    ++v99;
    *((_DWORD *)v92 + 522) += v102;
    v100 += 48;
    --v341;
  }
  while ( v341 );
  v119 = v342;
  v120 = v335;
  v121 = (int)v337;
  *v342 = 44;
  *((_QWORD *)v119 + 3) = v120;
  if ( (*((_DWORD *)v92 + 612) & 0x10200000) != 0 )
  {
    if ( !v121 )
      goto LABEL_166;
    goto LABEL_165;
  }
  if ( v121 )
  {
LABEL_165:
    v119[8] |= 2u;
    goto LABEL_166;
  }
  if ( (*((_DWORD *)v92 + 613) & 0x8000) != 0 )
  {
    v119[8] |= 1u;
    if ( (unsigned int)sub_140B0F0E0(v92, v120, v111, v91) )
      v119[8] |= 4u;
  }
LABEL_166:
  v340 = v92;
  v330 = v92;
  v40 = sub_140B0C838((unsigned int)&v340, (_DWORD)v333, v332, v120, v121, v373, (__int64)&v343, (__int64)&v348);
  if ( v40 < 0 )
  {
    v122 = a1;
    v68 = v330;
    *a1 = v330;
    goto LABEL_304;
  }
  v123 = 6LL;
  v124 = v340;
  v125 = 48;
  v126 = &v340[(char *)v119 - v330];
  v127 = v348 - v343;
  v128 = (_QWORD *)(v120 + v343);
  v129 = v126 + 192;
  v130 = v126 + 192;
  do
  {
    *v130 = 0LL;
    v125 -= 8;
    ++v130;
    --v123;
  }
  while ( v123 );
  for ( ; v125; --v125 )
  {
    *(_BYTE *)v130 = 0;
    v130 = (_QWORD *)((char *)v130 + 1);
  }
  v131 = v128;
  *v129 = (_DWORD)v334;
  v132 = (const char *)v128;
  *((_QWORD *)v126 + 25) = v128;
  *((_DWORD *)v126 + 52) = v127;
  *((_DWORD *)v124 + 522) += v127;
  v133 = *((_DWORD *)v124 + 517);
  v134 = *((_QWORD *)v124 + 259);
  v135 = (unsigned __int64)v128 + v127;
  if ( (unsigned __int64)v128 < v135 )
  {
    do
    {
      _mm_prefetch(v132, 0);
      v132 += 64;
    }
    while ( (unsigned __int64)v132 < v135 );
  }
  v136 = *((_QWORD *)v124 + 259);
  v137 = v127 >> 7;
  if ( v127 >> 7 )
  {
    do
    {
      v138 = 8LL;
      do
      {
        v139 = v131[1] ^ __ROL8__(*v131 ^ v136, v133);
        v131 += 2;
        v136 = __ROL8__(v139, v133);
        --v138;
      }
      while ( v138 );
      v140 = (__ROL8__(v134 ^ ((char *)v131 - (char *)v128), 17) ^ v134 ^ (unsigned __int64)((char *)v131 - (char *)v128))
           * (unsigned __int128)0x7010008004002001uLL;
      v362 = *((_QWORD *)&v140 + 1);
      v133 = ((unsigned __int8)v140 ^ (unsigned __int8)(BYTE8(v140) ^ v133)) & 0x3F;
      if ( !v133 )
        LOBYTE(v133) = 1;
      --v137;
    }
    while ( v137 );
    v120 = v335;
    v129 = v126 + 192;
  }
  v141 = v127 & 0x7F;
  if ( (unsigned int)v141 >= 8 )
  {
    v142 = (unsigned __int64)(unsigned int)v141 >> 3;
    do
    {
      v136 = __ROL8__(*v131++ ^ v136, v133);
      v141 = (unsigned int)(v141 - 8);
      --v142;
    }
    while ( v142 );
  }
  if ( (_DWORD)v141 )
  {
    do
    {
      v143 = *(unsigned __int8 *)v131;
      v131 = (_QWORD *)((char *)v131 + 1);
      v136 = __ROL8__(v143 ^ v136, v133);
      v26 = (_DWORD)v141 == 1;
      v141 = (unsigned int)(v141 - 1);
    }
    while ( !v26 );
  }
  for ( j = v136 >> 31; j; j >>= 31 )
    v136 = (unsigned int)j ^ (unsigned int)v136;
  v145 = (unsigned int)v337;
  LODWORD(v136) = v136 & 0x7FFFFFFF;
  v129[5] = v136;
  *((_DWORD *)v126 + 60) = 48;
  if ( *((_DWORD *)v126 + 64) )
    *((_DWORD *)v126 + 66) = *((_DWORD *)v126 + 66) & 0xFFFFFFFE | ((_DWORD)v145 != 0);
  v330 = v124;
  v146 = v126 + 96;
  v147 = ((_DWORD)v145 != 0) + 13;
  if ( v126 != (_BYTE *)-96LL )
  {
    v159 = (unsigned __int64)v338;
    v68 = v124;
    *(_DWORD *)v146 = v147;
    LODWORD(v160) = (_DWORD)v331;
    goto LABEL_233;
  }
  v148 = *((unsigned int *)v124 + 505);
  v149 = v148 + 48;
  if ( (unsigned int)(v148 + 48) <= *((_DWORD *)v124 + 647) )
  {
    v68 = v124;
    *((_DWORD *)v124 + 505) = v149;
    goto LABEL_209;
  }
  v68 = (_BYTE *)sub_140B0E020(v124, v149, *((unsigned int *)v124 + 585));
  if ( !v68 )
    goto LABEL_238;
  v150 = *((_DWORD *)v124 + 612);
  if ( (v150 & 4) == 0 )
  {
    v151 = *((_DWORD *)v124 + 505);
    v152 = *((_QWORD *)v124 + 249);
    v153 = (v150 & 0x20000000) != 0 ? *((_DWORD *)v124 + 585) : 0;
    if ( v151 >= 8 )
    {
      v154 = (unsigned __int64)v151 >> 3;
      do
      {
        *(_QWORD *)v124 = 0LL;
        v151 -= 8;
        v124 += 8;
        --v154;
      }
      while ( v154 );
    }
    for ( ; v151; --v151 )
      *v124++ = 0;
    v155 = *((_DWORD *)v68 + 585);
    *((_DWORD *)v68 + 585) = v153;
    if ( v153 == 3 )
    {
      (*((void (__fastcall **)(__int64))v68 + 109))(v152);
    }
    else if ( (*((_DWORD *)v68 + 612) & 0x10000000) != 0 || !v153 )
    {
      (*((void (__fastcall **)(__int64))v68 + 31))(v152);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v68 + 69))(v152 - 8, *(_QWORD *)(v152 - 8));
    }
    *((_DWORD *)v68 + 585) = v155;
  }
  *((_DWORD *)v68 + 612) &= ~4u;
LABEL_209:
  v156 = 48;
  ++*((_DWORD *)v68 + 515);
  v146 = &v68[v148];
  v157 = v146;
  v158 = 6LL;
  do
  {
    *v157 = 0LL;
    v156 -= 8;
    ++v157;
    --v158;
  }
  while ( v158 );
  for ( ; v156; --v156 )
  {
    *(_BYTE *)v157 = 0;
    v157 = (_QWORD *)((char *)v157 + 1);
  }
  v159 = (unsigned __int64)v338;
  *(_DWORD *)v146 = v147;
  v141 = v159;
  v160 = (unsigned int)v331;
  *((_QWORD *)v146 + 1) = v159;
  *((_DWORD *)v146 + 4) = v160;
  *((_DWORD *)v68 + 522) += v160;
  v161 = *((_DWORD *)v68 + 517);
  v162 = *((_QWORD *)v68 + 259);
  if ( v159 < v159 + v160 )
  {
    v163 = (const char *)v159;
    do
    {
      _mm_prefetch(v163, 0);
      v163 += 64;
    }
    while ( (unsigned __int64)v163 < v159 + v160 );
  }
  v136 = *((_QWORD *)v68 + 259);
  v164 = (unsigned int)v160 >> 7;
  if ( (unsigned int)v160 >> 7 )
  {
    do
    {
      v165 = 8LL;
      do
      {
        v166 = *(_QWORD *)(v141 + 8) ^ __ROL8__(*(_QWORD *)v141 ^ v136, v161);
        v141 += 16LL;
        v136 = __ROL8__(v166, v161);
        --v165;
      }
      while ( v165 );
      v167 = (__ROL8__(v162 ^ (v141 - v159), 17) ^ v162 ^ (v141 - v159)) * (unsigned __int128)0x7010008004002001uLL;
      v363 = *((_QWORD *)&v167 + 1);
      v161 = ((unsigned __int8)v167 ^ (unsigned __int8)(BYTE8(v167) ^ v161)) & 0x3F;
      if ( !v161 )
        LOBYTE(v161) = 1;
      --v164;
    }
    while ( v164 );
    LODWORD(v160) = (_DWORD)v331;
    v120 = v335;
  }
  v145 = v160 & 0x7F;
  if ( (unsigned int)v145 >= 8 )
  {
    v168 = (unsigned __int64)(v160 & 0x7F) >> 3;
    do
    {
      v136 = __ROL8__(*(_QWORD *)v141 ^ v136, v161);
      v141 += 8LL;
      v145 = (unsigned int)(v145 - 8);
      --v168;
    }
    while ( v168 );
  }
  if ( (_DWORD)v145 )
  {
    do
    {
      v169 = *(unsigned __int8 *)v141++;
      v136 = __ROL8__(v169 ^ v136, v161);
      v26 = (_DWORD)v145 == 1;
      v145 = (unsigned int)(v145 - 1);
    }
    while ( !v26 );
  }
  for ( k = v136; ; v136 = (unsigned int)k ^ (unsigned int)v136 )
  {
    k >>= 31;
    if ( !k )
      break;
  }
  LODWORD(v136) = v136 & 0x7FFFFFFF;
  *((_DWORD *)v146 + 5) = v136;
  *((_DWORD *)v68 + 522) += v160;
LABEL_233:
  if ( (*((_DWORD *)v68 + 612) & 0x40000000) != 0 && (_DWORD)v160 )
    sub_1403EC00C((__int64)v68, v159, v160, (__int64)(v146 + 28));
  v26 = (_DWORD)v337 == 0;
  *((_DWORD *)v146 + 6) = v336 != 0;
  v330 = v68;
  v171 = *((_DWORD *)v126 + 46) & 0xFFFFFFFE;
  *((_DWORD *)v126 + 36) = 35;
  v259 = *((_DWORD *)v126 + 40) < 0x94u;
  *((_DWORD *)v126 + 46) = v171 | !v26;
  if ( !v259 )
  {
    v172 = *((_QWORD *)v126 + 19);
    v173 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))v68 + 63))(
             v120,
             v145,
             v136,
             v141);
    if ( !v173 )
      goto LABEL_238;
    v136 = v120 + *(unsigned int *)(v173 + 80);
    v145 = *((_DWORD *)v126 + 46) | 2u;
    *((_DWORD *)v126 + 46) = v145;
    v174 = v145;
    v175 = *(_QWORD **)(v172 + 112);
    if ( (unsigned __int64)v175 >= v120 && (unsigned __int64)v175 < v136 )
    {
      v174 = v145 | 4;
      *((_QWORD *)v126 + 21) = *v175;
      *((_DWORD *)v126 + 46) = v145 | 4;
    }
    v176 = *(_QWORD **)(v172 + 120);
    if ( (unsigned __int64)v176 >= v120 && (unsigned __int64)v176 < v136 )
    {
      *((_QWORD *)v126 + 22) = *v176;
      *((_DWORD *)v126 + 46) = v174 | 8;
    }
  }
  v26 = (*((_DWORD *)v68 + 612) & 0x400000) == 0;
  v340 = v68;
  if ( v26 )
    goto LABEL_487;
  v177 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))v68 + 63))(v120, v145, v136, v141);
  v339 = v177;
  if ( !v177 )
    goto LABEL_248;
  v179 = *(unsigned __int16 *)(v177 + 6);
  v374 = v179;
  v180 = (unsigned int)v332 / 0xCuLL;
  v342 = (_DWORD *)v180;
  if ( !(_WORD)v179 )
  {
    if ( (*((_DWORD *)v68 + 612) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v120, 0LL, 0LL);
    if ( *((_DWORD *)v68 + 574) )
      goto LABEL_248;
    *((_DWORD *)v68 + 574) = 1;
    goto LABEL_253;
  }
  v181 = v333;
  v182 = v179;
  LODWORD(v334) = v179;
  v183 = *(unsigned __int16 *)(v177 + 20) + v177 + 24;
  v184 = &v333[3 * (unsigned int)v180];
  v338 = v184;
  v185 = 0;
  v341 = v183;
  LODWORD(v331) = 0;
  v186 = (unsigned int *)(v183 + 8);
  v178 = 1LL;
  while ( 2 )
  {
    v187 = v186[2];
    v188 = v186[1];
    if ( v187 <= *v186 )
      v187 = *v186;
    v336 = v186[1];
    v189 = v188 + v187;
    if ( v185 )
    {
      if ( v189 >= *(_DWORD *)(v341 + 40LL * (v185 - 1) + 12) )
      {
        v185 = (unsigned int)v331;
        goto LABEL_261;
      }
      if ( (*((_DWORD *)v68 + 612) & 0x200000) == 0 )
        KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v120, 1uLL, 0LL);
      if ( *((_DWORD *)v68 + 574) )
        goto LABEL_248;
      *((_DWORD *)v68 + 574) = 1;
LABEL_253:
      *((_QWORD *)v68 + 288) = v68 - 0x5C5FC0A76E374B18LL;
LABEL_254:
      *((_QWORD *)v68 + 289) = 0LL;
      *((_QWORD *)v68 + 290) = 271LL;
      *((_QWORD *)v68 + 291) = v120;
      __ba(v68, 0LL, v178, v180);
      goto LABEL_248;
    }
LABEL_261:
    if ( v181 == v184 )
      goto LABEL_284;
LABEL_262:
    v190 = v181[1];
    if ( *v181 >= v189 || v190 <= v188 )
    {
LABEL_283:
      v185 = (unsigned int)v331;
      v178 = 1LL;
      v182 = (unsigned int)v334;
LABEL_284:
      ++v185;
      v186 += 10;
      LODWORD(v331) = v185;
      if ( v185 < v182 )
        continue;
      v180 = (unsigned __int64)v342;
      v178 = 0xA3A03F5891C8B4E8uLL;
      v201 = v339;
      v202 = v341;
      if ( v181 != v184 )
      {
        if ( (*((_DWORD *)v68 + 612) & 0x200000) == 0 )
          KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v120, 3uLL, 0LL);
        if ( *((_DWORD *)v68 + 574) )
          goto LABEL_248;
        v203 = v68 - 0x5C5FC0A76E374B18LL;
LABEL_294:
        *((_QWORD *)v68 + 288) = v203;
        *((_DWORD *)v68 + 574) = 1;
        goto LABEL_254;
      }
      if ( (_DWORD)v342 )
        v204 = ((_DWORD)v342 + 6) & 0xFFFFFFF8;
      else
        v204 = 0;
      v205 = *((unsigned int *)v68 + 505);
      v206 = v204 + 24 * v182 + v205 + 48;
      if ( v206 <= *((_DWORD *)v68 + 647) )
      {
        v207 = v68;
        v339 = (__int64)v68;
        *((_DWORD *)v68 + 505) = v206;
      }
      else
      {
        v339 = sub_140B0E020(v68, v206, *((unsigned int *)v68 + 585));
        v207 = (_BYTE *)v339;
        if ( !v339 )
        {
          v40 = -1073741670;
          goto LABEL_303;
        }
        v208 = *((_DWORD *)v68 + 612);
        if ( (v208 & 4) == 0 )
        {
          v209 = *((_DWORD *)v68 + 505);
          v210 = *((_QWORD *)v68 + 249);
          v211 = (v208 & 0x20000000) != 0 ? *((_DWORD *)v68 + 585) : 0;
          if ( v209 >= 8 )
          {
            v212 = (unsigned __int64)v209 >> 3;
            do
            {
              *(_QWORD *)v68 = 0LL;
              v209 -= 8;
              v68 += 8;
              --v212;
            }
            while ( v212 );
          }
          for ( ; v209; --v209 )
            *v68++ = 0;
          v213 = *((_DWORD *)v207 + 585);
          *((_DWORD *)v207 + 585) = v211;
          if ( v211 == 3 )
          {
            (*((void (__fastcall **)(__int64))v207 + 109))(v210);
          }
          else if ( (*((_DWORD *)v207 + 612) & 0x10000000) != 0 || !v211 )
          {
            (*((void (__fastcall **)(__int64))v207 + 31))(v210);
          }
          else
          {
            (*((void (__fastcall **)(__int64, _QWORD))v207 + 69))(v210 - 8, *(_QWORD *)(v210 - 8));
          }
          *((_DWORD *)v207 + 585) = v213;
        }
        *((_DWORD *)v207 + 612) &= ~4u;
        v180 = (unsigned __int64)v342;
        v182 = (unsigned int)v334;
        v184 = v338;
      }
      v214 = &v207[v205];
      ++*((_DWORD *)v207 + 515);
      v215 = &v207[v205];
      v216 = 6LL;
      v217 = 48;
      do
      {
        *v215 = 0LL;
        v217 -= 8;
        ++v215;
        --v216;
      }
      while ( v216 );
      for ( ; v217; --v217 )
      {
        *(_BYTE *)v215 = 0;
        v215 = (_QWORD *)((char *)v215 + 1);
      }
      *((_QWORD *)v214 + 1) = v333;
      *(_DWORD *)v214 = 30;
      *((_DWORD *)v214 + 4) = 0;
      v218 = *((_QWORD *)v207 + 259);
      for ( m = v218; ; LODWORD(v218) = m ^ v218 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      v26 = (_DWORD)v337 == 0;
      v68 = v207;
      *((_DWORD *)v214 + 5) = v218 & 0x7FFFFFFF;
      *((_QWORD *)v214 + 3) = v120;
      *((_DWORD *)v214 + 8) = *(_DWORD *)(v201 + 80);
      *((_DWORD *)v214 + 9) = v332;
      *((_WORD *)v214 + 20) = v374;
      v220 = *((_WORD *)v214 + 21) & 0xFFFE;
      v340 = v207;
      *((_WORD *)v214 + 21) = v220 | !v26;
      v334 = v214 + 48;
      if ( (_DWORD)v180 )
        v221 = &v214[(((unsigned int)(v180 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
      else
        v221 = v214 + 48;
      v222 = v333;
      v331 = v221;
      v342 = &v221[6 * v374];
      if ( (_DWORD)v180 )
        v337 = v333 + 3;
      else
        v337 = v184;
      if ( v182 )
      {
        v223 = v221 + 2;
        v224 = v182;
        v180 = 0x80000000LL;
        do
        {
          v225 = 2LL;
          do
          {
            *((_QWORD *)v223 - 1) = 0LL;
            *v223 = 0x80000000;
            v223 += 3;
            --v225;
          }
          while ( v225 );
          --v224;
        }
        while ( v224 );
      }
      if ( v221 == &v221[6 * v374] )
      {
LABEL_487:
        v330 = v68;
        goto LABEL_488;
      }
      while ( 1 )
      {
        v226 = 0;
        if ( (*(_DWORD *)(v202 + 36) & 0x2000000) != 0 )
        {
LABEL_348:
          v226 = 1;
          goto LABEL_349;
        }
        v227 = *(_DWORD *)v202;
        if ( *(_DWORD *)v202 == 1414090313 )
          break;
        if ( v227 != 1162297680 )
          goto LABEL_343;
        v236 = *(_WORD *)(v202 + 4);
        if ( v236 == 30839 || v236 == 29303 || v236 == 30583 )
          goto LABEL_348;
LABEL_345:
        v228 = (char *)*((_QWORD *)v207 + 294);
        v180 = *((_QWORD *)v207 + 295);
        v229 = v202 - (_QWORD)v228;
        v230 = (char *)*((_QWORD *)v207 + 296);
        v231 = 7;
        v232 = (char *)*((_QWORD *)v207 + 297);
        while ( 1 )
        {
          v233 = v228[v229];
          v234 = *v228++;
          if ( v233 != v234 )
            break;
          if ( !--v231 )
            goto LABEL_348;
        }
        v237 = 8;
        v238 = (char *)v202;
        while ( 1 )
        {
          v239 = *(_QWORD *)v238;
          v238 += 8;
          v240 = *(_QWORD *)v180;
          v180 += 8LL;
          if ( v239 != v240 )
            break;
          v237 -= 8;
          if ( v237 < 8 )
          {
            if ( !v237 )
              goto LABEL_348;
            while ( 1 )
            {
              v241 = *v238++;
              v242 = *(_BYTE *)v180++;
              if ( v241 != v242 )
                goto LABEL_363;
              if ( !--v237 )
                goto LABEL_348;
            }
          }
        }
LABEL_363:
        v243 = 4;
        v244 = v202 - (_QWORD)v230;
        v180 = 0xFFFFFFFFLL;
        while ( 1 )
        {
          v245 = v230[v244];
          v246 = *v230++;
          if ( v245 != v246 )
            break;
          if ( !--v243 )
            goto LABEL_348;
        }
        v247 = 6;
        v248 = v202 - (_QWORD)v232;
        while ( 1 )
        {
          v249 = v232[v248];
          v250 = *v232++;
          if ( v249 != v250 )
            break;
          if ( !--v247 )
            goto LABEL_348;
        }
LABEL_349:
        v235 = *(_DWORD *)(v202 + 36);
        if ( v235 >= 0 )
        {
          if ( !v226 )
            goto LABEL_376;
        }
        else
        {
          v226 = 1;
        }
        if ( *(_DWORD *)v202 == 1414090313
          && *(_DWORD *)(v202 + 4) == 1195525195
          && (*((_DWORD *)v207 + 613) & 0x2000) != 0 )
        {
          v226 = 0;
        }
LABEL_376:
        if ( (*((_DWORD *)v207 + 613) & 0x4000) != 0
          && (v235 & 0x20000000) != 0
          && (v335 == *((_QWORD *)v207 + 188) || v335 == *((_QWORD *)v207 + 189)) )
        {
          v226 = 1;
        }
        v251 = *(_DWORD *)(v202 + 16);
        v252 = *(unsigned int *)(v202 + 12);
        if ( v251 <= *(_DWORD *)(v202 + 8) )
          v251 = *(_DWORD *)(v202 + 8);
        v336 = *(_DWORD *)(v202 + 12);
        v253 = v252 + v251;
        v254 = 0;
        v255 = v252;
        v375 = v253;
        if ( v222 == v338 )
        {
          v258 = 0;
          v259 = (_DWORD)v252 != 0;
        }
        else
        {
          v256 = *v222;
          v257 = v222[1];
          v258 = v257;
          v259 = v256 < (unsigned int)v252;
          if ( v256 > (unsigned int)v252 )
          {
            if ( v257 > v253 )
            {
LABEL_413:
              v276 = v258 <= v253;
              v222 = v333;
              if ( !v276 )
                goto LABEL_455;
              v277 = v338;
              if ( v333 == v338 )
                goto LABEL_455;
            }
            else
            {
              if ( !v226 )
              {
                v260 = v335 + v252;
                *v221 = v252;
                v221[1] = v256;
                v180 = v256 - (unsigned int)v252;
                LODWORD(v332) = v257;
                v261 = v349;
                v262 = v260 + v180;
                v263 = &v352;
                v255 = v256;
                do
                {
                  if ( v260 < *v263 + *v261 && v262 > *v263 )
                  {
                    v254 = 0;
                    goto LABEL_413;
                  }
                  ++v254;
                  ++v263;
                  ++v261;
                }
                while ( v254 < 6 );
                *((_DWORD *)v207 + 522) += v180;
                v264 = (_QWORD *)v260;
                v265 = *((_DWORD *)v207 + 517);
                v266 = (const char *)v260;
                v267 = *((_QWORD *)v207 + 259);
                if ( v260 < v262 )
                {
                  do
                  {
                    _mm_prefetch(v266, 0);
                    v266 += 64;
                  }
                  while ( (unsigned __int64)v266 < v262 );
                }
                v268 = *((_QWORD *)v207 + 259);
                v269 = (unsigned int)v180 >> 7;
                if ( (unsigned int)v180 >> 7 )
                {
                  do
                  {
                    v270 = 8LL;
                    do
                    {
                      v271 = v264[1] ^ __ROL8__(*v264 ^ v268, v265);
                      v264 += 2;
                      v268 = __ROL8__(v271, v265);
                      --v270;
                    }
                    while ( v270 );
                    v272 = (__ROL8__(v267 ^ ((unsigned __int64)v264 - v260), 17) ^ v267 ^ ((unsigned __int64)v264 - v260))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v364 = *((_QWORD *)&v272 + 1);
                    v265 = ((unsigned __int8)v272 ^ (unsigned __int8)(BYTE8(v272) ^ v265)) & 0x3F;
                    if ( !v265 )
                      LOBYTE(v265) = 1;
                    --v269;
                  }
                  while ( v269 );
                  v207 = (_BYTE *)v339;
                  v258 = v332;
                }
                v180 &= 0x7Fu;
                if ( (unsigned int)v180 >= 8 )
                {
                  v273 = (unsigned __int64)(unsigned int)v180 >> 3;
                  do
                  {
                    v268 = __ROL8__(*v264++ ^ v268, v265);
                    v180 = (unsigned int)(v180 - 8);
                    --v273;
                  }
                  while ( v273 );
                }
                if ( (_DWORD)v180 )
                {
                  do
                  {
                    v274 = *(unsigned __int8 *)v264;
                    v264 = (_QWORD *)((char *)v264 + 1);
                    v268 = __ROL8__(v274 ^ v268, v265);
                    v26 = (_DWORD)v180 == 1;
                    v180 = (unsigned int)(v180 - 1);
                  }
                  while ( !v26 );
                }
                v275 = v268 >> 31;
                v254 = 0;
                while ( v275 )
                {
                  LODWORD(v268) = v275 ^ v268;
                  v275 >>= 31;
                }
                v253 = v375;
                v331[2] = v268 & 0x7FFFFFFF;
                goto LABEL_413;
              }
              v277 = v338;
            }
            v278 = v337;
            v279 = v337[1];
            LODWORD(v332) = v279;
            if ( v279 <= v253 )
            {
              v280 = v334;
              do
              {
                if ( v278 == v277 )
                  break;
                if ( v226 )
                {
                  v281 = 0x80;
                }
                else
                {
                  v255 = *v278;
                  v282 = v333[1];
                  if ( *v278 < (unsigned int)v282 )
                  {
                    if ( (*((_DWORD *)v207 + 612) & 0x200000) == 0 )
                      KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v335, 6uLL, 0LL);
                    if ( !*((_DWORD *)v207 + 574) )
                    {
                      *((_QWORD *)v207 + 291) = v335;
                      *((_QWORD *)v207 + 288) = v207 - 0x5C5FC0A76E374B18LL;
                      *((_QWORD *)v207 + 289) = 0LL;
                      *((_DWORD *)v207 + 574) = 1;
                      *((_QWORD *)v207 + 290) = 271LL;
                      __ba(v207, 0LL, v277, v180);
                      v254 = 0;
                    }
                  }
                  v283 = v349;
                  v284 = v335 + v282;
                  v285 = &v352;
                  v180 = v255 - (unsigned int)v282;
                  v286 = v335 + v282 + v180;
                  do
                  {
                    if ( v284 < *v285 + *v283 && v286 > *v285 )
                      goto LABEL_449;
                    ++v254;
                    ++v285;
                    ++v283;
                  }
                  while ( v254 < 6 );
                  if ( (unsigned int)v180 < 4 )
                  {
LABEL_449:
                    v254 = 0;
                    v281 = 0x80;
                    goto LABEL_450;
                  }
                  *((_DWORD *)v207 + 522) += v180;
                  v287 = (_QWORD *)v284;
                  v288 = *((_DWORD *)v207 + 517);
                  v289 = (const char *)v284;
                  v290 = *((_QWORD *)v207 + 259);
                  if ( v284 < v286 )
                  {
                    do
                    {
                      _mm_prefetch(v289, 0);
                      v289 += 64;
                    }
                    while ( (unsigned __int64)v289 < v286 );
                  }
                  v291 = *((_QWORD *)v207 + 259);
                  v292 = (unsigned int)v180 >> 7;
                  if ( (unsigned int)v180 >> 7 )
                  {
                    do
                    {
                      v293 = 8LL;
                      do
                      {
                        v294 = v287[1] ^ __ROL8__(*v287 ^ v291, v288);
                        v287 += 2;
                        v291 = __ROL8__(v294, v288);
                        --v293;
                      }
                      while ( v293 );
                      v295 = (__ROL8__(v290 ^ ((unsigned __int64)v287 - v284), 17) ^ v290 ^ ((unsigned __int64)v287
                                                                                           - v284))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v365 = *((_QWORD *)&v295 + 1);
                      v288 = ((unsigned __int8)v295 ^ (unsigned __int8)(BYTE8(v295) ^ v288)) & 0x3F;
                      if ( !v288 )
                        LOBYTE(v288) = 1;
                      --v292;
                    }
                    while ( v292 );
                    v207 = (_BYTE *)v339;
                    v279 = v332;
                  }
                  v180 &= 0x7Fu;
                  if ( (unsigned int)v180 >= 8 )
                  {
                    v296 = (unsigned __int64)(unsigned int)v180 >> 3;
                    do
                    {
                      v291 = __ROL8__(*v287++ ^ v291, v288);
                      v180 = (unsigned int)(v180 - 8);
                      --v296;
                    }
                    while ( v296 );
                  }
                  if ( (_DWORD)v180 )
                  {
                    do
                    {
                      v297 = *(unsigned __int8 *)v287;
                      v287 = (_QWORD *)((char *)v287 + 1);
                      v291 = __ROL8__(v297 ^ v291, v288);
                      v26 = (_DWORD)v180 == 1;
                      v180 = (unsigned int)(v180 - 1);
                    }
                    while ( !v26 );
                  }
                  v298 = v291 >> 7;
                  v254 = 0;
                  while ( v298 )
                  {
                    LOBYTE(v291) = v298 ^ v291;
                    v298 >>= 7;
                  }
                  v253 = v375;
                  v281 = v291 & 0x7F;
                  v278 = v337;
LABEL_450:
                  v280 = v334;
                }
                v333 += 3;
                v278 += 3;
                *v280 = v281;
                v277 = v338;
                v280 = ++v334;
                v337 = v278;
                if ( v278 != v338 )
                {
                  v279 = v278[1];
                  LODWORD(v332) = v279;
                }
              }
              while ( v279 <= v253 );
            }
            goto LABEL_454;
          }
        }
        if ( !v259 )
          goto LABEL_413;
LABEL_454:
        v222 = v333;
LABEL_455:
        v299 = v331;
        if ( !v226 && v255 != v253 )
        {
          v300 = v349;
          v301 = v335 + v255;
          v302 = &v352;
          v331[3] = v255;
          v180 = v253 - v255;
          v299[4] = v253;
          v303 = v301 + v180;
          v304 = 0;
          while ( v301 >= *v302 + *v300 || v303 <= *v302 )
          {
            ++v304;
            ++v302;
            ++v300;
            if ( v304 >= 6 )
            {
              *((_DWORD *)v207 + 522) += v180;
              v305 = (_QWORD *)v301;
              v306 = *((_DWORD *)v207 + 517);
              v307 = (const char *)v301;
              v308 = *((_QWORD *)v207 + 259);
              if ( v301 < v303 )
              {
                do
                {
                  _mm_prefetch(v307, 0);
                  v307 += 64;
                }
                while ( (unsigned __int64)v307 < v303 );
              }
              v309 = *((_QWORD *)v207 + 259);
              v310 = (unsigned int)v180 >> 7;
              if ( (unsigned int)v180 >> 7 )
              {
                do
                {
                  v311 = 8LL;
                  do
                  {
                    v312 = *v305 ^ v309;
                    v313 = v305 + 1;
                    v314 = *v313 ^ __ROL8__(v312, v306);
                    v305 = v313 + 1;
                    v309 = __ROL8__(v314, v306);
                    --v311;
                  }
                  while ( v311 );
                  v315 = (__ROL8__(v308 ^ ((unsigned __int64)v305 - v301), 17) ^ v308 ^ ((unsigned __int64)v305 - v301))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v366 = *((_QWORD *)&v315 + 1);
                  v306 = ((unsigned __int8)v315 ^ (unsigned __int8)(BYTE8(v315) ^ v306)) & 0x3F;
                  if ( !v306 )
                    LOBYTE(v306) = 1;
                  --v310;
                }
                while ( v310 );
                v222 = v333;
              }
              v180 &= 0x7Fu;
              if ( (unsigned int)v180 >= 8 )
              {
                v316 = (unsigned __int64)(unsigned int)v180 >> 3;
                do
                {
                  v309 = __ROL8__(*v305++ ^ v309, v306);
                  v180 = (unsigned int)(v180 - 8);
                  --v316;
                }
                while ( v316 );
              }
              if ( (_DWORD)v180 )
              {
                do
                {
                  v317 = *(unsigned __int8 *)v305;
                  v305 = (_QWORD *)((char *)v305 + 1);
                  v309 = __ROL8__(v317 ^ v309, v306);
                  v26 = (_DWORD)v180 == 1;
                  v180 = (unsigned int)(v180 - 1);
                }
                while ( !v26 );
              }
              for ( n = v309; ; LODWORD(v309) = n ^ v309 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v299 = v331;
              v253 = v375;
              v331[5] = v309 & 0x7FFFFFFF;
              break;
            }
          }
        }
        if ( v222 != v338 && *v222 >= v336 && v222[1] <= v253 )
        {
          v319 = v337;
          if ( v337 != v338 )
          {
            v320 = v334;
            *v334 = 0x80;
            v334 = v320 + 1;
            v337 = v319 + 3;
          }
          v222 += 3;
          v333 = v222;
        }
        v221 = v299 + 6;
        v202 = v341 + 40;
        v331 = v221;
        v341 += 40LL;
        if ( v221 == v342 )
        {
          v68 = v340;
          goto LABEL_487;
        }
      }
      if ( *(_DWORD *)(v202 + 4) == 1195525195 )
        goto LABEL_348;
LABEL_343:
      if ( v227 == 1095914053 && *(_WORD *)(v202 + 4) == 16724 )
        goto LABEL_348;
      goto LABEL_345;
    }
    break;
  }
  if ( *v181 >= v188 && v190 <= v189 )
  {
    v191 = v181[2];
    if ( (v191 & 1) != 0 || (*(_BYTE *)(v191 + v120) & 0x20) != 0 )
    {
      v192 = v186[2];
      v193 = v186[1];
      if ( v192 <= *v186 )
        v192 = *v186;
      v194 = v193 + v192;
      v195 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, unsigned __int64))v68 + 131))(
                               v181,
                               v335,
                               v178);
      v197 = v195;
      if ( *v195 < v193 || v195[1] > v194 )
      {
        v198 = v335;
        if ( (*((_DWORD *)v68 + 612) & 0x200000) == 0 )
          KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v335, ((_DWORD)v195 - (_DWORD)v335) | 0x80000000, 0LL);
        if ( !*((_DWORD *)v68 + 574) )
        {
          *((_QWORD *)v68 + 289) = 0LL;
          *((_QWORD *)v68 + 290) = 271LL;
          *((_QWORD *)v68 + 288) = v68 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v68 + 291) = v198;
          *((_DWORD *)v68 + 574) = 1;
          __ba(v68, 0LL, v198, v196);
        }
      }
      v199 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v68 + 132))(
                               v197,
                               v335,
                               v335 + *v197);
      if ( *v199 >= v193 && v199[1] <= v194 )
      {
        v120 = v335;
      }
      else
      {
        v120 = v335;
        v200 = ((_DWORD)v199 - v335) | 0x80000000;
        if ( (*((_DWORD *)v68 + 612) & 0x200000) == 0 )
          KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v335, v200, 0LL);
        if ( !*((_DWORD *)v68 + 574) )
        {
          *((_QWORD *)v68 + 289) = 0LL;
          *((_QWORD *)v68 + 290) = 271LL;
          *((_QWORD *)v68 + 288) = v68 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v68 + 291) = v120;
          *((_DWORD *)v68 + 574) = 1;
          __ba(v68, 0LL, v178, v180);
        }
      }
      v188 = v336;
      v184 = v338;
    }
    v181 += 3;
    if ( v181 == v184 )
      goto LABEL_283;
    goto LABEL_262;
  }
  if ( (*((_DWORD *)v68 + 612) & 0x200000) == 0 )
    KeBugCheckEx(__ROR4__(317, 160), 0xAuLL, v120, 2uLL, 0LL);
  if ( !*((_DWORD *)v68 + 574) )
  {
    v203 = v68 - 0x5C5FC0A76E374B18LL;
    goto LABEL_294;
  }
LABEL_248:
  v40 = -1073741701;
LABEL_303:
  v122 = a1;
  v68 = v330;
  *a1 = v330;
  if ( v40 < 0 )
  {
LABEL_304:
    if ( v40 != -1073741554 )
      return (unsigned int)v40;
  }
LABEL_489:
  if ( (a3 & 0x80000004) != 0x80000004 )
  {
    v321 = v350;
    v322 = (*((__int64 (__fastcall **)(__int64))v68 + 63))(v350);
    v323 = *(unsigned int *)(v322 + 148);
    if ( (unsigned int)v323 >= 0x14 )
    {
      v324 = *(unsigned int *)(v322 + 144);
      v325 = v321 + v324 + v323;
      for ( ii = v324 + v321; ii != v325; ii += 20LL )
      {
        if ( !*(_DWORD *)(ii + 12) )
          break;
        v327 = *(unsigned int *)(ii + 16);
        if ( !(_DWORD)v327 )
          break;
        v328 = *(_QWORD *)(v327 + v321);
        if ( v328 )
        {
          result = sub_140B0A7A8(&v330, v328, a3 & 0x7FFFFFEF | 0x80000000);
          *v122 = v330;
          if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741554 )
            return result;
        }
      }
    }
  }
  return 0LL;
}
