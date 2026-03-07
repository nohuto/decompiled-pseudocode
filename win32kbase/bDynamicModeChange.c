__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // r13d
  struct tagSIZE *v11; // rax
  struct tagSIZE v12; // rdi
  struct tagSIZE *v13; // rax
  struct SURFACE *v14; // r9
  struct SURFACE *v15; // rcx
  struct tagSIZE v16; // rbx
  __int64 cy; // rdx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  struct SURFACE *v19; // r12
  __int64 v20; // rcx
  struct SURFACE *v21; // r15
  DC *v22; // r13
  struct SURFACE *v23; // rax
  int v24; // edx
  unsigned int v25; // edx
  __int64 v26; // rax
  HDEV v27; // r12
  struct SURFACE *v28; // rdi
  __int64 v29; // rcx
  struct SURFACE *v30; // r13
  SURFACE *v31; // rbx
  HDEV v32; // rax
  int v33; // eax
  HDEV v34; // rdx
  int v35; // eax
  unsigned int v36; // ebx
  int *v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // ecx
  int v42; // eax
  HDEV v43; // rax
  HDEV v44; // rdx
  __int64 v45; // r8
  _OWORD *v46; // rcx
  __int64 v47; // r9
  HDEV v48; // rax
  __int128 v49; // xmm1
  __int64 v50; // r9
  HDEV v51; // rcx
  HDEV v52; // rax
  __int128 v53; // xmm1
  _OWORD *v54; // rax
  __int64 v55; // rdx
  __int128 v56; // xmm1
  __int64 v57; // r9
  HDEV v58; // rax
  HDEV v59; // rdx
  _OWORD *v60; // rcx
  __int128 v61; // xmm1
  __int64 v62; // r9
  __int128 v63; // xmm1
  HDEV v64; // rdx
  HDEV v65; // rcx
  __int128 v66; // xmm1
  _OWORD *v67; // rax
  __int128 v68; // xmm1
  HDEV v69; // r10
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  signed __int32 v77; // ett
  signed __int32 v78; // ett
  __int64 v79; // r8
  _OWORD *v80; // rcx
  __int64 v81; // r9
  HDEV v82; // rax
  HDEV v83; // rdx
  __int128 v84; // xmm1
  __int64 v85; // r9
  __int128 v86; // xmm1
  HDEV v87; // rdx
  HDEV v88; // rcx
  __int128 v89; // xmm1
  _OWORD *v90; // rax
  __int128 v91; // xmm1
  char v93; // al
  HDEV v94; // r8
  HDEV v95; // rdx
  HDEV v96; // rcx
  HDEV *v97; // rcx
  int v98; // r8d
  volatile unsigned int *v99; // r10
  int v100; // r11d
  int v101; // r8d
  volatile unsigned int *v102; // r10
  int v103; // r11d
  int v104; // r8d
  volatile unsigned int *v105; // r10
  int v106; // r11d
  int v107; // r8d
  volatile unsigned int *v108; // r10
  int v109; // r11d
  int v110; // r8d
  volatile unsigned int *v111; // r10
  int v112; // r11d
  int v113; // r8d
  volatile unsigned int *v114; // r10
  int v115; // r11d
  int v116; // r8d
  volatile unsigned int *v117; // r10
  int v118; // r11d
  int v119; // [rsp+48h] [rbp-69h]
  int v120; // [rsp+4Ch] [rbp-65h]
  __int64 v121; // [rsp+50h] [rbp-61h]
  HDEV v122; // [rsp+58h] [rbp-59h] BYREF
  HDEV v123; // [rsp+60h] [rbp-51h] BYREF
  __int64 v124; // [rsp+68h] [rbp-49h]
  int v125; // [rsp+70h] [rbp-41h]
  int v126; // [rsp+74h] [rbp-3Dh]
  struct SURFACE *v127; // [rsp+78h] [rbp-39h]
  __int64 v128; // [rsp+80h] [rbp-31h]
  struct tagSIZE v129; // [rsp+88h] [rbp-29h]
  DC *v130; // [rsp+90h] [rbp-21h] BYREF
  struct SURFACE *v131; // [rsp+98h] [rbp-19h]
  SURFACE *v132; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v133; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v134; // [rsp+B0h] [rbp-1h]
  __int64 v135; // [rsp+B8h] [rbp+7h]
  struct tagSIZE v136; // [rsp+C0h] [rbp+Fh]
  __int64 v137; // [rsp+C8h] [rbp+17h]
  unsigned int v138; // [rsp+130h] [rbp+7Fh]
  unsigned int v139; // [rsp+130h] [rbp+7Fh]

  v132 = 0LL;
  v6 = 0;
  v130 = 0LL;
  v133 = 0LL;
  v124 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( !(unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
    return v6;
  v137 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, 0x888uLL, 0x706D7447u);
  v7 = (_QWORD *)v137;
  if ( !v137 )
    return v6;
  v8 = (_DWORD)a2[10] & 0x400;
  v122 = a1;
  v125 = v8;
  v9 = (_DWORD)a1[10] & 0x400;
  v123 = a2;
  v126 = v9;
  if ( qword_1C02D5C68 )
  {
    if ( (int)qword_1C02D5C68() >= 0 )
    {
      if ( qword_1C02D5C70 )
      {
        qword_1C02D5C70(a2);
        if ( qword_1C02D5C70 )
          qword_1C02D5C70(a1);
      }
    }
  }
  v10 = 1;
  v120 = *((_DWORD *)a2 + 532) * *((_DWORD *)a2 + 533);
  v119 = *((_DWORD *)a1 + 532) * *((_DWORD *)a1 + 533);
  if ( !(unsigned int)bDynamicProcessAllDriverRealizations(a2, 0LL, 1LL)
    || !(unsigned int)bDynamicProcessAllDriverRealizations(a1, a2, a3) )
  {
    goto LABEL_94;
  }
  v11 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v122);
  v131 = (struct SURFACE *)*((_QWORD *)a1 + 316);
  v12 = *v11;
  v134 = *((_QWORD *)a1 + 222);
  v128 = *((_QWORD *)a1 + 221);
  v129 = v12;
  v13 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v123);
  v15 = (struct SURFACE *)*((_QWORD *)a2 + 316);
  v127 = v15;
  v16 = *v13;
  v135 = *((_QWORD *)a2 + 222);
  v121 = *((_QWORD *)a2 + 221);
  v136 = v16;
  if ( v16.cx < v12.cx || (cy = (unsigned int)v129.cy, v16.cy < v129.cy) )
  {
    v93 = bDynamicIntersectVisRect(v14, v16);
    v15 = v127;
    cy = (unsigned int)v129.cy;
    v10 = v93 & 1;
  }
  if ( v12.cx < v16.cx || (int)cy < v136.cy )
    v10 &= bDynamicIntersectVisRect(v15, v12);
  v18 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)a2 + 340);
  if ( v18
    && v18 == *((__int64 (__fastcall **)(__int64, __int64))a1 + 340)
    && *((_QWORD *)a2 + 220) == *((_QWORD *)a1 + 220) )
  {
    if ( !v10 )
      goto LABEL_98;
    v10 = v18(v128, v121);
  }
  if ( !v10 )
  {
LABEL_98:
    v6 = 0;
    goto LABEL_94;
  }
  v19 = v127;
  v20 = 0LL;
  v21 = v131;
  while ( 1 )
  {
    LOBYTE(cy) = 1;
    v138 = HmgSafeNextObjt(v20, cy, &v130);
    v20 = v138;
    if ( !v138 )
      break;
    v22 = v130;
    if ( (*((_DWORD *)v130 + 9) & 0x2000) == 0 )
    {
      v23 = (struct SURFACE *)*((_QWORD *)v130 + 62);
      if ( v23 == v21 )
      {
        DC::pSurface(v130, v19);
        *((struct tagSIZE *)v22 + 64) = v16;
LABEL_28:
        *((_DWORD *)v22 + 79) |= 0xFu;
        goto LABEL_21;
      }
      if ( v23 == v19 )
      {
        DC::pSurface(v130, v21);
        *((struct tagSIZE *)v22 + 64) = v12;
        goto LABEL_28;
      }
LABEL_21:
      v24 = *((_DWORD *)v22 + 9);
      if ( (v24 & 0x200) != 0 && _bittest((const signed __int32 *)(*((_QWORD *)v22 + 62) + 112LL), 9u) )
        v25 = v24 | 0x8000;
      else
        v25 = v24 & 0xFFFF7FFF;
      v20 = v138;
      *((_DWORD *)v22 + 9) = v25;
      v26 = *((_QWORD *)v22 + 3);
      cy = v128;
      if ( v26 == v128 )
      {
        *((_QWORD *)v22 + 3) = v121;
        *(_DWORD *)((struct HDEV__ *)v22 + 18) = a2[448];
        *(_DWORD *)((struct HDEV__ *)v22 + 19) = a2[524];
      }
      else if ( v26 == v121 )
      {
        *((_QWORD *)v22 + 3) = v128;
        *(_DWORD *)((struct HDEV__ *)v22 + 18) = a1[448];
        *(_DWORD *)((struct HDEV__ *)v22 + 19) = a1[524];
      }
    }
  }
  v7 = (_QWORD *)v137;
  v27 = a1 + 10;
  v28 = v127;
  v29 = 0LL;
  v30 = v131;
  while ( 1 )
  {
    LOBYTE(cy) = 5;
    v139 = HmgSafeNextObjt(v29, cy, &v132);
    v29 = v139;
    if ( !v139 )
      break;
    v31 = v132;
    v32 = (HDEV)*((_QWORD *)v132 + 6);
    if ( v32 == a1 )
    {
      v35 = *((_DWORD *)v132 + 28);
      if ( (v35 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v132 + 29) & 0x2001) == 0x2001 )
        {
          WdLogSingleEntry0(1LL);
          SURFACE::hdev(v31, a2);
          v29 = v139;
        }
        if ( v119 != v120 && *((_DWORD *)v31 + 24) == *((_DWORD *)v30 + 24) )
        {
          v94 = a2;
          v95 = a1;
LABEL_115:
          vDynamicSwitchPalettes(v31, (struct PDEV *)v95, (struct PDEV *)v94);
LABEL_44:
          v29 = v139;
        }
      }
      else if ( (v35 & 0x300000) == 0x200000 )
      {
        v34 = a2;
        goto LABEL_43;
      }
    }
    else if ( v32 == a2 )
    {
      v33 = *((_DWORD *)v132 + 28);
      if ( (v33 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v132 + 29) & 0x2001) == 0x2001 )
        {
          SURFACE::hdev(v132, a1);
          v29 = v139;
        }
        if ( v119 != v120 && *((_DWORD *)v31 + 24) == *((_DWORD *)v28 + 24) )
        {
          v94 = a1;
          v95 = a2;
          goto LABEL_115;
        }
      }
      else if ( (v33 & 0x300000) == 0x200000 )
      {
        v34 = a1;
LABEL_43:
        SURFACE::hdev(v132, v34);
        goto LABEL_44;
      }
    }
  }
  v36 = 0;
  while ( 1 )
  {
    LOBYTE(cy) = 28;
    v36 = HmgSafeNextObjt(v36, cy, &v133);
    if ( !v36 )
      break;
    v96 = *(HDEV *)(v133 + 40);
    if ( v96 == a1 )
    {
      *(_QWORD *)(v133 + 40) = a2;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v123);
      v97 = &v122;
      goto LABEL_120;
    }
    if ( v96 == a2 )
    {
      *(_QWORD *)(v133 + 40) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v122);
      v97 = &v123;
LABEL_120:
      PDEVOBJ::vUnreferencePdev((struct PDEV **)v97);
    }
  }
  vChangeWndObjs(v30, a1, v28, a2);
  v37 = (int *)HmgShareLockEx(*(_QWORD *)(v124 + 224), 16, 0);
  v7[122] = v7 + 68;
  *((_DWORD *)v7 + 182) = 0;
  *(_DWORD *)(v7[122] + 176LL) = 0xFFFFFF;
  v38 = v7[122];
  *((_DWORD *)v7 + 30) = 0;
  *(_QWORD *)(v38 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush((int *)a1 + 384, (__int64)v7, (__int64)v37, *(_QWORD *)(v124 + 6000), v135, (__int64)v28, 1u);
  EBRUSHOBJ::vInitBrush((int *)a2 + 384, (__int64)v7, (__int64)v37, *(_QWORD *)(v124 + 6000), v134, (__int64)v30, 1u);
  HmgDecrementShareReferenceCountEx(v37, 0LL);
  v39 = v128;
  *((_QWORD *)a2 + 222) = v134;
  v40 = v135;
  *((_QWORD *)a2 + 316) = v30;
  *((_QWORD *)a2 + 221) = v39;
  *((_QWORD *)a1 + 222) = v40;
  *((_QWORD *)a1 + 221) = v121;
  *((_QWORD *)a1 + 316) = v28;
  v41 = *((_DWORD *)v30 + 28);
  v42 = *((_DWORD *)v28 + 28);
  if ( (v41 & 0x10000000) != 0 )
  {
    *((_DWORD *)v28 + 28) = v42 | 0x10000000;
    if ( a1 != (HDEV)-80LL && (((_DWORD)a1[43] & 0x10000000) != 0 || ((_DWORD)a1[45] & 0x10000000) != 0) )
    {
      v43 = a2 + 20;
LABEL_51:
      if ( v43 )
      {
        *((_DWORD *)v43 + 23) |= 0x10000000u;
        *((_DWORD *)v43 + 25) |= 0x10000000u;
      }
    }
  }
  else if ( (v42 & 0x10000000) != 0 )
  {
    *((_DWORD *)v30 + 28) = v41 | 0x10000000;
    if ( a2 != (HDEV)-80LL && (((_DWORD)a2[43] & 0x10000000) != 0 || ((_DWORD)a2[45] & 0x10000000) != 0) )
    {
      v43 = a1 + 20;
      goto LABEL_51;
    }
  }
  v44 = a2 + 448;
  *v7 = *((_QWORD *)a2 + 220);
  v45 = 2LL;
  v46 = v7;
  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
  v47 = 2LL;
  *((_QWORD *)a1 + 220) = *v7;
  v48 = a2 + 448;
  do
  {
    *v46 = *(_OWORD *)v48;
    v46[1] = *((_OWORD *)v48 + 1);
    v46[2] = *((_OWORD *)v48 + 2);
    v46[3] = *((_OWORD *)v48 + 3);
    v46[4] = *((_OWORD *)v48 + 4);
    v46[5] = *((_OWORD *)v48 + 5);
    v46[6] = *((_OWORD *)v48 + 6);
    v46 += 8;
    v49 = *((_OWORD *)v48 + 7);
    v48 += 32;
    *(v46 - 1) = v49;
    --v47;
  }
  while ( v47 );
  v50 = 2LL;
  *v46 = *(_OWORD *)v48;
  v46[1] = *((_OWORD *)v48 + 1);
  v46[2] = *((_OWORD *)v48 + 2);
  *((_QWORD *)v46 + 6) = *((_QWORD *)v48 + 6);
  v51 = a1 + 448;
  v52 = a1 + 448;
  do
  {
    *(_OWORD *)v44 = *(_OWORD *)v52;
    *((_OWORD *)v44 + 1) = *((_OWORD *)v52 + 1);
    *((_OWORD *)v44 + 2) = *((_OWORD *)v52 + 2);
    *((_OWORD *)v44 + 3) = *((_OWORD *)v52 + 3);
    *((_OWORD *)v44 + 4) = *((_OWORD *)v52 + 4);
    *((_OWORD *)v44 + 5) = *((_OWORD *)v52 + 5);
    *((_OWORD *)v44 + 6) = *((_OWORD *)v52 + 6);
    v44 += 32;
    v53 = *((_OWORD *)v52 + 7);
    v52 += 32;
    *((_OWORD *)v44 - 1) = v53;
    --v50;
  }
  while ( v50 );
  *(_OWORD *)v44 = *(_OWORD *)v52;
  *((_OWORD *)v44 + 1) = *((_OWORD *)v52 + 1);
  *((_OWORD *)v44 + 2) = *((_OWORD *)v52 + 2);
  *((_QWORD *)v44 + 6) = *((_QWORD *)v52 + 6);
  v54 = v7;
  v55 = 2LL;
  do
  {
    *(_OWORD *)v51 = *v54;
    *((_OWORD *)v51 + 1) = v54[1];
    *((_OWORD *)v51 + 2) = v54[2];
    *((_OWORD *)v51 + 3) = v54[3];
    *((_OWORD *)v51 + 4) = v54[4];
    *((_OWORD *)v51 + 5) = v54[5];
    *((_OWORD *)v51 + 6) = v54[6];
    v51 += 32;
    v56 = v54[7];
    v54 += 8;
    *((_OWORD *)v51 - 1) = v56;
    --v55;
  }
  while ( v55 );
  v57 = 2LL;
  *(_OWORD *)v51 = *v54;
  *((_OWORD *)v51 + 1) = v54[1];
  *((_OWORD *)v51 + 2) = v54[2];
  *((_QWORD *)v51 + 6) = *((_QWORD *)v54 + 6);
  v58 = a2 + 526;
  v59 = a2 + 526;
  v60 = v7;
  do
  {
    *v60 = *(_OWORD *)v59;
    v60[1] = *((_OWORD *)v59 + 1);
    v60[2] = *((_OWORD *)v59 + 2);
    v60[3] = *((_OWORD *)v59 + 3);
    v60[4] = *((_OWORD *)v59 + 4);
    v60[5] = *((_OWORD *)v59 + 5);
    v60[6] = *((_OWORD *)v59 + 6);
    v60 += 8;
    v61 = *((_OWORD *)v59 + 7);
    v59 += 32;
    *(v60 - 1) = v61;
    --v57;
  }
  while ( v57 );
  v62 = 2LL;
  *v60 = *(_OWORD *)v59;
  v60[1] = *((_OWORD *)v59 + 1);
  v60[2] = *((_OWORD *)v59 + 2);
  v63 = *((_OWORD *)v59 + 3);
  v64 = a1 + 526;
  v60[3] = v63;
  v65 = a1 + 526;
  do
  {
    *(_OWORD *)v58 = *(_OWORD *)v65;
    *((_OWORD *)v58 + 1) = *((_OWORD *)v65 + 1);
    *((_OWORD *)v58 + 2) = *((_OWORD *)v65 + 2);
    *((_OWORD *)v58 + 3) = *((_OWORD *)v65 + 3);
    *((_OWORD *)v58 + 4) = *((_OWORD *)v65 + 4);
    *((_OWORD *)v58 + 5) = *((_OWORD *)v65 + 5);
    *((_OWORD *)v58 + 6) = *((_OWORD *)v65 + 6);
    v58 += 32;
    v66 = *((_OWORD *)v65 + 7);
    v65 += 32;
    *((_OWORD *)v58 - 1) = v66;
    --v62;
  }
  while ( v62 );
  *(_OWORD *)v58 = *(_OWORD *)v65;
  *((_OWORD *)v58 + 1) = *((_OWORD *)v65 + 1);
  *((_OWORD *)v58 + 2) = *((_OWORD *)v65 + 2);
  *((_OWORD *)v58 + 3) = *((_OWORD *)v65 + 3);
  v67 = v7;
  do
  {
    *(_OWORD *)v64 = *v67;
    *((_OWORD *)v64 + 1) = v67[1];
    *((_OWORD *)v64 + 2) = v67[2];
    *((_OWORD *)v64 + 3) = v67[3];
    *((_OWORD *)v64 + 4) = v67[4];
    *((_OWORD *)v64 + 5) = v67[5];
    *((_OWORD *)v64 + 6) = v67[6];
    v64 += 32;
    v68 = v67[7];
    v67 += 8;
    *((_OWORD *)v64 - 1) = v68;
    --v45;
  }
  while ( v45 );
  *(_OWORD *)v64 = *v67;
  *((_OWORD *)v64 + 1) = v67[1];
  *((_OWORD *)v64 + 2) = v67[2];
  *((_OWORD *)v64 + 3) = v67[3];
  *(_OWORD *)v7 = *(_OWORD *)(a2 + 606);
  *((_OWORD *)v7 + 1) = *(_OWORD *)(a2 + 610);
  *((_OWORD *)v7 + 2) = *(_OWORD *)(a2 + 614);
  *((_OWORD *)v7 + 3) = *(_OWORD *)(a2 + 618);
  *((_OWORD *)v7 + 4) = *(_OWORD *)(a2 + 622);
  *((_OWORD *)v7 + 5) = *(_OWORD *)(a2 + 626);
  *(_OWORD *)(a2 + 606) = *(_OWORD *)(a1 + 606);
  *(_OWORD *)(a2 + 610) = *(_OWORD *)(a1 + 610);
  *(_OWORD *)(a2 + 614) = *(_OWORD *)(a1 + 614);
  *(_OWORD *)(a2 + 618) = *(_OWORD *)(a1 + 618);
  *(_OWORD *)(a2 + 622) = *(_OWORD *)(a1 + 622);
  *(_OWORD *)(a2 + 626) = *(_OWORD *)(a1 + 626);
  *(_OWORD *)(a1 + 606) = *(_OWORD *)v7;
  *(_OWORD *)(a1 + 610) = *((_OWORD *)v7 + 1);
  *(_OWORD *)(a1 + 614) = *((_OWORD *)v7 + 2);
  *(_OWORD *)(a1 + 618) = *((_OWORD *)v7 + 3);
  *(_OWORD *)(a1 + 622) = *((_OWORD *)v7 + 4);
  *(_OWORD *)(a1 + 626) = *((_OWORD *)v7 + 5);
  *v7 = *((_QWORD *)a2 + 317);
  *((_QWORD *)a2 + 317) = *((_QWORD *)a1 + 317);
  *((_QWORD *)a1 + 317) = *v7;
  *v7 = *((_QWORD *)a2 + 318);
  *((_QWORD *)a2 + 318) = *((_QWORD *)a1 + 318);
  *((_QWORD *)a1 + 318) = *v7;
  *v7 = *((_QWORD *)a2 + 319);
  *((_QWORD *)a2 + 319) = *((_QWORD *)a1 + 319);
  *((_QWORD *)a1 + 319) = *v7;
  *v7 = *((_QWORD *)a2 + 320);
  *((_QWORD *)a2 + 320) = *((_QWORD *)a1 + 320);
  *((_QWORD *)a1 + 320) = *v7;
  *v7 = *((_QWORD *)a2 + 321);
  *((_QWORD *)a2 + 321) = *((_QWORD *)a1 + 321);
  *((_QWORD *)a1 + 321) = *v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[888];
  a2[888] = a1[888];
  *(_DWORD *)(a1 + 888) = *(_DWORD *)(HDEV)v7;
  *v7 = *((_QWORD *)a2 + 322);
  v69 = a2 + 10;
  *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
  *((_QWORD *)a1 + 322) = *v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[646];
  a2[646] = a1[646];
  *(_DWORD *)(a1 + 646) = *(_DWORD *)(HDEV)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[647];
  a2[647] = a1[647];
  *(_DWORD *)(a1 + 647) = *(_DWORD *)(HDEV)v7;
  v70 = (_DWORD)a2[10] & 0x20000;
  if ( (*(_DWORD *)v27 & 0x20000) != v70 )
  {
    SETFLAG(v70, (volatile unsigned int *)a1 + 10, 0x20000);
    SETFLAG(v100, v99, v98);
  }
  v71 = *(_DWORD *)v69 & 0x1000000;
  if ( (*(_DWORD *)v27 & 0x1000000) != v71 )
  {
    SETFLAG(v71, (volatile unsigned int *)a1 + 10, 0x1000000);
    SETFLAG(v103, v102, v101);
  }
  v72 = *(_DWORD *)v69 & 0x20000000;
  if ( (*(_DWORD *)v27 & 0x20000000) != v72 )
  {
    SETFLAG(v72, (volatile unsigned int *)a1 + 10, 0x20000000);
    SETFLAG(v106, v105, v104);
  }
  v73 = *(_DWORD *)v69 & 0x2000000;
  if ( (*(_DWORD *)v27 & 0x2000000) != v73 )
  {
    SETFLAG(v73, (volatile unsigned int *)a1 + 10, 0x2000000);
    SETFLAG(v109, v108, v107);
  }
  v74 = *(_DWORD *)v69 & 0x8000000;
  if ( (*(_DWORD *)v27 & 0x8000000) != v74 )
  {
    SETFLAG(v74, (volatile unsigned int *)a1 + 10, 0x8000000);
    SETFLAG(v112, v111, v110);
  }
  v75 = *(_DWORD *)v69 & 0x4000000;
  if ( (*(_DWORD *)v27 & 0x4000000) != v75 )
  {
    SETFLAG(v75, (volatile unsigned int *)a1 + 10, 0x4000000);
    SETFLAG(v115, v114, v113);
  }
  v76 = *(_DWORD *)v69 & 0x40000000;
  if ( (*(_DWORD *)v27 & 0x40000000) != v76 )
  {
    SETFLAG(v76, (volatile unsigned int *)a1 + 10, 0x40000000);
    SETFLAG(v118, v117, v116);
  }
  _m_prefetchw(v27);
  do
    v77 = *(_DWORD *)v27;
  while ( v77 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v27,
                   *(_DWORD *)v27 & 0xEFFFFFFF,
                   *(_DWORD *)v27) );
  _m_prefetchw(v69);
  do
    v78 = *(_DWORD *)v69;
  while ( v78 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v69,
                   *(_DWORD *)v69 & 0xEFFFFFFF,
                   *(_DWORD *)v69) );
  *((_QWORD *)a1 + 4) = 0LL;
  v79 = 6LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v80 = v7;
  v81 = 6LL;
  *v7 = *((_QWORD *)a2 + 211);
  *((_QWORD *)a2 + 211) = *((_QWORD *)a1 + 211);
  *((_QWORD *)a1 + 211) = *v7;
  *(_OWORD *)v7 = *(_OWORD *)(a2 + 362);
  *((_OWORD *)v7 + 1) = *(_OWORD *)(a2 + 366);
  *((_OWORD *)v7 + 2) = *(_OWORD *)(a2 + 370);
  *(_OWORD *)(a2 + 362) = *(_OWORD *)(a1 + 362);
  *(_OWORD *)(a2 + 366) = *(_OWORD *)(a1 + 366);
  *(_OWORD *)(a2 + 370) = *(_OWORD *)(a1 + 370);
  *(_OWORD *)(a1 + 362) = *(_OWORD *)v7;
  *(_OWORD *)(a1 + 366) = *((_OWORD *)v7 + 1);
  *(_OWORD *)(a1 + 370) = *((_OWORD *)v7 + 2);
  *v7 = *((_QWORD *)a2 + 178);
  *((_QWORD *)a2 + 178) = *((_QWORD *)a1 + 178);
  *((_QWORD *)a1 + 178) = *v7;
  *v7 = *((_QWORD *)a2 + 179);
  *((_QWORD *)a2 + 179) = *((_QWORD *)a1 + 179);
  *((_QWORD *)a1 + 179) = *v7;
  *v7 = *((_QWORD *)a2 + 180);
  *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
  *((_QWORD *)a1 + 180) = *v7;
  v82 = a2 + 666;
  v83 = a2 + 666;
  do
  {
    *v80 = *(_OWORD *)v83;
    v80[1] = *((_OWORD *)v83 + 1);
    v80[2] = *((_OWORD *)v83 + 2);
    v80[3] = *((_OWORD *)v83 + 3);
    v80[4] = *((_OWORD *)v83 + 4);
    v80[5] = *((_OWORD *)v83 + 5);
    v80[6] = *((_OWORD *)v83 + 6);
    v80 += 8;
    v84 = *((_OWORD *)v83 + 7);
    v83 += 32;
    *(v80 - 1) = v84;
    --v81;
  }
  while ( v81 );
  v85 = 6LL;
  *v80 = *(_OWORD *)v83;
  v80[1] = *((_OWORD *)v83 + 1);
  v80[2] = *((_OWORD *)v83 + 2);
  v86 = *((_OWORD *)v83 + 3);
  v87 = a1 + 666;
  v80[3] = v86;
  v88 = a1 + 666;
  do
  {
    *(_OWORD *)v82 = *(_OWORD *)v88;
    *((_OWORD *)v82 + 1) = *((_OWORD *)v88 + 1);
    *((_OWORD *)v82 + 2) = *((_OWORD *)v88 + 2);
    *((_OWORD *)v82 + 3) = *((_OWORD *)v88 + 3);
    *((_OWORD *)v82 + 4) = *((_OWORD *)v88 + 4);
    *((_OWORD *)v82 + 5) = *((_OWORD *)v88 + 5);
    *((_OWORD *)v82 + 6) = *((_OWORD *)v88 + 6);
    v82 += 32;
    v89 = *((_OWORD *)v88 + 7);
    v88 += 32;
    *((_OWORD *)v82 - 1) = v89;
    --v85;
  }
  while ( v85 );
  *(_OWORD *)v82 = *(_OWORD *)v88;
  *((_OWORD *)v82 + 1) = *((_OWORD *)v88 + 1);
  *((_OWORD *)v82 + 2) = *((_OWORD *)v88 + 2);
  *((_OWORD *)v82 + 3) = *((_OWORD *)v88 + 3);
  v90 = v7;
  do
  {
    *(_OWORD *)v87 = *v90;
    *((_OWORD *)v87 + 1) = v90[1];
    *((_OWORD *)v87 + 2) = v90[2];
    *((_OWORD *)v87 + 3) = v90[3];
    *((_OWORD *)v87 + 4) = v90[4];
    *((_OWORD *)v87 + 5) = v90[5];
    *((_OWORD *)v87 + 6) = v90[6];
    v87 += 32;
    v91 = v90[7];
    v90 += 8;
    *((_OWORD *)v87 - 1) = v91;
    --v79;
  }
  while ( v79 );
  *(_OWORD *)v87 = *v90;
  *((_OWORD *)v87 + 1) = v90[1];
  *((_OWORD *)v87 + 2) = v90[2];
  *((_OWORD *)v87 + 3) = v90[3];
  *v7 = *((_QWORD *)a2 + 212);
  *((_QWORD *)a2 + 212) = *((_QWORD *)a1 + 212);
  *((_QWORD *)a1 + 212) = *v7;
  *v7 = *((_QWORD *)a2 + 213);
  *((_QWORD *)a2 + 213) = *((_QWORD *)a1 + 213);
  *((_QWORD *)a1 + 213) = *v7;
  *v7 = *((_QWORD *)a2 + 215);
  *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 215);
  *((_QWORD *)a1 + 215) = *v7;
  *v7 = *((_QWORD *)a2 + 216);
  *((_QWORD *)a2 + 216) = *((_QWORD *)a1 + 216);
  *((_QWORD *)a1 + 216) = *v7;
  *v7 = *((_QWORD *)a2 + 217);
  *((_QWORD *)a2 + 217) = *((_QWORD *)a1 + 217);
  *((_QWORD *)a1 + 217) = *v7;
  *v7 = *((_QWORD *)a2 + 218);
  *((_QWORD *)a2 + 218) = *((_QWORD *)a1 + 218);
  *((_QWORD *)a1 + 218) = *v7;
  *v7 = *((_QWORD *)a2 + 328);
  *((_QWORD *)a2 + 328) = *((_QWORD *)a1 + 328);
  *((_QWORD *)a1 + 328) = *v7;
  *v7 = *((_QWORD *)a2 + 329);
  *((_QWORD *)a2 + 329) = *((_QWORD *)a1 + 329);
  *((_QWORD *)a1 + 329) = *v7;
  *v7 = *((_QWORD *)a2 + 331);
  *((_QWORD *)a2 + 331) = *((_QWORD *)a1 + 331);
  *((_QWORD *)a1 + 331) = *v7;
  *v7 = *((_QWORD *)a2 + 332);
  *((_QWORD *)a2 + 332) = *((_QWORD *)a1 + 332);
  *((_QWORD *)a1 + 332) = *v7;
  *v7 = *((_QWORD *)a2 + 330);
  *((_QWORD *)a2 + 330) = *((_QWORD *)a1 + 330);
  *((_QWORD *)a1 + 330) = *v7;
  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 334))(*((_QWORD *)a2 + 221), a2);
  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 334))(*((_QWORD *)a1 + 221), a1);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v122, v125);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v123, v126);
  vResetSurfacePalette(a1);
  vResetSurfacePalette(a2);
  if ( qword_1C02D5C78 && (int)qword_1C02D5C78() >= 0 && qword_1C02D5C80 )
    qword_1C02D5C80(a1, a2);
  v6 = 1;
  ++*(_DWORD *)(v124 + 3816);
LABEL_94:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v7);
  if ( qword_1C02D5948 )
  {
    qword_1C02D5948(a2);
    if ( qword_1C02D5948 )
      qword_1C02D5948(a1);
  }
  return v6;
}
