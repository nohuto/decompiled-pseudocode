__int64 __fastcall sub_1406DC290(unsigned int *a1, unsigned int a2, UINT a3, _QWORD *a4, UINT *a5)
{
  unsigned int *v6; // rsi
  unsigned int *v7; // r15
  void *v8; // r12
  _DWORD *v9; // r14
  void *v10; // rdi
  unsigned int *v11; // r13
  int Acl; // ebx
  size_t v13; // rcx
  unsigned int *v14; // r8
  UINT *v15; // r10
  size_t v16; // r9
  UINT *v17; // r8
  unsigned int v18; // ebx
  unsigned int *v19; // r10
  unsigned int v20; // r11d
  unsigned int v21; // r8d
  const void *v22; // r12
  unsigned int v23; // r10d
  __int64 Pool2; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rax
  void *v27; // rax
  size_t v28; // r8
  const void *v29; // rdx
  __int64 v30; // rax
  void *v31; // rax
  size_t v32; // r8
  char *v33; // rdx
  size_t v34; // rax
  void *v35; // rax
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  unsigned __int8 *v39; // r12
  unsigned __int64 v40; // rcx
  __int64 *v41; // rbx
  unsigned int v42; // edx
  unsigned int v43; // eax
  __int64 v44; // rbx
  unsigned __int8 v45; // di
  size_t v46; // rax
  ULONGLONG v47; // r8
  size_t v48; // rdx
  unsigned __int8 *v49; // r10
  int v50; // r13d
  int v51; // r12d
  UINT v52; // r11d
  UINT v53; // ebx
  int v54; // r8d
  char v55; // dl
  int v56; // eax
  char *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r14
  unsigned __int8 *v60; // rbx
  unsigned __int8 *v61; // rax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  UINT v66; // r12d
  UINT v67; // r13d
  unsigned int v68; // edx
  unsigned int v69; // r8d
  UINT v70; // eax
  UINT v71; // ecx
  _BYTE *v72; // r10
  _BYTE *v73; // r11
  char v74; // r9
  char v75; // cl
  UINT v76; // r13d
  UINT v77; // r15d
  UINT v78; // edi
  unsigned __int8 *v79; // r8
  int v80; // edx
  int v81; // eax
  int v82; // r12d
  int v83; // edx
  int v84; // r8d
  unsigned int v85; // r13d
  int v86; // r12d
  int v87; // r13d
  int v88; // r12d
  int v89; // r13d
  int v90; // r12d
  int v91; // r13d
  __int64 v92; // r14
  int v93; // r12d
  __int64 v94; // rdx
  int v95; // r13d
  unsigned int v96; // r12d
  unsigned __int8 *v97; // rbx
  unsigned int v98; // r13d
  unsigned __int8 *v99; // rax
  int v100; // r12d
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rcx
  int v104; // eax
  unsigned __int8 *v105; // r11
  int v106; // r12d
  int v107; // r13d
  int v108; // r12d
  int v109; // r13d
  int v110; // r12d
  int v111; // r13d
  int v112; // r12d
  int v113; // r13d
  bool v114; // zf
  ULONGLONG i; // rax
  size_t v116; // r12
  char *v117; // rcx
  unsigned __int64 v118; // rdx
  size_t v119; // r11
  const void *v120; // rdi
  void *v121; // r10
  unsigned int v122; // r13d
  unsigned int v123; // eax
  char *v124; // r8
  unsigned int *v125; // rax
  unsigned int *v126; // rcx
  int v127; // r8d
  int *v128; // rax
  int v129; // edi
  unsigned int *v130; // rax
  int v131; // edx
  unsigned int *v132; // r8
  unsigned int *v133; // r9
  __int64 v134; // r10
  unsigned int *v135; // rcx
  size_t v136; // rbx
  unsigned int *v137; // rax
  unsigned int j; // edx
  __int64 v139; // r10
  unsigned int *v140; // rcx
  size_t v141; // r13
  unsigned int *v142; // rcx
  unsigned int *v143; // rax
  __int64 v144; // rax
  __int64 v145; // r8
  void *v146; // rcx
  void *v147; // rax
  void *v148; // rbx
  void *v149; // rax
  void *v150; // rcx
  void *v151; // rcx
  void *v152; // rcx
  bool v153; // sf
  __int64 v154; // rdi
  ULONG v155; // ebx
  ULONG v156; // ebx
  ULONG v157; // ebx
  ACL *v158; // rax
  ACL *v159; // r12
  BOOLEAN v160; // di
  const void *v161; // rdi
  int v162; // eax
  __int64 v163; // rdi
  ULONG v164; // ebx
  ULONG v165; // ebx
  ULONG v166; // ebx
  ACL *v167; // rax
  ACL *v168; // r12
  BOOLEAN v169; // di
  size_t v170; // rbx
  const void *v171; // r12
  const void *v172; // rdi
  int updated; // eax
  __int64 v174; // rdx
  __int64 v175; // r8
  int v176; // eax
  int v177; // r8d
  size_t v178; // rdi
  const void *v179; // r13
  const void *v180; // r12
  ULONGLONG v181; // rcx
  unsigned int v182; // r10d
  int v183; // r9d
  int v184; // r9d
  size_t *v185; // rax
  ULONGLONG v186; // rcx
  unsigned int v187; // r10d
  int v188; // r9d
  size_t v189; // rdi
  const void *v190; // rbx
  void *v191; // rax
  ULONGLONG v192; // rcx
  unsigned int v193; // r10d
  int v194; // r9d
  size_t v195; // r9
  _QWORD *v196; // rbx
  size_t v197; // rdi
  void *v198; // rax
  int v199; // ecx
  ULONGLONG v200; // rax
  void *v201; // r9
  _DWORD *v202; // r10
  _DWORD *v203; // rax
  UINT v204; // ecx
  UINT v205; // r9d
  UINT *v206; // r10
  UINT v207; // edx
  ULONGLONG v208; // r10
  unsigned int v209; // r9d
  int v210; // r11d
  _DWORD *v211; // r10
  _QWORD *v212; // rax
  __int64 v213; // rcx
  UINT *v214; // r9
  unsigned int v215; // r13d
  UINT v216; // edx
  ULONGLONG v217; // r9
  int v218; // r10d
  _DWORD *v219; // r9
  _DWORD *v220; // rax
  ULONGLONG v221; // rax
  _DWORD *v222; // r9
  _DWORD *v223; // rax
  __int64 v224; // rdx
  _DWORD *v225; // rdi
  void *v226; // rcx
  void *v227; // rcx
  _DWORD *v228; // r8
  __int64 *v229; // rbx
  int v230; // ecx
  unsigned __int8 *v231; // r13
  int v232; // eax
  char v233; // r12
  __int64 v234; // rbx
  unsigned __int64 v235; // rax
  unsigned __int8 v236; // di
  void *v237; // rax
  UINT v238; // r11d
  int v239; // r8d
  unsigned __int8 *v240; // r9
  unsigned int v241; // edi
  UINT v242; // r10d
  unsigned int v243; // edx
  char v244; // r12
  int v245; // eax
  ULONGLONG v246; // rcx
  unsigned __int8 *v247; // r13
  unsigned __int8 *v248; // rbx
  __int64 v249; // r14
  __int64 v250; // rax
  int v251; // eax
  int v252; // r12d
  __int64 v253; // rax
  int v254; // eax
  UINT v255; // r12d
  unsigned int v256; // eax
  unsigned int v257; // r8d
  UINT v258; // ecx
  unsigned int v259; // edx
  _BYTE *v260; // r9
  _BYTE *v261; // r11
  char v262; // r10
  int v263; // r12d
  unsigned __int64 v264; // rcx
  unsigned __int8 *v265; // r8
  unsigned __int8 *v266; // r15
  int v267; // ecx
  __int64 v268; // r14
  int v269; // eax
  unsigned __int8 *v270; // rbx
  int v271; // edx
  unsigned __int8 *v272; // r13
  int v273; // edx
  int v274; // edi
  ULONGLONG v275; // rcx
  int v276; // edx
  UINT v277; // r12d
  __int64 v278; // rax
  int v279; // eax
  __int64 v280; // rax
  int v281; // eax
  int v282; // eax
  int v283; // ebx
  unsigned int v284; // edi
  int v285; // r12d
  int v286; // edi
  int v287; // r12d
  int v288; // edi
  int v289; // r12d
  int v290; // edi
  unsigned int v291; // r12d
  int v292; // edi
  int v293; // r12d
  _BYTE *v294; // r8
  UINT v295; // r11d
  UINT v296; // r10d
  int v297; // edi
  int v298; // r12d
  UINT v299; // edi
  int v300; // edi
  UINT v301; // r12d
  int v302; // r12d
  int v303; // edi
  int v304; // r12d
  int v305; // edi
  int v306; // r12d
  unsigned int v307; // r13d
  void *v308; // rax
  void *v309; // rdi
  UINT v310; // edx
  UINT v311; // ecx
  void *v312; // r10
  NTSTATUS v313; // r12d
  unsigned int *v314; // r9
  _DWORD *v315; // r13
  NTSTATUS v316; // eax
  void *v317; // r8
  ULONGLONG v318; // rcx
  NTSTATUS v319; // eax
  void *v320; // r11
  ULONGLONG v321; // rcx
  NTSTATUS v322; // eax
  void *v323; // r11
  UINT v324; // r8d
  void *v325; // rcx
  void *v326; // rcx
  void *v327; // rcx
  void *v328; // rcx
  void *v329; // rcx
  void *v330; // rcx
  void *v331; // rcx
  void *v332; // rcx
  void *v333; // rcx
  unsigned __int8 *v335; // [rsp+50h] [rbp-B0h]
  void *v336; // [rsp+50h] [rbp-B0h]
  ULONGLONG pullResult; // [rsp+60h] [rbp-A0h] BYREF
  UINT uAugend; // [rsp+68h] [rbp-98h] BYREF
  UINT uAddend[2]; // [rsp+70h] [rbp-90h] BYREF
  UINT v340[4]; // [rsp+78h] [rbp-88h] BYREF
  UINT puResult[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v342; // [rsp+90h] [rbp-70h]
  _DWORD *v343; // [rsp+98h] [rbp-68h]
  ULONGLONG v344; // [rsp+A0h] [rbp-60h] BYREF
  size_t Size; // [rsp+A8h] [rbp-58h]
  ULONGLONG ullAugend[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int8 v347; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v349; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v350; // [rsp+D8h] [rbp-28h]
  ULONGLONG v351; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v352; // [rsp+E8h] [rbp-18h]
  UINT v353; // [rsp+ECh] [rbp-14h] BYREF
  size_t v354; // [rsp+F0h] [rbp-10h]
  void *Src; // [rsp+F8h] [rbp-8h]
  __int64 v356; // [rsp+100h] [rbp+0h]
  NTSTATUS v357; // [rsp+108h] [rbp+8h] BYREF
  int v358; // [rsp+10Ch] [rbp+Ch] BYREF
  UINT v359; // [rsp+110h] [rbp+10h]
  unsigned __int64 v360; // [rsp+118h] [rbp+18h]
  ULONGLONG v361; // [rsp+120h] [rbp+20h]
  NTSTATUS AccessStatus; // [rsp+128h] [rbp+28h] BYREF
  _BYTE *v363; // [rsp+130h] [rbp+30h]
  unsigned __int8 *v364; // [rsp+138h] [rbp+38h]
  ACCESS_MASK GrantedAccess[5]; // [rsp+140h] [rbp+40h] BYREF
  ACCESS_MASK v366; // [rsp+154h] [rbp+54h] BYREF
  __int64 v367; // [rsp+158h] [rbp+58h] BYREF
  __int64 v368; // [rsp+160h] [rbp+60h] BYREF
  __int64 v369; // [rsp+168h] [rbp+68h] BYREF
  _QWORD *v370; // [rsp+178h] [rbp+78h]
  UINT *v371; // [rsp+180h] [rbp+80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+188h] [rbp+88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v374[2]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v375; // [rsp+1E8h] [rbp+E8h]
  _OWORD SecurityDescriptor[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v377; // [rsp+210h] [rbp+110h]
  __int64 v378; // [rsp+238h] [rbp+138h] BYREF
  __int64 v379; // [rsp+240h] [rbp+140h] BYREF

  v344 = (ULONGLONG)a1;
  v370 = a4;
  v371 = a5;
  uAddend[0] = a3;
  v6 = 0LL;
  v7 = 0LL;
  v343 = 0LL;
  v8 = 0LL;
  v350 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  *(_OWORD *)ullAugend = 0LL;
  *(_OWORD *)v340 = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_541;
  }
  v13 = *a1;
  v14 = a1 + 1;
  v352 = *a1;
  if ( a1 + 1 < a1 )
    goto LABEL_540;
  if ( a2 - 4 < (unsigned int)v13 )
  {
    Acl = -1073741762;
    goto LABEL_541;
  }
  v15 = (unsigned int *)((char *)v14 + v13);
  Size = v13;
  P = (char *)v14 + v13;
  if ( (unsigned int *)((char *)v14 + v13) < v14 || (unsigned int)v13 >= 0xFFFFFFFC )
    goto LABEL_540;
  if ( a2 - ((_DWORD)v13 + 4) < 4 )
  {
    Acl = -1073741762;
    goto LABEL_541;
  }
  v16 = *v15;
  v17 = v15 + 1;
  uAugend = *v15;
  if ( v15 + 1 < v15 )
    goto LABEL_540;
  v18 = v13 + 8;
  if ( (int)v13 + 8 < (unsigned int)(v13 + 4) )
    goto LABEL_540;
  if ( a2 - v18 < (unsigned int)v16 )
  {
    Acl = -1073741762;
    goto LABEL_541;
  }
  v19 = (UINT *)((char *)v17 + v16);
  v354 = v16;
  if ( (UINT *)((char *)v17 + v16) < v17 )
    goto LABEL_540;
  v20 = v18 + v16;
  if ( v18 + (unsigned int)v16 < v18 )
    goto LABEL_540;
  if ( a2 - v20 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_541;
  }
  v21 = *v19;
  v22 = v19 + 1;
  puResult[0] = *v19;
  if ( v19 + 1 < v19 )
    goto LABEL_539;
  v23 = v20 + 4;
  if ( v20 + 4 < v20 )
    goto LABEL_539;
  if ( a2 - v23 < v21 )
  {
    Acl = -1073741762;
    v8 = 0LL;
    goto LABEL_541;
  }
  if ( v23 + v21 < v23 )
  {
LABEL_539:
    v8 = 0LL;
    goto LABEL_540;
  }
  if ( a2 != v23 + v21 )
  {
    Acl = -1073741762;
    v8 = 0LL;
    goto LABEL_541;
  }
  if ( v21 + (unsigned int)v16 + (unsigned int)v13 + 12LL != a2 )
  {
    Acl = -1073741762;
    v8 = 0LL;
    goto LABEL_541;
  }
  Pool2 = ExAllocatePool2(256LL, 48LL, 542329939LL);
  v25 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    Acl = -1073741801;
    v8 = 0LL;
    v10 = 0LL;
    goto LABEL_541;
  }
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_OWORD *)(Pool2 + 32) = 0LL;
  Acl = 0;
  if ( v344 == -4LL )
  {
    *(_DWORD *)Pool2 = 0;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    goto LABEL_35;
  }
  v26 = v352;
  *(_DWORD *)v25 = v352;
  if ( (_DWORD)v26 )
  {
    v27 = (void *)ExAllocatePool2(256LL, v26, 542329939LL);
    if ( !v27 )
      goto LABEL_45;
    v28 = Size;
    v29 = (const void *)(v344 + 4);
    v25[1] = v27;
    memmove(v27, v29, v28);
LABEL_35:
    if ( P == (PVOID)-4LL )
    {
      *((_DWORD *)v25 + 4) = 0;
      v25[3] = 0LL;
    }
    else
    {
      v30 = uAugend;
      *((_DWORD *)v25 + 4) = uAugend;
      if ( !(_DWORD)v30 )
      {
        Acl = -1073741762;
        goto LABEL_46;
      }
      v31 = (void *)ExAllocatePool2(256LL, v30, 542329939LL);
      if ( !v31 )
      {
LABEL_45:
        Acl = -1073741801;
        goto LABEL_46;
      }
      v32 = v354;
      v33 = (char *)P + 4;
      v25[3] = v31;
      Acl = 0;
      memmove(v31, v33, v32);
    }
    if ( v22 )
    {
      v34 = puResult[0];
      *((_DWORD *)v25 + 8) = puResult[0];
      if ( !(_DWORD)v34 )
      {
        Acl = -1073741762;
        goto LABEL_46;
      }
      Size = v34;
      v35 = (void *)ExAllocatePool2(256LL, v34, 542329939LL);
      if ( !v35 )
        goto LABEL_45;
      v25[5] = v35;
      Acl = 0;
      memmove(v35, v22, Size);
    }
    else
    {
      *((_DWORD *)v25 + 8) = 0;
      v25[5] = 0LL;
    }
    v11 = (unsigned int *)v25;
    goto LABEL_56;
  }
  Acl = -1073741762;
LABEL_46:
  v36 = (void *)v25[1];
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    v25[1] = 0LL;
  }
  v37 = (void *)v25[3];
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    v25[3] = 0LL;
  }
  v38 = (void *)v25[5];
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    v25[5] = 0LL;
  }
  ExFreePoolWithTag(v25, 0);
LABEL_56:
  if ( Acl >= 0 )
  {
    v342 = v11;
    v6 = v11;
    if ( !v11 )
    {
      Acl = -1073741811;
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_541;
    }
    v39 = (unsigned __int8 *)*((_QWORD *)v11 + 1);
    Src = v39;
    if ( !v39 )
    {
      Acl = -1073741811;
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_541;
    }
    v40 = *v11;
    if ( !(_DWORD)v40 )
    {
      Acl = -1073741811;
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_541;
    }
    v41 = (__int64 *)*((_QWORD *)v11 + 5);
    if ( !v41 )
    {
      Acl = -1073741811;
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_541;
    }
    v42 = v11[8];
    if ( !v42 )
    {
      Acl = -1073741811;
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_541;
    }
    P = (PVOID)*((_QWORD *)v11 + 3);
    if ( !P )
    {
      Acl = -1073741811;
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_541;
    }
    v43 = v11[4];
    if ( !v43 )
    {
      Acl = -1073741811;
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_541;
    }
    if ( v42 != 8 )
      goto LABEL_116;
    if ( v43 != 160 )
      goto LABEL_116;
    if ( v40 <= 8 )
      goto LABEL_116;
    v44 = *v41;
    v344 = v40 - 8;
    v45 = 0;
    v46 = ExAllocatePool2(256LL, v40 - 8, 542329939LL);
    Size = v46;
    if ( !v46 )
      goto LABEL_116;
    v47 = v344;
    v48 = v46;
    v363 = (_BYTE *)v46;
    v378 = v44;
    v361 = v344 & 7;
    v49 = v39;
    v364 = v39;
    v352 = -1;
    if ( (v344 & 7) != 0 )
    {
      v50 = -1;
      uAugend = 0;
      v51 = 0;
      puResult[0] = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 56;
      v342 = v6;
      do
      {
        v56 = *v49++;
        if ( (unsigned int)v54 >= 4 )
          v52 |= v56 << v55;
        else
          v53 |= v56 << (v55 - 32);
        ++v54;
        v55 -= 8;
      }
      while ( v54 < (unsigned __int8)(v344 & 7) );
      puResult[0] = v53;
      uAugend = v52;
      v364 = v49;
      v57 = (char *)P;
      v58 = 16LL;
      v59 = 30LL;
      P = (PVOID)16;
      v354 = (size_t)(v57 + 126);
      v60 = (unsigned __int8 *)(v57 + 126);
      v61 = (unsigned __int8 *)(v57 + 158);
      v360 = (unsigned __int64)v61;
      v356 = (__int64)v61;
      do
      {
        v62 = v61[1];
        if ( (unsigned __int8)v62 < 0x1Fu )
        {
          v63 = funcs_1406DC7FD[v62](v59 + 1, *(v60 - 2), *(v60 - 1), *v60, v60[1], (__int64)&v378, v51);
          v58 = (__int64)P;
          v50 ^= v63;
          v61 = (unsigned __int8 *)v356;
        }
        v64 = *v61;
        if ( (unsigned __int8)v64 < 0x1Fu )
        {
          v65 = funcs_1406DC7FD[v64](v59, *(v60 - 6), *(v60 - 5), *(v60 - 4), *(v60 - 3), (__int64)&v378, v50);
          v58 = (__int64)P;
          v51 ^= v65;
          v61 = (unsigned __int8 *)v356;
        }
        v61 -= 2;
        v59 -= 2LL;
        v60 -= 8;
        v356 = (__int64)v61;
        P = (PVOID)--v58;
      }
      while ( v58 );
      v66 = puResult[0] ^ v51;
      v67 = uAugend ^ v50;
      v68 = 0;
      v69 = v361;
      v9 = 0LL;
      v70 = v66;
      v71 = v67;
      v7 = 0LL;
      if ( (_DWORD)v361 )
      {
        v72 = v363;
        do
        {
          v73 = v72 + 1;
          if ( v68 >= 4 )
          {
            v71 = __ROL4__(v71, 8);
            v74 = v71;
          }
          else
          {
            v70 = __ROL4__(v70, 8);
            v74 = v70;
          }
          ++v68;
          *v72++ = v74;
        }
        while ( (int)v68 < (int)v69 );
        v48 = (size_t)v73;
      }
      else
      {
        v48 = (size_t)v363;
      }
      if ( v69 <= 4 )
      {
        v76 = 0;
        if ( v69 < 4 )
          v66 = v66 >> (8 * (4 - v69)) << (8 * (4 - v69));
        LODWORD(v44) = v378;
        v49 = v364;
        v47 = v344;
      }
      else
      {
        LODWORD(v44) = v378;
        v49 = v364;
        v75 = 8 - v69;
        v47 = v344;
        v76 = v67 >> (8 * v75) << (8 * v75);
      }
    }
    else
    {
      uAugend = -1;
      v76 = 0;
      puResult[0] = 0;
      v66 = 0;
      v342 = v6;
      v354 = (size_t)P + 126;
      v360 = (unsigned __int64)P + 158;
    }
    v363 = (_BYTE *)(v47 >> 3);
    if ( v47 >> 3 )
    {
      v77 = uAugend;
      v78 = puResult[0];
      v79 = v49 + 2;
      v364 = (unsigned __int8 *)(v48 + 7);
      while ( 1 )
      {
        v80 = v79[2] << 8;
        v81 = v79[3];
        v82 = (v79[1] | ((*v79 | ((*(v79 - 1) | (*(v79 - 2) << 8)) << 8)) << 8)) ^ v66;
        uAugend = v79[1] | ((*v79 | ((*(v79 - 1) | (*(v79 - 2) << 8)) << 8)) << 8);
        v83 = v79[5] | ((v79[4] | ((v81 | v80) << 8)) << 8);
        v361 = (ULONGLONG)(v79 + 8);
        puResult[0] = v83;
        v84 = (unsigned __int16)v44;
        v85 = v82 ^ v44 ^ HIDWORD(v378) ^ v83 ^ v76;
        v86 = (v85 >> 8) ^ (WORD2(v378) * (v85 ^ WORD1(v378))) ^ v82;
        v87 = (WORD1(v378) * __ROR4__(HIDWORD(v378) - v86, 11) - __ROR4__(v86, 12)) ^ v85;
        v88 = ((unsigned __int16)v44 * __ROL4__(v87 ^ HIDWORD(v378), 8) - __ROL4__(v87, 2)) ^ v86;
        v89 = __ROR4__(v88, 9) ^ (HIWORD(v378) * __ROR4__(v88 - v44, 4)) ^ v87;
        v90 = (__ROR4__(v89, 4) + WORD2(v378) * __ROR4__(v44 - v89, 10)) ^ v88;
        v91 = (WORD1(v378) * __ROL4__(HIWORD(v378) ^ v90, 4) - __ROR4__(v90, 16)) ^ v89;
        v92 = 30LL;
        v93 = ((unsigned __int16)v44 * (WORD1(v378) ^ v91) - __ROR4__(v91, 7)) ^ v90;
        v94 = 16LL;
        v95 = (v93 - v44 - HIWORD(v378)) ^ v91;
        v356 = 16LL;
        v96 = __ROR4__(v95, 11) ^ (WORD2(v378) * __ROR4__(v44 - v95, 9)) ^ v93;
        v97 = (unsigned __int8 *)v354;
        v98 = (WORD1(v378) * (v96 - WORD2(v378)) - (v96 >> 13)) ^ v95;
        v99 = (unsigned __int8 *)v360;
        P = (PVOID)v360;
        v100 = (v98 >> 15) ^ (v84 * __ROL4__(v98 - WORD2(v378), 3)) ^ v96;
        do
        {
          v101 = v99[1];
          if ( (unsigned __int8)v101 < 0x1Fu )
          {
            v102 = funcs_1406DC7FD[v101](v92 + 1, *(v97 - 2), *(v97 - 1), *v97, v97[1], (__int64)&v378, v100);
            v94 = v356;
            v98 ^= v102;
            v99 = (unsigned __int8 *)P;
          }
          v103 = *v99;
          if ( (unsigned __int8)v103 < 0x1Fu )
          {
            v104 = funcs_1406DC7FD[v103](v92, *(v97 - 6), *(v97 - 5), *(v97 - 4), *(v97 - 3), (__int64)&v378, v98);
            v94 = v356;
            v100 ^= v104;
            v99 = (unsigned __int8 *)P;
          }
          v99 -= 2;
          v92 -= 2LL;
          v97 -= 8;
          P = v99;
          v356 = --v94;
        }
        while ( v94 );
        v105 = v364;
        v106 = v78 ^ v100;
        v78 = uAugend;
        v107 = v77 ^ v98;
        v77 = puResult[0];
        *(v364 - 4) = v106;
        *v105 = v107;
        v108 = __ROR4__(v106, 8);
        *(v105 - 5) = v108;
        v109 = __ROR4__(v107, 8);
        *(v105 - 1) = v109;
        v110 = __ROR4__(v108, 8);
        *(v105 - 6) = v110;
        v111 = __ROR4__(v109, 8);
        *(v105 - 2) = v111;
        v112 = __ROR4__(v110, 8);
        v113 = __ROR4__(v111, 8);
        *(v105 - 7) = v112;
        *(v105 - 3) = v113;
        v76 = __ROR4__(v113, 8);
        v66 = __ROR4__(v112, 8);
        v114 = v363-- == (_BYTE *)1;
        v364 = v105 + 8;
        if ( v114 )
          break;
        LODWORD(v44) = v378;
        v79 = (unsigned __int8 *)v361;
      }
      v9 = v343;
      v45 = 0;
      v6 = v342;
      v7 = v343;
      v47 = v344;
    }
    for ( i = 0LL; i < v47; ++i )
      v45 ^= *(_BYTE *)(Size + i);
    if ( v45 != *(_QWORD *)((char *)Src + v47) )
    {
      ExFreePoolWithTag((PVOID)Size, 0);
LABEL_116:
      v8 = 0LL;
      Acl = -1073741823;
      v10 = 0LL;
      goto LABEL_541;
    }
    v7 = (unsigned int *)Size;
    if ( (unsigned int)v47 < 4 )
      goto LABEL_118;
    uAugend = *(_DWORD *)Size;
    if ( Size + 4 < Size )
      goto LABEL_437;
    if ( (unsigned int)(v47 - 4) < 4 )
    {
      v8 = 0LL;
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_541;
    }
    v116 = *(unsigned int *)(Size + 4);
    v117 = (char *)(Size + 8);
    if ( Size + 8 < Size + 4 )
      goto LABEL_437;
    if ( (int)v47 - 8 < (unsigned int)v116 )
    {
      v8 = 0LL;
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_541;
    }
    if ( (unsigned int)v116 >= 0xFFFFFFF8 )
      goto LABEL_437;
    v118 = (unsigned __int64)&v117[v116];
    v119 = *(unsigned int *)(Size + 4);
    if ( (unsigned int)v47 + Size < (unsigned __int64)&v117[v116] || (unsigned int)v47 - v116 - 8 >= 8 )
    {
LABEL_118:
      v8 = 0LL;
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_541;
    }
    v120 = (const void *)(Size + 8);
    Size = 0LL;
    v121 = 0LL;
    v122 = 0;
    if ( v117 )
    {
      if ( v118 < (unsigned __int64)v117 )
      {
        v8 = 0LL;
        v10 = 0LL;
LABEL_540:
        Acl = -1073741675;
        goto LABEL_541;
      }
      if ( v118 > (unsigned __int64)v117 )
      {
        while ( v117 + 4 >= v117 )
        {
          if ( (unsigned __int64)(v117 + 4) > v118 )
            goto LABEL_138;
          v123 = *(_DWORD *)v117 + 4;
          if ( *(_DWORD *)v117 >= 0xFFFFFFFC )
            break;
          v124 = &v117[v123];
          if ( v124 < v117 )
            break;
          v117 += v123;
          if ( (unsigned __int64)v124 > v118 )
            goto LABEL_138;
          ++v122;
          if ( (unsigned __int64)v124 >= v118 )
            goto LABEL_137;
        }
        v8 = 0LL;
        v10 = 0LL;
        goto LABEL_540;
      }
LABEL_137:
      if ( v117 != (char *)v118 )
      {
LABEL_138:
        Acl = -1073741811;
        v8 = 0LL;
        v10 = 0LL;
        goto LABEL_541;
      }
    }
    if ( (_DWORD)v116 )
    {
      Size = ExAllocatePool2(256LL, v116, 542329939LL);
      v121 = (void *)Size;
      if ( !Size )
      {
        v8 = 0LL;
        Acl = -1073741801;
        v10 = 0LL;
        goto LABEL_541;
      }
      v119 = v116;
    }
    v125 = v6;
    v126 = v7;
    if ( v120 )
    {
      memmove(v121, v120, v119);
      v125 = v6;
      v126 = v7;
    }
    ullAugend[1] = Size;
    ullAugend[0] = __PAIR64__(v116, v122);
    v7 = v126;
    v6 = v125;
    if ( uAugend != v122 )
    {
      v8 = 0LL;
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_541;
    }
    if ( !ullAugend[1] )
    {
      v8 = 0LL;
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    if ( !v122 )
    {
      v8 = 0LL;
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v127 = *(_DWORD *)ullAugend[1];
    if ( ullAugend[1] + 4 < ullAugend[1] )
      goto LABEL_437;
    v8 = 0LL;
    v128 = 0LL;
    if ( v127 )
      v128 = (int *)(ullAugend[1] + 4);
    if ( v127 != 4 )
    {
      Acl = -1073741789;
      v10 = 0LL;
      goto LABEL_541;
    }
    v129 = *v128;
    if ( v122 <= 1 )
    {
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v130 = (unsigned int *)ullAugend[1];
    v131 = 0;
    v132 = v126;
    v133 = v6;
    do
    {
      v134 = *v130;
      v135 = v130 + 1;
      v6 = v133;
      v7 = v132;
      if ( v130 + 1 < v130 )
        goto LABEL_438;
      v130 = (unsigned int *)((char *)v135 + v134);
      if ( (unsigned int *)((char *)v135 + v134) < v135 )
        goto LABEL_438;
      ++v131;
    }
    while ( !v131 );
    v136 = *v130;
    if ( v130 + 1 < v130 )
      goto LABEL_438;
    if ( (_DWORD)v136 )
      v8 = v130 + 1;
    if ( v122 <= 2 )
    {
      v8 = 0LL;
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v137 = (unsigned int *)ullAugend[1];
    for ( j = 0; j < 2; ++j )
    {
      v139 = *v137;
      v140 = v137 + 1;
      v6 = v133;
      v7 = v132;
      if ( v137 + 1 < v137 )
        goto LABEL_529;
      v137 = (unsigned int *)((char *)v140 + v139);
      if ( (unsigned int *)((char *)v140 + v139) < v140 )
        goto LABEL_529;
    }
    v141 = *v137;
    v142 = v137 + 1;
    if ( v137 + 1 < v137 )
    {
LABEL_529:
      v8 = 0LL;
      v10 = 0LL;
      goto LABEL_540;
    }
    v143 = 0LL;
    if ( (_DWORD)v141 )
      v143 = v142;
    Src = v143;
    v144 = ExAllocatePool2(256LL, 48LL, 542329939LL);
    if ( !v144 )
    {
      v8 = 0LL;
      Acl = -1073741801;
      v10 = 0LL;
      goto LABEL_541;
    }
    v9 = (_DWORD *)v144;
    *(_OWORD *)v144 = 0LL;
    *(_OWORD *)(v144 + 16) = 0LL;
    *(_OWORD *)(v144 + 32) = 0LL;
    v146 = v7;
    *(_DWORD *)v144 = 0;
    *(_QWORD *)(v144 + 8) = 0LL;
    if ( v8 )
    {
      *(_DWORD *)(v144 + 16) = v136;
      if ( !(_DWORD)v136 )
      {
        Acl = -1073741762;
LABEL_189:
        v150 = (void *)*((_QWORD *)v9 + 1);
        if ( v150 )
        {
          ExFreePoolWithTag(v150, 0);
          *((_QWORD *)v9 + 1) = 0LL;
        }
        v151 = (void *)*((_QWORD *)v9 + 3);
        if ( v151 )
        {
          ExFreePoolWithTag(v151, 0);
          *((_QWORD *)v9 + 3) = 0LL;
        }
        v152 = (void *)*((_QWORD *)v9 + 5);
        if ( v152 )
        {
          ExFreePoolWithTag(v152, 0);
          *((_QWORD *)v9 + 5) = 0LL;
        }
        ExFreePoolWithTag(v9, 0);
        v9 = (_DWORD *)v350;
        goto LABEL_329;
      }
      v147 = (void *)ExAllocatePool2(256LL, v136, 542329939LL);
      if ( !v147 )
      {
LABEL_188:
        Acl = -1073741801;
        goto LABEL_189;
      }
      *((_QWORD *)v9 + 3) = v147;
      memmove(v147, v8, v136);
    }
    else
    {
      *(_DWORD *)(v144 + 16) = 0;
      *(_QWORD *)(v144 + 24) = 0LL;
    }
    v148 = Src;
    if ( Src )
    {
      v9[8] = v141;
      if ( !(_DWORD)v141 )
      {
        Acl = -1073741762;
        goto LABEL_189;
      }
      v149 = (void *)ExAllocatePool2(256LL, v141, 542329939LL);
      if ( !v149 )
        goto LABEL_188;
      *((_QWORD *)v9 + 5) = v149;
      memmove(v149, v148, v141);
    }
    else
    {
      v9[8] = 0;
      *((_QWORD *)v9 + 5) = 0LL;
    }
    switch ( v129 )
    {
      case 0:
        Acl = sub_1406DF1C0(ullAugend, v9, uAddend[0], v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 1:
        v154 = qword_140D534B8;
        memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
        v377 = 0LL;
        GrantedAccess[0] = 0;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        AccessStatus = 0;
        v155 = RtlLengthSid(*(PSID *)(qword_140D534B8 + 384));
        v156 = RtlLengthSid(*(PSID *)(v154 + 272)) + v155;
        v157 = RtlLengthSid(*(PSID *)(v154 + 392)) + 32 + v156;
        v158 = (ACL *)ExAllocatePool2(256LL, v157, 542329939LL);
        v159 = v158;
        if ( !v158 )
        {
          v8 = 0LL;
          Acl = -1073741801;
          v10 = 0LL;
          goto LABEL_541;
        }
        Acl = RtlCreateAcl(v158, v157, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v159, 2u, 0, 32, *(unsigned __int8 **)(v154 + 384), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v159, 2u, 0, 32, *(unsigned __int8 **)(v154 + 392), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((__int64)v159, 2u, 0, 32, *(unsigned __int8 **)(v154 + 272), 0);
              if ( Acl >= 0 )
              {
                Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v159, 0);
                  if ( Acl >= 0 )
                  {
                    SeCaptureSubjectContext(&SubjectContext);
                    v160 = SeAccessCheck(
                             SecurityDescriptor,
                             &SubjectContext,
                             0,
                             0x20u,
                             0,
                             0LL,
                             (PGENERIC_MAPPING)&IopFileMapping,
                             1,
                             GrantedAccess,
                             &AccessStatus);
                    SeReleaseSubjectContext(&SubjectContext);
                    if ( !v160 )
                      Acl = AccessStatus;
                  }
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v159, 0);
        if ( Acl < 0 )
          goto LABEL_329;
        v8 = 0LL;
        GrantedAccess[1] = 0;
        v367 = 8LL;
        ZwQuerySystemInformation(103LL, (__int64)&v367);
        if ( v6[4] != 160
          || ((v161 = (const void *)*((_QWORD *)v6 + 3), memcmp(qword_140A79890, v161, 0xA0uLL))
           || v9[4] != 160
           || memcmp(qword_140A79D90, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A752A0, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(sub_140A75220, *((const void **)v9 + 5), 8uLL))
          && (memcmp(qword_140A79C50, v161, 0xA0uLL)
           || v9[4] != 160
           || memcmp(qword_140A796B0, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A75270, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(&qword_140A75250, *((const void **)v9 + 5), 8uLL)) )
        {
          Acl = -2147024891;
          v10 = 0LL;
          goto LABEL_541;
        }
        v162 = 0;
        if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
          v162 = -2147024891;
        Acl = v162;
        if ( v162 >= 0 )
        {
          Acl = SPCallServerHandleUpdatePolicies(ullAugend, v9, uAddend[0], v340);
          v153 = Acl < 0;
          goto LABEL_434;
        }
        goto LABEL_329;
      case 2:
        Acl = SPCallServerHandleAuthenticateCaller(v146, v9, uAddend[0], v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 4:
        Acl = sub_140A47EB0(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 5:
        Acl = SPCallServerHandleWaitForDisplayWindow(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 6:
        Acl = sub_140A4AACC(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 7:
        Acl = sub_140A49A48(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 22:
        Acl = SPCallServerHandleFileUsnQuery(ullAugend, 0x140000000uLL, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 23:
        v163 = qword_140D534B8;
        memset(v374, 0, sizeof(v374));
        v375 = 0LL;
        v366 = 0;
        memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
        v357 = 0;
        v164 = RtlLengthSid(*(PSID *)(qword_140D534B8 + 384));
        v165 = RtlLengthSid(*(PSID *)(v163 + 272)) + v164;
        v166 = RtlLengthSid(*(PSID *)(v163 + 392)) + 32 + v165;
        v167 = (ACL *)ExAllocatePool2(256LL, v166, 542329939LL);
        v168 = v167;
        if ( !v167 )
        {
          v8 = 0LL;
          Acl = -1073741801;
          v10 = 0LL;
          goto LABEL_541;
        }
        Acl = RtlCreateAcl(v167, v166, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v168, 2u, 0, 32, *(unsigned __int8 **)(v163 + 384), 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v168, 2u, 0, 32, *(unsigned __int8 **)(v163 + 392), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((__int64)v168, 2u, 0, 32, *(unsigned __int8 **)(v163 + 272), 0);
              if ( Acl >= 0 )
              {
                Acl = RtlCreateSecurityDescriptor(v374, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(v374, 1u, v168, 0);
                  if ( Acl >= 0 )
                  {
                    SeCaptureSubjectContext(&SubjectSecurityContext);
                    v169 = SeAccessCheck(
                             v374,
                             &SubjectSecurityContext,
                             0,
                             0x20u,
                             0,
                             0LL,
                             (PGENERIC_MAPPING)&IopFileMapping,
                             1,
                             &v366,
                             &v357);
                    SeReleaseSubjectContext(&SubjectSecurityContext);
                    if ( !v169 )
                      Acl = v357;
                  }
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v168, 0);
        if ( Acl < 0 )
          goto LABEL_329;
        GrantedAccess[4] = 0;
        v368 = 8LL;
        ZwQuerySystemInformation(103LL, (__int64)&v368);
        v170 = v6[4];
        if ( (_DWORD)v170 != 160
          || ((v171 = (const void *)*((_QWORD *)v6 + 3), memcmp(qword_140A79930, v171, 0xA0uLL))
           || v9[4] != 160
           || memcmp(qword_140A799D0, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A75238, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(&qword_140A75210, *((const void **)v9 + 5), 8uLL))
          && (memcmp(qword_140A79ED0, v171, v170)
           || v9[4] != 160
           || memcmp(qword_140A7A1F0, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A75208, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(&qword_140A75298, *((const void **)v9 + 5), 8uLL))
          && ((v172 = (const void *)*((_QWORD *)v6 + 3), memcmp(qword_140A7A150, v172, v170))
           || v9[4] != 160
           || memcmp(sub_140A79750, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A75240, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp((char *)&loc_140A7522E + 2, *((const void **)v9 + 5), 8uLL))
          && (memcmp(qword_140A79BB0, v172, v170)
           || v9[4] != 160
           || memcmp(qword_140A79E30, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A75280, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(&qword_140A75218, *((const void **)v9 + 5), 8uLL)) )
        {
          v8 = 0LL;
          Acl = -2147024891;
          v10 = 0LL;
          goto LABEL_541;
        }
        Acl = 0;
        v358 = 0;
        updated = QueryUpdateFileEaAllowedExt(&v358);
        if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v358 != 1 )
        {
          v176 = Acl;
          if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) == 0 )
            v176 = -2147024891;
          Acl = v176;
        }
        if ( Acl >= 0 )
        {
          Acl = SPCallServerHandleFileIntegrityUpdate(ullAugend, v174, v175, v340);
          v153 = Acl < 0;
          goto LABEL_434;
        }
        goto LABEL_329;
      case 24:
        Acl = SPCallServerHandleFileIntegrityQuery(ullAugend, 0x140000000uLL, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 100:
        Acl = SPCallServerHandleUpdateLicense(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 101:
        Acl = SPCallServerHandleRemoveLicense(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 102:
        Acl = -1073741822;
        goto LABEL_329;
      case 103:
        Acl = sub_140A484C0(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 104:
        Acl = sub_140A49D04(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 105:
        Acl = SPCallServerHandleGetLicenseChallenge(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 106:
        Acl = sub_140A49374(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 107:
        Acl = sub_14066B1EC((__int64)ullAugend, (__int64)v9, v145, (__int64)v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 109:
        Acl = SPCallServerHandleIsAppLicensed(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 110:
        Acl = sub_140A48FC0(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 111:
        Acl = sub_140A48280(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 112:
        Acl = SPCallServerHandleClepSign(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 113:
        Acl = SPCallServerHandleClepKdf(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 204:
        Acl = sub_140A4A6B8(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 205:
        Acl = SPCallServerHandleCheckLicense(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 206:
        GrantedAccess[3] = 0;
        Acl = 0;
        v369 = 8LL;
        ZwQuerySystemInformation(103LL, (__int64)&v369);
        v178 = v6[4];
        if ( (_DWORD)v178 != 160
          || ((v179 = (const void *)*((_QWORD *)v6 + 3), memcmp(qword_140A79B10, v179, 0xA0uLL))
           || v9[4] != 160
           || memcmp(qword_140A7A010, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A75258, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(&qword_140A75278, *((const void **)v9 + 5), 8uLL))
          && (memcmp(qword_140A79F70, v179, v178)
           || v9[4] != 160
           || memcmp(qword_140A7A0B0, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&loc_140A75228, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(&qword_140A75268, *((const void **)v9 + 5), 8uLL))
          && ((v180 = (const void *)*((_QWORD *)v6 + 3), memcmp(qword_140A79A70, v180, v178))
           || v9[4] != 160
           || memcmp(qword_140A79CF0, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A75248, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(&qword_140A75290, *((const void **)v9 + 5), 8uLL))
          && (memcmp(qword_140A79610, v180, v178)
           || v9[4] != 160
           || memcmp(qword_140A797F0, *((const void **)v9 + 3), 0xA0uLL)
           || v6[8] != 8
           || memcmp(&qword_140A75288, *((const void **)v6 + 5), 8uLL)
           || v9[8] != 8
           || memcmp(&qword_140A75260, *((const void **)v9 + 5), 8uLL)) )
        {
          Acl = -2147024891;
        }
        if ( Acl < 0 )
          goto LABEL_329;
        Acl = SPCallServerHandleGetCurrentHardwareID((__int64)ullAugend, (__int64)v9, v177, (__int64)v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 207:
        Acl = sub_140A48A10(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 208:
        Acl = SPCallServerHandleGetAppPolicyValue(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 209:
        Acl = sub_140A4A29C(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 210:
        Acl = sub_140A47AC4(ullAugend, v9, v145, v340);
        v153 = Acl < 0;
        goto LABEL_434;
      case 211:
        Acl = sub_140A476D4(ullAugend, v9, v145, v340);
        if ( Acl >= 0 )
          goto LABEL_435;
        v8 = 0LL;
        v10 = 0LL;
        goto LABEL_541;
      case 212:
        Feature_IMDSLicensingIntegration__private_ReportDeviceUsage();
        if ( !ullAugend[1] )
        {
          v8 = 0LL;
          Acl = -1073741811;
          v10 = 0LL;
          goto LABEL_541;
        }
        if ( LODWORD(ullAugend[0]) <= 3 )
        {
          v8 = 0LL;
          Acl = -1073741811;
          v10 = 0LL;
          goto LABEL_541;
        }
        v181 = ullAugend[1];
        v8 = 0LL;
        pullResult = ullAugend[1];
        break;
      default:
        v350 = 0LL;
        LODWORD(v351) = 0;
        if ( *(_QWORD *)&v340[2] )
        {
          v214 = *(UINT **)&v340[2];
          v215 = v340[0];
          v344 = *(_QWORD *)&v340[2];
          if ( v340[0] )
          {
            do
            {
              v216 = *v214;
              uAddend[0] = 0;
              Acl = RtlUIntAdd(4u, v216, uAddend);
              if ( Acl < 0 )
                goto LABEL_329;
              Acl = RtlULongLongAdd(v217, uAddend[0], &v344);
              if ( Acl < 0 )
                goto LABEL_329;
              v214 = (UINT *)v344;
            }
            while ( v218 + 1 < v215 );
          }
          Acl = RtlULongLongAdd((ULONGLONG)v214, 4uLL, &v351);
          if ( Acl < 0 )
            goto LABEL_329;
          if ( (unsigned __int64)(v219 + 2) > *(_QWORD *)&v340[2] + (unsigned __int64)v340[1] )
          {
            v8 = 0LL;
            Acl = -1073741789;
            v10 = 0LL;
            goto LABEL_541;
          }
          v220 = (_DWORD *)v351;
          *v219 = 4;
          *v220 = -2147467263;
        }
        else
        {
          uAddend[0] = 0;
          Acl = RtlUIntAdd(4u, 4u, uAddend);
          if ( Acl < 0 )
            goto LABEL_329;
          Acl = RtlUIntAdd(v340[1], uAddend[0], &v340[1]);
          if ( Acl < 0 )
            goto LABEL_329;
        }
        if ( !v340[1] )
        {
          v8 = 0LL;
          Acl = -1073741762;
          v10 = 0LL;
          goto LABEL_541;
        }
        v221 = ExAllocatePool2(256LL, v340[1], 542329939LL);
        if ( !v221 )
        {
          v8 = 0LL;
          Acl = -1073741801;
          v10 = 0LL;
          goto LABEL_541;
        }
        *(_QWORD *)&v340[2] = v221;
        v340[0] = 0;
        v350 = 0LL;
        LODWORD(v351) = 0;
        v344 = v221;
        Acl = RtlULongLongAdd(v221, 4uLL, &v351);
        if ( Acl < 0 )
          goto LABEL_433;
        if ( v222 + 2 > (_DWORD *)((char *)v222 + v340[1]) )
        {
          Acl = -1073741789;
          goto LABEL_433;
        }
        v223 = (_DWORD *)v351;
        *v222 = 4;
        *v223 = -2147467263;
        goto LABEL_432;
    }
    do
    {
      Acl = RtlULongLongAdd(v181, 4uLL, &pullResult);
      if ( Acl < 0 )
        goto LABEL_330;
      Acl = RtlULongLongAdd(pullResult, v182, &pullResult);
      if ( Acl < 0 )
        goto LABEL_330;
      v181 = pullResult;
    }
    while ( (unsigned int)(v183 + 1) < 3 );
    Acl = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
    if ( Acl < 0 )
      goto LABEL_330;
    v185 = (size_t *)pullResult;
    if ( !v184 )
      v185 = 0LL;
    if ( v184 != 8 )
    {
      Acl = -1073741789;
      v10 = 0LL;
      goto LABEL_541;
    }
    Size = *v185;
    Feature_IMDSLicensingIntegration__private_ReportDeviceUsage();
    if ( !ullAugend[1] )
    {
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    if ( LODWORD(ullAugend[0]) <= 4 )
    {
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v186 = ullAugend[1];
    pullResult = ullAugend[1];
    do
    {
      Acl = RtlULongLongAdd(v186, 4uLL, &pullResult);
      if ( Acl < 0 )
        goto LABEL_330;
      Acl = RtlULongLongAdd(pullResult, v187, &pullResult);
      if ( Acl < 0 )
        goto LABEL_330;
      v186 = pullResult;
    }
    while ( (unsigned int)(v188 + 1) < 4 );
    v189 = *(unsigned int *)pullResult;
    Acl = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
    if ( Acl < 0 )
      goto LABEL_330;
    v190 = (const void *)pullResult;
    if ( !(_DWORD)v189 )
      v190 = 0LL;
    v350 = (unsigned __int64)v190;
    if ( !(_DWORD)v189 )
    {
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_541;
    }
    v191 = (void *)ExAllocatePool2(256LL, v189, 542329939LL);
    if ( !v191 )
    {
      Acl = -1073741801;
      v10 = 0LL;
      goto LABEL_541;
    }
    memmove(v191, v190, v189);
    if ( (_DWORD)v189 != 4 )
    {
      Acl = -1073741306;
      v10 = 0LL;
      goto LABEL_541;
    }
    Feature_IMDSLicensingIntegration__private_ReportDeviceUsage();
    if ( !ullAugend[1] )
    {
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    if ( LODWORD(ullAugend[0]) <= 5 )
    {
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v192 = ullAugend[1];
    pullResult = ullAugend[1];
    do
    {
      Acl = RtlULongLongAdd(v192, 4uLL, &pullResult);
      if ( Acl < 0 )
        goto LABEL_330;
      Acl = RtlULongLongAdd(pullResult, v193, &pullResult);
      if ( Acl < 0 )
        goto LABEL_330;
      v192 = pullResult;
    }
    while ( (unsigned int)(v194 + 1) < 5 );
    Acl = RtlULongLongAdd(pullResult, 4uLL, &pullResult);
    if ( Acl < 0 )
      goto LABEL_330;
    v196 = (_QWORD *)pullResult;
    if ( !(_DWORD)v195 )
    {
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_541;
    }
    v197 = v195;
    v198 = (void *)ExAllocatePool2(256LL, v195, 542329939LL);
    if ( !v198 )
    {
      Acl = -1073741801;
      v10 = 0LL;
      goto LABEL_541;
    }
    memmove(v198, v196, v197);
    if ( (_DWORD)v197 != 8 )
    {
      Acl = -1073741306;
      v10 = 0LL;
      goto LABEL_541;
    }
    uAddend[0] = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140D53488)(*(unsigned int *)v350, *v196);
    uAugend = 0;
    puResult[0] = 0;
    Acl = RtlUIntAdd(4u, 4u, puResult);
    if ( Acl < 0 )
    {
LABEL_330:
      v10 = 0LL;
      goto LABEL_541;
    }
    Acl = RtlUIntAdd(0, puResult[0], &uAugend);
    if ( Acl < 0 )
      goto LABEL_433;
    puResult[0] = 0;
    Acl = RtlUIntAdd(4u, v199 + 8, puResult);
    if ( Acl < 0 )
      goto LABEL_330;
    Acl = RtlUIntAdd(uAugend, puResult[0], &uAugend);
    if ( Acl < 0 )
      goto LABEL_433;
    v340[1] = uAugend;
    if ( !uAugend )
    {
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_541;
    }
    v200 = ExAllocatePool2(256LL, uAugend, 542329939LL);
    if ( !v200 )
    {
      Acl = -1073741801;
      v10 = 0LL;
      goto LABEL_541;
    }
    *(_QWORD *)&v340[2] = v200;
    v340[0] = 0;
    uAddend[0] |= 0x10000000u;
    v350 = 0LL;
    LODWORD(v351) = 0;
    v344 = v200;
    *(_QWORD *)puResult = Size;
    Acl = RtlULongLongAdd(v200, 4uLL, &v351);
    if ( Acl < 0 )
      goto LABEL_329;
    if ( v202 + 2 > (_DWORD *)((char *)v202 + v340[1]) )
    {
      Acl = -1073741789;
      v8 = v201;
      v10 = v201;
      goto LABEL_541;
    }
    v203 = (_DWORD *)v351;
    v204 = uAddend[0];
    *v202 = 4;
    *v203 = v204;
    v205 = ++v340[0];
    v350 = 0LL;
    LODWORD(v351) = 0;
    if ( !*(_QWORD *)&v340[2] )
    {
      uAddend[0] = 0;
      Acl = RtlUIntAdd(4u, 8u, uAddend);
      if ( Acl < 0 )
        goto LABEL_433;
      Acl = RtlUIntAdd(v340[1], uAddend[0], &v340[1]);
      if ( Acl < 0 )
        goto LABEL_433;
      Acl = 0;
      goto LABEL_432;
    }
    v206 = *(UINT **)&v340[2];
    v344 = *(_QWORD *)&v340[2];
    if ( v205 )
    {
      while ( 1 )
      {
        v207 = *v206;
        uAddend[0] = 0;
        Acl = RtlUIntAdd(4u, v207, uAddend);
        if ( Acl < 0 )
          break;
        Acl = RtlULongLongAdd(v208, uAddend[0], &v344);
        if ( Acl < 0 )
          break;
        v206 = (UINT *)v344;
        if ( v210 + 1 >= v209 )
          goto LABEL_408;
      }
    }
    else
    {
LABEL_408:
      Acl = RtlULongLongAdd((ULONGLONG)v206, 4uLL, &v351);
      if ( Acl >= 0 )
      {
        if ( (unsigned __int64)(v211 + 3) <= *(_QWORD *)&v340[2] + (unsigned __int64)v340[1] )
        {
          v212 = (_QWORD *)v351;
          v213 = *(_QWORD *)puResult;
          *v211 = 8;
          *v212 = v213;
LABEL_432:
          ++v340[0];
          goto LABEL_433;
        }
        Acl = -1073741789;
      }
    }
LABEL_433:
    v153 = Acl < 0;
LABEL_434:
    if ( v153 )
      goto LABEL_329;
LABEL_435:
    v350 = __rdtsc();
    v353 = 8;
    Acl = RtlUIntAdd(8u, v340[1], &v353);
    if ( Acl < 0 )
      goto LABEL_329;
    v224 = (v353 + 7) & 0xFFFFFFF8;
    if ( (unsigned int)v224 < v353 )
    {
LABEL_437:
      v8 = 0LL;
LABEL_438:
      v10 = 0LL;
      goto LABEL_540;
    }
    v353 = (v353 + 7) & 0xFFFFFFF8;
    if ( !(_DWORD)v224 )
    {
      v8 = 0LL;
      Acl = -1073741762;
      v10 = 0LL;
      goto LABEL_541;
    }
    v225 = (_DWORD *)ExAllocatePool2(256LL, v224, 542329939LL);
    if ( !v225 )
    {
      v8 = 0LL;
      Acl = -1073741801;
      v10 = 0LL;
      goto LABEL_541;
    }
    *v225 = v340[0];
    *(_QWORD *)uAddend = v225;
    Acl = RtlULongLongAdd((ULONGLONG)v225, 4uLL, (ULONGLONG *)uAddend);
    if ( Acl < 0
      || (v227 = *(void **)uAddend,
          **(_DWORD **)uAddend = v340[1],
          Acl = RtlULongLongAdd((ULONGLONG)v227, 4uLL, (ULONGLONG *)uAddend),
          v226 = v225,
          Acl < 0) )
    {
      ExFreePoolWithTag(v226, 0);
LABEL_329:
      v8 = 0LL;
      goto LABEL_330;
    }
    *(_QWORD *)((char *)v225 + v353 - 8) = v350;
    memmove(*(void **)uAddend, *(const void **)&v340[2], v340[1]);
    v228 = v225;
    v335 = (unsigned __int8 *)v225;
    pullResult = (ULONGLONG)v7;
    v342 = v6;
    v343 = v9;
    if ( !v353 )
    {
      Acl = -1073741811;
      v8 = v225;
      goto LABEL_447;
    }
    v229 = (__int64 *)*((_QWORD *)v9 + 5);
    if ( !v229 )
    {
      v8 = v225;
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v230 = v9[8];
    if ( !v230 )
    {
      v8 = v225;
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v231 = (unsigned __int8 *)*((_QWORD *)v9 + 3);
    *(_QWORD *)uAddend = v231;
    if ( !v231 )
    {
      v8 = v225;
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v232 = v9[4];
    if ( !v232 )
    {
      v8 = v225;
      Acl = -1073741811;
      v10 = 0LL;
      goto LABEL_541;
    }
    v360 = v353;
    v233 = v353;
    if ( v230 != 8 )
      goto LABEL_528;
    if ( v232 != 160 )
      goto LABEL_528;
    v234 = *v229;
    v235 = 0LL;
    v347 = 0;
    v236 = 0;
    do
      v236 ^= *((_BYTE *)v228 + v235++);
    while ( v235 < v353 );
    v347 = v236;
    Src = v231 + 128;
    v237 = (void *)ExAllocatePool2(256LL, v353 + 8LL, 542329939LL);
    P = v237;
    if ( !v237 )
    {
LABEL_528:
      v8 = v335;
      Acl = -1073741823;
      v10 = 0LL;
      goto LABEL_541;
    }
    v238 = 0;
    v379 = v234;
    v239 = v233 & 7;
    v349 = v335;
    v350 = v233 & 7;
    v240 = v335;
    Size = (size_t)v237;
    v241 = 0;
    uAugend = 0;
    puResult[0] = 0;
    if ( (v233 & 7) != 0 )
    {
      uAugend = 0;
      puResult[0] = 0;
      v242 = 0;
      v243 = 0;
      v244 = 56;
      do
      {
        v245 = *v240++;
        if ( v243 >= 4 )
          v242 |= v245 << v244;
        else
          v238 |= v245 << (v244 - 32);
        ++v243;
        v244 -= 8;
      }
      while ( (int)v243 < v239 );
      puResult[0] = v238;
      uAugend = v242;
      v349 = v240;
      pullResult = (ULONGLONG)v7;
      v342 = v6;
      v343 = v9;
      v246 = 16LL;
      v247 = v231 + 158;
      v248 = (unsigned __int8 *)(*(_QWORD *)uAddend + 126LL);
      v344 = 16LL;
      v249 = 30LL;
      do
      {
        v250 = v247[1];
        if ( (unsigned __int8)v250 >= 0x1Fu )
        {
          v252 = v352;
        }
        else
        {
          v251 = funcs_1406DC7FD[v250](v249 + 1, *(v248 - 2), *(v248 - 1), *v248, v248[1], (__int64)&v379, v241);
          v246 = v344;
          v252 = v251 ^ v352;
          v352 ^= v251;
        }
        v253 = *v247;
        if ( (unsigned __int8)v253 < 0x1Fu )
        {
          v254 = funcs_1406DC7FD[v253](v249, *(v248 - 6), *(v248 - 5), *(v248 - 4), *(v248 - 3), (__int64)&v379, v252);
          v246 = v344;
          v241 ^= v254;
        }
        v249 -= 2LL;
        v247 -= 2;
        v248 -= 8;
        v344 = --v246;
      }
      while ( v246 );
      v241 ^= puResult[0];
      v255 = uAugend ^ v252;
      v256 = v241;
      v257 = v350;
      v258 = v255;
      v9 = v343;
      v259 = 0;
      v7 = (unsigned int *)pullResult;
      if ( (_DWORD)v350 )
      {
        v260 = (_BYTE *)Size;
        do
        {
          v261 = v260 + 1;
          if ( v259 >= 4 )
          {
            v258 = __ROL4__(v258, 8);
            v262 = v258;
          }
          else
          {
            v256 = __ROL4__(v256, 8);
            v262 = v256;
          }
          ++v259;
          *v260++ = v262;
        }
        while ( (int)v259 < (int)v257 );
        v237 = v261;
      }
      else
      {
        v237 = (void *)Size;
      }
      if ( v257 <= 4 )
      {
        v263 = 0;
        if ( v257 < 4 )
          v241 = v241 >> (8 * (4 - v257)) << (8 * (4 - v257));
      }
      else
      {
        v263 = v255 >> (8 * (8 - v257)) << (8 * (8 - v257));
      }
      v240 = v349;
      v231 = *(unsigned __int8 **)uAddend;
    }
    else
    {
      v263 = -1;
    }
    v264 = v360;
    v354 = v360 >> 3;
    if ( v360 >> 3 )
    {
      v265 = v231 + 2;
      v350 = (unsigned __int64)(v231 + 2);
      v266 = v240 + 2;
      Size = (size_t)v237 + 7;
      do
      {
        v267 = *(v266 - 2);
        v268 = 0LL;
        v269 = *(v266 - 1);
        v270 = v265;
        v271 = v266[2];
        v266 += 8;
        v272 = (unsigned __int8 *)Src;
        v273 = *(v266 - 5) | (v271 << 8);
        LODWORD(v349) = *(v266 - 7) | ((*(v266 - 8) | ((v269 | (v267 << 8)) << 8)) << 8);
        v274 = (unsigned int)v349 ^ v241;
        v275 = 16LL;
        v276 = *(v266 - 4) | (v273 << 8);
        v344 = 16LL;
        LOBYTE(uAddend[0]) = *(v266 - 3);
        *(_WORD *)((char *)uAddend + 1) = v276;
        HIBYTE(uAddend[0]) = BYTE2(v276);
        v277 = uAddend[0] ^ v263;
        do
        {
          v278 = *v272;
          if ( (unsigned __int8)v278 < 0x1Fu )
          {
            v279 = funcs_1406DC7FD[v278](v268, *(v270 - 2), *(v270 - 1), *v270, v270[1], (__int64)&v379, v277);
            v275 = v344;
            v274 ^= v279;
          }
          v280 = v272[1];
          if ( (unsigned __int8)v280 < 0x1Fu )
          {
            v281 = funcs_1406DC7FD[v280](v268 + 1, v270[2], v270[3], v270[4], v270[5], (__int64)&v379, v274);
            v275 = v344;
            v277 ^= v281;
          }
          v268 += 2LL;
          v272 += 2;
          v270 += 8;
          v344 = --v275;
        }
        while ( v275 );
        v282 = v379;
        v283 = HIDWORD(v379);
        v284 = (HIWORD(v379) * ((unsigned __int16)v379 + __ROR4__(~v277, 5))) ^ v274;
        v285 = (v284 >> 10) ^ (WORD1(v379) * (HIWORD(v379) ^ v284)) ^ v277;
        v286 = __ROR4__(v285, 10) ^ (WORD2(v379) * __ROR4__(v379 ^ v285, 12)) ^ v284;
        v287 = (HIWORD(v379) * __ROR4__(v286 - v379, 14) - __ROL4__(v286, 8)) ^ v285;
        v288 = (__ROL4__(v287, 2) + (unsigned __int16)v379 * __ROR4__(v287 + HIDWORD(v379), 15)) ^ v286;
        v289 = (WORD1(v379) * (WORD2(v379) ^ v288)) ^ __ROR4__(v288, 6) ^ v287;
        v290 = (HIDWORD(v379) - (v379 ^ v289)) ^ v288;
        v291 = (HIWORD(v379) * __ROL4__(WORD1(v379) ^ v290, 6) - __ROL4__(v290, 2)) ^ v289;
        v292 = ((unsigned __int16)v379 * (v291 - WORD2(v379)) - (v291 >> 13)) ^ v290;
        v293 = (WORD1(v379) * __ROR4__(v292 + HIDWORD(v379), 9) - __ROL4__(v292, 2)) ^ v291;
        v294 = (_BYTE *)Size;
        v295 = (unsigned int)v349;
        v296 = uAddend[0];
        v297 = (__ROL4__(v293, 10) + WORD2(v379) * __ROL4__(v293 - v379, 5)) ^ v292;
        v298 = v297 ^ v293;
        v299 = puResult[0] ^ v297;
        *(_BYTE *)(Size - 4) = v299;
        v300 = __ROR4__(v299, 8);
        v301 = uAugend ^ v282 ^ v283 ^ v298;
        *v294 = v301;
        *(v294 - 5) = v300;
        v302 = __ROR4__(v301, 8);
        *(v294 - 1) = v302;
        v303 = __ROR4__(v300, 8);
        *(v294 - 6) = v303;
        v304 = __ROR4__(v302, 8);
        *(v294 - 2) = v304;
        v305 = __ROR4__(v303, 8);
        *(v294 - 7) = v305;
        v306 = __ROR4__(v304, 8);
        *(v294 - 3) = v306;
        v263 = __ROR4__(v306, 8);
        v241 = __ROR4__(v305, 8);
        v114 = v354-- == 1;
        Size = (size_t)(v294 + 8);
        v265 = (unsigned __int8 *)v350;
        puResult[0] = v295;
        uAugend = v296;
      }
      while ( !v114 );
      v6 = v342;
      v9 = v343;
      v7 = (unsigned int *)pullResult;
      v264 = v360;
    }
    v307 = v264 + 8;
    *(_QWORD *)((char *)P + v264) = v347;
    Acl = 0;
    if ( (_DWORD)v264 == -8 )
    {
      Acl = -1073741762;
    }
    else
    {
      v308 = (void *)ExAllocatePool2(256LL, v307, 542329939LL);
      v309 = v308;
      if ( v308 )
      {
        memmove(v308, P, v307);
        *((_QWORD *)v9 + 1) = v309;
        *v9 = v307;
      }
      else
      {
        Acl = -1073741801;
      }
    }
    v342 = v7;
    v343 = v335;
    ExFreePoolWithTag(P, 0);
    v8 = v343;
    if ( Acl < 0 )
    {
LABEL_447:
      v10 = 0LL;
      goto LABEL_541;
    }
    v310 = *v9;
    puResult[0] = 4;
    v359 = 0;
    v313 = RtlUIntAdd(4u, v310, puResult);
    if ( v313 < 0
      || (v313 = RtlUIntAdd(puResult[0], v311, puResult), v313 < 0)
      || (v313 = RtlUIntAdd(puResult[0], v9[4], puResult), v313 < 0)
      || (v313 = RtlUIntAdd(puResult[0], 4u, puResult), v313 < 0)
      || (v313 = RtlUIntAdd(puResult[0], v9[8], puResult), v313 < 0) )
    {
      v336 = v312;
    }
    else
    {
      v359 = puResult[0];
      if ( !puResult[0] )
      {
        v10 = 0LL;
        Acl = -1073741762;
        v8 = v312;
        v7 = v314;
        goto LABEL_541;
      }
      v315 = (_DWORD *)ExAllocatePool2(256LL, puResult[0], 542329939LL);
      if ( !v315 )
      {
        v8 = v343;
        Acl = -1073741801;
        v7 = v342;
        v10 = 0LL;
        goto LABEL_541;
      }
      *v315 = *v9;
      pullResult = (ULONGLONG)v315;
      v316 = RtlULongLongAdd((ULONGLONG)v315, 4uLL, &pullResult);
      v7 = v342;
      v313 = v316;
      v317 = v315;
      v336 = v343;
      if ( v316 >= 0 )
      {
        memmove((void *)pullResult, *((const void **)v9 + 1), (unsigned int)*v9);
        v313 = RtlULongLongAdd(pullResult, (unsigned int)*v9, &pullResult);
        v336 = v343;
        v317 = v315;
        if ( v313 >= 0 )
        {
          v318 = pullResult;
          *(_DWORD *)pullResult = v9[4];
          v319 = RtlULongLongAdd(v318, 4uLL, &pullResult);
          v336 = v320;
          v313 = v319;
          v317 = v315;
          if ( v319 >= 0 )
          {
            memmove((void *)pullResult, *((const void **)v9 + 3), (unsigned int)v9[4]);
            v313 = RtlULongLongAdd(pullResult, (unsigned int)v9[4], &pullResult);
            v336 = v343;
            v317 = v315;
            if ( v313 >= 0 )
            {
              v321 = pullResult;
              *(_DWORD *)pullResult = v9[8];
              v322 = RtlULongLongAdd(v321, 4uLL, &pullResult);
              v336 = v323;
              v313 = v322;
              v317 = v315;
              if ( v322 >= 0 )
              {
                memmove((void *)pullResult, *((const void **)v9 + 5), (unsigned int)v9[8]);
                Acl = RtlULongLongAdd(pullResult, (unsigned int)v9[8], &pullResult);
                v336 = v343;
                v313 = Acl;
                v317 = v315;
                if ( Acl >= 0 )
                {
                  v324 = v359;
                  v8 = v343;
                  goto LABEL_527;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v317, 0);
    }
    Acl = v313;
    v153 = v313 < 0;
    v8 = v336;
    if ( v153 )
      goto LABEL_447;
    v315 = 0LL;
    v324 = 0;
LABEL_527:
    *v370 = v315;
    v10 = 0LL;
    *v371 = v324;
    goto LABEL_541;
  }
  if ( v11 )
  {
    v325 = (void *)*((_QWORD *)v11 + 1);
    if ( v325 )
    {
      ExFreePoolWithTag(v325, 0);
      *((_QWORD *)v11 + 1) = 0LL;
    }
    v326 = (void *)*((_QWORD *)v11 + 3);
    if ( v326 )
    {
      ExFreePoolWithTag(v326, 0);
      *((_QWORD *)v11 + 3) = 0LL;
    }
    v327 = (void *)*((_QWORD *)v11 + 5);
    if ( v327 )
    {
      ExFreePoolWithTag(v327, 0);
      *((_QWORD *)v11 + 5) = 0LL;
    }
    ExFreePoolWithTag(v11, 0);
  }
  v8 = 0LL;
  v10 = 0LL;
LABEL_541:
  ullAugend[0] = 0LL;
  if ( ullAugend[1] )
  {
    ExFreePoolWithTag((PVOID)ullAugend[1], 0);
    ullAugend[1] = 0LL;
  }
  *(_QWORD *)v340 = 0LL;
  if ( *(_QWORD *)&v340[2] )
  {
    ExFreePoolWithTag(*(PVOID *)&v340[2], 0);
    *(_QWORD *)&v340[2] = 0LL;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v6 )
  {
    v328 = (void *)*((_QWORD *)v6 + 1);
    if ( v328 )
    {
      ExFreePoolWithTag(v328, 0);
      *((_QWORD *)v6 + 1) = 0LL;
    }
    v329 = (void *)*((_QWORD *)v6 + 3);
    if ( v329 )
    {
      ExFreePoolWithTag(v329, 0);
      *((_QWORD *)v6 + 3) = 0LL;
    }
    v330 = (void *)*((_QWORD *)v6 + 5);
    if ( v330 )
    {
      ExFreePoolWithTag(v330, 0);
      *((_QWORD *)v6 + 5) = 0LL;
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v9 )
  {
    v331 = (void *)*((_QWORD *)v9 + 1);
    if ( v331 )
    {
      ExFreePoolWithTag(v331, 0);
      *((_QWORD *)v9 + 1) = 0LL;
    }
    v332 = (void *)*((_QWORD *)v9 + 3);
    if ( v332 )
    {
      ExFreePoolWithTag(v332, 0);
      *((_QWORD *)v9 + 3) = 0LL;
    }
    v333 = (void *)*((_QWORD *)v9 + 5);
    if ( v333 )
    {
      ExFreePoolWithTag(v333, 0);
      *((_QWORD *)v9 + 5) = 0LL;
    }
    ExFreePoolWithTag(v9, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)Acl;
}
