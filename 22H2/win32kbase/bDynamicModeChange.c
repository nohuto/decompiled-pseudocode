/*
 * XREFs of bDynamicModeChange @ 0x1C00C75B0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00182FC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00183CC (-SETFLAG@@YAXHAECKK@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C0035B30 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C0040210 (-hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C005FD78 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgShareLock @ 0x1C00622A0 (HmgShareLock.c)
 *     vEnableSynchronize @ 0x1C0064088 (vEnableSynchronize.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0088CC0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     PALLOCNOZ @ 0x1C008AF78 (PALLOCNOZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0097060 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00AAD9C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     vDisableSynchronize @ 0x1C00BBBC0 (vDisableSynchronize.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C1054 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00C2A5C (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00C32F8 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00D29DC (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00D2A30 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016C2E0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016C3DC (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, int a3)
{
  unsigned int v6; // r15d
  __int64 v7; // r12
  int v8; // eax
  HDEV v9; // r13
  struct tagSIZE *v10; // rax
  struct tagSIZE v11; // rdi
  struct tagSIZE *v12; // rax
  int v13; // r9d
  struct SURFACE *v14; // r10
  struct SURFACE *v15; // rcx
  struct tagSIZE v16; // rbx
  int cy; // edx
  char v18; // al
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  unsigned int v20; // r9d
  DC *v21; // r13
  struct SURFACE *v22; // rcx
  int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // eax
  struct SURFACE *v29; // rdi
  int v30; // r12d
  SURFACE *v31; // rbx
  HDEV v32; // rcx
  int v33; // eax
  HDEV v34; // r8
  HDEV v35; // rdx
  HDEV v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  HDEV v39; // rcx
  HDEV *v40; // rcx
  unsigned int v41; // ebx
  struct SURFACE *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // ecx
  int v47; // eax
  HDEV v48; // rax
  HDEV v49; // rdx
  __int64 v50; // r8
  _OWORD *v51; // rcx
  __int64 v52; // r9
  HDEV v53; // rax
  __int128 v54; // xmm1
  __int64 v55; // r9
  HDEV v56; // rcx
  HDEV v57; // rax
  __int128 v58; // xmm1
  _OWORD *v59; // rax
  __int64 v60; // rdx
  __int128 v61; // xmm1
  __int64 v62; // r9
  HDEV v63; // rax
  HDEV v64; // rdx
  _OWORD *v65; // rcx
  __int128 v66; // xmm1
  __int64 v67; // r9
  __int128 v68; // xmm1
  HDEV v69; // rdx
  HDEV v70; // rcx
  __int128 v71; // xmm1
  _OWORD *v72; // rax
  __int128 v73; // xmm1
  HDEV v74; // r10
  int v75; // ecx
  int v76; // r8d
  volatile unsigned int *v77; // r10
  int v78; // r11d
  int v79; // ecx
  int v80; // r8d
  volatile unsigned int *v81; // r10
  int v82; // r11d
  int v83; // ecx
  int v84; // r8d
  volatile unsigned int *v85; // r10
  int v86; // r11d
  int v87; // ecx
  int v88; // r8d
  volatile unsigned int *v89; // r10
  int v90; // r11d
  int v91; // ecx
  int v92; // r8d
  volatile unsigned int *v93; // r10
  int v94; // r11d
  int v95; // ecx
  int v96; // r8d
  volatile unsigned int *v97; // r10
  int v98; // r11d
  int v99; // ecx
  int v100; // r8d
  volatile unsigned int *v101; // r10
  int v102; // r11d
  volatile unsigned int v103; // ett
  signed __int32 v104; // ett
  __int64 v105; // r8
  _OWORD *v106; // rcx
  __int64 v107; // r9
  HDEV v108; // rax
  HDEV v109; // rdx
  __int128 v110; // xmm1
  __int64 v111; // r9
  __int128 v112; // xmm1
  HDEV v113; // rdx
  HDEV v114; // rcx
  __int128 v115; // xmm1
  _OWORD *v116; // rax
  __int128 v117; // xmm1
  int v119; // [rsp+48h] [rbp-C0h]
  struct SURFACE *v120; // [rsp+50h] [rbp-B8h]
  __int64 v121; // [rsp+58h] [rbp-B0h]
  HDEV v122; // [rsp+60h] [rbp-A8h] BYREF
  HDEV v123; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v124; // [rsp+70h] [rbp-98h]
  int v125; // [rsp+78h] [rbp-90h]
  int v126; // [rsp+7Ch] [rbp-8Ch]
  int v127; // [rsp+80h] [rbp-88h]
  DC *v128; // [rsp+88h] [rbp-80h] BYREF
  SURFACE *v129; // [rsp+90h] [rbp-78h] BYREF
  __int64 v130; // [rsp+98h] [rbp-70h] BYREF
  struct SURFACE *v131; // [rsp+A0h] [rbp-68h]
  __int64 v132; // [rsp+A8h] [rbp-60h]
  struct tagSIZE v133; // [rsp+B0h] [rbp-58h]
  __int64 v134; // [rsp+B8h] [rbp-50h]
  __int64 v135; // [rsp+C0h] [rbp-48h]
  __int64 v136; // [rsp+C8h] [rbp-40h]
  struct tagSIZE v137; // [rsp+D0h] [rbp-38h]
  __int64 v138; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v139; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v140[6]; // [rsp+E8h] [rbp-20h] BYREF
  int v141; // [rsp+160h] [rbp+58h]
  unsigned int v142; // [rsp+160h] [rbp+58h]
  unsigned int v143; // [rsp+160h] [rbp+58h]

  v6 = 0;
  v129 = 0LL;
  v128 = 0LL;
  v124 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v130 = 0LL;
  if ( (unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
  {
    v134 = PALLOCNOZ(0x888u, 0x706D7447u);
    v7 = v134;
    if ( v134 )
    {
      v8 = *((_DWORD *)a2 + 10);
      v9 = a1 + 10;
      v122 = a1;
      v123 = a2;
      v126 = v8 & 0x400;
      v127 = (_DWORD)a1[10] & 0x400;
      if ( qword_1C0294AF8 && (int)qword_1C0294AF8() >= 0 )
      {
        vDisableSynchronize((__int64)a2);
        vDisableSynchronize((__int64)a1);
      }
      v125 = *((_DWORD *)a2 + 532) * *((_DWORD *)a2 + 533);
      v119 = *((_DWORD *)a1 + 532) * *((_DWORD *)a1 + 533);
      if ( (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a2, 0LL, 1)
        && (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a1, (__int64)a2, a3) )
      {
        v141 = 1;
        v10 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v122, &v138);
        v131 = (struct SURFACE *)*((_QWORD *)a1 + 316);
        v11 = *v10;
        v135 = *((_QWORD *)a1 + 222);
        v132 = *((_QWORD *)a1 + 221);
        v133 = v11;
        v12 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v123, &v139);
        v15 = (struct SURFACE *)*((_QWORD *)a2 + 316);
        v120 = v15;
        v16 = *v12;
        v136 = *((_QWORD *)a2 + 222);
        v121 = *((_QWORD *)a2 + 221);
        v137 = v16;
        if ( v16.cx < v11.cx || (cy = v133.cy, v16.cy < v133.cy) )
        {
          v18 = bDynamicIntersectVisRect(v14, v16);
          v15 = v120;
          cy = v133.cy;
          v13 = v18 & 1;
          v141 = v13;
        }
        if ( v11.cx < v16.cx || cy < v137.cy )
          v13 = bDynamicIntersectVisRect(v15, v11) & v141;
        v19 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)a2 + 340);
        if ( v19
          && v19 == *((__int64 (__fastcall **)(__int64, __int64))a1 + 340)
          && *((_QWORD *)a2 + 220) == *((_QWORD *)a1 + 220) )
        {
          if ( !v13 )
            goto LABEL_124;
          v13 = v19(v132, v121);
        }
        if ( v13 )
        {
          v142 = HmgSafeNextObjt(0LL, 1, &v128);
          v20 = v142;
          if ( !v142 )
            goto LABEL_38;
          while ( 1 )
          {
            v21 = v128;
            if ( (*((_DWORD *)v128 + 9) & 0x2000) != 0 )
              goto LABEL_36;
            v22 = (struct SURFACE *)*((_QWORD *)v128 + 62);
            if ( v22 == v131 )
            {
              DC::pSurface(v128, v120);
              *((struct tagSIZE *)v21 + 64) = v16;
            }
            else
            {
              if ( v22 != v120 )
                goto LABEL_27;
              DC::pSurface(v128, v131);
              *((struct tagSIZE *)v21 + 64) = v11;
            }
            v20 = v142;
            *((_DWORD *)v21 + 79) |= 0xFu;
LABEL_27:
            v23 = *((_DWORD *)v21 + 9);
            if ( (v23 & 0x200) != 0 && _bittest((const signed __int32 *)(*((_QWORD *)v21 + 62) + 112LL), 9u) )
              v24 = v23 | 0x8000;
            else
              v24 = v23 & 0xFFFF7FFF;
            v25 = v132;
            *((_DWORD *)v21 + 9) = v24;
            v26 = *((_QWORD *)v21 + 3);
            if ( v26 == v25 )
            {
              *((_QWORD *)v21 + 3) = v121;
              *(_DWORD *)((struct HDEV__ *)v21 + 18) = a2[448];
              v27 = *((_DWORD *)a2 + 524);
LABEL_35:
              *((_DWORD *)v21 + 19) = v27;
              goto LABEL_36;
            }
            if ( v26 == v121 )
            {
              *((_QWORD *)v21 + 3) = v25;
              *(_DWORD *)((struct HDEV__ *)v21 + 18) = a1[448];
              v27 = *((_DWORD *)a1 + 524);
              goto LABEL_35;
            }
LABEL_36:
            v142 = HmgSafeNextObjt(v20, 1, &v128);
            v20 = v142;
            if ( !v142 )
            {
              v7 = v134;
              v9 = a1 + 10;
LABEL_38:
              v28 = HmgSafeNextObjt(0LL, 5, &v129);
              v143 = v28;
              if ( !v28 )
                goto LABEL_63;
              v29 = v131;
              v30 = v125;
LABEL_40:
              v31 = v129;
              v32 = (HDEV)*((_QWORD *)v129 + 6);
              if ( v32 == a1 )
              {
                v33 = *((_DWORD *)v129 + 28);
                if ( (v33 & 0x4000000) != 0 )
                {
                  if ( (*((_DWORD *)v129 + 29) & 0x2001) == 0x2001 )
                  {
                    WdLogSingleEntry0(1LL);
                    SURFACE::hdev(v31, a2);
                  }
                  if ( v119 != v30 && *((_DWORD *)v31 + 24) == *((_DWORD *)v29 + 24) )
                  {
                    v34 = a2;
                    v35 = a1;
                    goto LABEL_47;
                  }
                  goto LABEL_60;
                }
                if ( (v33 & 0x300000) != 0x200000 )
                  goto LABEL_60;
                v36 = a2;
LABEL_59:
                SURFACE::hdev(v129, v36);
                goto LABEL_60;
              }
              if ( v32 == a2 )
              {
                v37 = *((_DWORD *)v129 + 28);
                if ( (v37 & 0x4000000) == 0 )
                {
                  if ( (v37 & 0x300000) != 0x200000 )
                    goto LABEL_60;
                  v36 = a1;
                  goto LABEL_59;
                }
                if ( (*((_DWORD *)v129 + 29) & 0x2001) == 0x2001 )
                  SURFACE::hdev(v129, a1);
                if ( v119 != v30 && *((_DWORD *)v31 + 24) == *((_DWORD *)v120 + 24) )
                {
                  v34 = a1;
                  v35 = a2;
LABEL_47:
                  vDynamicSwitchPalettes(v31, (struct PDEV *)v35, (struct PDEV *)v34);
                }
LABEL_60:
                v28 = v143;
              }
              v28 = HmgSafeNextObjt(v28, 5, &v129);
              v143 = v28;
              if ( !v28 )
              {
                v7 = v134;
                v9 = a1 + 10;
LABEL_63:
                v38 = 0LL;
LABEL_70:
                v41 = HmgSafeNextObjt(v38, 28, &v130);
                if ( !v41 )
                {
                  v42 = v131;
                  vChangeWndObjs(v131, (struct PDEV *)a1, v120, (struct PDEV *)a2);
                  v43 = HmgShareLock(*(_QWORD *)(v124 + 224), 16);
                  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v140, v43);
                  *(_QWORD *)(v7 + 976) = v7 + 544;
                  *(_DWORD *)(v7 + 728) = 0;
                  *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
                  v44 = *(_QWORD *)(v7 + 976);
                  *(_DWORD *)(v7 + 120) = 0;
                  *(_QWORD *)(v44 + 248) = 0LL;
                  EBRUSHOBJ::vInitBrush((int *)a1 + 384, v7, v140[0], *(_QWORD *)(v124 + 6000), v136, (__int64)v120, 1u);
                  EBRUSHOBJ::vInitBrush((int *)a2 + 384, v7, v140[0], *(_QWORD *)(v124 + 6000), v135, (__int64)v42, 1u);
                  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v140);
                  *((_QWORD *)a2 + 222) = v135;
                  *((_QWORD *)a2 + 221) = v132;
                  v45 = v136;
                  *((_QWORD *)a2 + 316) = v42;
                  *((_QWORD *)a1 + 222) = v45;
                  *((_QWORD *)a1 + 221) = v121;
                  *((_QWORD *)a1 + 316) = v120;
                  v46 = *((_DWORD *)v42 + 28);
                  v47 = *((_DWORD *)v120 + 28);
                  if ( (v46 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v120 + 28) = v47 | 0x10000000;
                    if ( a1 != (HDEV)-80LL && (((_DWORD)a1[43] & 0x10000000) != 0 || ((_DWORD)a1[45] & 0x10000000) != 0) )
                    {
                      v48 = a2 + 20;
LABEL_81:
                      if ( v48 )
                      {
                        *((_DWORD *)v48 + 23) |= 0x10000000u;
                        *((_DWORD *)v48 + 25) |= 0x10000000u;
                      }
                    }
                  }
                  else if ( (v47 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v42 + 28) = v46 | 0x10000000;
                    if ( a2 != (HDEV)-80LL && (((_DWORD)a2[43] & 0x10000000) != 0 || ((_DWORD)a2[45] & 0x10000000) != 0) )
                    {
                      v48 = a1 + 20;
                      goto LABEL_81;
                    }
                  }
                  v49 = a2 + 448;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 220);
                  v50 = 2LL;
                  v51 = (_OWORD *)v7;
                  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
                  v52 = 2LL;
                  *((_QWORD *)a1 + 220) = *(_QWORD *)v7;
                  v53 = a2 + 448;
                  do
                  {
                    *v51 = *(_OWORD *)v53;
                    v51[1] = *((_OWORD *)v53 + 1);
                    v51[2] = *((_OWORD *)v53 + 2);
                    v51[3] = *((_OWORD *)v53 + 3);
                    v51[4] = *((_OWORD *)v53 + 4);
                    v51[5] = *((_OWORD *)v53 + 5);
                    v51[6] = *((_OWORD *)v53 + 6);
                    v51 += 8;
                    v54 = *((_OWORD *)v53 + 7);
                    v53 += 32;
                    *(v51 - 1) = v54;
                    --v52;
                  }
                  while ( v52 );
                  v55 = 2LL;
                  *v51 = *(_OWORD *)v53;
                  v51[1] = *((_OWORD *)v53 + 1);
                  v51[2] = *((_OWORD *)v53 + 2);
                  *((_QWORD *)v51 + 6) = *((_QWORD *)v53 + 6);
                  v56 = a1 + 448;
                  v57 = a1 + 448;
                  do
                  {
                    *(_OWORD *)v49 = *(_OWORD *)v57;
                    *((_OWORD *)v49 + 1) = *((_OWORD *)v57 + 1);
                    *((_OWORD *)v49 + 2) = *((_OWORD *)v57 + 2);
                    *((_OWORD *)v49 + 3) = *((_OWORD *)v57 + 3);
                    *((_OWORD *)v49 + 4) = *((_OWORD *)v57 + 4);
                    *((_OWORD *)v49 + 5) = *((_OWORD *)v57 + 5);
                    *((_OWORD *)v49 + 6) = *((_OWORD *)v57 + 6);
                    v49 += 32;
                    v58 = *((_OWORD *)v57 + 7);
                    v57 += 32;
                    *((_OWORD *)v49 - 1) = v58;
                    --v55;
                  }
                  while ( v55 );
                  *(_OWORD *)v49 = *(_OWORD *)v57;
                  *((_OWORD *)v49 + 1) = *((_OWORD *)v57 + 1);
                  *((_OWORD *)v49 + 2) = *((_OWORD *)v57 + 2);
                  *((_QWORD *)v49 + 6) = *((_QWORD *)v57 + 6);
                  v59 = (_OWORD *)v7;
                  v60 = 2LL;
                  do
                  {
                    *(_OWORD *)v56 = *v59;
                    *((_OWORD *)v56 + 1) = v59[1];
                    *((_OWORD *)v56 + 2) = v59[2];
                    *((_OWORD *)v56 + 3) = v59[3];
                    *((_OWORD *)v56 + 4) = v59[4];
                    *((_OWORD *)v56 + 5) = v59[5];
                    *((_OWORD *)v56 + 6) = v59[6];
                    v56 += 32;
                    v61 = v59[7];
                    v59 += 8;
                    *((_OWORD *)v56 - 1) = v61;
                    --v60;
                  }
                  while ( v60 );
                  v62 = 2LL;
                  *(_OWORD *)v56 = *v59;
                  *((_OWORD *)v56 + 1) = v59[1];
                  *((_OWORD *)v56 + 2) = v59[2];
                  *((_QWORD *)v56 + 6) = *((_QWORD *)v59 + 6);
                  v63 = a2 + 526;
                  v64 = a2 + 526;
                  v65 = (_OWORD *)v7;
                  do
                  {
                    *v65 = *(_OWORD *)v64;
                    v65[1] = *((_OWORD *)v64 + 1);
                    v65[2] = *((_OWORD *)v64 + 2);
                    v65[3] = *((_OWORD *)v64 + 3);
                    v65[4] = *((_OWORD *)v64 + 4);
                    v65[5] = *((_OWORD *)v64 + 5);
                    v65[6] = *((_OWORD *)v64 + 6);
                    v65 += 8;
                    v66 = *((_OWORD *)v64 + 7);
                    v64 += 32;
                    *(v65 - 1) = v66;
                    --v62;
                  }
                  while ( v62 );
                  v67 = 2LL;
                  *v65 = *(_OWORD *)v64;
                  v65[1] = *((_OWORD *)v64 + 1);
                  v65[2] = *((_OWORD *)v64 + 2);
                  v68 = *((_OWORD *)v64 + 3);
                  v69 = a1 + 526;
                  v65[3] = v68;
                  v70 = a1 + 526;
                  do
                  {
                    *(_OWORD *)v63 = *(_OWORD *)v70;
                    *((_OWORD *)v63 + 1) = *((_OWORD *)v70 + 1);
                    *((_OWORD *)v63 + 2) = *((_OWORD *)v70 + 2);
                    *((_OWORD *)v63 + 3) = *((_OWORD *)v70 + 3);
                    *((_OWORD *)v63 + 4) = *((_OWORD *)v70 + 4);
                    *((_OWORD *)v63 + 5) = *((_OWORD *)v70 + 5);
                    *((_OWORD *)v63 + 6) = *((_OWORD *)v70 + 6);
                    v63 += 32;
                    v71 = *((_OWORD *)v70 + 7);
                    v70 += 32;
                    *((_OWORD *)v63 - 1) = v71;
                    --v67;
                  }
                  while ( v67 );
                  *(_OWORD *)v63 = *(_OWORD *)v70;
                  *((_OWORD *)v63 + 1) = *((_OWORD *)v70 + 1);
                  *((_OWORD *)v63 + 2) = *((_OWORD *)v70 + 2);
                  *((_OWORD *)v63 + 3) = *((_OWORD *)v70 + 3);
                  v72 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v69 = *v72;
                    *((_OWORD *)v69 + 1) = v72[1];
                    *((_OWORD *)v69 + 2) = v72[2];
                    *((_OWORD *)v69 + 3) = v72[3];
                    *((_OWORD *)v69 + 4) = v72[4];
                    *((_OWORD *)v69 + 5) = v72[5];
                    *((_OWORD *)v69 + 6) = v72[6];
                    v69 += 32;
                    v73 = v72[7];
                    v72 += 8;
                    *((_OWORD *)v69 - 1) = v73;
                    --v50;
                  }
                  while ( v50 );
                  *(_OWORD *)v69 = *v72;
                  *((_OWORD *)v69 + 1) = v72[1];
                  *((_OWORD *)v69 + 2) = v72[2];
                  *((_OWORD *)v69 + 3) = v72[3];
                  *(_OWORD *)v7 = *(_OWORD *)(a2 + 606);
                  *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 610);
                  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 614);
                  *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 618);
                  *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 622);
                  *(_OWORD *)(v7 + 80) = *(_OWORD *)(a2 + 626);
                  *(_OWORD *)(a2 + 606) = *(_OWORD *)(a1 + 606);
                  *(_OWORD *)(a2 + 610) = *(_OWORD *)(a1 + 610);
                  *(_OWORD *)(a2 + 614) = *(_OWORD *)(a1 + 614);
                  *(_OWORD *)(a2 + 618) = *(_OWORD *)(a1 + 618);
                  *(_OWORD *)(a2 + 622) = *(_OWORD *)(a1 + 622);
                  *(_OWORD *)(a2 + 626) = *(_OWORD *)(a1 + 626);
                  *(_OWORD *)(a1 + 606) = *(_OWORD *)v7;
                  *(_OWORD *)(a1 + 610) = *(_OWORD *)(v7 + 16);
                  *(_OWORD *)(a1 + 614) = *(_OWORD *)(v7 + 32);
                  *(_OWORD *)(a1 + 618) = *(_OWORD *)(v7 + 48);
                  *(_OWORD *)(a1 + 622) = *(_OWORD *)(v7 + 64);
                  *(_OWORD *)(a1 + 626) = *(_OWORD *)(v7 + 80);
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 317);
                  *((_QWORD *)a2 + 317) = *((_QWORD *)a1 + 317);
                  *((_QWORD *)a1 + 317) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 318);
                  *((_QWORD *)a2 + 318) = *((_QWORD *)a1 + 318);
                  *((_QWORD *)a1 + 318) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 319);
                  *((_QWORD *)a2 + 319) = *((_QWORD *)a1 + 319);
                  *((_QWORD *)a1 + 319) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 320);
                  *((_QWORD *)a2 + 320) = *((_QWORD *)a1 + 320);
                  *((_QWORD *)a1 + 320) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 321);
                  *((_QWORD *)a2 + 321) = *((_QWORD *)a1 + 321);
                  *((_QWORD *)a1 + 321) = *(_QWORD *)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[888];
                  a2[888] = a1[888];
                  *(_DWORD *)(a1 + 888) = *(_DWORD *)(HDEV)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[892];
                  v74 = a2 + 10;
                  a2[892] = a1[892];
                  *(_DWORD *)(a1 + 892) = *(_DWORD *)(HDEV)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 322);
                  *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
                  *((_QWORD *)a1 + 322) = *(_QWORD *)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[646];
                  a2[646] = a1[646];
                  *(_DWORD *)(a1 + 646) = *(_DWORD *)(HDEV)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[647];
                  a2[647] = a1[647];
                  *(_DWORD *)(a1 + 647) = *(_DWORD *)(HDEV)v7;
                  v75 = (_DWORD)a2[10] & 0x20000;
                  if ( (*(_DWORD *)v9 & 0x20000) != v75 )
                  {
                    SETFLAG(v75, (volatile unsigned int *)v9, 0x20000);
                    SETFLAG(v78, v77, v76);
                  }
                  v79 = *(_DWORD *)v74 & 0x1000000;
                  if ( (*(_DWORD *)v9 & 0x1000000) != v79 )
                  {
                    SETFLAG(v79, (volatile unsigned int *)v9, 0x1000000);
                    SETFLAG(v82, v81, v80);
                  }
                  v83 = *(_DWORD *)v74 & 0x20000000;
                  if ( (*(_DWORD *)v9 & 0x20000000) != v83 )
                  {
                    SETFLAG(v83, (volatile unsigned int *)v9, 0x20000000);
                    SETFLAG(v86, v85, v84);
                  }
                  v87 = *(_DWORD *)v74 & 0x2000000;
                  if ( (*(_DWORD *)v9 & 0x2000000) != v87 )
                  {
                    SETFLAG(v87, (volatile unsigned int *)v9, 0x2000000);
                    SETFLAG(v90, v89, v88);
                  }
                  v91 = *(_DWORD *)v74 & 0x8000000;
                  if ( (*(_DWORD *)v9 & 0x8000000) != v91 )
                  {
                    SETFLAG(v91, (volatile unsigned int *)v9, 0x8000000);
                    SETFLAG(v94, v93, v92);
                  }
                  v95 = *(_DWORD *)v74 & 0x4000000;
                  if ( (*(_DWORD *)v9 & 0x4000000) != v95 )
                  {
                    SETFLAG(v95, (volatile unsigned int *)v9, 0x4000000);
                    SETFLAG(v98, v97, v96);
                  }
                  v99 = *(_DWORD *)v74 & 0x40000000;
                  if ( (*(_DWORD *)v9 & 0x40000000) != v99 )
                  {
                    SETFLAG(v99, (volatile unsigned int *)v9, 0x40000000);
                    SETFLAG(v102, v101, v100);
                  }
                  _m_prefetchw(v9);
                  do
                    v103 = *(_DWORD *)v9;
                  while ( v103 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v9,
                                    *(_DWORD *)v9 & 0xEFFFFFFF,
                                    *(_DWORD *)v9) );
                  _m_prefetchw(v74);
                  do
                    v104 = *(_DWORD *)v74;
                  while ( v104 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v74,
                                    *(_DWORD *)v74 & 0xEFFFFFFF,
                                    *(_DWORD *)v74) );
                  *((_QWORD *)a1 + 4) = 0LL;
                  v105 = 6LL;
                  *((_QWORD *)a2 + 4) = 0LL;
                  v106 = (_OWORD *)v7;
                  v107 = 6LL;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 211);
                  *((_QWORD *)a2 + 211) = *((_QWORD *)a1 + 211);
                  *((_QWORD *)a1 + 211) = *(_QWORD *)v7;
                  *(_OWORD *)v7 = *(_OWORD *)(a2 + 362);
                  *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 366);
                  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 370);
                  *(_OWORD *)(a2 + 362) = *(_OWORD *)(a1 + 362);
                  *(_OWORD *)(a2 + 366) = *(_OWORD *)(a1 + 366);
                  *(_OWORD *)(a2 + 370) = *(_OWORD *)(a1 + 370);
                  *(_OWORD *)(a1 + 362) = *(_OWORD *)v7;
                  *(_OWORD *)(a1 + 366) = *(_OWORD *)(v7 + 16);
                  *(_OWORD *)(a1 + 370) = *(_OWORD *)(v7 + 32);
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 178);
                  *((_QWORD *)a2 + 178) = *((_QWORD *)a1 + 178);
                  *((_QWORD *)a1 + 178) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 179);
                  *((_QWORD *)a2 + 179) = *((_QWORD *)a1 + 179);
                  *((_QWORD *)a1 + 179) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 180);
                  *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
                  *((_QWORD *)a1 + 180) = *(_QWORD *)v7;
                  v108 = a2 + 666;
                  v109 = a2 + 666;
                  do
                  {
                    *v106 = *(_OWORD *)v109;
                    v106[1] = *((_OWORD *)v109 + 1);
                    v106[2] = *((_OWORD *)v109 + 2);
                    v106[3] = *((_OWORD *)v109 + 3);
                    v106[4] = *((_OWORD *)v109 + 4);
                    v106[5] = *((_OWORD *)v109 + 5);
                    v106[6] = *((_OWORD *)v109 + 6);
                    v106 += 8;
                    v110 = *((_OWORD *)v109 + 7);
                    v109 += 32;
                    *(v106 - 1) = v110;
                    --v107;
                  }
                  while ( v107 );
                  v111 = 6LL;
                  *v106 = *(_OWORD *)v109;
                  v106[1] = *((_OWORD *)v109 + 1);
                  v106[2] = *((_OWORD *)v109 + 2);
                  v112 = *((_OWORD *)v109 + 3);
                  v113 = a1 + 666;
                  v106[3] = v112;
                  v114 = a1 + 666;
                  do
                  {
                    *(_OWORD *)v108 = *(_OWORD *)v114;
                    *((_OWORD *)v108 + 1) = *((_OWORD *)v114 + 1);
                    *((_OWORD *)v108 + 2) = *((_OWORD *)v114 + 2);
                    *((_OWORD *)v108 + 3) = *((_OWORD *)v114 + 3);
                    *((_OWORD *)v108 + 4) = *((_OWORD *)v114 + 4);
                    *((_OWORD *)v108 + 5) = *((_OWORD *)v114 + 5);
                    *((_OWORD *)v108 + 6) = *((_OWORD *)v114 + 6);
                    v108 += 32;
                    v115 = *((_OWORD *)v114 + 7);
                    v114 += 32;
                    *((_OWORD *)v108 - 1) = v115;
                    --v111;
                  }
                  while ( v111 );
                  *(_OWORD *)v108 = *(_OWORD *)v114;
                  *((_OWORD *)v108 + 1) = *((_OWORD *)v114 + 1);
                  *((_OWORD *)v108 + 2) = *((_OWORD *)v114 + 2);
                  *((_OWORD *)v108 + 3) = *((_OWORD *)v114 + 3);
                  v116 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v113 = *v116;
                    *((_OWORD *)v113 + 1) = v116[1];
                    *((_OWORD *)v113 + 2) = v116[2];
                    *((_OWORD *)v113 + 3) = v116[3];
                    *((_OWORD *)v113 + 4) = v116[4];
                    *((_OWORD *)v113 + 5) = v116[5];
                    *((_OWORD *)v113 + 6) = v116[6];
                    v113 += 32;
                    v117 = v116[7];
                    v116 += 8;
                    *((_OWORD *)v113 - 1) = v117;
                    --v105;
                  }
                  while ( v105 );
                  *(_OWORD *)v113 = *v116;
                  *((_OWORD *)v113 + 1) = v116[1];
                  *((_OWORD *)v113 + 2) = v116[2];
                  *((_OWORD *)v113 + 3) = v116[3];
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 212);
                  *((_QWORD *)a2 + 212) = *((_QWORD *)a1 + 212);
                  *((_QWORD *)a1 + 212) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 213);
                  *((_QWORD *)a2 + 213) = *((_QWORD *)a1 + 213);
                  *((_QWORD *)a1 + 213) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 215);
                  *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 215);
                  *((_QWORD *)a1 + 215) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 216);
                  *((_QWORD *)a2 + 216) = *((_QWORD *)a1 + 216);
                  *((_QWORD *)a1 + 216) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 217);
                  *((_QWORD *)a2 + 217) = *((_QWORD *)a1 + 217);
                  *((_QWORD *)a1 + 217) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 218);
                  *((_QWORD *)a2 + 218) = *((_QWORD *)a1 + 218);
                  *((_QWORD *)a1 + 218) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 328);
                  *((_QWORD *)a2 + 328) = *((_QWORD *)a1 + 328);
                  *((_QWORD *)a1 + 328) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 329);
                  *((_QWORD *)a2 + 329) = *((_QWORD *)a1 + 329);
                  *((_QWORD *)a1 + 329) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 331);
                  *((_QWORD *)a2 + 331) = *((_QWORD *)a1 + 331);
                  *((_QWORD *)a1 + 331) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 332);
                  *((_QWORD *)a2 + 332) = *((_QWORD *)a1 + 332);
                  *((_QWORD *)a1 + 332) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 330);
                  *((_QWORD *)a2 + 330) = *((_QWORD *)a1 + 330);
                  *((_QWORD *)a1 + 330) = *(_QWORD *)v7;
                  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 334))(*((_QWORD *)a2 + 221), a2);
                  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 334))(*((_QWORD *)a1 + 221), a1);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v122, v126);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v123, v127);
                  vResetSurfacePalette(a1);
                  vResetSurfacePalette(a2);
                  if ( qword_1C0294B08 && (int)qword_1C0294B08() >= 0 && qword_1C0294B10 )
                    qword_1C0294B10(a1, a2);
                  v6 = 1;
                  ++*(_DWORD *)(v124 + 3816);
                  break;
                }
                v39 = *(HDEV *)(v130 + 40);
                if ( v39 == a1 )
                {
                  *(_QWORD *)(v130 + 40) = a2;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v123);
                  v40 = &v122;
                  goto LABEL_68;
                }
                if ( v39 == a2 )
                {
                  *(_QWORD *)(v130 + 40) = a1;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v122);
                  v40 = &v123;
LABEL_68:
                  PDEVOBJ::vUnreferencePdev((struct PDEV **)v40);
                }
                v38 = v41;
                goto LABEL_70;
              }
              goto LABEL_40;
            }
          }
        }
      }
LABEL_124:
      Win32FreePool((char *)v7);
      vEnableSynchronize((__int64)a2);
      vEnableSynchronize((__int64)a1);
    }
  }
  return v6;
}
