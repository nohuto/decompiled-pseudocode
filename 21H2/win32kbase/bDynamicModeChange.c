/*
 * XREFs of bDynamicModeChange @ 0x1C00C9250
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0021AA0 (HmgShareLock.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     PALLOCNOZ @ 0x1C0027CFC (PALLOCNOZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00617A0 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0061BFC (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0071D24 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C007FCA0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C008DCA0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     vDisableSynchronize @ 0x1C00C141C (vDisableSynchronize.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C2644 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     vEnableSynchronize @ 0x1C00C3134 (vEnableSynchronize.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00C3F70 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00C40A4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00CBE2C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00DAF28 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00DAF80 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016F6D4 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016F7F8 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, int a3)
{
  unsigned int v6; // r12d
  __int64 v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // r13d
  struct tagSIZE *v11; // rax
  struct tagSIZE v12; // rdi
  struct tagSIZE *v13; // rax
  struct SURFACE *v14; // r9
  struct SURFACE *v15; // rcx
  struct tagSIZE v16; // rbx
  int cy; // edx
  char v18; // al
  __int64 v19; // r8
  __int64 Objt; // r13
  __int64 v21; // r8
  struct SURFACE *v22; // rcx
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // edx
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rbx
  struct SURFACE *v31; // rdi
  int v32; // r13d
  HDEV v33; // rax
  int v34; // eax
  HDEV v35; // r8
  HDEV v36; // rdx
  int v37; // eax
  unsigned int v38; // ecx
  HDEV v39; // rcx
  __int64 v40; // rbx
  int v41; // r8d
  HDEV *v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rdx
  int v45; // r8d
  struct SURFACE *v46; // r13
  __int64 v47; // rax
  unsigned int *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  int v55; // eax
  HDEV v56; // rax
  HDEV v57; // rdx
  __int64 v58; // r8
  _OWORD *v59; // rcx
  __int64 v60; // r9
  HDEV v61; // rax
  __int128 v62; // xmm1
  __int64 v63; // r9
  HDEV v64; // rcx
  HDEV v65; // rax
  __int128 v66; // xmm1
  _OWORD *v67; // rax
  __int64 v68; // rdx
  __int128 v69; // xmm1
  __int64 v70; // r9
  HDEV v71; // rax
  HDEV v72; // rdx
  _OWORD *v73; // rcx
  __int128 v74; // xmm1
  __int64 v75; // r9
  __int128 v76; // xmm1
  HDEV v77; // rdx
  HDEV v78; // rcx
  __int128 v79; // xmm1
  _OWORD *v80; // rax
  __int128 v81; // xmm1
  HDEV v82; // rbx
  HDEV v83; // r11
  signed __int32 v84; // ecx
  volatile unsigned int v85; // r10d
  int v86; // edi
  int v87; // r8d
  int v88; // edi
  int v89; // r8d
  int v90; // edi
  int v91; // r8d
  int v92; // edi
  int v93; // r8d
  int v94; // edi
  int v95; // r8d
  int v96; // edi
  int v97; // r8d
  int v98; // ecx
  int v99; // r8d
  int v100; // r10d
  volatile unsigned int v101; // ett
  signed __int32 v102; // ett
  __int64 v103; // r8
  _OWORD *v104; // rcx
  __int64 v105; // r9
  HDEV v106; // rax
  HDEV v107; // rdx
  __int128 v108; // xmm1
  __int64 v109; // r9
  __int128 v110; // xmm1
  HDEV v111; // rdx
  HDEV v112; // rcx
  __int128 v113; // xmm1
  _OWORD *v114; // rax
  __int128 v115; // xmm1
  __int64 v117; // [rsp+48h] [rbp-69h]
  struct SURFACE *v118; // [rsp+50h] [rbp-61h]
  __int64 v119; // [rsp+58h] [rbp-59h]
  HDEV v120; // [rsp+60h] [rbp-51h] BYREF
  HDEV v121; // [rsp+68h] [rbp-49h] BYREF
  int v122; // [rsp+70h] [rbp-41h]
  int v123; // [rsp+74h] [rbp-3Dh]
  int v124; // [rsp+78h] [rbp-39h]
  struct SURFACE *v125; // [rsp+80h] [rbp-31h]
  __int64 v126; // [rsp+88h] [rbp-29h]
  __int64 v127; // [rsp+90h] [rbp-21h]
  __int64 v128; // [rsp+98h] [rbp-19h]
  struct tagSIZE v129; // [rsp+A0h] [rbp-11h]
  void *v130; // [rsp+A8h] [rbp-9h]
  __int64 v131; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v132; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v133[5]; // [rsp+C0h] [rbp+Fh] BYREF
  int v134; // [rsp+130h] [rbp+7Fh]

  v6 = 0;
  if ( (unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
  {
    v130 = PALLOCNOZ(0x860u, 0x706D7447u);
    v7 = (__int64)v130;
    if ( v130 )
    {
      v8 = (_DWORD)a2[10] & 0x400;
      v120 = a1;
      v123 = v8;
      v9 = (_DWORD)a1[10] & 0x400;
      v121 = a2;
      v124 = v9;
      if ( qword_1C029B460 && (int)qword_1C029B460() >= 0 )
      {
        vDisableSynchronize();
        vDisableSynchronize();
      }
      v122 = *((_DWORD *)a2 + 532) * *((_DWORD *)a2 + 533);
      v134 = *((_DWORD *)a1 + 532) * *((_DWORD *)a1 + 533);
      if ( (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a2, 0LL, 1)
        && (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a1, (__int64)a2, a3) )
      {
        v10 = 1;
        v11 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v120, &v131);
        v125 = (struct SURFACE *)*((_QWORD *)a1 + 316);
        v12 = *v11;
        v126 = *((_QWORD *)a1 + 222);
        v127 = *((_QWORD *)a1 + 221);
        v13 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v121, &v132);
        v15 = (struct SURFACE *)*((_QWORD *)a2 + 316);
        v118 = v15;
        v16 = *v13;
        v128 = *((_QWORD *)a2 + 222);
        v119 = *((_QWORD *)a2 + 221);
        v129 = v16;
        if ( v16.cx < v12.cx || (cy = v12.cy, v16.cy < v12.cy) )
        {
          v18 = bDynamicIntersectVisRect(v14, v16);
          v15 = v118;
          cy = v12.cy;
          v10 = v18 & 1;
        }
        if ( v12.cx < v16.cx || cy < v129.cy )
          v10 &= bDynamicIntersectVisRect(v15, v12);
        v19 = *((_QWORD *)a2 + 340);
        if ( v19 && v19 == *((_QWORD *)a1 + 340) && *((_QWORD *)a2 + 220) == *((_QWORD *)a1 + 220) )
        {
          if ( !v10 )
            goto LABEL_126;
          v10 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 340))(v127, v119);
        }
        if ( v10 )
        {
          Objt = HmgSafeNextObjt(0, 1);
          if ( !Objt )
            goto LABEL_39;
          while ( 1 )
          {
            v21 = *(_QWORD *)Objt;
            v117 = *(_QWORD *)Objt;
            if ( (*(_DWORD *)(Objt + 36) & 0x2000) != 0 )
              goto LABEL_37;
            v22 = *(struct SURFACE **)(Objt + 496);
            if ( v22 == v125 )
            {
              DC::pSurface((DC *)Objt, v118);
              *(struct tagSIZE *)(Objt + 512) = v16;
            }
            else
            {
              if ( v22 != v118 )
                goto LABEL_27;
              DC::pSurface((DC *)Objt, v125);
              *(struct tagSIZE *)(Objt + 512) = v12;
            }
            LODWORD(v21) = v117;
            *(_DWORD *)(Objt + 316) |= 0xFu;
LABEL_27:
            v23 = *(_DWORD *)(Objt + 36);
            if ( (v23 & 0x200) == 0
              || (v24 = 1, !_bittest((const signed __int32 *)(*(_QWORD *)(Objt + 496) + 112LL), 9u)) )
            {
              v24 = 0;
            }
            v25 = v23 | 0x8000;
            v26 = v24 == 0;
            v27 = v127;
            if ( v26 )
              v25 = *(_DWORD *)(Objt + 36) & 0xFFFF7FFF;
            v28 = *(_QWORD *)(Objt + 24);
            *(_DWORD *)(Objt + 36) = v25;
            if ( v28 == v27 )
            {
              *(_QWORD *)(Objt + 24) = v119;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a2[448];
              v29 = *((_DWORD *)a2 + 524);
LABEL_36:
              *(_DWORD *)(Objt + 76) = v29;
              goto LABEL_37;
            }
            if ( v28 == v119 )
            {
              *(_QWORD *)(Objt + 24) = v27;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a1[448];
              v29 = *((_DWORD *)a1 + 524);
              goto LABEL_36;
            }
LABEL_37:
            Objt = HmgSafeNextObjt(v21, 1);
            if ( !Objt )
            {
              v7 = (__int64)v130;
LABEL_39:
              v30 = HmgSafeNextObjt(0, 5);
              if ( !v30 )
                goto LABEL_62;
              v31 = v125;
              v32 = v122;
LABEL_41:
              v129 = *(struct tagSIZE *)v30;
              v33 = *(HDEV *)(v30 + 48);
              if ( v33 == a1 )
              {
                v34 = *(_DWORD *)(v30 + 112);
                if ( (v34 & 0x4000000) != 0 )
                {
                  if ( (*(_DWORD *)(v30 + 116) & 0x2001) == 0x2001 )
                  {
                    WdLogSingleEntry0(1LL);
                    *(_QWORD *)(v30 + 48) = a2;
                  }
                  if ( v134 != v32 && *(_DWORD *)(v30 + 96) == *((_DWORD *)v31 + 24) )
                  {
                    v35 = a2;
                    v36 = a1;
                    goto LABEL_57;
                  }
                }
                else if ( (v34 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v30 + 48) = a2;
                }
              }
              else if ( v33 == a2 )
              {
                v37 = *(_DWORD *)(v30 + 112);
                if ( (v37 & 0x4000000) != 0 )
                {
                  if ( (*(_DWORD *)(v30 + 116) & 0x2001) == 0x2001 )
                    *(_QWORD *)(v30 + 48) = a1;
                  if ( v134 != v32 && *(_DWORD *)(v30 + 96) == *((_DWORD *)v118 + 24) )
                  {
                    v35 = a1;
                    v36 = a2;
LABEL_57:
                    vDynamicSwitchPalettes((struct SURFACE *)v30, (struct PDEV *)v36, (struct PDEV *)v35);
                  }
                }
                else if ( (v37 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v30 + 48) = a1;
                }
              }
              v30 = HmgSafeNextObjt(v129.cx, 5);
              if ( !v30 )
              {
                v7 = (__int64)v130;
LABEL_62:
                v38 = 0;
LABEL_69:
                v43 = (__int64 *)HmgSafeNextObjt(v38, 28);
                if ( !v43 )
                {
                  v46 = v125;
                  vChangeWndObjs(v125, (struct PDEV *)a1, v118, (struct PDEV *)a2);
                  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
                  {
                    v51 = HmgShareLock(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
                    HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v133, v51);
                    *(_QWORD *)(v7 + 976) = v7 + 544;
                    *(_DWORD *)(v7 + 728) = 0;
                    *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
                    v52 = *(_QWORD *)(v7 + 976);
                    *(_DWORD *)(v7 + 120) = 0;
                    *(_QWORD *)(v52 + 248) = 0LL;
                    EBRUSHOBJ::vInitBrush((int *)a1 + 384, v7, v133[0], (__int64)ppalDefault, v128, (__int64)v118, 1u);
                    EBRUSHOBJ::vInitBrush((int *)a2 + 384, v7, v133[0], (__int64)ppalDefault, v126, (__int64)v46, 1u);
                    HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v133);
                  }
                  else
                  {
                    v47 = HmgShareLock(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16);
                    *(_QWORD *)(v7 + 976) = v7 + 544;
                    v48 = (unsigned int *)v47;
                    v49 = v128;
                    *(_DWORD *)(v7 + 728) = 0;
                    *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
                    v50 = *(_QWORD *)(v7 + 976);
                    *(_DWORD *)(v7 + 120) = 0;
                    *(_QWORD *)(v50 + 248) = 0LL;
                    EBRUSHOBJ::vInitBrush(
                      (int *)a1 + 384,
                      v7,
                      (__int64)v48,
                      (__int64)ppalDefault,
                      v49,
                      (__int64)v118,
                      1u);
                    EBRUSHOBJ::vInitBrush(
                      (int *)a2 + 384,
                      v7,
                      (__int64)v48,
                      (__int64)ppalDefault,
                      v126,
                      (__int64)v46,
                      1u);
                    DEC_SHARE_REF_CNT(v48);
                  }
                  *((_QWORD *)a2 + 222) = v126;
                  *((_QWORD *)a2 + 221) = v127;
                  v53 = v128;
                  *((_QWORD *)a2 + 316) = v46;
                  *((_QWORD *)a1 + 222) = v53;
                  *((_QWORD *)a1 + 221) = v119;
                  *((_QWORD *)a1 + 316) = v118;
                  v54 = *((_DWORD *)v46 + 28);
                  v55 = *((_DWORD *)v118 + 28);
                  if ( (v54 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v118 + 28) = v55 | 0x10000000;
                    if ( a1 != (HDEV)-80LL && (((_DWORD)a1[43] & 0x10000000) != 0 || ((_DWORD)a1[45] & 0x10000000) != 0) )
                    {
                      v56 = a2 + 20;
LABEL_83:
                      if ( v56 )
                      {
                        *((_DWORD *)v56 + 23) |= 0x10000000u;
                        *((_DWORD *)v56 + 25) |= 0x10000000u;
                      }
                    }
                  }
                  else if ( (v55 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v46 + 28) = v54 | 0x10000000;
                    if ( a2 != (HDEV)-80LL && (((_DWORD)a2[43] & 0x10000000) != 0 || ((_DWORD)a2[45] & 0x10000000) != 0) )
                    {
                      v56 = a1 + 20;
                      goto LABEL_83;
                    }
                  }
                  v57 = a2 + 448;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 220);
                  v58 = 2LL;
                  v59 = (_OWORD *)v7;
                  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
                  v60 = 2LL;
                  *((_QWORD *)a1 + 220) = *(_QWORD *)v7;
                  v61 = a2 + 448;
                  do
                  {
                    *v59 = *(_OWORD *)v61;
                    v59[1] = *((_OWORD *)v61 + 1);
                    v59[2] = *((_OWORD *)v61 + 2);
                    v59[3] = *((_OWORD *)v61 + 3);
                    v59[4] = *((_OWORD *)v61 + 4);
                    v59[5] = *((_OWORD *)v61 + 5);
                    v59[6] = *((_OWORD *)v61 + 6);
                    v59 += 8;
                    v62 = *((_OWORD *)v61 + 7);
                    v61 += 32;
                    *(v59 - 1) = v62;
                    --v60;
                  }
                  while ( v60 );
                  v63 = 2LL;
                  *v59 = *(_OWORD *)v61;
                  v59[1] = *((_OWORD *)v61 + 1);
                  v59[2] = *((_OWORD *)v61 + 2);
                  *((_QWORD *)v59 + 6) = *((_QWORD *)v61 + 6);
                  v64 = a1 + 448;
                  v65 = a1 + 448;
                  do
                  {
                    *(_OWORD *)v57 = *(_OWORD *)v65;
                    *((_OWORD *)v57 + 1) = *((_OWORD *)v65 + 1);
                    *((_OWORD *)v57 + 2) = *((_OWORD *)v65 + 2);
                    *((_OWORD *)v57 + 3) = *((_OWORD *)v65 + 3);
                    *((_OWORD *)v57 + 4) = *((_OWORD *)v65 + 4);
                    *((_OWORD *)v57 + 5) = *((_OWORD *)v65 + 5);
                    *((_OWORD *)v57 + 6) = *((_OWORD *)v65 + 6);
                    v57 += 32;
                    v66 = *((_OWORD *)v65 + 7);
                    v65 += 32;
                    *((_OWORD *)v57 - 1) = v66;
                    --v63;
                  }
                  while ( v63 );
                  *(_OWORD *)v57 = *(_OWORD *)v65;
                  *((_OWORD *)v57 + 1) = *((_OWORD *)v65 + 1);
                  *((_OWORD *)v57 + 2) = *((_OWORD *)v65 + 2);
                  *((_QWORD *)v57 + 6) = *((_QWORD *)v65 + 6);
                  v67 = (_OWORD *)v7;
                  v68 = 2LL;
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
                    v69 = v67[7];
                    v67 += 8;
                    *((_OWORD *)v64 - 1) = v69;
                    --v68;
                  }
                  while ( v68 );
                  v70 = 2LL;
                  *(_OWORD *)v64 = *v67;
                  *((_OWORD *)v64 + 1) = v67[1];
                  *((_OWORD *)v64 + 2) = v67[2];
                  *((_QWORD *)v64 + 6) = *((_QWORD *)v67 + 6);
                  v71 = a2 + 526;
                  v72 = a2 + 526;
                  v73 = (_OWORD *)v7;
                  do
                  {
                    *v73 = *(_OWORD *)v72;
                    v73[1] = *((_OWORD *)v72 + 1);
                    v73[2] = *((_OWORD *)v72 + 2);
                    v73[3] = *((_OWORD *)v72 + 3);
                    v73[4] = *((_OWORD *)v72 + 4);
                    v73[5] = *((_OWORD *)v72 + 5);
                    v73[6] = *((_OWORD *)v72 + 6);
                    v73 += 8;
                    v74 = *((_OWORD *)v72 + 7);
                    v72 += 32;
                    *(v73 - 1) = v74;
                    --v70;
                  }
                  while ( v70 );
                  v75 = 2LL;
                  *v73 = *(_OWORD *)v72;
                  v73[1] = *((_OWORD *)v72 + 1);
                  v73[2] = *((_OWORD *)v72 + 2);
                  v76 = *((_OWORD *)v72 + 3);
                  v77 = a1 + 526;
                  v73[3] = v76;
                  v78 = a1 + 526;
                  do
                  {
                    *(_OWORD *)v71 = *(_OWORD *)v78;
                    *((_OWORD *)v71 + 1) = *((_OWORD *)v78 + 1);
                    *((_OWORD *)v71 + 2) = *((_OWORD *)v78 + 2);
                    *((_OWORD *)v71 + 3) = *((_OWORD *)v78 + 3);
                    *((_OWORD *)v71 + 4) = *((_OWORD *)v78 + 4);
                    *((_OWORD *)v71 + 5) = *((_OWORD *)v78 + 5);
                    *((_OWORD *)v71 + 6) = *((_OWORD *)v78 + 6);
                    v71 += 32;
                    v79 = *((_OWORD *)v78 + 7);
                    v78 += 32;
                    *((_OWORD *)v71 - 1) = v79;
                    --v75;
                  }
                  while ( v75 );
                  *(_OWORD *)v71 = *(_OWORD *)v78;
                  *((_OWORD *)v71 + 1) = *((_OWORD *)v78 + 1);
                  *((_OWORD *)v71 + 2) = *((_OWORD *)v78 + 2);
                  *((_OWORD *)v71 + 3) = *((_OWORD *)v78 + 3);
                  v80 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v77 = *v80;
                    *((_OWORD *)v77 + 1) = v80[1];
                    *((_OWORD *)v77 + 2) = v80[2];
                    *((_OWORD *)v77 + 3) = v80[3];
                    *((_OWORD *)v77 + 4) = v80[4];
                    *((_OWORD *)v77 + 5) = v80[5];
                    *((_OWORD *)v77 + 6) = v80[6];
                    v77 += 32;
                    v81 = v80[7];
                    v80 += 8;
                    *((_OWORD *)v77 - 1) = v81;
                    --v58;
                  }
                  while ( v58 );
                  *(_OWORD *)v77 = *v80;
                  *((_OWORD *)v77 + 1) = v80[1];
                  *((_OWORD *)v77 + 2) = v80[2];
                  *((_OWORD *)v77 + 3) = v80[3];
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
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[882];
                  a2[882] = a1[882];
                  *(_DWORD *)(a1 + 882) = *(_DWORD *)(HDEV)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 322);
                  v82 = a2 + 10;
                  v83 = a1 + 10;
                  *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
                  *((_QWORD *)a1 + 322) = *(_QWORD *)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[646];
                  a2[646] = a1[646];
                  *(_DWORD *)(a1 + 646) = *(_DWORD *)(HDEV)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[647];
                  a2[647] = a1[647];
                  *(_DWORD *)(a1 + 647) = *(_DWORD *)(HDEV)v7;
                  v84 = *((_DWORD *)a2 + 10);
                  v85 = *((_DWORD *)a1 + 10);
                  v86 = v85 & 0x20000;
                  if ( (v85 & 0x20000) != (v84 & 0x20000) )
                  {
                    SETFLAG(v84 & 0x20000, (volatile unsigned int *)a1 + 10, 0x20000);
                    SETFLAG(v86, (volatile unsigned int *)a2 + 10, v87);
                    v84 = *(_DWORD *)v82;
                    v85 = *(_DWORD *)v83;
                  }
                  v88 = v85 & 0x1000000;
                  if ( (v85 & 0x1000000) != (v84 & 0x1000000) )
                  {
                    SETFLAG(v84 & 0x1000000, (volatile unsigned int *)v83, 0x1000000);
                    SETFLAG(v88, (volatile unsigned int *)a2 + 10, v89);
                    v84 = *(_DWORD *)v82;
                    v85 = *(_DWORD *)v83;
                  }
                  v90 = v85 & 0x20000000;
                  if ( (v85 & 0x20000000) != (v84 & 0x20000000) )
                  {
                    SETFLAG(v84 & 0x20000000, (volatile unsigned int *)v83, 0x20000000);
                    SETFLAG(v90, (volatile unsigned int *)a2 + 10, v91);
                    v84 = *(_DWORD *)v82;
                    v85 = *(_DWORD *)v83;
                  }
                  v92 = v85 & 0x2000000;
                  if ( (v85 & 0x2000000) != (v84 & 0x2000000) )
                  {
                    SETFLAG(v84 & 0x2000000, (volatile unsigned int *)v83, 0x2000000);
                    SETFLAG(v92, (volatile unsigned int *)a2 + 10, v93);
                    v84 = *(_DWORD *)v82;
                    v85 = *(_DWORD *)v83;
                  }
                  v94 = v85 & 0x8000000;
                  if ( (v85 & 0x8000000) != (v84 & 0x8000000) )
                  {
                    SETFLAG(v84 & 0x8000000, (volatile unsigned int *)v83, 0x8000000);
                    SETFLAG(v94, (volatile unsigned int *)a2 + 10, v95);
                    v84 = *(_DWORD *)v82;
                    v85 = *(_DWORD *)v83;
                  }
                  v96 = v85 & 0x4000000;
                  if ( (v85 & 0x4000000) != (v84 & 0x4000000) )
                  {
                    SETFLAG(v84 & 0x4000000, (volatile unsigned int *)v83, 0x4000000);
                    SETFLAG(v96, (volatile unsigned int *)a2 + 10, v97);
                    v84 = *(_DWORD *)v82;
                    v85 = *(_DWORD *)v83;
                  }
                  v98 = v84 & 0x40000000;
                  if ( (v85 & 0x40000000) != v98 )
                  {
                    SETFLAG(v98, (volatile unsigned int *)v83, 0x40000000);
                    SETFLAG(v100, (volatile unsigned int *)a2 + 10, v99);
                  }
                  _m_prefetchw(v83);
                  do
                    v101 = *(_DWORD *)v83;
                  while ( v101 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v83,
                                    *(_DWORD *)v83 & 0xEFFFFFFF,
                                    *(_DWORD *)v83) );
                  _m_prefetchw(v82);
                  do
                    v102 = *(_DWORD *)v82;
                  while ( v102 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v82,
                                    *(_DWORD *)v82 & 0xEFFFFFFF,
                                    *(_DWORD *)v82) );
                  *((_QWORD *)a1 + 4) = 0LL;
                  v103 = 6LL;
                  *((_QWORD *)a2 + 4) = 0LL;
                  v104 = (_OWORD *)v7;
                  v105 = 6LL;
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
                  v106 = a2 + 666;
                  v107 = a2 + 666;
                  do
                  {
                    *v104 = *(_OWORD *)v107;
                    v104[1] = *((_OWORD *)v107 + 1);
                    v104[2] = *((_OWORD *)v107 + 2);
                    v104[3] = *((_OWORD *)v107 + 3);
                    v104[4] = *((_OWORD *)v107 + 4);
                    v104[5] = *((_OWORD *)v107 + 5);
                    v104[6] = *((_OWORD *)v107 + 6);
                    v104 += 8;
                    v108 = *((_OWORD *)v107 + 7);
                    v107 += 32;
                    *(v104 - 1) = v108;
                    --v105;
                  }
                  while ( v105 );
                  v109 = 6LL;
                  *v104 = *(_OWORD *)v107;
                  v104[1] = *((_OWORD *)v107 + 1);
                  v104[2] = *((_OWORD *)v107 + 2);
                  v110 = *((_OWORD *)v107 + 3);
                  v111 = a1 + 666;
                  v104[3] = v110;
                  v112 = a1 + 666;
                  do
                  {
                    *(_OWORD *)v106 = *(_OWORD *)v112;
                    *((_OWORD *)v106 + 1) = *((_OWORD *)v112 + 1);
                    *((_OWORD *)v106 + 2) = *((_OWORD *)v112 + 2);
                    *((_OWORD *)v106 + 3) = *((_OWORD *)v112 + 3);
                    *((_OWORD *)v106 + 4) = *((_OWORD *)v112 + 4);
                    *((_OWORD *)v106 + 5) = *((_OWORD *)v112 + 5);
                    *((_OWORD *)v106 + 6) = *((_OWORD *)v112 + 6);
                    v106 += 32;
                    v113 = *((_OWORD *)v112 + 7);
                    v112 += 32;
                    *((_OWORD *)v106 - 1) = v113;
                    --v109;
                  }
                  while ( v109 );
                  *(_OWORD *)v106 = *(_OWORD *)v112;
                  *((_OWORD *)v106 + 1) = *((_OWORD *)v112 + 1);
                  *((_OWORD *)v106 + 2) = *((_OWORD *)v112 + 2);
                  *((_OWORD *)v106 + 3) = *((_OWORD *)v112 + 3);
                  v114 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v111 = *v114;
                    *((_OWORD *)v111 + 1) = v114[1];
                    *((_OWORD *)v111 + 2) = v114[2];
                    *((_OWORD *)v111 + 3) = v114[3];
                    *((_OWORD *)v111 + 4) = v114[4];
                    *((_OWORD *)v111 + 5) = v114[5];
                    *((_OWORD *)v111 + 6) = v114[6];
                    v111 += 32;
                    v115 = v114[7];
                    v114 += 8;
                    *((_OWORD *)v111 - 1) = v115;
                    --v103;
                  }
                  while ( v103 );
                  *(_OWORD *)v111 = *v114;
                  *((_OWORD *)v111 + 1) = v114[1];
                  *((_OWORD *)v111 + 2) = v114[2];
                  *((_OWORD *)v111 + 3) = v114[3];
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
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v120, v123);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v121, v124);
                  vResetSurfacePalette(a1);
                  vResetSurfacePalette(a2);
                  if ( qword_1C029B470 && (int)qword_1C029B470() >= 0 && qword_1C029B478 )
                    qword_1C029B478(a1, a2);
                  ++gcModeChanges;
                  v6 = 1;
                  break;
                }
                v39 = (HDEV)v43[5];
                v40 = *v43;
                if ( v39 == a1 )
                {
                  v43[5] = (__int64)a2;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v121, v44, v45);
                  v42 = &v120;
                  goto LABEL_67;
                }
                if ( v39 == a2 )
                {
                  v43[5] = (__int64)a1;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v120, v44, v45);
                  v42 = &v121;
LABEL_67:
                  PDEVOBJ::vUnreferencePdev((struct PDEV **)v42, 0, v41);
                }
                v38 = v40;
                goto LABEL_69;
              }
              goto LABEL_41;
            }
          }
        }
      }
LABEL_126:
      Win32FreePool((char *)v7);
      vEnableSynchronize();
      vEnableSynchronize();
    }
  }
  return v6;
}
