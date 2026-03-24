/*
 * XREFs of bDynamicModeChange @ 0x1C00BAA30
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013A90 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C000ED74 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C000EE10 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C000EF80 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C000F22C (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00123D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C002193C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0021968 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0022D50 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     HmgShareLock @ 0x1C002FC10 (HmgShareLock.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00679D0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     vDisableSynchronize @ 0x1C00A8D78 (vDisableSynchronize.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00B2554 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     vEnableSynchronize @ 0x1C00B4078 (vEnableSynchronize.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00B4704 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00B4E5C (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00CAD48 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00CAD8C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0142A20 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0142B10 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, int a3)
{
  unsigned int v6; // r12d
  __int64 v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r13d
  struct tagSIZE *v12; // rax
  struct tagSIZE v13; // rdi
  struct tagSIZE *v14; // rax
  struct SURFACE *v15; // r9
  struct SURFACE *v16; // rcx
  struct tagSIZE v17; // rbx
  int cy; // edx
  char v19; // al
  __int64 v20; // r8
  __int64 Objt; // r13
  __int64 v22; // r8
  struct SURFACE *v23; // rcx
  int v24; // edx
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rbx
  struct SURFACE *v31; // rdi
  int v32; // r13d
  HDEV v33; // rax
  int v34; // eax
  __int64 v35; // rax
  HDEV v36; // r8
  HDEV v37; // rdx
  int v38; // eax
  unsigned int v39; // ecx
  HDEV v40; // rcx
  __int64 v41; // rbx
  int v42; // r8d
  HDEV *v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rdx
  int v46; // r8d
  struct SURFACE *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // rax
  int v52; // ecx
  int v53; // eax
  HDEV v54; // rax
  HDEV v55; // rdx
  __int64 v56; // r8
  _OWORD *v57; // rcx
  __int64 v58; // r9
  HDEV v59; // rax
  __int128 v60; // xmm1
  __int64 v61; // r9
  HDEV v62; // rcx
  HDEV v63; // rax
  __int128 v64; // xmm1
  _OWORD *v65; // rax
  __int64 v66; // rdx
  __int128 v67; // xmm1
  __int64 v68; // r9
  HDEV v69; // rax
  HDEV v70; // rdx
  _OWORD *v71; // rcx
  __int128 v72; // xmm1
  __int64 v73; // r9
  __int128 v74; // xmm1
  HDEV v75; // rdx
  HDEV v76; // rcx
  __int128 v77; // xmm1
  _OWORD *v78; // rax
  __int128 v79; // xmm1
  HDEV v80; // rbx
  HDEV v81; // r11
  signed __int32 v82; // ecx
  volatile unsigned int v83; // r10d
  int v84; // edi
  int v85; // r8d
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
  int v96; // ecx
  int v97; // r8d
  int v98; // r10d
  volatile unsigned int v99; // ett
  signed __int32 v100; // ett
  __int64 v101; // r8
  _OWORD *v102; // rcx
  __int64 v103; // r9
  HDEV v104; // rax
  HDEV v105; // rdx
  __int128 v106; // xmm1
  __int64 v107; // r9
  __int128 v108; // xmm1
  HDEV v109; // rdx
  HDEV v110; // rcx
  __int128 v111; // xmm1
  _OWORD *v112; // rax
  __int128 v113; // xmm1
  int v114; // eax
  __int64 v116; // [rsp+48h] [rbp-69h]
  struct SURFACE *v117; // [rsp+50h] [rbp-61h]
  __int64 v118; // [rsp+58h] [rbp-59h]
  HDEV v119; // [rsp+60h] [rbp-51h] BYREF
  HDEV v120; // [rsp+68h] [rbp-49h] BYREF
  int v121; // [rsp+70h] [rbp-41h]
  int v122; // [rsp+74h] [rbp-3Dh]
  int v123; // [rsp+78h] [rbp-39h]
  struct SURFACE *v124; // [rsp+80h] [rbp-31h]
  __int64 v125; // [rsp+88h] [rbp-29h]
  struct tagSIZE v126; // [rsp+90h] [rbp-21h]
  void *v127; // [rsp+98h] [rbp-19h]
  __int64 v128; // [rsp+A0h] [rbp-11h]
  __int64 v129; // [rsp+A8h] [rbp-9h]
  __int64 v130; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v131; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v132[5]; // [rsp+C0h] [rbp+Fh] BYREF
  int v133; // [rsp+130h] [rbp+7Fh]

  v6 = 0;
  if ( (unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
  {
    v127 = PALLOCMEM2(0x868uLL, 1886221383LL, 0);
    v7 = (__int64)v127;
    if ( v127 )
    {
      v8 = (_DWORD)a2[10] & 0x400;
      v119 = a1;
      v122 = v8;
      v9 = (_DWORD)a1[10] & 0x400;
      v120 = a2;
      v123 = v9;
      if ( qword_1C02556E0 )
        v10 = qword_1C02556E0();
      else
        v10 = -1073741637;
      if ( v10 >= 0 )
      {
        vDisableSynchronize((__int64)a2);
        vDisableSynchronize((__int64)a1);
      }
      v121 = *((_DWORD *)a2 + 540) * *((_DWORD *)a2 + 541);
      v133 = *((_DWORD *)a1 + 540) * *((_DWORD *)a1 + 541);
      if ( (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a2, 0LL, 1)
        && (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a1, (__int64)a2, a3) )
      {
        v11 = 1;
        v12 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v119, &v130);
        v124 = (struct SURFACE *)*((_QWORD *)a1 + 319);
        v13 = *v12;
        v129 = *((_QWORD *)a1 + 226);
        v125 = *((_QWORD *)a1 + 225);
        v14 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v120, &v131);
        v16 = (struct SURFACE *)*((_QWORD *)a2 + 319);
        v117 = v16;
        v17 = *v14;
        v128 = *((_QWORD *)a2 + 226);
        v118 = *((_QWORD *)a2 + 225);
        v126 = v17;
        if ( v17.cx < v13.cx || (cy = v13.cy, v17.cy < v13.cy) )
        {
          v19 = bDynamicIntersectVisRect(v15, v17);
          v16 = v117;
          cy = v13.cy;
          v11 = v19 & 1;
        }
        if ( v13.cx < v17.cx || cy < v126.cy )
          v11 &= bDynamicIntersectVisRect(v16, v13);
        v20 = *((_QWORD *)a2 + 343);
        if ( v20 && v20 == *((_QWORD *)a1 + 343) && *((_QWORD *)a2 + 224) == *((_QWORD *)a1 + 224) )
        {
          if ( !v11 )
            goto LABEL_126;
          v11 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 343))(v125, v118);
        }
        if ( v11 )
        {
          Objt = HmgSafeNextObjt(0, 1);
          if ( !Objt )
            goto LABEL_40;
          while ( 1 )
          {
            v22 = *(_QWORD *)Objt;
            v116 = *(_QWORD *)Objt;
            if ( (*(_DWORD *)(Objt + 36) & 0x2000) != 0 )
              goto LABEL_38;
            v23 = *(struct SURFACE **)(Objt + 496);
            if ( v23 == v124 )
            {
              DC::pSurface((DC *)Objt, v117);
              *(struct tagSIZE *)(Objt + 512) = v17;
            }
            else
            {
              if ( v23 != v117 )
                goto LABEL_29;
              DC::pSurface((DC *)Objt, v124);
              *(struct tagSIZE *)(Objt + 512) = v13;
            }
            LODWORD(v22) = v116;
            *(_DWORD *)(Objt + 316) |= 0xFu;
LABEL_29:
            v24 = *(_DWORD *)(Objt + 36);
            if ( (v24 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(Objt + 496) + 112LL) & 0x200) != 0 )
              v25 = v24 | 0x8000;
            else
              v25 = v24 & 0xFFFF7FFF;
            v26 = *(_QWORD *)(Objt + 24);
            v27 = v125;
            *(_DWORD *)(Objt + 36) = v25;
            if ( v26 == v27 )
            {
              *(_QWORD *)(Objt + 24) = v118;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a2[456];
              v28 = *((_DWORD *)a2 + 532);
LABEL_37:
              *(_DWORD *)(Objt + 76) = v28;
              goto LABEL_38;
            }
            if ( v26 == v118 )
            {
              *(_QWORD *)(Objt + 24) = v27;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a1[456];
              v28 = *((_DWORD *)a1 + 532);
              goto LABEL_37;
            }
LABEL_38:
            Objt = HmgSafeNextObjt(v22, 1);
            if ( !Objt )
            {
              v7 = (__int64)v127;
LABEL_40:
              v30 = HmgSafeNextObjt(0, 5);
              if ( !v30 )
                goto LABEL_63;
              v31 = v124;
              v32 = v121;
LABEL_42:
              v126 = *(struct tagSIZE *)v30;
              v33 = *(HDEV *)(v30 + 48);
              if ( v33 == a1 )
              {
                v34 = *(_DWORD *)(v30 + 112);
                if ( (v34 & 0x4000000) != 0 )
                {
                  if ( (*(_DWORD *)(v30 + 116) & 0x2001) == 0x2001 )
                  {
                    v35 = WdLogNewEntry5_WdAssertion(8193LL, v29);
                    WdLogEvent5_WdAssertion(v35);
                    *(_QWORD *)(v30 + 48) = a2;
                  }
                  if ( v133 != v32 && *(_DWORD *)(v30 + 96) == *((_DWORD *)v31 + 24) )
                  {
                    v36 = a2;
                    v37 = a1;
                    goto LABEL_58;
                  }
                }
                else if ( (v34 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v30 + 48) = a2;
                }
              }
              else if ( v33 == a2 )
              {
                v38 = *(_DWORD *)(v30 + 112);
                if ( (v38 & 0x4000000) != 0 )
                {
                  if ( (*(_DWORD *)(v30 + 116) & 0x2001) == 0x2001 )
                    *(_QWORD *)(v30 + 48) = a1;
                  if ( v133 != v32 && *(_DWORD *)(v30 + 96) == *((_DWORD *)v117 + 24) )
                  {
                    v36 = a1;
                    v37 = a2;
LABEL_58:
                    vDynamicSwitchPalettes((struct SURFACE *)v30, (struct PDEV *)v37, (struct PDEV *)v36);
                  }
                }
                else if ( (v38 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v30 + 48) = a1;
                }
              }
              v30 = HmgSafeNextObjt(v126.cx, 5);
              if ( !v30 )
              {
                v7 = (__int64)v127;
LABEL_63:
                v39 = 0;
LABEL_70:
                v44 = (__int64 *)HmgSafeNextObjt(v39, 28);
                if ( !v44 )
                {
                  v47 = v124;
                  vChangeWndObjs(v124, (struct PDEV *)a1, v117, (struct PDEV *)a2);
                  v48 = HmgShareLock((unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 16);
                  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v132, v48);
                  *(_QWORD *)(v7 + 976) = v7 + 544;
                  *(_DWORD *)(v7 + 728) = 0;
                  *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
                  v49 = *(_QWORD *)(v7 + 976);
                  *(_DWORD *)(v7 + 120) = 0;
                  *(_QWORD *)(v49 + 248) = 0LL;
                  EBRUSHOBJ::vInitBrush((int *)a1 + 386, v7, v132[0], (__int64)ppalDefault, v128, (__int64)v117, 1u);
                  v50 = v129;
                  EBRUSHOBJ::vInitBrush((int *)a2 + 386, v7, v132[0], (__int64)ppalDefault, v129, (__int64)v47, 1u);
                  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v132);
                  *((_QWORD *)a2 + 225) = v125;
                  v51 = v128;
                  *((_QWORD *)a2 + 319) = v47;
                  *((_QWORD *)a2 + 226) = v50;
                  *((_QWORD *)a1 + 226) = v51;
                  *((_QWORD *)a1 + 225) = v118;
                  *((_QWORD *)a1 + 319) = v117;
                  v52 = *((_DWORD *)v47 + 28);
                  v53 = *((_DWORD *)v117 + 28);
                  if ( (v52 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v117 + 28) = v53 | 0x10000000;
                    if ( a1 != (HDEV)-88LL && (((_DWORD)a1[45] & 0x10000000) != 0 || ((_DWORD)a1[47] & 0x10000000) != 0) )
                    {
                      v54 = a2 + 22;
LABEL_81:
                      if ( v54 )
                      {
                        *((_DWORD *)v54 + 23) |= 0x10000000u;
                        *((_DWORD *)v54 + 25) |= 0x10000000u;
                      }
                    }
                  }
                  else if ( (v53 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v47 + 28) = v52 | 0x10000000;
                    if ( a2 != (HDEV)-88LL && (((_DWORD)a2[45] & 0x10000000) != 0 || ((_DWORD)a2[47] & 0x10000000) != 0) )
                    {
                      v54 = a1 + 22;
                      goto LABEL_81;
                    }
                  }
                  v55 = a2 + 456;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 224);
                  v56 = 2LL;
                  v57 = (_OWORD *)v7;
                  *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
                  v58 = 2LL;
                  *((_QWORD *)a1 + 224) = *(_QWORD *)v7;
                  v59 = a2 + 456;
                  do
                  {
                    *v57 = *(_OWORD *)v59;
                    v57[1] = *((_OWORD *)v59 + 1);
                    v57[2] = *((_OWORD *)v59 + 2);
                    v57[3] = *((_OWORD *)v59 + 3);
                    v57[4] = *((_OWORD *)v59 + 4);
                    v57[5] = *((_OWORD *)v59 + 5);
                    v57[6] = *((_OWORD *)v59 + 6);
                    v57 += 8;
                    v60 = *((_OWORD *)v59 + 7);
                    v59 += 32;
                    *(v57 - 1) = v60;
                    --v58;
                  }
                  while ( v58 );
                  v61 = 2LL;
                  *v57 = *(_OWORD *)v59;
                  v57[1] = *((_OWORD *)v59 + 1);
                  v57[2] = *((_OWORD *)v59 + 2);
                  *((_QWORD *)v57 + 6) = *((_QWORD *)v59 + 6);
                  v62 = a1 + 456;
                  v63 = a1 + 456;
                  do
                  {
                    *(_OWORD *)v55 = *(_OWORD *)v63;
                    *((_OWORD *)v55 + 1) = *((_OWORD *)v63 + 1);
                    *((_OWORD *)v55 + 2) = *((_OWORD *)v63 + 2);
                    *((_OWORD *)v55 + 3) = *((_OWORD *)v63 + 3);
                    *((_OWORD *)v55 + 4) = *((_OWORD *)v63 + 4);
                    *((_OWORD *)v55 + 5) = *((_OWORD *)v63 + 5);
                    *((_OWORD *)v55 + 6) = *((_OWORD *)v63 + 6);
                    v55 += 32;
                    v64 = *((_OWORD *)v63 + 7);
                    v63 += 32;
                    *((_OWORD *)v55 - 1) = v64;
                    --v61;
                  }
                  while ( v61 );
                  *(_OWORD *)v55 = *(_OWORD *)v63;
                  *((_OWORD *)v55 + 1) = *((_OWORD *)v63 + 1);
                  *((_OWORD *)v55 + 2) = *((_OWORD *)v63 + 2);
                  *((_QWORD *)v55 + 6) = *((_QWORD *)v63 + 6);
                  v65 = (_OWORD *)v7;
                  v66 = 2LL;
                  do
                  {
                    *(_OWORD *)v62 = *v65;
                    *((_OWORD *)v62 + 1) = v65[1];
                    *((_OWORD *)v62 + 2) = v65[2];
                    *((_OWORD *)v62 + 3) = v65[3];
                    *((_OWORD *)v62 + 4) = v65[4];
                    *((_OWORD *)v62 + 5) = v65[5];
                    *((_OWORD *)v62 + 6) = v65[6];
                    v62 += 32;
                    v67 = v65[7];
                    v65 += 8;
                    *((_OWORD *)v62 - 1) = v67;
                    --v66;
                  }
                  while ( v66 );
                  v68 = 2LL;
                  *(_OWORD *)v62 = *v65;
                  *((_OWORD *)v62 + 1) = v65[1];
                  *((_OWORD *)v62 + 2) = v65[2];
                  *((_QWORD *)v62 + 6) = *((_QWORD *)v65 + 6);
                  v69 = a2 + 534;
                  v70 = a2 + 534;
                  v71 = (_OWORD *)v7;
                  do
                  {
                    *v71 = *(_OWORD *)v70;
                    v71[1] = *((_OWORD *)v70 + 1);
                    v71[2] = *((_OWORD *)v70 + 2);
                    v71[3] = *((_OWORD *)v70 + 3);
                    v71[4] = *((_OWORD *)v70 + 4);
                    v71[5] = *((_OWORD *)v70 + 5);
                    v71[6] = *((_OWORD *)v70 + 6);
                    v71 += 8;
                    v72 = *((_OWORD *)v70 + 7);
                    v70 += 32;
                    *(v71 - 1) = v72;
                    --v68;
                  }
                  while ( v68 );
                  v73 = 2LL;
                  *v71 = *(_OWORD *)v70;
                  v71[1] = *((_OWORD *)v70 + 1);
                  v71[2] = *((_OWORD *)v70 + 2);
                  v74 = *((_OWORD *)v70 + 3);
                  v75 = a1 + 534;
                  v71[3] = v74;
                  v76 = a1 + 534;
                  do
                  {
                    *(_OWORD *)v69 = *(_OWORD *)v76;
                    *((_OWORD *)v69 + 1) = *((_OWORD *)v76 + 1);
                    *((_OWORD *)v69 + 2) = *((_OWORD *)v76 + 2);
                    *((_OWORD *)v69 + 3) = *((_OWORD *)v76 + 3);
                    *((_OWORD *)v69 + 4) = *((_OWORD *)v76 + 4);
                    *((_OWORD *)v69 + 5) = *((_OWORD *)v76 + 5);
                    *((_OWORD *)v69 + 6) = *((_OWORD *)v76 + 6);
                    v69 += 32;
                    v77 = *((_OWORD *)v76 + 7);
                    v76 += 32;
                    *((_OWORD *)v69 - 1) = v77;
                    --v73;
                  }
                  while ( v73 );
                  *(_OWORD *)v69 = *(_OWORD *)v76;
                  *((_OWORD *)v69 + 1) = *((_OWORD *)v76 + 1);
                  *((_OWORD *)v69 + 2) = *((_OWORD *)v76 + 2);
                  *((_OWORD *)v69 + 3) = *((_OWORD *)v76 + 3);
                  v78 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v75 = *v78;
                    *((_OWORD *)v75 + 1) = v78[1];
                    *((_OWORD *)v75 + 2) = v78[2];
                    *((_OWORD *)v75 + 3) = v78[3];
                    *((_OWORD *)v75 + 4) = v78[4];
                    *((_OWORD *)v75 + 5) = v78[5];
                    *((_OWORD *)v75 + 6) = v78[6];
                    v75 += 32;
                    v79 = v78[7];
                    v78 += 8;
                    *((_OWORD *)v75 - 1) = v79;
                    --v56;
                  }
                  while ( v56 );
                  *(_OWORD *)v75 = *v78;
                  *((_OWORD *)v75 + 1) = v78[1];
                  *((_OWORD *)v75 + 2) = v78[2];
                  *((_OWORD *)v75 + 3) = v78[3];
                  *(_OWORD *)v7 = *(_OWORD *)(a2 + 614);
                  *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 618);
                  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 622);
                  *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 626);
                  *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 630);
                  *(_OWORD *)(v7 + 80) = *(_OWORD *)(a2 + 634);
                  *(_OWORD *)(a2 + 614) = *(_OWORD *)(a1 + 614);
                  *(_OWORD *)(a2 + 618) = *(_OWORD *)(a1 + 618);
                  *(_OWORD *)(a2 + 622) = *(_OWORD *)(a1 + 622);
                  *(_OWORD *)(a2 + 626) = *(_OWORD *)(a1 + 626);
                  *(_OWORD *)(a2 + 630) = *(_OWORD *)(a1 + 630);
                  *(_OWORD *)(a2 + 634) = *(_OWORD *)(a1 + 634);
                  *(_OWORD *)(a1 + 614) = *(_OWORD *)v7;
                  *(_OWORD *)(a1 + 618) = *(_OWORD *)(v7 + 16);
                  *(_OWORD *)(a1 + 622) = *(_OWORD *)(v7 + 32);
                  *(_OWORD *)(a1 + 626) = *(_OWORD *)(v7 + 48);
                  *(_OWORD *)(a1 + 630) = *(_OWORD *)(v7 + 64);
                  *(_OWORD *)(a1 + 634) = *(_OWORD *)(v7 + 80);
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 320);
                  *((_QWORD *)a2 + 320) = *((_QWORD *)a1 + 320);
                  *((_QWORD *)a1 + 320) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 321);
                  *((_QWORD *)a2 + 321) = *((_QWORD *)a1 + 321);
                  *((_QWORD *)a1 + 321) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 322);
                  *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
                  *((_QWORD *)a1 + 322) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 323);
                  *((_QWORD *)a2 + 323) = *((_QWORD *)a1 + 323);
                  *((_QWORD *)a1 + 323) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 324);
                  *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
                  *((_QWORD *)a1 + 324) = *(_QWORD *)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[888];
                  a2[888] = a1[888];
                  *(_DWORD *)(a1 + 888) = *(_DWORD *)(HDEV)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[892];
                  v80 = a2 + 10;
                  v81 = a1 + 10;
                  a2[892] = a1[892];
                  *(_DWORD *)(a1 + 892) = *(_DWORD *)(HDEV)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 325);
                  *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
                  *((_QWORD *)a1 + 325) = *(_QWORD *)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[652];
                  a2[652] = a1[652];
                  *(_DWORD *)(a1 + 652) = *(_DWORD *)(HDEV)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[653];
                  a2[653] = a1[653];
                  *(_DWORD *)(a1 + 653) = *(_DWORD *)(HDEV)v7;
                  v82 = *((_DWORD *)a2 + 10);
                  v83 = *((_DWORD *)a1 + 10);
                  v84 = v83 & 0x20000;
                  if ( (v83 & 0x20000) != (v82 & 0x20000) )
                  {
                    SETFLAG(v82 & 0x20000, (volatile unsigned int *)a1 + 10, 0x20000);
                    SETFLAG(v84, (volatile unsigned int *)a2 + 10, v85);
                    v82 = *(_DWORD *)v80;
                    v83 = *(_DWORD *)v81;
                  }
                  v86 = v83 & 0x1000000;
                  if ( (v83 & 0x1000000) != (v82 & 0x1000000) )
                  {
                    SETFLAG(v82 & 0x1000000, (volatile unsigned int *)v81, 0x1000000);
                    SETFLAG(v86, (volatile unsigned int *)a2 + 10, v87);
                    v82 = *(_DWORD *)v80;
                    v83 = *(_DWORD *)v81;
                  }
                  v88 = v83 & 0x20000000;
                  if ( (v83 & 0x20000000) != (v82 & 0x20000000) )
                  {
                    SETFLAG(v82 & 0x20000000, (volatile unsigned int *)v81, 0x20000000);
                    SETFLAG(v88, (volatile unsigned int *)a2 + 10, v89);
                    v82 = *(_DWORD *)v80;
                    v83 = *(_DWORD *)v81;
                  }
                  v90 = v83 & 0x2000000;
                  if ( (v83 & 0x2000000) != (v82 & 0x2000000) )
                  {
                    SETFLAG(v82 & 0x2000000, (volatile unsigned int *)v81, 0x2000000);
                    SETFLAG(v90, (volatile unsigned int *)a2 + 10, v91);
                    v82 = *(_DWORD *)v80;
                    v83 = *(_DWORD *)v81;
                  }
                  v92 = v83 & 0x8000000;
                  if ( (v83 & 0x8000000) != (v82 & 0x8000000) )
                  {
                    SETFLAG(v82 & 0x8000000, (volatile unsigned int *)v81, 0x8000000);
                    SETFLAG(v92, (volatile unsigned int *)a2 + 10, v93);
                    v82 = *(_DWORD *)v80;
                    v83 = *(_DWORD *)v81;
                  }
                  v94 = v83 & 0x4000000;
                  if ( (v83 & 0x4000000) != (v82 & 0x4000000) )
                  {
                    SETFLAG(v82 & 0x4000000, (volatile unsigned int *)v81, 0x4000000);
                    SETFLAG(v94, (volatile unsigned int *)a2 + 10, v95);
                    v82 = *(_DWORD *)v80;
                    v83 = *(_DWORD *)v81;
                  }
                  v96 = v82 & 0x40000000;
                  if ( (v83 & 0x40000000) != v96 )
                  {
                    SETFLAG(v96, (volatile unsigned int *)v81, 0x40000000);
                    SETFLAG(v98, (volatile unsigned int *)a2 + 10, v97);
                  }
                  _m_prefetchw(v81);
                  do
                    v99 = *(_DWORD *)v81;
                  while ( v99 != _InterlockedCompareExchange(
                                   (volatile signed __int32 *)v81,
                                   *(_DWORD *)v81 & 0xEFFFFFFF,
                                   *(_DWORD *)v81) );
                  _m_prefetchw(v80);
                  do
                    v100 = *(_DWORD *)v80;
                  while ( v100 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v80,
                                    *(_DWORD *)v80 & 0xEFFFFFFF,
                                    *(_DWORD *)v80) );
                  *((_QWORD *)a1 + 4) = 0LL;
                  v101 = 6LL;
                  *((_QWORD *)a2 + 4) = 0LL;
                  v102 = (_OWORD *)v7;
                  v103 = 6LL;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 215);
                  *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 215);
                  *((_QWORD *)a1 + 215) = *(_QWORD *)v7;
                  *(_OWORD *)v7 = *((_OWORD *)a2 + 91);
                  *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 92);
                  *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 93);
                  *((_OWORD *)a2 + 91) = *((_OWORD *)a1 + 91);
                  *((_OWORD *)a2 + 92) = *((_OWORD *)a1 + 92);
                  *((_OWORD *)a2 + 93) = *((_OWORD *)a1 + 93);
                  *((_OWORD *)a1 + 91) = *(_OWORD *)v7;
                  *((_OWORD *)a1 + 92) = *(_OWORD *)(v7 + 16);
                  *((_OWORD *)a1 + 93) = *(_OWORD *)(v7 + 32);
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 179);
                  *((_QWORD *)a2 + 179) = *((_QWORD *)a1 + 179);
                  *((_QWORD *)a1 + 179) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 180);
                  *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
                  *((_QWORD *)a1 + 180) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 181);
                  *((_QWORD *)a2 + 181) = *((_QWORD *)a1 + 181);
                  *((_QWORD *)a1 + 181) = *(_QWORD *)v7;
                  v104 = a2 + 672;
                  v105 = a2 + 672;
                  do
                  {
                    *v102 = *(_OWORD *)v105;
                    v102[1] = *((_OWORD *)v105 + 1);
                    v102[2] = *((_OWORD *)v105 + 2);
                    v102[3] = *((_OWORD *)v105 + 3);
                    v102[4] = *((_OWORD *)v105 + 4);
                    v102[5] = *((_OWORD *)v105 + 5);
                    v102[6] = *((_OWORD *)v105 + 6);
                    v102 += 8;
                    v106 = *((_OWORD *)v105 + 7);
                    v105 += 32;
                    *(v102 - 1) = v106;
                    --v103;
                  }
                  while ( v103 );
                  v107 = 6LL;
                  *v102 = *(_OWORD *)v105;
                  v102[1] = *((_OWORD *)v105 + 1);
                  v102[2] = *((_OWORD *)v105 + 2);
                  v108 = *((_OWORD *)v105 + 3);
                  v109 = a1 + 672;
                  v102[3] = v108;
                  v110 = a1 + 672;
                  do
                  {
                    *(_OWORD *)v104 = *(_OWORD *)v110;
                    *((_OWORD *)v104 + 1) = *((_OWORD *)v110 + 1);
                    *((_OWORD *)v104 + 2) = *((_OWORD *)v110 + 2);
                    *((_OWORD *)v104 + 3) = *((_OWORD *)v110 + 3);
                    *((_OWORD *)v104 + 4) = *((_OWORD *)v110 + 4);
                    *((_OWORD *)v104 + 5) = *((_OWORD *)v110 + 5);
                    *((_OWORD *)v104 + 6) = *((_OWORD *)v110 + 6);
                    v104 += 32;
                    v111 = *((_OWORD *)v110 + 7);
                    v110 += 32;
                    *((_OWORD *)v104 - 1) = v111;
                    --v107;
                  }
                  while ( v107 );
                  *(_OWORD *)v104 = *(_OWORD *)v110;
                  *((_OWORD *)v104 + 1) = *((_OWORD *)v110 + 1);
                  *((_OWORD *)v104 + 2) = *((_OWORD *)v110 + 2);
                  *((_OWORD *)v104 + 3) = *((_OWORD *)v110 + 3);
                  v112 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v109 = *v112;
                    *((_OWORD *)v109 + 1) = v112[1];
                    *((_OWORD *)v109 + 2) = v112[2];
                    *((_OWORD *)v109 + 3) = v112[3];
                    *((_OWORD *)v109 + 4) = v112[4];
                    *((_OWORD *)v109 + 5) = v112[5];
                    *((_OWORD *)v109 + 6) = v112[6];
                    v109 += 32;
                    v113 = v112[7];
                    v112 += 8;
                    *((_OWORD *)v109 - 1) = v113;
                    --v101;
                  }
                  while ( v101 );
                  *(_OWORD *)v109 = *v112;
                  *((_OWORD *)v109 + 1) = v112[1];
                  *((_OWORD *)v109 + 2) = v112[2];
                  *((_OWORD *)v109 + 3) = v112[3];
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 216);
                  *((_QWORD *)a2 + 216) = *((_QWORD *)a1 + 216);
                  *((_QWORD *)a1 + 216) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 217);
                  *((_QWORD *)a2 + 217) = *((_QWORD *)a1 + 217);
                  *((_QWORD *)a1 + 217) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 219);
                  *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
                  *((_QWORD *)a1 + 219) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 220);
                  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
                  *((_QWORD *)a1 + 220) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 221);
                  *((_QWORD *)a2 + 221) = *((_QWORD *)a1 + 221);
                  *((_QWORD *)a1 + 221) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 222);
                  *((_QWORD *)a2 + 222) = *((_QWORD *)a1 + 222);
                  *((_QWORD *)a1 + 222) = *(_QWORD *)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[661];
                  a2[661] = a1[661];
                  *(_DWORD *)(a1 + 661) = *(_DWORD *)(HDEV)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 331);
                  *((_QWORD *)a2 + 331) = *((_QWORD *)a1 + 331);
                  *((_QWORD *)a1 + 331) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 332);
                  *((_QWORD *)a2 + 332) = *((_QWORD *)a1 + 332);
                  *((_QWORD *)a1 + 332) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 334);
                  *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
                  *((_QWORD *)a1 + 334) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 335);
                  *((_QWORD *)a2 + 335) = *((_QWORD *)a1 + 335);
                  *((_QWORD *)a1 + 335) = *(_QWORD *)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 333);
                  *((_QWORD *)a2 + 333) = *((_QWORD *)a1 + 333);
                  *((_QWORD *)a1 + 333) = *(_QWORD *)v7;
                  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 337))(*((_QWORD *)a2 + 225), a2);
                  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 337))(*((_QWORD *)a1 + 225), a1);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v119, v122);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v120, v123);
                  vResetSurfacePalette(a1);
                  vResetSurfacePalette(a2);
                  if ( qword_1C02556F0 )
                    v114 = qword_1C02556F0();
                  else
                    v114 = -1073741637;
                  if ( v114 >= 0 && qword_1C02556F8 )
                    qword_1C02556F8(a1, a2);
                  ++gcModeChanges;
                  v6 = 1;
                  break;
                }
                v40 = (HDEV)v44[5];
                v41 = *v44;
                if ( v40 == a1 )
                {
                  v44[5] = (__int64)a2;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v120, v45, v46);
                  v43 = &v119;
                  goto LABEL_68;
                }
                if ( v40 == a2 )
                {
                  v44[5] = (__int64)a1;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v119, v45, v46);
                  v43 = &v120;
LABEL_68:
                  PDEVOBJ::vUnreferencePdev((struct PDEV **)v43, 0, v42);
                }
                v39 = v41;
                goto LABEL_70;
              }
              goto LABEL_42;
            }
          }
        }
      }
LABEL_126:
      Win32FreePool(v7);
      vEnableSynchronize();
      vEnableSynchronize();
    }
  }
  return v6;
}
