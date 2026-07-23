/*
 * XREFs of sub_140A0D0FC @ 0x140A0D0FC
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0D0FC @ 0x140A0D0FC (sub_140A0D0FC.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     sub_1403EA5FC @ 0x1403EA5FC (sub_1403EA5FC.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     sub_140A0D0FC @ 0x140A0D0FC (sub_140A0D0FC.c)
 *     sub_140A0F098 @ 0x140A0F098 (sub_140A0F098.c)
 *     sub_140A0FB30 @ 0x140A0FB30 (sub_140A0FB30.c)
 *     $$b8 @ 0x140A103CC ($$b8.c)
 *     sub_140A10C50 @ 0x140A10C50 (sub_140A10C50.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 *     sub_140A1CFE4 @ 0x140A1CFE4 (sub_140A1CFE4.c)
 */

__int64 __fastcall sub_140A0D0FC(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  int *v5; // r8
  __int64 result; // rax
  int v7; // ecx
  int *v8; // rax
  unsigned __int64 v9; // r9
  _BYTE *v10; // rbx
  unsigned int v11; // r10d
  unsigned int v12; // esi
  _BYTE *v13; // r14
  int v14; // r12d
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  unsigned int v18; // r9d
  _BYTE *v19; // r11
  __int64 v20; // rdi
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r11
  unsigned int v28; // eax
  unsigned int v29; // r12d
  __int64 (__fastcall *v30)(__int64, char *, _QWORD, unsigned __int64); // rax
  __int64 v31; // rax
  unsigned int v32; // r15d
  int v33; // ecx
  int v34; // ecx
  int *v35; // rax
  unsigned int v36; // esi
  unsigned int v37; // edi
  _BYTE *v38; // r14
  int v39; // ecx
  unsigned int v40; // edx
  int v41; // r11d
  _BYTE *v42; // r10
  unsigned int v43; // r9d
  unsigned int **v44; // r8
  __int64 v45; // r11
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rax
  int v51; // eax
  unsigned __int64 v52; // r9
  __int64 v53; // r10
  unsigned int v54; // r15d
  __int64 v55; // rdx
  int v56; // esi
  __int64 v57; // r8
  __int64 v58; // r9
  ULONG_PTR v59; // r14
  __int64 (__fastcall *v60)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v61; // rdx
  __int64 (__fastcall *v62)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 (__fastcall *v65)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v66)(ULONG_PTR); // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rsi
  __int64 v71; // r9
  unsigned int v72; // eax
  _BYTE *v73; // rdi
  int v74; // ecx
  unsigned int v75; // eax
  __int64 v76; // r8
  int v77; // edx
  unsigned __int64 v78; // rcx
  int v79; // ebx
  int v80; // ecx
  ULONG_PTR *v81; // r13
  int *v82; // rsi
  _QWORD *v83; // rax
  unsigned int *v84; // r14
  __int64 v85; // r12
  __int64 v86; // rdx
  _QWORD *v87; // r11
  int v88; // ecx
  _QWORD *v89; // r9
  const char *v90; // rax
  int v91; // ebx
  __int64 v92; // r15
  unsigned __int64 v93; // r8
  unsigned int v94; // r10d
  __int64 v95; // rax
  __int64 v96; // r8
  unsigned __int128 v97; // rax
  unsigned int v98; // edx
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 i; // rax
  bool v102; // zf
  _DWORD *v103; // r14
  ULONG_PTR v104; // rsi
  int v105; // ebx
  char v106; // r13
  __int64 v107; // rdx
  _BYTE *v108; // rdi
  _DWORD *v109; // r14
  unsigned int v110; // r9d
  int v111; // ecx
  _QWORD *v112; // r11
  _DWORD *v113; // r12
  _QWORD *v114; // rax
  _QWORD *v115; // r10
  const char *v116; // rax
  int v117; // esi
  __int64 v118; // r15
  unsigned __int64 v119; // rcx
  ULONG_PTR v120; // r8
  unsigned int v121; // ebx
  __int64 v122; // rdx
  ULONG_PTR v123; // rax
  __int64 v124; // r8
  unsigned __int64 v125; // rcx
  unsigned int v126; // r9d
  unsigned __int64 v127; // rdx
  __int64 v128; // rax
  ULONG_PTR j; // rax
  __int64 v130; // rdx
  _BYTE *v131; // rsi
  int v132; // r13d
  int v133; // r15d
  __int64 v134; // rsi
  unsigned int v135; // eax
  _BYTE *v136; // rbx
  int v137; // ecx
  unsigned int v138; // eax
  __int64 v139; // r8
  int v140; // edx
  unsigned __int64 v141; // rcx
  int v142; // edi
  int v143; // ecx
  int v144; // ecx
  __int64 v145; // rdx
  _QWORD *v146; // rax
  unsigned __int64 v147; // r12
  _QWORD *v148; // r9
  unsigned int v149; // r15d
  int v150; // r11d
  __int64 v151; // rdi
  const char *v152; // rax
  unsigned int v153; // r10d
  __int64 v154; // rax
  __int64 v155; // r8
  unsigned __int128 v156; // rax
  unsigned __int64 v157; // rax
  __int64 v158; // rax
  ULONG_PTR k; // rax
  _BYTE *v160; // r9
  ULONG_PTR v161; // rsi
  BOOL v162; // ecx
  unsigned int v163; // eax
  bool v164; // cf
  __int64 v165; // rdi
  __int64 v166; // rax
  int v167; // ecx
  _QWORD *v168; // rax
  _QWORD *v169; // rax
  __int64 v170; // rax
  unsigned __int64 v171; // r8
  unsigned __int16 v172; // r15
  unsigned __int64 v173; // r9
  unsigned int v174; // ecx
  unsigned int v175; // r10d
  unsigned int *v176; // rdi
  char *v177; // r13
  unsigned int *v178; // r12
  unsigned int v179; // r15d
  unsigned int v180; // edx
  unsigned int v181; // r15d
  unsigned int v182; // eax
  __int64 v183; // rax
  unsigned int v184; // esi
  unsigned int v185; // r13d
  unsigned int v186; // esi
  unsigned int *v187; // rax
  __int64 v188; // r9
  unsigned int *v189; // r14
  ULONG_PTR v190; // r8
  unsigned int *v191; // rax
  unsigned int v192; // eax
  _DWORD *v193; // r14
  __int64 v194; // r12
  _BYTE *v195; // rax
  int v196; // ecx
  __int64 v197; // rdi
  unsigned int v198; // eax
  _BYTE *v199; // rsi
  int v200; // edx
  unsigned int v201; // ecx
  __int64 v202; // r9
  int v203; // r8d
  unsigned __int64 v204; // rax
  int v205; // ebx
  int v206; // ecx
  unsigned __int64 v207; // rdx
  _QWORD *v208; // rax
  __int64 v209; // rcx
  int v210; // r8d
  unsigned __int64 v211; // rcx
  unsigned __int64 m; // rax
  ULONG_PTR v213; // rax
  _DWORD *v214; // rdi
  __int64 v215; // rax
  unsigned int *v216; // r9
  __int64 v217; // r11
  unsigned int *v218; // r11
  _DWORD *v219; // r8
  _DWORD *v220; // rax
  __int64 v221; // rcx
  int v222; // r10d
  int v223; // ecx
  __int16 v224; // ax
  char *v225; // rdx
  int v226; // r9d
  __int64 v227; // r8
  char v228; // cl
  char v229; // al
  char *v230; // r8
  unsigned int v231; // edx
  char *v232; // r9
  __int64 v233; // rcx
  __int64 v234; // rax
  char v235; // cl
  char v236; // al
  char *v237; // rdx
  int v238; // r9d
  char v239; // cl
  char v240; // al
  char *v241; // rdx
  int v242; // r9d
  char v243; // cl
  char v244; // al
  int v245; // ecx
  unsigned int v246; // ecx
  __int64 v247; // r14
  unsigned int *v248; // r8
  unsigned int v249; // ecx
  unsigned int v250; // r15d
  unsigned int v251; // r12d
  unsigned int v252; // r13d
  unsigned int *v253; // rcx
  ULONG_PTR v254; // rdi
  unsigned int v255; // r9d
  unsigned int v256; // r8d
  ULONG_PTR *v257; // rdx
  unsigned __int64 v258; // r11
  ULONG_PTR v259; // rbx
  _QWORD *v260; // r10
  int v261; // edi
  const char *v262; // rax
  __int64 v263; // r14
  unsigned int v264; // ebx
  unsigned __int64 v265; // r8
  __int64 v266; // rax
  __int64 v267; // r8
  unsigned __int64 v268; // rcx
  unsigned int v269; // r9d
  unsigned __int64 v270; // rax
  __int64 v271; // rax
  unsigned __int64 n; // rax
  bool v273; // cc
  int v274; // r12d
  unsigned int v275; // r15d
  char *v276; // rax
  char v277; // r8
  __int64 v278; // rbx
  unsigned __int64 v279; // r11
  unsigned int v280; // r9d
  unsigned int *v281; // rcx
  unsigned int v282; // r10d
  unsigned __int64 v283; // rbx
  unsigned __int64 *v284; // rdx
  _QWORD *v285; // r10
  int v286; // edi
  const char *v287; // rax
  __int64 v288; // r14
  unsigned int v289; // ebx
  unsigned __int64 v290; // r8
  __int64 v291; // rax
  __int64 v292; // r8
  unsigned __int64 v293; // rcx
  unsigned int v294; // r9d
  unsigned __int64 v295; // rax
  __int64 v296; // rax
  unsigned __int64 ii; // rax
  __int64 v298; // rdi
  unsigned __int64 v299; // r11
  unsigned int v300; // r9d
  __int64 v301; // rbx
  unsigned int *v302; // rcx
  unsigned int v303; // r8d
  unsigned __int64 v304; // rbx
  unsigned __int64 *v305; // rdx
  _QWORD *v306; // r10
  int v307; // edi
  const char *v308; // rax
  __int64 v309; // r14
  unsigned int v310; // ebx
  unsigned __int64 v311; // r8
  __int64 v312; // rax
  __int64 v313; // r8
  _QWORD *v314; // r10
  __int64 v315; // r8
  unsigned __int64 v316; // rcx
  unsigned int v317; // r9d
  unsigned __int64 v318; // rax
  __int64 v319; // rax
  unsigned __int64 jj; // rax
  char *v321; // rax
  unsigned int v322; // r15d
  unsigned int v323; // r15d
  __int64 v324; // rsi
  __int64 v325; // rax
  __int64 v326; // rcx
  __int64 v327; // rax
  __int64 v328; // rdi
  __int64 kk; // rbx
  __int64 v330; // rax
  __int64 v331; // rdx
  unsigned int v332; // [rsp+48h] [rbp-C0h]
  unsigned int v333; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h]
  unsigned int *v335; // [rsp+58h] [rbp-B0h]
  unsigned int *v336; // [rsp+60h] [rbp-A8h]
  char *v337; // [rsp+68h] [rbp-A0h]
  unsigned int v338; // [rsp+70h] [rbp-98h]
  unsigned int v339; // [rsp+74h] [rbp-94h]
  __int64 v340; // [rsp+78h] [rbp-90h]
  _BYTE *v341; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v342; // [rsp+88h] [rbp-80h]
  _DWORD *v343; // [rsp+90h] [rbp-78h]
  __int64 v344; // [rsp+98h] [rbp-70h]
  _BYTE *v345; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v346; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v347; // [rsp+B0h] [rbp-58h]
  int v348; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v349; // [rsp+C0h] [rbp-48h]
  int v350; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v351[8]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v352; // [rsp+F0h] [rbp-18h]
  _DWORD v353[6]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int **v354; // [rsp+110h] [rbp+8h]
  __int64 v355; // [rsp+118h] [rbp+10h]
  int v356; // [rsp+120h] [rbp+18h] BYREF
  _DWORD *v357; // [rsp+128h] [rbp+20h]
  int *v358; // [rsp+130h] [rbp+28h]
  char *v359; // [rsp+138h] [rbp+30h]
  char *v360; // [rsp+140h] [rbp+38h]
  char *v361; // [rsp+148h] [rbp+40h]
  char *v362; // [rsp+150h] [rbp+48h]
  ULONG_PTR v363; // [rsp+158h] [rbp+50h] BYREF
  __int64 v364; // [rsp+160h] [rbp+58h]
  __int64 v365; // [rsp+168h] [rbp+60h]
  __int64 v366; // [rsp+170h] [rbp+68h]
  __int64 v367; // [rsp+178h] [rbp+70h]
  __int64 v368; // [rsp+180h] [rbp+78h]
  char v369[8]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v370; // [rsp+190h] [rbp+88h]
  int v371; // [rsp+19Ch] [rbp+94h]
  __int64 v372; // [rsp+1A0h] [rbp+98h]
  __int64 v373; // [rsp+1A8h] [rbp+A0h]
  _BYTE *v374; // [rsp+1B0h] [rbp+A8h]
  __int64 v375; // [rsp+1B8h] [rbp+B0h]
  _BYTE *v376; // [rsp+1C0h] [rbp+B8h]
  __int64 v377; // [rsp+1C8h] [rbp+C0h]
  __int64 v378; // [rsp+1D0h] [rbp+C8h]
  __int64 v379; // [rsp+1D8h] [rbp+D0h]
  char v380[8]; // [rsp+1E0h] [rbp+D8h] BYREF
  ULONG_PTR v381; // [rsp+1E8h] [rbp+E0h]
  unsigned int v382; // [rsp+1F4h] [rbp+ECh]
  _BYTE *v383; // [rsp+1F8h] [rbp+F0h]
  unsigned int v387; // [rsp+270h] [rbp+168h]
  unsigned __int16 v388; // [rsp+270h] [rbp+168h]
  int v389; // [rsp+270h] [rbp+168h]

  v3 = a2;
  v341 = (_BYTE *)*a1;
  v4 = (*((__int64 (__fastcall **)(__int64, char *))v341 + 64))(a2, v369);
  v5 = 0LL;
  v355 = v370;
  if ( !v370 )
    return 3221225595LL;
  v7 = 4;
  v349 = 0LL;
  v8 = &v350;
  v9 = 1LL;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v10 = v341;
  v11 = 0;
  v12 = *((_DWORD *)v341 + 515);
  if ( v12 )
  {
    v13 = (_BYTE *)*((_QWORD *)v341 + 335);
    v14 = v371;
    v15 = v350;
    v16 = HIDWORD(v349);
    v17 = v349;
    while ( 1 )
    {
      v18 = 0;
      v19 = v13;
      if ( !v13 )
        v19 = v341;
      v5 = (int *)&v19[*((unsigned int *)v19 + 514)];
      if ( v17 && v16 <= v11 )
      {
        v18 = v16;
        v5 = (int *)&v19[v15];
      }
      if ( v18 != v11 )
        break;
LABEL_36:
      v16 = v18;
      LODWORD(v349) = 1;
      v9 = *v5;
      v15 = (_DWORD)v5 - (_DWORD)v19;
      HIDWORD(v349) = v16;
      v350 = (_DWORD)v5 - (_DWORD)v19;
      v17 = 1;
      if ( (unsigned int)v9 > 0x2B
        || (v27 = 0x80000001002LL, !_bittest64(&v27, v9))
        || *((_QWORD *)v5 + 1) != v4
        || v5[4] != v14 )
      {
        v28 = v9 - 33;
        v9 = 1LL;
        if ( v28 > 1 || *((_QWORD *)v5 + 4) != v355 )
        {
          ++v11;
          v5 = 0LL;
          if ( v11 < v12 )
            continue;
        }
      }
      goto LABEL_43;
    }
    v20 = v11 - v18;
    v18 = v11;
    while ( 1 )
    {
      v21 = *v5;
      if ( *v5 > 12 )
        break;
      if ( v21 == 12 )
        goto LABEL_28;
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_28;
      v23 = v22 - 6;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( !v24 )
        {
          v26 = *((unsigned __int16 *)v5 + 16);
LABEL_33:
          v25 = (v26 + 55) & 0xFFFFFFF8;
          goto LABEL_34;
        }
        if ( v24 != 2 )
          goto LABEL_30;
        v25 = (unsigned int)(16 * (v5[7] + 3));
      }
      else
      {
        v25 = (unsigned int)(24 * (v5[6] + 2));
      }
LABEL_34:
      v5 = (int *)((char *)v5 + v25);
      if ( !--v20 )
      {
        v14 = v371;
        v3 = a2;
        goto LABEL_36;
      }
    }
    if ( v21 == 28 )
    {
      v26 = *((unsigned __int16 *)v5 + 20);
      goto LABEL_33;
    }
    if ( v21 == 30 )
    {
      v25 = (((v5[9] != 0 ? v5[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v5 + 20) + 2);
      goto LABEL_34;
    }
    if ( v21 <= 32 )
    {
LABEL_30:
      v25 = 48LL;
      goto LABEL_34;
    }
    if ( v21 <= 34 )
    {
      v25 = 20 * (unsigned int)(((v5[8] & 0xFFF) + (unsigned __int64)(unsigned int)v5[10] + 4095) >> 12) + 48;
      goto LABEL_34;
    }
    if ( v21 != 43 )
      goto LABEL_30;
LABEL_28:
    v25 = 4 * (v5[4] / 0xCu) + 48;
    goto LABEL_34;
  }
LABEL_43:
  if ( v5 )
    return 3221225742LL;
  v29 = a3;
  v30 = (__int64 (__fastcall *)(__int64, char *, _QWORD, unsigned __int64))*((_QWORD *)v341 + 64);
  v387 = a3;
  v345 = v341;
  v31 = v30(v3, v380, 0LL, v9);
  v32 = v382;
  v336 = (unsigned int *)v31;
  v333 = v382;
  BugCheckParameter2 = v381;
  if ( !v381 )
    goto LABEL_46;
  v34 = 4;
  v347 = 0LL;
  v35 = &v348;
  do
  {
    *(_BYTE *)v35 = 0;
    v35 = (int *)((char *)v35 + 1);
    --v34;
  }
  while ( v34 );
  v36 = *((_DWORD *)v10 + 515);
  v37 = 0;
  if ( v36 )
  {
    v38 = (_BYTE *)*((_QWORD *)v10 + 335);
    v39 = v348;
    v40 = HIDWORD(v347);
    v41 = v347;
    while ( 1 )
    {
      v42 = v38;
      v43 = 0;
      if ( !v38 )
        v42 = v10;
      v44 = (unsigned int **)&v42[*((unsigned int *)v42 + 514)];
      if ( v41 && v40 <= v37 )
      {
        v43 = v40;
        v44 = (unsigned int **)&v42[v39];
      }
      if ( v43 != v37 )
        break;
LABEL_80:
      v40 = v43;
      LODWORD(v347) = 1;
      v52 = *(int *)v44;
      v39 = (_DWORD)v44 - (_DWORD)v42;
      HIDWORD(v347) = v40;
      v348 = (_DWORD)v44 - (_DWORD)v42;
      v41 = 1;
      if ( (unsigned int)v52 <= 0x2B )
      {
        v53 = 0x80000001002LL;
        if ( _bittest64(&v53, v52) )
        {
          if ( v44[1] == v336 && *((_DWORD *)v44 + 4) == v32 )
            goto LABEL_88;
        }
      }
      if ( (unsigned int)(v52 - 33) <= 1 && v44[4] == (unsigned int *)BugCheckParameter2 )
        goto LABEL_88;
      if ( ++v37 >= v36 )
        goto LABEL_87;
    }
    v45 = v37 - v43;
    v43 = v37;
    while ( 1 )
    {
      v46 = *(_DWORD *)v44;
      if ( *(int *)v44 > 12 )
        break;
      if ( v46 == 12 )
        goto LABEL_72;
      v47 = v46 - 1;
      if ( !v47 )
        goto LABEL_72;
      v48 = v47 - 6;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( !v49 )
        {
          v51 = *((unsigned __int16 *)v44 + 16);
LABEL_77:
          v50 = (v51 + 55) & 0xFFFFFFF8;
          goto LABEL_78;
        }
        if ( v49 != 2 )
          goto LABEL_74;
        v50 = (unsigned int)(16 * (*((_DWORD *)v44 + 7) + 3));
      }
      else
      {
        v50 = (unsigned int)(24 * (*((_DWORD *)v44 + 6) + 2));
      }
LABEL_78:
      v44 = (unsigned int **)((char *)v44 + v50);
      if ( !--v45 )
      {
        v3 = a2;
        v29 = a3;
        goto LABEL_80;
      }
    }
    if ( v46 == 28 )
    {
      v51 = *((unsigned __int16 *)v44 + 20);
      goto LABEL_77;
    }
    if ( v46 == 30 )
    {
      v50 = (((*((_DWORD *)v44 + 9) != 0 ? *((_DWORD *)v44 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
          + 24 * (*((unsigned __int16 *)v44 + 20) + 2);
      goto LABEL_78;
    }
    if ( v46 <= 32 )
    {
LABEL_74:
      v50 = 48LL;
      goto LABEL_78;
    }
    if ( v46 <= 34 )
    {
      v50 = 20 * (unsigned int)((((_DWORD)v44[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v44 + 10) + 4095) >> 12)
          + 48;
      goto LABEL_78;
    }
    if ( v46 != 43 )
      goto LABEL_74;
LABEL_72:
    v50 = 4 * (*((_DWORD *)v44 + 4) / 0xCu) + 48;
    goto LABEL_78;
  }
LABEL_87:
  v44 = 0LL;
LABEL_88:
  v354 = v44;
  if ( v44 )
  {
    v33 = -1073741554;
    goto LABEL_476;
  }
  v54 = a3;
  v56 = (*((__int64 (__fastcall **)(__int64))v10 + 85))(v3);
  LODWORD(v337) = v56;
  v339 = v333;
  if ( (a3 & 0x10) != 0 && (*((_DWORD *)v10 + 613) & 0x400) == 0 )
  {
    v29 = a3 & 0xFFFFFFEF;
    v387 = a3 & 0xFFFFFFEF;
  }
  v59 = BugCheckParameter2;
  if ( (v29 & 0x10) != 0 && !(unsigned int)sub_140A10C50(v10, BugCheckParameter2, v57, v58) )
  {
    v29 &= ~0x10u;
    v387 = v29;
  }
  if ( (v29 & 2) == 0 || v56 )
  {
    if ( (*((_DWORD *)v10 + 612) & 0x40000000) != 0 )
    {
      v33 = sub_140A1CFE4(&v341, BugCheckParameter2, v29);
      goto LABEL_477;
    }
    v60 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, unsigned int *))*((_QWORD *)v10 + 62);
    v367 = 0LL;
    v353[4] = 0;
    LOBYTE(v55) = 1;
    v364 = v60(BugCheckParameter2, v55, 0LL, &v333);
    v61 = v364 != 0 ? v333 : 0;
    v333 = v61;
    v62 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v10 + 62);
    v353[1] = v61;
    LOBYTE(v61) = 1;
    v63 = v62(v59, v61, 12LL, &v333);
    v64 = v63;
    v342 = (unsigned int *)v63;
    v365 = v63;
    LOBYTE(v64) = 1;
    v333 &= -(v63 != 0);
    v65 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v10 + 62);
    v332 = v333;
    v353[2] = v333;
    v366 = v65(v59, v64, 10LL, &v333);
    v333 &= -(v366 != 0);
    v66 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v10 + 63);
    v353[3] = v333;
    v67 = v66(v59);
    if ( !v67 )
    {
      v33 = -1073741701;
      goto LABEL_477;
    }
    v68 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v10 + 147))(v59, &v356);
    v69 = *((unsigned int *)v10 + 585);
    v368 = v68;
    v353[5] = v356;
    v353[0] = *(_DWORD *)(v67 + 84);
    LODWORD(v68) = v56;
    v70 = *((unsigned int *)v10 + 505);
    v363 = v59;
    LODWORD(v71) = (_DWORD)v68 != 0 ? 0xB : 0;
    v72 = v70 + 288;
    LODWORD(v335) = v71;
    if ( (unsigned int)(v70 + 288) <= *((_DWORD *)v10 + 647) )
    {
      v73 = v10;
      v344 = (__int64)v10;
      *((_DWORD *)v10 + 505) = v72;
    }
    else
    {
      v344 = sub_140A0FB30(v10, v72, v69);
      v73 = (_BYTE *)v344;
      if ( !v344 )
      {
        v33 = -1073741670;
        goto LABEL_477;
      }
      v74 = *((_DWORD *)v10 + 612);
      if ( (v74 & 4) == 0 )
      {
        v75 = *((_DWORD *)v10 + 505);
        v76 = *((_QWORD *)v10 + 249);
        v77 = (v74 & 0x20000000) != 0 ? *((_DWORD *)v10 + 585) : 0;
        if ( v75 >= 8 )
        {
          v78 = (unsigned __int64)v75 >> 3;
          do
          {
            *(_QWORD *)v10 = 0LL;
            v75 -= 8;
            v10 += 8;
            --v78;
          }
          while ( v78 );
        }
        for ( ; v75; --v75 )
          *v10++ = 0;
        v79 = *((_DWORD *)v73 + 585);
        *((_DWORD *)v73 + 585) = v77;
        if ( v77 == 3 )
        {
          (*((void (__fastcall **)(__int64))v73 + 109))(v76);
        }
        else
        {
          v80 = 0;
          if ( (*((_DWORD *)v73 + 612) & 0x10000000) == 0 )
            v80 = v77;
          if ( v80 )
            (*((void (__fastcall **)(__int64, _QWORD))v73 + 69))(v76 - 8, *(_QWORD *)(v76 - 8));
          else
            (*((void (__fastcall **)(__int64))v73 + 32))(v76);
        }
        *((_DWORD *)v73 + 585) = v79;
      }
      *((_DWORD *)v73 + 612) &= ~4u;
      LODWORD(v71) = (_DWORD)v335;
    }
    *((_DWORD *)v73 + 515) += 6;
    v81 = &v363;
    v82 = (int *)&v73[v70];
    v343 = v82;
    v358 = v82;
    v354 = (unsigned int **)v82;
    v83 = v82;
    v84 = v353;
    v340 = 6LL;
    do
    {
      v85 = *v84;
      v86 = 6LL;
      v87 = (_QWORD *)*v81;
      v88 = 48;
      do
      {
        *v83 = 0LL;
        v88 -= 8;
        ++v83;
        --v86;
      }
      while ( v86 );
      for ( ; v88; --v88 )
      {
        *(_BYTE *)v83 = 0;
        v83 = (_QWORD *)((char *)v83 + 1);
      }
      *v82 = v71;
      *((_QWORD *)v82 + 1) = v87;
      v89 = v87;
      v82[4] = v85;
      v90 = (const char *)v87;
      *((_DWORD *)v73 + 522) += v85;
      v91 = *((_DWORD *)v73 + 517);
      v92 = *((_QWORD *)v73 + 259);
      if ( v87 < (_QWORD *)((char *)v87 + v85) )
      {
        do
        {
          _mm_prefetch(v90, 0);
          v90 += 64;
        }
        while ( v90 < (const char *)v87 + v85 );
      }
      v93 = *((_QWORD *)v73 + 259);
      v94 = (unsigned int)v85 >> 7;
      if ( (unsigned int)v85 >> 7 )
      {
        do
        {
          v95 = 8LL;
          do
          {
            v96 = v89[1] ^ __ROL8__(*v89 ^ v93, v91);
            v89 += 2;
            v93 = __ROL8__(v96, v91);
            --v95;
          }
          while ( v95 );
          v97 = (__ROL8__(v92 ^ ((char *)v89 - (char *)v87), 17) ^ v92 ^ (unsigned __int64)((char *)v89 - (char *)v87))
              * (unsigned __int128)0x7010008004002001uLL;
          v372 = *((_QWORD *)&v97 + 1);
          v91 = (BYTE8(v97) ^ (unsigned __int8)(v97 ^ v91)) & 0x3F;
          if ( !v91 )
            LOBYTE(v91) = 1;
          --v94;
        }
        while ( v94 );
        v73 = (_BYTE *)v344;
      }
      v98 = v85 & 0x7F;
      if ( v98 >= 8 )
      {
        v99 = (unsigned __int64)(v85 & 0x7F) >> 3;
        do
        {
          v93 = __ROL8__(*v89++ ^ v93, v91);
          v98 -= 8;
          --v99;
        }
        while ( v99 );
      }
      for ( ; v98; --v98 )
      {
        v100 = *(unsigned __int8 *)v89;
        v89 = (_QWORD *)((char *)v89 + 1);
        v93 = __ROL8__(v100 ^ v93, v91);
      }
      for ( i = v93; ; v93 = (unsigned int)i ^ (unsigned int)v93 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v71 = (unsigned int)v335;
      LODWORD(v93) = v93 & 0x7FFFFFFF;
      ++v84;
      v82[5] = v93;
      ++v81;
      *((_DWORD *)v73 + 522) += v85;
      v82 += 12;
      v102 = v340-- == 1;
      v83 = v82;
      v358 = v82;
    }
    while ( !v102 );
    v103 = v343;
    v104 = BugCheckParameter2;
    v105 = (int)v337;
    *v343 = 44;
    *((_QWORD *)v103 + 3) = v104;
    if ( (*((_DWORD *)v73 + 612) & 0x10200000) == 0 )
    {
      if ( v105 )
      {
LABEL_151:
        v103[8] |= 2u;
        goto LABEL_152;
      }
      if ( (*((_DWORD *)v73 + 613) & 0x8000) == 0 || (v103[8] |= 1u, !(unsigned int)sub_140A10C50(v73, v104, v93, v71)) )
      {
LABEL_152:
        v106 = v387;
        v345 = v73;
        v341 = v73;
        v33 = sub_140A0F098((unsigned int)&v345, (_DWORD)v336, v339, v104, v105, v387, (__int64)&v346, (__int64)v351);
        if ( v33 < 0 )
          goto LABEL_476;
        v107 = 6LL;
        v108 = v345;
        v109 = &v345[(char *)v103 - v341];
        v110 = v351[0] - v346;
        v111 = 48;
        v343 = v109;
        v112 = (_QWORD *)(v104 + v346);
        v113 = v109 + 48;
        v354 = (unsigned int **)v109;
        v114 = v109 + 48;
        v341 = v345;
        do
        {
          *v114 = 0LL;
          v111 -= 8;
          ++v114;
          --v107;
        }
        while ( v107 );
        for ( ; v111; --v111 )
        {
          *(_BYTE *)v114 = 0;
          v114 = (_QWORD *)((char *)v114 + 1);
        }
        v115 = v112;
        *v113 = (_DWORD)v335;
        v116 = (const char *)v112;
        *((_QWORD *)v109 + 25) = v112;
        v109[52] = v110;
        *((_DWORD *)v108 + 522) += v110;
        v117 = *((_DWORD *)v108 + 517);
        v118 = *((_QWORD *)v108 + 259);
        v119 = (unsigned __int64)v112 + v110;
        if ( (unsigned __int64)v112 < v119 )
        {
          do
          {
            _mm_prefetch(v116, 0);
            v116 += 64;
          }
          while ( (unsigned __int64)v116 < v119 );
        }
        v120 = *((_QWORD *)v108 + 259);
        v121 = v110 >> 7;
        if ( v110 >> 7 )
        {
          do
          {
            v122 = 8LL;
            do
            {
              v123 = v120 ^ *v115;
              v124 = v115[1];
              v115 += 2;
              v120 = __ROL8__(__ROL8__(v123, v117) ^ v124, v117);
              --v122;
            }
            while ( v122 );
            v125 = __ROL8__(v118 ^ ((char *)v115 - (char *)v112), 17) ^ v118 ^ ((char *)v115 - (char *)v112);
            v373 = (v125 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v117 = ((unsigned __int8)(v373 ^ v125) ^ (unsigned __int8)v117) & 0x3F;
            if ( !v117 )
              LOBYTE(v117) = 1;
            --v121;
          }
          while ( v121 );
          v106 = v387;
          v113 = v109 + 48;
        }
        v126 = v110 & 0x7F;
        if ( v126 >= 8 )
        {
          v127 = (unsigned __int64)v126 >> 3;
          do
          {
            v120 = __ROL8__(*v115++ ^ v120, v117);
            v126 -= 8;
            --v127;
          }
          while ( v127 );
          v106 = v387;
        }
        for ( ; v126; --v126 )
        {
          v128 = *(unsigned __int8 *)v115;
          v115 = (_QWORD *)((char *)v115 + 1);
          v120 = __ROL8__(v128 ^ v120, v117);
        }
        for ( j = v120; ; v120 = (unsigned int)j ^ (unsigned int)v120 )
        {
          j >>= 31;
          if ( !j )
            break;
        }
        v130 = (unsigned int)v337;
        LODWORD(v120) = v120 & 0x7FFFFFFF;
        v113[5] = v120;
        v109[60] = 48;
        if ( v109[64] )
          v109[66] = v109[66] & 0xFFFFFFFE | ((_DWORD)v130 != 0);
        v131 = v109 + 24;
        v341 = v108;
        v357 = v109 + 24;
        v132 = v106 & 1;
        v133 = ((_DWORD)v130 != 0) + 13;
        if ( v109 == (_DWORD *)-96LL )
        {
          v134 = *((unsigned int *)v108 + 505);
          v135 = v134 + 48;
          if ( (unsigned int)(v134 + 48) <= *((_DWORD *)v108 + 647) )
          {
            v136 = v108;
            *((_DWORD *)v108 + 505) = v135;
          }
          else
          {
            v136 = (_BYTE *)sub_140A0FB30(v108, v135, *((unsigned int *)v108 + 585));
            if ( !v136 )
              goto LABEL_195;
            v137 = *((_DWORD *)v108 + 612);
            if ( (v137 & 4) == 0 )
            {
              v138 = *((_DWORD *)v108 + 505);
              v139 = *((_QWORD *)v108 + 249);
              v140 = (v137 & 0x20000000) != 0 ? *((_DWORD *)v108 + 585) : 0;
              if ( v138 >= 8 )
              {
                v141 = (unsigned __int64)v138 >> 3;
                do
                {
                  *(_QWORD *)v108 = 0LL;
                  v138 -= 8;
                  v108 += 8;
                  --v141;
                }
                while ( v141 );
              }
              for ( ; v138; --v138 )
                *v108++ = 0;
              v142 = *((_DWORD *)v136 + 585);
              *((_DWORD *)v136 + 585) = v140;
              if ( v140 == 3 )
              {
                (*((void (__fastcall **)(__int64))v136 + 109))(v139);
              }
              else
              {
                v143 = 0;
                if ( (*((_DWORD *)v136 + 612) & 0x10000000) == 0 )
                  v143 = v140;
                if ( v143 )
                  (*((void (__fastcall **)(__int64, _QWORD))v136 + 69))(v139 - 8, *(_QWORD *)(v139 - 8));
                else
                  (*((void (__fastcall **)(__int64))v136 + 32))(v139);
              }
              *((_DWORD *)v136 + 585) = v142;
            }
            *((_DWORD *)v136 + 612) &= ~4u;
          }
          ++*((_DWORD *)v136 + 515);
          v144 = 48;
          v131 = &v136[v134];
          v145 = 6LL;
          v374 = v131;
          v146 = v131;
          do
          {
            *v146 = 0LL;
            v144 -= 8;
            ++v146;
            --v145;
          }
          while ( v145 );
          for ( ; v144; --v144 )
          {
            *(_BYTE *)v146 = 0;
            v146 = (_QWORD *)((char *)v146 + 1);
          }
          v147 = (unsigned __int64)v342;
          *(_DWORD *)v131 = v133;
          v148 = (_QWORD *)v147;
          v149 = v332;
          *((_QWORD *)v131 + 1) = v147;
          *((_DWORD *)v131 + 4) = v332;
          *((_DWORD *)v136 + 522) += v332;
          v150 = *((_DWORD *)v136 + 517);
          v151 = *((_QWORD *)v136 + 259);
          if ( v147 < v147 + v332 )
          {
            v152 = (const char *)v147;
            do
            {
              _mm_prefetch(v152, 0);
              v152 += 64;
            }
            while ( (unsigned __int64)v152 < v147 + v332 );
          }
          v120 = *((_QWORD *)v136 + 259);
          v153 = v332 >> 7;
          if ( v332 >> 7 )
          {
            do
            {
              v154 = 8LL;
              do
              {
                v155 = v148[1] ^ __ROL8__(*v148 ^ v120, v150);
                v148 += 2;
                v120 = __ROL8__(v155, v150);
                --v154;
              }
              while ( v154 );
              v156 = (__ROL8__(v151 ^ ((unsigned __int64)v148 - v147), 17) ^ v151 ^ ((unsigned __int64)v148 - v147))
                   * (unsigned __int128)0x7010008004002001uLL;
              v375 = *((_QWORD *)&v156 + 1);
              v150 = (BYTE8(v156) ^ (unsigned __int8)(v156 ^ v150)) & 0x3F;
              if ( !v150 )
                LOBYTE(v150) = 1;
              --v153;
            }
            while ( v153 );
            v109 = v343;
            v149 = v332;
          }
          v130 = v149 & 0x7F;
          if ( (unsigned int)v130 >= 8 )
          {
            v157 = (unsigned __int64)(v149 & 0x7F) >> 3;
            do
            {
              v120 = __ROL8__(*v148++ ^ v120, v150);
              v130 = (unsigned int)(v130 - 8);
              --v157;
            }
            while ( v157 );
          }
          if ( (_DWORD)v130 )
          {
            do
            {
              v158 = *(unsigned __int8 *)v148;
              v148 = (_QWORD *)((char *)v148 + 1);
              v120 = __ROL8__(v158 ^ v120, v150);
              v102 = (_DWORD)v130 == 1;
              v130 = (unsigned int)(v130 - 1);
            }
            while ( !v102 );
          }
          for ( k = v120 >> 31; k; k >>= 31 )
            v120 = (unsigned int)k ^ (unsigned int)v120;
          LODWORD(v120) = v120 & 0x7FFFFFFF;
          v357 = v131;
          *((_DWORD *)v131 + 5) = v120;
          *((_DWORD *)v136 + 522) += v149;
        }
        else
        {
          v147 = (unsigned __int64)v342;
          v136 = v108;
          *(_DWORD *)v131 = v133;
          v149 = v332;
        }
        v160 = v131;
        if ( (*((_DWORD *)v136 + 612) & 0x40000000) != 0 && v149 )
          sub_1403EA5FC((__int64)v136, v147, v149, (__int64)(v131 + 28));
        *((_DWORD *)v131 + 6) = 0;
        if ( v132 )
          *((_DWORD *)v131 + 6) = 1;
        v161 = BugCheckParameter2;
        v341 = v136;
        v162 = (_DWORD)v337 != 0;
        v163 = v109[46] & 0xFFFFFFFE;
        v109[36] = 35;
        v164 = v109[40] < 0x94u;
        v109[46] = v163 | v162;
        if ( v164 )
        {
LABEL_234:
          v102 = (*((_DWORD *)v136 + 612) & 0x400000) == 0;
          v345 = v136;
          if ( !v102 )
          {
            v170 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, _BYTE *))v136 + 63))(
                     v161,
                     v130,
                     v120,
                     v160);
            v343 = (_DWORD *)v170;
            if ( !v170 )
            {
LABEL_46:
              v33 = -1073741701;
LABEL_476:
              v54 = a3;
              goto LABEL_477;
            }
            v172 = *(_WORD *)(v170 + 6);
            v388 = v172;
            v173 = v339 / 0xCuLL;
            v340 = v173;
            if ( !v172 )
            {
              if ( (*((_DWORD *)v136 + 612) & 0x200000) == 0 )
              {
                v351[1] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v161, 0LL, 0LL);
              }
              if ( !*((_DWORD *)v136 + 574) )
              {
                *((_DWORD *)v136 + 574) = 1;
LABEL_240:
                *((_QWORD *)v136 + 288) = v136 - 0x5C5FC0A76E374B18LL;
LABEL_241:
                *((_QWORD *)v136 + 289) = 0LL;
                *((_QWORD *)v136 + 290) = 271LL;
                *((_QWORD *)v136 + 291) = v161;
                __b8(v136, 0LL, v171, v173);
              }
              goto LABEL_46;
            }
            v174 = 0;
            v175 = v172;
            v176 = v336;
            v332 = 0;
            LODWORD(v335) = v172;
            v352 = 12LL * (unsigned int)v173;
            v342 = (unsigned int *)((char *)v336 + v352);
            v344 = *(unsigned __int16 *)(v170 + 20) + v170 + 24;
            v177 = (char *)v344;
            v178 = (unsigned int *)(v344 + 8);
            v171 = 1LL;
            do
            {
              v179 = v178[2];
              v180 = v178[1];
              if ( v179 <= *v178 )
                v179 = *v178;
              v338 = v178[1];
              v181 = v180 + v179;
              if ( v174 )
              {
                if ( v181 < *(_DWORD *)&v177[40 * v174 - 28] )
                {
                  if ( (*((_DWORD *)v136 + 612) & 0x200000) == 0 )
                  {
                    v351[2] = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v161, 1uLL, 0LL);
                  }
                  if ( !*((_DWORD *)v136 + 574) )
                  {
                    *((_DWORD *)v136 + 574) = 1;
                    goto LABEL_240;
                  }
                  goto LABEL_46;
                }
                v174 = v332;
              }
              if ( v176 != v342 )
              {
                while ( 1 )
                {
                  v182 = v176[1];
                  if ( *v176 >= v181 || v182 <= v180 )
                  {
LABEL_270:
                    v174 = v332;
                    v171 = 1LL;
                    v175 = (unsigned int)v335;
                    v177 = (char *)v344;
                    goto LABEL_271;
                  }
                  if ( *v176 < v180 || v182 > v181 )
                    break;
                  v183 = v176[2];
                  if ( (v183 & 1) != 0 || (*(_BYTE *)(v183 + v161) & 0x20) != 0 )
                  {
                    v184 = v178[2];
                    v185 = v178[1];
                    if ( v184 <= *v178 )
                      v184 = *v178;
                    v186 = v185 + v184;
                    v187 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, unsigned __int64))v136
                                            + 131))(
                                             v176,
                                             BugCheckParameter2,
                                             v171);
                    v189 = v187;
                    if ( *v187 < v185 || v187[1] > v186 )
                    {
                      v190 = BugCheckParameter2;
                      if ( (*((_DWORD *)v136 + 612) & 0x200000) == 0 )
                      {
                        v351[4] = -805294751;
                        KeBugCheckEx(
                          __ROR4__(-805306349, 92),
                          0xAuLL,
                          BugCheckParameter2,
                          ((_DWORD)v187 - (_DWORD)BugCheckParameter2) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v136 + 574) )
                      {
                        *((_QWORD *)v136 + 289) = 0LL;
                        *((_QWORD *)v136 + 290) = 271LL;
                        *((_QWORD *)v136 + 288) = v136 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v136 + 291) = v190;
                        *((_DWORD *)v136 + 574) = 1;
                        __b8(v136, 0LL, v190, v188);
                      }
                    }
                    v191 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v136 + 132))(
                                             v189,
                                             BugCheckParameter2,
                                             BugCheckParameter2 + *v189);
                    if ( *v191 >= v185 && v191[1] <= v186 )
                    {
                      v161 = BugCheckParameter2;
                    }
                    else
                    {
                      v161 = BugCheckParameter2;
                      v192 = ((_DWORD)v191 - BugCheckParameter2) | 0x80000000;
                      if ( (*((_DWORD *)v136 + 612) & 0x200000) == 0 )
                      {
                        v351[3] = -805294751;
                        KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, v192, 0LL);
                      }
                      if ( !*((_DWORD *)v136 + 574) )
                      {
                        *((_QWORD *)v136 + 289) = 0LL;
                        *((_QWORD *)v136 + 290) = 271LL;
                        *((_QWORD *)v136 + 288) = v136 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v136 + 291) = v161;
                        *((_DWORD *)v136 + 574) = 1;
                        __b8(v136, 0LL, v171, v173);
                      }
                    }
                    v180 = v338;
                  }
                  v176 += 3;
                  if ( v176 == v342 )
                    goto LABEL_270;
                }
                if ( (*((_DWORD *)v136 + 612) & 0x200000) == 0 )
                {
                  v351[5] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v161, 2uLL, 0LL);
                }
                if ( !*((_DWORD *)v136 + 574) )
                {
                  v195 = v136 - 0x5C5FC0A76E374B18LL;
LABEL_281:
                  *((_QWORD *)v136 + 288) = v195;
                  *((_DWORD *)v136 + 574) = 1;
                  goto LABEL_241;
                }
                goto LABEL_46;
              }
LABEL_271:
              ++v174;
              v178 += 10;
              v332 = v174;
            }
            while ( v174 < v175 );
            v173 = v340;
            v171 = 0xA3A03F5891C8B4E8uLL;
            v193 = v343;
            v194 = v352;
            if ( v176 != v342 )
            {
              if ( (*((_DWORD *)v136 + 612) & 0x200000) == 0 )
              {
                v351[6] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v161, 3uLL, 0LL);
              }
              if ( !*((_DWORD *)v136 + 574) )
              {
                v195 = v136 - 0x5C5FC0A76E374B18LL;
                goto LABEL_281;
              }
              goto LABEL_46;
            }
            if ( (_DWORD)v340 )
              v196 = (v340 + 6) & 0xFFFFFFF8;
            else
              v196 = 0;
            v197 = *((unsigned int *)v136 + 505);
            v198 = v196 + 24 * v175 + v197 + 48;
            if ( v198 <= *((_DWORD *)v136 + 647) )
            {
              v199 = v136;
              v343 = v136;
              *((_DWORD *)v136 + 505) = v198;
            }
            else
            {
              v343 = (_DWORD *)sub_140A0FB30(v136, v198, *((unsigned int *)v136 + 585));
              v199 = v343;
              if ( !v343 )
                goto LABEL_195;
              v200 = *((_DWORD *)v136 + 612);
              if ( (v200 & 4) == 0 )
              {
                v201 = *((_DWORD *)v136 + 505);
                v202 = *((_QWORD *)v136 + 249);
                v203 = (v200 & 0x20000000) != 0 ? *((_DWORD *)v136 + 585) : 0;
                if ( v201 >= 8 )
                {
                  v204 = (unsigned __int64)v201 >> 3;
                  do
                  {
                    *(_QWORD *)v136 = 0LL;
                    v201 -= 8;
                    v136 += 8;
                    --v204;
                  }
                  while ( v204 );
                }
                for ( ; v201; --v201 )
                  *v136++ = 0;
                v205 = *((_DWORD *)v199 + 585);
                *((_DWORD *)v199 + 585) = v203;
                if ( v203 == 3 )
                {
                  (*((void (__fastcall **)(__int64, __int64))v199 + 109))(v202, 1LL);
                }
                else
                {
                  v206 = 0;
                  if ( (*((_DWORD *)v199 + 612) & 0x10000000) == 0 )
                    v206 = v203;
                  if ( v206 )
                    (*((void (__fastcall **)(__int64, _QWORD))v199 + 69))(v202 - 8, *(_QWORD *)(v202 - 8));
                  else
                    (*((void (__fastcall **)(__int64, __int64))v199 + 32))(v202, 1LL);
                }
                *((_DWORD *)v199 + 585) = v205;
              }
              *((_DWORD *)v199 + 612) &= ~4u;
              LODWORD(v173) = v340;
              v175 = (unsigned int)v335;
            }
            v207 = (unsigned __int64)&v199[v197];
            ++*((_DWORD *)v199 + 515);
            v208 = &v199[v197];
            v376 = &v199[v197];
            v209 = 6LL;
            v210 = 48;
            do
            {
              *v208 = 0LL;
              v210 -= 8;
              ++v208;
              --v209;
            }
            while ( v209 );
            for ( ; v210; --v210 )
            {
              *(_BYTE *)v208 = 0;
              v208 = (_QWORD *)((char *)v208 + 1);
            }
            *(_QWORD *)(v207 + 8) = v336;
            *(_DWORD *)v207 = 30;
            *(_DWORD *)(v207 + 16) = 0;
            v211 = *((_QWORD *)v199 + 259);
            for ( m = v211; ; LODWORD(v211) = m ^ v211 )
            {
              m >>= 31;
              if ( !m )
                break;
            }
            v213 = BugCheckParameter2;
            v102 = (_DWORD)v337 == 0;
            *(_DWORD *)(v207 + 20) = v211 & 0x7FFFFFFF;
            v136 = v199;
            *(_QWORD *)(v207 + 24) = v213;
            *(_DWORD *)(v207 + 32) = v193[20];
            *(_DWORD *)(v207 + 36) = v339;
            *(_WORD *)(v207 + 40) = v388;
            LOWORD(v213) = *(_WORD *)(v207 + 42) & 0xFFFE;
            v383 = &v199[v197];
            v345 = v199;
            *(_WORD *)(v207 + 42) = v213 | !v102;
            v337 = (char *)(v207 + 48);
            if ( (_DWORD)v173 )
              v214 = (_DWORD *)(v207 + 48 + (((unsigned int)(v173 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
            else
              v214 = (_DWORD *)(v207 + 48);
            v215 = *(unsigned __int16 *)(v207 + 40);
            LODWORD(v207) = 0;
            v102 = (_DWORD)v173 == 0;
            v340 = (__int64)v214;
            v216 = v336;
            v217 = 12LL;
            if ( v102 )
              v217 = v194;
            v218 = (unsigned int *)((char *)v336 + v217);
            v219 = &v214[6 * v215];
            v352 = (__int64)v219;
            v335 = v218;
            if ( v175 )
            {
              v207 = v175;
              v220 = v214 + 2;
              do
              {
                v221 = 2LL;
                do
                {
                  *((_QWORD *)v220 - 1) = 0LL;
                  *v220 = 0x80000000;
                  v220 += 3;
                  --v221;
                }
                while ( v221 );
                --v207;
              }
              while ( v207 );
            }
            if ( v214 != v219 )
            {
              do
              {
                v222 = v207;
                if ( (*((_DWORD *)v177 + 9) & 0x2000000) != 0
                  || (v223 = *(_DWORD *)v177, *(_DWORD *)v177 == 1414090313) && *((_DWORD *)v177 + 1) == 1195525195
                  || v223 == 1162297680
                  && ((v224 = *((_WORD *)v177 + 2), v224 == 30839) || v224 == 29303 || v224 == 30583)
                  || v223 == 1095914053 && *((_WORD *)v177 + 2) == 16724 )
                {
                  v222 = 1;
                }
                else
                {
                  v225 = (char *)*((_QWORD *)v199 + 294);
                  v226 = 7;
                  v360 = (char *)*((_QWORD *)v199 + 295);
                  v227 = v177 - v225;
                  v361 = (char *)*((_QWORD *)v199 + 296);
                  v362 = (char *)*((_QWORD *)v199 + 297);
                  v359 = v225;
                  while ( 1 )
                  {
                    v228 = v225[v227];
                    v229 = *v225++;
                    if ( v228 != v229 )
                      break;
                    if ( !--v226 )
                    {
LABEL_350:
                      v222 = 1;
                      goto LABEL_351;
                    }
                  }
                  v230 = v360;
                  v231 = 8;
                  v232 = v177;
                  while ( 1 )
                  {
                    v233 = *(_QWORD *)v232;
                    v232 += 8;
                    v234 = *(_QWORD *)v230;
                    v230 += 8;
                    if ( v233 != v234 )
                      break;
                    v231 -= 8;
                    if ( v231 < 8 )
                    {
                      if ( !v231 )
                        goto LABEL_350;
                      while ( 1 )
                      {
                        v235 = *v232++;
                        v236 = *v230++;
                        if ( v235 != v236 )
                          goto LABEL_343;
                        if ( !--v231 )
                          goto LABEL_350;
                      }
                    }
                  }
LABEL_343:
                  v237 = v361;
                  v238 = 4;
                  while ( 1 )
                  {
                    v239 = v237[v177 - v361];
                    v240 = *v237++;
                    if ( v239 != v240 )
                      break;
                    if ( !--v238 )
                      goto LABEL_350;
                  }
                  v241 = v362;
                  v242 = 6;
                  while ( 1 )
                  {
                    v243 = v241[v177 - v362];
                    v244 = *v241++;
                    if ( v243 != v244 )
                      break;
                    if ( !--v242 )
                      goto LABEL_350;
                  }
LABEL_351:
                  v216 = v336;
                }
                v245 = *((_DWORD *)v177 + 9);
                LODWORD(v207) = 0;
                if ( v245 < 0 )
                  v222 = 1;
                v389 = v222;
                if ( v222 && *(_DWORD *)v177 == 1414090313 && *((_DWORD *)v177 + 1) == 1195525195 )
                {
                  if ( (*((_DWORD *)v199 + 613) & 0x2000) != 0 )
                    v222 = 0;
                  v389 = v222;
                }
                if ( (*((_DWORD *)v199 + 613) & 0x4000) != 0
                  && (v245 & 0x20000000) != 0
                  && (BugCheckParameter2 == *((_QWORD *)v199 + 189) || BugCheckParameter2 == *((_QWORD *)v199 + 190)) )
                {
                  v222 = 1;
                  v389 = 1;
                }
                v246 = *((_DWORD *)v177 + 4);
                v247 = *((unsigned int *)v177 + 3);
                v248 = v342;
                if ( v246 <= *((_DWORD *)v177 + 2) )
                  v246 = *((_DWORD *)v177 + 2);
                v249 = v247 + v246;
                v338 = *((_DWORD *)v177 + 3);
                v332 = v249;
                if ( v216 == v342 )
                {
                  v250 = 0;
                  v251 = 0;
                }
                else
                {
                  v250 = *v216;
                  v251 = v216[1];
                }
                v339 = v251;
                v252 = v247;
                if ( v216 != v342 && v250 > (unsigned int)v247 && v251 <= v249 && !v222 )
                {
                  *v214 = v247;
                  v253 = v353;
                  v214[1] = v250;
                  v254 = BugCheckParameter2;
                  v255 = v250 - v247;
                  v256 = 0;
                  v252 = v250;
                  v257 = &v363;
                  v258 = BugCheckParameter2 + v247;
                  v259 = BugCheckParameter2 + v247 + v250 - (unsigned int)v247;
                  do
                  {
                    if ( v258 < *v257 + *v253 && v259 > *v257 )
                    {
                      v249 = v332;
                      LODWORD(v207) = 0;
                      v218 = v335;
                      v248 = v342;
                      v216 = v336;
                      goto LABEL_398;
                    }
                    ++v256;
                    ++v257;
                    ++v253;
                  }
                  while ( v256 < 6 );
                  *((_DWORD *)v199 + 522) += v255;
                  v260 = (_QWORD *)v258;
                  v261 = *((_DWORD *)v199 + 517);
                  v262 = (const char *)v258;
                  v263 = *((_QWORD *)v199 + 259);
                  if ( v258 < v259 )
                  {
                    do
                    {
                      _mm_prefetch(v262, 0);
                      v262 += 64;
                    }
                    while ( (unsigned __int64)v262 < v259 );
                  }
                  LODWORD(v207) = 0;
                  v264 = v255 >> 7;
                  v265 = *((_QWORD *)v199 + 259);
                  if ( v255 >> 7 )
                  {
                    do
                    {
                      v266 = 8LL;
                      do
                      {
                        v267 = v260[1] ^ __ROL8__(*v260 ^ v265, v261);
                        v260 += 2;
                        v265 = __ROL8__(v267, v261);
                        --v266;
                      }
                      while ( v266 );
                      v268 = __ROL8__(v263 ^ ((unsigned __int64)v260 - v258), 17) ^ v263 ^ ((unsigned __int64)v260 - v258);
                      v377 = (v268 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v261 = ((unsigned __int8)(v377 ^ v268) ^ (unsigned __int8)v261) & 0x3F;
                      if ( !v261 )
                        LOBYTE(v261) = 1;
                      --v264;
                    }
                    while ( v264 );
                    v199 = v343;
                    LODWORD(v207) = 0;
                    v251 = v339;
                  }
                  v269 = v255 & 0x7F;
                  if ( v269 >= 8 )
                  {
                    v270 = (unsigned __int64)v269 >> 3;
                    do
                    {
                      v265 = __ROL8__(*v260++ ^ v265, v261);
                      v269 -= 8;
                      --v270;
                    }
                    while ( v270 );
                  }
                  for ( ; v269; --v269 )
                  {
                    v271 = *(unsigned __int8 *)v260;
                    v260 = (_QWORD *)((char *)v260 + 1);
                    v265 = __ROL8__(v271 ^ v265, v261);
                  }
                  for ( n = v265; ; LODWORD(v265) = n ^ v265 )
                  {
                    n >>= 31;
                    if ( !n )
                      break;
                  }
                  v249 = v332;
                  LODWORD(v247) = v338;
                  v218 = v335;
                  v216 = v336;
                  *(_DWORD *)(v340 + 8) = v265 & 0x7FFFFFFF;
                  v248 = v342;
                }
                v254 = BugCheckParameter2;
LABEL_398:
                if ( v250 < (unsigned int)v247 )
                {
                  v274 = v389;
                }
                else
                {
                  v273 = v251 <= v249;
                  v274 = v389;
                  if ( v273 && v216 != v248 )
                  {
                    v275 = v218[1];
                    if ( v275 <= v249 )
                    {
                      v276 = v337;
                      do
                      {
                        if ( v218 == v248 )
                          break;
                        if ( v274 )
                        {
                          v277 = 0x80;
                        }
                        else
                        {
                          v278 = v216[1];
                          v252 = *v218;
                          if ( *v218 < (unsigned int)v278 )
                          {
                            if ( (*((_DWORD *)v199 + 612) & 0x200000) == 0 )
                            {
                              v351[7] = -805294751;
                              KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v254, 6uLL, 0LL);
                            }
                            if ( !*((_DWORD *)v199 + 574) )
                            {
                              *((_QWORD *)v199 + 289) = 0LL;
                              *((_QWORD *)v199 + 290) = 271LL;
                              *((_QWORD *)v199 + 288) = v199 - 0x5C5FC0A76E374B18LL;
                              *((_QWORD *)v199 + 291) = v254;
                              *((_DWORD *)v199 + 574) = 1;
                              __b8(v199, 0LL, v248, v216);
                            }
                          }
                          v279 = v254 + v278;
                          v280 = v252 - v278;
                          v281 = v353;
                          v282 = 0;
                          v283 = v254 + v278 + v252 - (unsigned int)v278;
                          v284 = &v363;
                          do
                          {
                            if ( v279 < *v284 + *v281 && v283 > *v284 )
                              goto LABEL_434;
                            ++v282;
                            ++v284;
                            ++v281;
                          }
                          while ( v282 < 6 );
                          if ( v280 < 4 )
                          {
LABEL_434:
                            LODWORD(v207) = 0;
                            v277 = 0x80;
                            goto LABEL_435;
                          }
                          *((_DWORD *)v199 + 522) += v280;
                          v285 = (_QWORD *)v279;
                          v286 = *((_DWORD *)v199 + 517);
                          v287 = (const char *)v279;
                          v288 = *((_QWORD *)v199 + 259);
                          if ( v279 < v283 )
                          {
                            do
                            {
                              _mm_prefetch(v287, 0);
                              v287 += 64;
                            }
                            while ( (unsigned __int64)v287 < v283 );
                          }
                          LODWORD(v207) = 0;
                          v289 = v280 >> 7;
                          v290 = *((_QWORD *)v199 + 259);
                          if ( v280 >> 7 )
                          {
                            do
                            {
                              v291 = 8LL;
                              do
                              {
                                v292 = v285[1] ^ __ROL8__(*v285 ^ v290, v286);
                                v285 += 2;
                                v290 = __ROL8__(v292, v286);
                                --v291;
                              }
                              while ( v291 );
                              v293 = __ROL8__(v288 ^ ((unsigned __int64)v285 - v279), 17) ^ v288 ^ ((unsigned __int64)v285
                                                                                                  - v279);
                              v378 = (v293 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                              v286 = ((unsigned __int8)(v378 ^ v293) ^ (unsigned __int8)v286) & 0x3F;
                              if ( !v286 )
                                LOBYTE(v286) = 1;
                              --v289;
                            }
                            while ( v289 );
                            v199 = v343;
                            LODWORD(v207) = 0;
                            v274 = v389;
                          }
                          v294 = v280 & 0x7F;
                          if ( v294 >= 8 )
                          {
                            v295 = (unsigned __int64)v294 >> 3;
                            do
                            {
                              v290 = __ROL8__(*v285++ ^ v290, v286);
                              v294 -= 8;
                              --v295;
                            }
                            while ( v295 );
                          }
                          for ( ; v294; --v294 )
                          {
                            v296 = *(unsigned __int8 *)v285;
                            v285 = (_QWORD *)((char *)v285 + 1);
                            v290 = __ROL8__(v296 ^ v290, v286);
                          }
                          for ( ii = v290; ; LOBYTE(v290) = ii ^ v290 )
                          {
                            ii >>= 7;
                            if ( !ii )
                              break;
                          }
                          v254 = BugCheckParameter2;
                          v277 = v290 & 0x7F;
LABEL_435:
                          v216 = v336;
                          v218 = v335;
                          v249 = v332;
                          v276 = v337;
                        }
                        *v276 = v277;
                        v216 += 3;
                        v218 += 3;
                        v248 = v342;
                        v276 = v337 + 1;
                        v336 = v216;
                        ++v337;
                        v335 = v218;
                        if ( v218 != v342 )
                          v275 = v218[1];
                      }
                      while ( v275 <= v249 );
                    }
                  }
                }
                v298 = v340;
                if ( !v274 && v252 != v249 )
                {
                  v299 = BugCheckParameter2 + v252;
                  v300 = v249 - v252;
                  *(_DWORD *)(v340 + 16) = v249;
                  v301 = v249 - v252;
                  v302 = v353;
                  v303 = 0;
                  *(_DWORD *)(v298 + 12) = v252;
                  v304 = v299 + v301;
                  v305 = &v363;
                  do
                  {
                    if ( v299 < *v305 + *v302 && v304 > *v305 )
                    {
                      LODWORD(v207) = 0;
                      goto LABEL_466;
                    }
                    ++v303;
                    ++v305;
                    ++v302;
                  }
                  while ( v303 < 6 );
                  *((_DWORD *)v199 + 522) += v300;
                  v306 = (_QWORD *)v299;
                  v307 = *((_DWORD *)v199 + 517);
                  v308 = (const char *)v299;
                  v309 = *((_QWORD *)v199 + 259);
                  if ( v299 < v304 )
                  {
                    do
                    {
                      _mm_prefetch(v308, 0);
                      v308 += 64;
                    }
                    while ( (unsigned __int64)v308 < v304 );
                  }
                  LODWORD(v207) = 0;
                  v310 = v300 >> 7;
                  v311 = *((_QWORD *)v199 + 259);
                  if ( v300 >> 7 )
                  {
                    do
                    {
                      v312 = 8LL;
                      do
                      {
                        v313 = *v306 ^ v311;
                        v314 = v306 + 1;
                        v315 = *v314 ^ __ROL8__(v313, v307);
                        v306 = v314 + 1;
                        v311 = __ROL8__(v315, v307);
                        --v312;
                      }
                      while ( v312 );
                      v316 = __ROL8__(v309 ^ ((unsigned __int64)v306 - v299), 17) ^ v309 ^ ((unsigned __int64)v306 - v299);
                      v379 = (v316 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v307 = ((unsigned __int8)(v379 ^ v316) ^ (unsigned __int8)v307) & 0x3F;
                      if ( !v307 )
                        LOBYTE(v307) = 1;
                      --v310;
                    }
                    while ( v310 );
                    v199 = v343;
                    LODWORD(v207) = 0;
                  }
                  v317 = v300 & 0x7F;
                  if ( v317 >= 8 )
                  {
                    v318 = (unsigned __int64)v317 >> 3;
                    do
                    {
                      v311 = __ROL8__(*v306++ ^ v311, v307);
                      v317 -= 8;
                      --v318;
                    }
                    while ( v318 );
                  }
                  for ( ; v317; --v317 )
                  {
                    v319 = *(unsigned __int8 *)v306;
                    v306 = (_QWORD *)((char *)v306 + 1);
                    v311 = __ROL8__(v319 ^ v311, v307);
                  }
                  for ( jj = v311; ; LODWORD(v311) = jj ^ v311 )
                  {
                    jj >>= 31;
                    if ( !jj )
                      break;
                  }
                  v298 = v340;
                  *(_DWORD *)(v340 + 20) = v311 & 0x7FFFFFFF;
LABEL_466:
                  v216 = v336;
                }
                v218 = v335;
                if ( v216 != v342 && *v216 >= v338 && v216[1] <= v332 )
                {
                  if ( v335 != v342 )
                  {
                    v321 = v337;
                    *v337 = 0x80;
                    v218 += 3;
                    v337 = v321 + 1;
                    v335 = v218;
                  }
                  v216 += 3;
                  v336 = v216;
                }
                v214 = (_DWORD *)(v298 + 24);
                v177 = (char *)(v344 + 40);
                v340 = (__int64)v214;
                v344 += 40LL;
              }
              while ( v214 != (_DWORD *)v352 );
              v136 = v345;
            }
          }
          v341 = v136;
          v33 = 0;
          goto LABEL_476;
        }
        v165 = *((_QWORD *)v109 + 19);
        v166 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, _BYTE *))v136 + 63))(v161, v130, v120, v160);
        if ( v166 )
        {
          v120 = v161 + *(unsigned int *)(v166 + 80);
          v130 = v109[46] | 2u;
          v109[46] = v130;
          v167 = v130;
          v168 = *(_QWORD **)(v165 + 112);
          if ( (unsigned __int64)v168 >= v161 && (unsigned __int64)v168 < v120 )
          {
            v167 = v130 | 4;
            *((_QWORD *)v109 + 21) = *v168;
            v109[46] = v130 | 4;
          }
          v169 = *(_QWORD **)(v165 + 120);
          if ( (unsigned __int64)v169 >= v161 && (unsigned __int64)v169 < v120 )
          {
            *((_QWORD *)v109 + 22) = *v169;
            v109[46] = v167 | 8;
          }
          goto LABEL_234;
        }
LABEL_195:
        v33 = -1073741670;
        goto LABEL_476;
      }
      v103[8] |= 4u;
    }
    if ( !v105 )
      goto LABEL_152;
    goto LABEL_151;
  }
  v33 = 0;
LABEL_477:
  *a1 = v341;
  if ( (int)(v33 + 0x80000000) >= 0 && v33 != -1073741554 )
    return (unsigned int)v33;
  v322 = v54 & 0xFFFFFFEF;
  if ( (v322 & 0x80000004) != 0x80000004 )
  {
    v323 = v322 | 0x80000000;
    v324 = v355;
    v325 = (*((__int64 (__fastcall **)(__int64))v341 + 63))(v355);
    v326 = *(unsigned int *)(v325 + 148);
    if ( (unsigned int)v326 >= 0x14 )
    {
      v327 = *(unsigned int *)(v325 + 144);
      v328 = v324 + v327 + v326;
      for ( kk = v327 + v324; kk != v328; kk += 20LL )
      {
        if ( !*(_DWORD *)(kk + 12) )
          break;
        v330 = *(unsigned int *)(kk + 16);
        if ( !(_DWORD)v330 )
          break;
        v331 = *(_QWORD *)(v330 + v324);
        if ( v331 )
        {
          result = sub_140A0D0FC(&v341, v331, v323);
          *a1 = v341;
          if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741554 )
            return result;
        }
      }
    }
  }
  return 0LL;
}
