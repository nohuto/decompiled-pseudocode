/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011478
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0012620 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     hdcOpenDCW @ 0x1C0021590 (hdcOpenDCW.c)
 * Callees:
 *     IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C0005AA8 (IsGetWin8StyleDpiSettingFromRegistrySupported.c)
 *     GetWin8StyleDpiSettingFromRegistry @ 0x1C0005AD4 (GetWin8StyleDpiSettingFromRegistry.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C001120C (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00123F0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0013180 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00131B0 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00132C8 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x1C00133B8 (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     AlignRects @ 0x1C0013508 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C001358C (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00135B0 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0013658 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0013F94 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00140B4 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C0014250 (DrvGetDisplayDriverNames.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015CCC (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00163F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001D190 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C001DEB0 (UserIsWddmConnectedSession.c)
 *     DrvGetDeviceFromName @ 0x1C0021400 (DrvGetDeviceFromName.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00302B0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C00ABB40 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00B7374 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00C2810 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C3B40 (DrvDxgkLogCodePointPacket.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00C3BB8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00C4308 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     wcsncmp @ 0x1C00C552C (wcsncmp.c)
 *     memcmp @ 0x1C00CE7B0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0143930 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C0145588 (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
 *     IsGetDpiSettingWithNoDefaultSupported @ 0x1C01FBCE0 (IsGetDpiSettingWithNoDefaultSupported.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v9; // rbx
  _QWORD *v12; // rax
  struct _MDEV *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  struct _devicemodeW *v18; // rax
  HDEV v19; // r11
  unsigned int v20; // r9d
  struct D3DKMT_GETPATHSMODALITY *v21; // r13
  int v22; // ebx
  int v23; // edi
  wchar_t *v24; // r8
  unsigned int cx; // r12d
  unsigned int v26; // r15d
  bool v27; // sf
  HDEV v28; // rdi
  wchar_t *DeviceFromName; // r14
  int i; // eax
  unsigned __int16 v31; // cx
  int PrimaryAttachFlags; // eax
  unsigned int v33; // r12d
  unsigned int *v34; // r14
  UNICODE_STRING *v35; // rax
  MULTIDEVLOCKOBJ *v36; // r15
  unsigned int v37; // edx
  unsigned int v38; // ebx
  unsigned int v39; // edx
  unsigned int *v40; // r8
  unsigned int v41; // eax
  char v42; // r9
  unsigned int v43; // ecx
  unsigned int v44; // ebx
  _DWORD *v45; // rdi
  struct D3DKMT_GETPATHSMODALITY *v46; // rax
  struct tagRECT *v47; // r13
  unsigned int v48; // r10d
  unsigned int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rax
  _DWORD *v52; // r8
  __int64 v53; // rax
  unsigned int v54; // r12d
  __int64 v55; // rdi
  unsigned int v56; // ebx
  __int64 v57; // rbx
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned int v61; // r12d
  unsigned int v62; // r14d
  __int64 v63; // r12
  __int64 v64; // rbx
  void (__fastcall *v65)(__int64, __int64); // rax
  struct tagRECT v66; // xmm0
  __int64 v67; // rax
  int v69; // eax
  bool v70; // zf
  __int64 v71; // rax
  struct _DRV_NAMES *v72; // r13
  int v73; // ecx
  unsigned int v74; // edi
  unsigned int v75; // r15d
  unsigned int v76; // r12d
  struct _devicemodeW *v77; // rbx
  struct _devicemodeW *v78; // rcx
  int v79; // eax
  unsigned int v80; // ebx
  struct _devicemodeW *v81; // rax
  __int64 v82; // rbx
  __int64 v83; // r10
  __int64 DisplayDriverNames; // rax
  struct _DRV_NAMES *v85; // r12
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // r15
  unsigned __int16 v89; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v92; // rax
  int v93; // eax
  unsigned int v94; // eax
  HDEV v95; // rcx
  unsigned int v96; // eax
  HDEV *v97; // rdx
  __int64 v98; // r8
  HDEV v99; // rax
  unsigned int v100; // ecx
  unsigned int *v101; // rbx
  unsigned __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned int v106; // eax
  unsigned int v107; // edx
  unsigned int v108; // edx
  int v109; // ecx
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned int v112; // edx
  int v113; // eax
  unsigned int v114; // edx
  unsigned int v115; // r8d
  int v116; // eax
  __int64 v117; // rcx
  __int64 v118; // rdx
  unsigned int v119; // r14d
  __int64 v120; // rbx
  unsigned int v121; // r14d
  bool v122; // r8
  unsigned int v123; // kr00_4
  unsigned int v124; // ecx
  unsigned int v125; // eax
  unsigned int v126; // edx
  unsigned int v127; // ecx
  unsigned int v128; // eax
  __int64 v129; // rdx
  __int64 v130; // rcx
  unsigned int v131; // r9d
  unsigned __int64 v132; // rdx
  __int64 v133; // rax
  int v134; // ecx
  __int64 v135; // rdx
  struct _ERESOURCE *v136; // rcx
  unsigned int v137; // eax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rax
  int v144; // eax
  __int64 v145; // rax
  struct _devicemodeW *v146; // rbx
  struct _devicemodeW *v147; // rcx
  struct _devicemodeW *v148; // rcx
  int v149; // ebx
  struct _devicemodeW *v150; // rax
  struct _devicemodeW *v151; // rdx
  int v152; // eax
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  int DpiSettingWithNoDefaultSupported; // eax
  unsigned int v160; // eax
  _QWORD *v161; // rax
  int v162; // edx
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // r14
  unsigned int v166; // ecx
  unsigned int v167; // eax
  int v168; // r8d
  unsigned int v169; // edx
  __int64 v170; // rdi
  __int64 v171; // r10
  __int64 v172; // rbx
  unsigned int v173; // r10d
  __int64 v174; // rdi
  unsigned int v175; // edx
  __int64 v176; // r9
  __int64 v177; // r8
  __int64 v178; // rax
  int v179; // ecx
  unsigned int *v180; // r12
  unsigned int v181; // r8d
  __int64 v182; // rbx
  unsigned int Src; // [rsp+28h] [rbp-D1h]
  unsigned int Srca; // [rsp+28h] [rbp-D1h]
  int v185; // [rsp+38h] [rbp-C1h]
  int v186; // [rsp+38h] [rbp-C1h]
  struct _DPI_INFORMATION *v187; // [rsp+40h] [rbp-B9h]
  int v188; // [rsp+40h] [rbp-B9h]
  int v189; // [rsp+58h] [rbp-A1h]
  unsigned int v190; // [rsp+5Ch] [rbp-9Dh]
  struct _devicemodeW *v191; // [rsp+60h] [rbp-99h] BYREF
  int v192; // [rsp+68h] [rbp-91h]
  int v193; // [rsp+6Ch] [rbp-8Dh] BYREF
  int v194; // [rsp+70h] [rbp-89h]
  int PruneFlag; // [rsp+74h] [rbp-85h]
  unsigned int v196; // [rsp+78h] [rbp-81h]
  int v197; // [rsp+7Ch] [rbp-7Dh]
  struct _devicemodeW *v198; // [rsp+80h] [rbp-79h]
  unsigned int v199; // [rsp+88h] [rbp-71h] BYREF
  int v200; // [rsp+8Ch] [rbp-6Dh]
  HDEV v201; // [rsp+90h] [rbp-69h] BYREF
  __int64 v202; // [rsp+98h] [rbp-61h]
  unsigned int v203; // [rsp+A0h] [rbp-59h] BYREF
  void *Buf2; // [rsp+A8h] [rbp-51h]
  struct tagSIZE v205; // [rsp+B0h] [rbp-49h] BYREF
  struct tagSIZE v206; // [rsp+B8h] [rbp-41h] BYREF
  struct tagSIZE v207; // [rsp+C0h] [rbp-39h]
  _DWORD v208[2]; // [rsp+C8h] [rbp-31h] BYREF
  struct tagSIZE *v209; // [rsp+D0h] [rbp-29h]
  struct tagSIZE v210[2]; // [rsp+D8h] [rbp-21h] BYREF
  __int128 v211; // [rsp+E8h] [rbp-11h]
  PCUNICODE_STRING String1a; // [rsp+148h] [rbp+4Fh]
  unsigned int v216; // [rsp+158h] [rbp+5Fh]
  unsigned int v218; // [rsp+160h] [rbp+67h]
  struct _MDEV *v219; // [rsp+168h] [rbp+6Fh]
  int v220; // [rsp+168h] [rbp+6Fh]

  v9 = a4;
  v189 = 0;
  v192 = 0;
  v197 = 0;
  v206.cx = 0;
  v200 = a4 & 1;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v13 = a5;
  v12[3] = a1;
  v12[4] = a3;
  v12[5] = v9;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  v14 = PALLOCMEM2(0x60uLL);
  v17 = v14;
  if ( !v14 )
    goto LABEL_90;
  *(_DWORD *)(v14 + 20) = 0;
  *(_QWORD *)(v14 + 24) = a3;
  v18 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL);
  v19 = 0LL;
  v198 = v18;
  if ( !v18 )
    goto LABEL_300;
  v20 = a6;
  v21 = a9;
  v194 = a8;
  PruneFlag = a6 != 0;
  v22 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    LODWORD(v202) = v22;
    while ( 2 )
    {
      v23 = v189;
      v16 = 1LL;
      v190 = 1;
      v15 = 0x1000000000LL;
      v201 = 0LL;
      v24 = 0LL;
      v207 = 0LL;
      cx = 0;
      v205.cx = 0;
      v26 = 0;
      v199 = 0;
      v203 = 0;
      v196 = 0;
      while ( 1 )
      {
        v27 = v23 < 0;
        if ( v23 )
          break;
        v28 = v19;
        Buf2 = v19;
        v201 = v19;
        if ( a1 )
        {
          if ( !v24 )
          {
            DeviceFromName = (wchar_t *)DrvGetDeviceFromName(a1);
            v20 = a6;
            v207 = (struct tagSIZE)DeviceFromName;
            v15 = a5 != 0LL ? v190 : 0;
            v19 = 0LL;
            v190 = v15;
            v16 = (unsigned int)v15;
            goto LABEL_15;
          }
        }
        else if ( !v24 )
        {
          goto LABEL_9;
        }
        if ( v13 )
        {
          if ( cx >= *((_DWORD *)v13 + 5) )
            goto LABEL_33;
          v133 = cx++;
          v205.cx = cx;
          v28 = (HDEV)*((_QWORD *)v13 + 7 * v133 + 5);
          Buf2 = v28;
          DeviceFromName = (wchar_t *)*((_QWORD *)v28 + 322);
          if ( DeviceFromName == v24 )
            goto LABEL_27;
          v134 = v192 ^ 1;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) == 0 )
            v134 = v192;
          if ( v134 )
            goto LABEL_27;
          EngAcquireSemaphore(ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(*((HSEMAPHORE *)v28 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6), 11LL);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v135 = *((_QWORD *)v28 + 443);
          ++*((_DWORD *)v28 + 3);
          ++*((_DWORD *)v28 + 2);
          TrackObjectReferenceIncrement(1LL, v135);
          if ( ((_DWORD)v28[10] & 0x400) != 0 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
              PsLeavePriorityRegion();
            }
            DrvEnableDisplay(v28);
            EngAcquireSemaphore(ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6));
          v136 = (struct _ERESOURCE *)*((_QWORD *)v28 + 6);
          if ( v136 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v136);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          v19 = 0LL;
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
            PsLeavePriorityRegion();
            v19 = 0LL;
          }
          v16 = v190;
          v20 = a6;
          v137 = (*((_DWORD *)DeviceFromName + 40) >> 2) & 1;
          v199 = 1;
          v203 = v137;
          goto LABEL_15;
        }
LABEL_9:
        if ( v22 == 4 )
        {
          if ( v26 >= *((unsigned __int16 *)v21 + 10) )
            goto LABEL_33;
          v82 = v26;
          if ( (*((_QWORD *)v21 + 34 * v26 + 6) & 0x1000000000LL) != 0 )
            goto LABEL_223;
          if ( !IsPrimaryPathInCloneGroup(v21, v26) || *(_DWORD *)((char *)v21 + v83 + 240) < (int)v19 )
          {
            v16 = v190;
LABEL_223:
            v196 = ++v26;
            goto LABEL_29;
          }
          DeviceFromName = gpGraphicsDeviceList;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0
                && *((_DWORD *)DeviceFromName + 62) == *(_DWORD *)((char *)v21 + v83 + 64)
                && *((_DWORD *)DeviceFromName + 63) == *(_DWORD *)((char *)v21 + v83 + 68)
                && *((_DWORD *)DeviceFromName + 64) == *(_DWORD *)((char *)v21 + v83 + 72) )
              {
                break;
              }
              DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
            }
            while ( DeviceFromName );
            goto LABEL_120;
          }
          goto LABEL_232;
        }
        DeviceFromName = gpGraphicsDeviceList;
        for ( i = (int)v19; DeviceFromName && i != cx; ++i )
          DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
        v205.cx = ++cx;
        if ( gbBaseVideo != (_DWORD)v19 && DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x2800000) == 0 )
          goto LABEL_28;
LABEL_15:
        if ( v22 == 4 )
        {
          if ( v28 )
          {
            v138 = WdLogNewEntry5_WdAssertion(v16, v15);
            WdLogEvent5_WdAssertion(v138);
            v19 = 0LL;
          }
LABEL_120:
          if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 41) & 1) == 0 )
          {
            DisplayDriverNames = DrvGetDisplayDriverNames(DeviceFromName);
            v19 = 0LL;
            v85 = (struct _DRV_NAMES *)DisplayDriverNames;
            if ( !DisplayDriverNames )
              goto LABEL_132;
            v86 = *((unsigned __int16 *)v21 + 10);
            if ( v26 >= (unsigned int)v86 )
            {
              v139 = WdLogNewEntry5_WdAssertion(v86, v15);
              WdLogEvent5_WdAssertion(v139);
            }
            v87 = 0x1000000000LL;
            v88 = 272LL * v26;
            if ( (*(_QWORD *)((_BYTE *)v21 + v88 + 48) & 0x1000000000LL) != 0 )
            {
              v140 = WdLogNewEntry5_WdAssertion(0x1000000000LL, v15);
              WdLogEvent5_WdAssertion(v140);
            }
            if ( !*(_QWORD *)((char *)v21 + v88 + 272) )
            {
              v141 = WdLogNewEntry5_WdAssertion(v87, v15);
              WdLogEvent5_WdAssertion(v141);
            }
            v89 = gdmLogPixels;
            if ( !gdmLogPixels )
            {
              v89 = 0;
              v193 = 0;
              if ( qword_1C02578A0 )
              {
                qword_1C02578A0(1LL, &v193);
                v89 = v193;
              }
              gdmLogPixels = v89;
            }
            *(_WORD *)(*(_QWORD *)((char *)v21 + v88 + 272) + 166LL) = v89;
            DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            v28 = hCreateHDEV(
                    (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                    v85,
                    *(struct _devicemodeW **)((char *)v21 + v88 + 272),
                    a3,
                    DriverCapableOverRide,
                    DriverAccelerationsLevel,
                    v200,
                    (a4 >> 2) & 1,
                    1u,
                    &v201);
            Win32FreePool(v85);
            v19 = 0LL;
            if ( v28 )
            {
              v16 = *(unsigned int *)((char *)v21 + v88 + 236);
              v26 = v196;
              *((_DWORD *)v28 + 661) = v16;
LABEL_132:
              if ( v28 )
              {
LABEL_133:
                v196 = ++v26;
                goto LABEL_134;
              }
            }
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2LL);
            v26 = v196;
            v19 = 0LL;
          }
          if ( v28 )
            goto LABEL_133;
          v82 = v26;
LABEL_232:
          if ( !IsPrimaryPathInCloneGroup(v21, v26) || *((_DWORD *)v21 + 68 * v82 + 60) < (int)v19 )
          {
            v143 = WdLogNewEntry5_WdAssertion(v142, v15);
            WdLogEvent5_WdAssertion(v143);
            v19 = 0LL;
          }
          v16 = (unsigned __int16)v19;
          if ( (unsigned __int16)v19 < *((_WORD *)v21 + 10) )
          {
            do
            {
              v15 = 272LL * (unsigned __int16)v16;
              if ( *(_DWORD *)((char *)v21 + v15 + 232) == *((_DWORD *)v21 + 68 * v82 + 58) )
                *(_DWORD *)((char *)v21 + v15 + 240) = -1073741823;
              LOWORD(v16) = v16 + 1;
            }
            while ( (unsigned __int16)v16 < *((_WORD *)v21 + 10) );
          }
          goto LABEL_133;
        }
        if ( !DeviceFromName )
          goto LABEL_33;
        if ( (*((_DWORD *)DeviceFromName + 41) & 1) != 0 )
          goto LABEL_28;
        if ( v20 == -1 )
        {
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          LODWORD(v19) = 0;
        }
        if ( v28 )
        {
LABEL_135:
          v92 = WdLogNewEntry5_WdTrace(v16, v15);
          WdLogEvent5_WdTrace(v92);
          v93 = *((_DWORD *)DeviceFromName + 40);
          v19 = 0LL;
          v197 = 1;
          if ( v203 )
            v94 = v93 | 4;
          else
            v94 = v93 & 0xFFFFFFFB;
          *((_DWORD *)DeviceFromName + 40) = v94;
          v95 = v201;
          if ( !v201 )
          {
            if ( a5 )
            {
              v96 = *((_DWORD *)a5 + 5);
              if ( v96 )
              {
                v97 = (HDEV *)((char *)a5 + 40);
                v98 = v96;
                do
                {
                  v99 = *v97;
                  v97 += 7;
                  if ( DeviceFromName == *((wchar_t **)v99 + 322) )
                    v95 = v99;
                  v201 = v95;
                  --v98;
                }
                while ( v98 );
              }
            }
          }
          *(_QWORD *)(56LL * *(unsigned int *)(v17 + 20) + v17 + 40) = v28;
          *(_QWORD *)(56LL * *(unsigned int *)(v17 + 20) + v17 + 48) = v201;
          v100 = *(_DWORD *)(v17 + 20);
          if ( v100 + 2 >= v100 )
          {
            v101 = (unsigned int *)v17;
            *(_DWORD *)(v17 + 20) = v100 + 1;
            v102 = 96LL * (v100 + 2);
            if ( v102 > 0xFFFFFFFF )
            {
              v17 = 0LL;
            }
            else
            {
              v103 = PALLOCMEM2((unsigned int)v102);
              v19 = 0LL;
              v17 = v103;
            }
            if ( !v17 )
            {
              v13 = a5;
              v23 = -1073741670;
              v16 = v190;
              v17 = (__int64)v101;
              v189 = -1073741670;
              goto LABEL_30;
            }
            memmove((void *)v17, v101, 96LL * v101[5]);
            Win32FreePool(v101);
            v19 = 0LL;
          }
          goto LABEL_27;
        }
        if ( gForceDisconnect != (_DWORD)v19 || v22 == 3 )
          v31 = -1;
        else
          v31 = gProtocolType;
        PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)DeviceFromName, v31, &v203, &v199);
        v19 = 0LL;
        if ( !PrimaryAttachFlags )
          goto LABEL_33;
        if ( v22 == 1 || v22 == 3 )
        {
          if ( !v199 )
            goto LABEL_27;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
          {
            v69 = v192;
          }
          else
          {
            if ( !v192 )
              goto LABEL_96;
            v69 = 0;
          }
          v70 = v69 == 0;
        }
        else
        {
          if ( v22 != 2 )
          {
            v145 = WdLogNewEntry5_WdAssertion(v16, v15);
            WdLogEvent5_WdAssertion(v145);
            v19 = 0LL;
            if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || v197 )
              goto LABEL_27;
            goto LABEL_96;
          }
          v144 = *((_DWORD *)DeviceFromName + 40);
          if ( (v144 & 8) == 0 )
          {
            if ( (v144 & 0x2000000) != 0 || v197 || gProtocolType == -1 )
              goto LABEL_27;
            goto LABEL_96;
          }
          if ( !v199 )
            goto LABEL_27;
          v70 = v192 == 0;
        }
        if ( v70 )
          goto LABEL_27;
LABEL_96:
        v71 = DrvGetDisplayDriverNames(DeviceFromName);
        v19 = 0LL;
        v72 = (struct _DRV_NAMES *)v71;
        if ( !v71 )
          goto LABEL_27;
        v73 = *((_DWORD *)DeviceFromName + 40);
        v191 = 0LL;
        v193 = 0;
        if ( (v73 & 8) != 0 )
        {
          v74 = 4;
          v75 = 0;
          v76 = 0;
        }
        else
        {
          v74 = 1;
          v75 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v76 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        }
        if ( a2 )
        {
          v78 = a2;
        }
        else
        {
          v77 = v198;
          memset(v198, 0, sizeof(struct _devicemodeW));
          v78 = v77;
          v77->dmSize = 220;
        }
        v79 = DrvProbeAndCaptureDevmode(
                (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                &v191,
                &v193,
                0LL,
                v78,
                0,
                PruneFlag,
                a7,
                v194,
                0LL);
        if ( v79 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4LL);
LABEL_104:
          v80 = a4;
          v28 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  v72,
                  v191,
                  a3,
                  v75,
                  v76,
                  v200,
                  (a4 >> 2) & 1,
                  v74,
                  &v201);
          if ( !v28 && (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
          goto LABEL_105;
        }
        if ( v79 == -1073741776 )
        {
          v146 = *(struct _devicemodeW **)(*(_QWORD *)(v17 + 40) + 2592LL);
          if ( v191 && v191 != v198 )
          {
            Win32FreePool(v191);
            v191 = 0LL;
          }
          v79 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v191,
                  &v193,
                  0LL,
                  v146,
                  0,
                  PruneFlag,
                  a7,
                  v194,
                  0LL);
        }
        if ( v79 >= 0 )
          goto LABEL_104;
        DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL);
        v28 = (HDEV)Buf2;
        v80 = a4;
        if ( (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
          gulDriverFailureReason = 4;
LABEL_105:
        v81 = a2;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || a2 )
          goto LABEL_284;
        if ( !v28 )
        {
          DrvLogDisplayDriverEvent(4LL);
          v147 = v191;
          if ( v191 )
          {
            if ( v191->dmBitsPerPel == 4 )
            {
              DrvLogDisplayDriverEvent(5LL);
              v147 = v191;
            }
            if ( v147 != v198 )
            {
              Win32FreePool(v147);
              v191 = 0LL;
            }
          }
          memset(v198, 0, sizeof(struct _devicemodeW));
          v148 = v198;
          v198->dmSize = 220;
          if ( (int)DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                      &v191,
                      &v193,
                      0LL,
                      v148,
                      1,
                      PruneFlag,
                      a7,
                      v194,
                      0LL) < 0
            || (v149 = (v80 >> 2) & 1,
                (v28 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                         v72,
                         v191,
                         a3,
                         v75,
                         v76,
                         v200,
                         v149,
                         1u,
                         &v201)) != 0LL) )
          {
LABEL_279:
            v150 = v191;
          }
          else
          {
            v150 = v191;
            if ( v191->dmPelsWidth != 640 || v191->dmPelsHeight != 480 || v191->dmBitsPerPel != 4 )
            {
              if ( v191 != v198 )
              {
                Win32FreePool(v191);
                v191 = 0LL;
              }
              memset(v198, 0, sizeof(struct _devicemodeW));
              v151 = v198;
              v198->dmSize = 220;
              v152 = v194;
              v151->dmBitsPerPel = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0 ? 32 : 4;
              v188 = a7;
              v186 = PruneFlag;
              v151->dmPelsWidth = 640;
              v151->dmPelsHeight = 480;
              v151->dmFields = 1835008;
              if ( (int)DrvProbeAndCaptureDevmode(
                          (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                          &v191,
                          &v193,
                          0LL,
                          v151,
                          0,
                          v186,
                          v188,
                          v152,
                          0LL) >= 0 )
                v28 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        v72,
                        v191,
                        a3,
                        v75,
                        v76,
                        v200,
                        v149,
                        1u,
                        &v201);
              goto LABEL_279;
            }
          }
          if ( v150 )
          {
            v153 = v28 != 0LL;
          }
          else
          {
            v150 = v198;
            v153 = 2LL;
          }
          DrvDxgkLogCodePointPacket(26LL, v153, v150->dmPelsWidth);
          v81 = 0LL;
LABEL_284:
          if ( !v28 && !v81 )
          {
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2LL);
          }
        }
        if ( v191 && v191 != v198 )
          Win32FreePool(v191);
        Win32FreePool(v72);
        v26 = v196;
        v19 = 0LL;
LABEL_134:
        if ( v28 )
          goto LABEL_135;
LABEL_27:
        v16 = v190;
LABEL_28:
        v13 = a5;
LABEL_29:
        v23 = v189;
LABEL_30:
        v22 = v202;
        v15 = 0x1000000000LL;
        v21 = a9;
        cx = v205.cx;
        v24 = (wchar_t *)v207;
        v20 = a6;
        if ( !(_DWORD)v16 )
        {
          v27 = v23 < 0;
          break;
        }
      }
      if ( v27 )
        goto LABEL_291;
LABEL_33:
      if ( v22 == 4 )
      {
        if ( v197 != (_DWORD)v19 )
        {
          v104 = WdLogNewEntry5_WdTrace(v16, v15);
          WdLogEvent5_WdTrace(v104);
          v22 = 1;
          LODWORD(v202) = 1;
          goto LABEL_152;
        }
        v156 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v156 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v156);
        goto LABEL_300;
      }
      if ( v197 != (_DWORD)v19 )
      {
        if ( v192 != (_DWORD)v19 )
        {
          v189 = (int)v19;
          goto LABEL_37;
        }
        v105 = WdLogNewEntry5_WdTrace(v16, v15);
        WdLogEvent5_WdTrace(v105);
LABEL_152:
        v13 = a5;
        v19 = 0LL;
        v20 = a6;
        v192 = 1;
        continue;
      }
      break;
    }
    if ( v22 == 1 )
    {
      v154 = WdLogNewEntry5_WdTrace(v16, v15);
      WdLogEvent5_WdTrace(v154);
      v19 = 0LL;
      v22 = 2;
      v194 = 0;
LABEL_298:
      v20 = a6;
      v13 = a5;
      continue;
    }
    break;
  }
  if ( v22 == 2 && (unsigned int)UserIsWddmConnectedSession(v16, v15) )
  {
    v155 = WdLogNewEntry5_WdTrace(v16, v15);
    WdLogEvent5_WdTrace(v155);
    v19 = 0LL;
    v22 = 3;
    goto LABEL_298;
  }
  if ( !cx )
  {
    v158 = WdLogNewEntry5_WdTrace(v16, v15);
    WdLogEvent5_WdTrace(v158);
    goto LABEL_300;
  }
  v157 = WdLogNewEntry5_WdTrace(v16, v15);
  WdLogEvent5_WdTrace(v157);
  v23 = -1073741204;
  v19 = 0LL;
  v189 = -1073741204;
LABEL_291:
  if ( v23 )
  {
LABEL_87:
    if ( v189 < 0 )
      goto LABEL_300;
    goto LABEL_88;
  }
LABEL_37:
  if ( (a4 & 2) != 0 )
    goto LABEL_87;
  v218 = (unsigned int)v19;
  v219 = (struct _MDEV *)v19;
  v33 = (unsigned int)v19;
  v34 = (unsigned int *)v19;
  v35 = (UNICODE_STRING *)Win32AllocPool(104LL, 1819109447LL);
  String1a = v35;
  v36 = (MULTIDEVLOCKOBJ *)v35;
  if ( v35 )
  {
    *(_QWORD *)&v35->Length = 1LL;
    v35->Buffer = 0LL;
    *(_QWORD *)&v35[1].Length = 0LL;
  }
  else
  {
    v36 = 0LL;
    String1a = 0LL;
  }
  if ( v36 )
  {
    MULTIDEVLOCKOBJ::vInit(v36, (struct _MDEV *)v17);
    if ( (*(_DWORD *)v36 & 1) != 0 )
    {
      MULTIDEVLOCKOBJ::vLock(v36);
      v38 = *(_DWORD *)(v17 + 20);
      v39 = 0;
      if ( v38 )
      {
        do
        {
          v40 = *(unsigned int **)(*(_QWORD *)(56LL * v39 + v17 + 40) + 2576LL);
          v41 = v40[40];
          if ( (v41 & 8) != 0 )
          {
            if ( (v41 & 4) != 0 )
            {
              v41 &= ~4u;
              v40[40] = v41;
            }
            v43 = v41;
            v42 = v41;
          }
          else
          {
            v42 = v40[40];
            v43 = v40[40];
            if ( !v34 )
              v33 = v39;
          }
          if ( (v42 & 4) != 0 )
          {
            if ( v34 )
            {
              v189 = -1073741438;
              v40[40] = v43 & 0xFFFFFFFB;
            }
            else
            {
              v34 = v40;
              v33 = v39;
            }
          }
          v38 = *(_DWORD *)(v17 + 20);
          ++v39;
        }
        while ( v39 < v38 );
        v218 = v33;
        v219 = (struct _MDEV *)v34;
      }
      v44 = 16 * v38;
      Buf2 = (void *)PALLOCMEM2(v44);
      v45 = Buf2;
      v46 = (struct D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(v44);
      a9 = v46;
      v47 = (struct tagRECT *)v46;
      if ( v45 )
      {
        if ( v46 )
        {
          v48 = 0;
          v216 = 0;
          v49 = 0;
          if ( *(_DWORD *)(v17 + 20) )
          {
            do
            {
              v50 = 2LL * v49;
              v51 = *(_QWORD *)(56LL * v49 + v17 + 40);
              v52 = *(_DWORD **)(v51 + 2592);
              v45[2 * v50] = v52[19];
              v45[2 * v50 + 1] = v52[20];
              v45[2 * v50 + 2] = v52[19] + v52[43];
              v45[2 * v50 + 3] = v52[20] + v52[44];
              if ( (*(_DWORD *)(*(_QWORD *)(v51 + 2576) + 160LL) & 8) == 0 )
              {
                if ( !v34 && !v52[19] && !v52[20] )
                {
                  v33 = v49;
                  v34 = *(unsigned int **)(v51 + 2576);
                }
                ++v48;
              }
              ++v49;
            }
            while ( v49 < *(_DWORD *)(v17 + 20) );
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v216 = v48;
            v218 = v33;
            v219 = (struct _MDEV *)v34;
          }
          memmove(v47, v45, v44);
          if ( !gDrvDpiAdjusted )
          {
            gDrvDpiWin8Style = 0;
            a6 = 0;
            if ( ((gProtocolType + 1) & 0xFFFE) == 0 && (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
            {
              GetWin8StyleDpiSettingFromRegistry();
              if ( gDrvDpiWin8Style )
              {
                DpiSettingWithNoDefaultSupported = IsGetDpiSettingWithNoDefaultSupported();
                if ( DpiSettingWithNoDefaultSupported >= 0 && qword_1C02563E8 )
                  qword_1C02563E8(0LL, &a6);
                v160 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v160 = 96;
                if ( v160 >= 0x1E0 )
                  LOWORD(v160) = 480;
                gdmLogPixels = v160;
              }
            }
          }
          v53 = v33;
          v54 = 0;
          v55 = *(_QWORD *)(56 * v53 + v17 + 40);
          v202 = v55;
          *(_DWORD *)(*(_QWORD *)(v55 + 2576) + 160LL) |= 4u;
          v56 = *(_DWORD *)(v17 + 20);
          if ( v56 )
          {
            do
            {
              v57 = *(_QWORD *)(56LL * v54 + v17 + 40);
              if ( (*(_DWORD *)(*(_QWORD *)(v57 + 2576) + 160LL) & 0x800000) != 0 )
              {
                v58 = 0;
                if ( v54 == v218 )
                  v58 = 32;
                *(_DWORD *)(v57 + 2548) = *(_DWORD *)(v57 + 2548) & 0xFFFFFFDF | v58;
                a6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))qword_1C0251A80)(
                       *(_QWORD *)(*(_QWORD *)(v57 + 2576) + 240LL),
                       *(unsigned int *)(*(_QWORD *)(v57 + 2576) + 256LL),
                       v57 + 2136);
                if ( a6 < 0 )
                {
                  v161 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59);
                  v161[3] = a6;
                  v161[4] = *(_QWORD *)(*(_QWORD *)(v57 + 2576) + 240LL);
                  v161[5] = *(unsigned int *)(*(_QWORD *)(v57 + 2576) + 256LL);
                  WdLogEvent5_WdError(v161);
                }
              }
              v56 = *(_DWORD *)(v17 + 20);
              ++v54;
            }
            while ( v54 < v56 );
            v55 = v202;
            v34 = (unsigned int *)v219;
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v47 = (struct tagRECT *)a9;
          }
          v61 = 0;
          if ( !gDrvDpiAdjusted )
          {
            gDrvDpiWin8Style = 0;
            a6 = 0;
            if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
            {
              v106 = *(_DWORD *)(v55 + 3552);
              if ( v106 )
              {
                v107 = (96 * HIWORD(v106) + 50) / 0x64u;
              }
              else
              {
                if ( wcsncmp(*((const wchar_t **)v34 + 25), L"WORKERDD", v34[66])
                  && wcsncmp(*((const wchar_t **)v34 + 25), L"TSDDD", v34[66]) )
                {
                  gDrvDpiWin8Style = 1;
                }
                if ( qword_1C02578A0 )
                  qword_1C02578A0(2LL, &a6);
                v107 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v107 = 96;
                if ( v107 >= 0x1E0 )
                  v107 = 480;
                a6 = v107;
              }
              gdmLogPixels = v107;
              v108 = 0;
              v56 = *(_DWORD *)(v17 + 20);
              if ( v56 )
              {
                do
                {
                  v109 = gdmLogPixels;
                  v110 = v108++;
                  v111 = *(_QWORD *)(56 * v110 + v17 + 40);
                  *(_DWORD *)(v111 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v111 + 2176) = v109;
                  *(_WORD *)(*(_QWORD *)(v111 + 2592) + 166LL) = gdmLogPixels;
                  v56 = *(_DWORD *)(v17 + 20);
                }
                while ( v108 < v56 );
              }
            }
            else
            {
              v112 = (96 * *(_DWORD *)(v55 + 2468) + 50) / 0x64u;
              if ( (_WORD)v112 && qword_1C02578C0 )
                qword_1C02578C0(1LL, (unsigned __int16)v112);
              if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
                GetWin8StyleDpiSettingFromRegistry();
              if ( gDrvDpiWin8Style )
              {
                if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 && qword_1C02563E8 )
                  qword_1C02563E8(0LL, &a6);
                v114 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v114 = 96;
                if ( v114 >= 0x1E0 )
                  v114 = 480;
                a6 = v114;
              }
              else
              {
                v113 = *(_DWORD *)(v55 + 2464);
                if ( v113 )
                  v114 = (96 * v113 + 50) / 0x64u;
                else
                  LOWORD(v114) = 96;
              }
              gdmLogPixels = v114;
              v115 = 0;
              v56 = *(_DWORD *)(v17 + 20);
              if ( v56 )
              {
                do
                {
                  v116 = gdmLogPixels;
                  v117 = *(_QWORD *)(56LL * v115 + v17 + 40);
                  v118 = *(_QWORD *)(v117 + 2592);
                  *(_DWORD *)(v117 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v117 + 2176) = v116;
                  *(_WORD *)(v118 + 166) = gdmLogPixels;
                  if ( gDrvDpiWin8Style )
                  {
                    v162 = 100 * gdmLogPixels;
                    *(_DWORD *)(v117 + 2540) = 1234568;
                    *(_DWORD *)(v117 + 2464) = (v162 + 48) / 0x60u;
                  }
                  v56 = *(_DWORD *)(v17 + 20);
                  ++v115;
                }
                while ( v115 < v56 );
              }
            }
            gDrvDpiAdjusted = 1;
          }
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
          {
            v220 = 1;
            v119 = 1;
            if ( v56 )
            {
              do
              {
                v120 = *(_QWORD *)(56LL * v61 + v17 + 40);
                v121 = *(_DWORD *)(v120 + 3552);
                v122 = ((*(_DWORD *)(*(_QWORD *)(v120 + 2592) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                v123 = *(_DWORD *)(v120 + 2148);
                LOBYTE(a6) = v122;
                v124 = v123 / 0x3E8;
                v125 = *(_DWORD *)(v120 + 2144) / 0x3E8u;
                if ( v122 )
                {
                  v125 = v123 / 0x3E8;
                  v124 = *(_DWORD *)(v120 + 2144) / 0x3E8u;
                }
                v126 = *(_DWORD *)(v120 + 2156);
                v207 = (struct tagSIZE)__PAIR64__(v124, v125);
                v127 = *(_DWORD *)(v120 + 2152);
                v205 = v207;
                v128 = v127;
                if ( v122 )
                  v128 = v126;
                v208[0] = 1;
                if ( v122 )
                  v126 = v127;
                v191 = (struct _devicemodeW *)__PAIR64__(v126, v128);
                v206 = (struct tagSIZE)__PAIR64__(v126, v128);
                v209 = v210;
                *(_OWORD *)&v210[0].cx = 0LL;
                v208[1] = 32;
                v211 = 0LL;
                if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v208) < 0 )
                {
                  v163 = WdLogNewEntry5_WdAssertion(v130, v129);
                  WdLogEvent5_WdAssertion(v163);
                }
                v187 = (struct _DPI_INFORMATION *)(v120 + 2456);
                if ( v121 )
                {
                  FillDpiInfo(&v205, &v206, (struct tagSIZE)v210, v131, 0, HIWORD(v121), v185, v187);
                  *(_DWORD *)(v120 + 2548) |= 0x200u;
                  v119 = v220;
                }
                else
                {
                  *(_DWORD *)(v120 + 2548) &= ~0x200u;
                  v119 = 0;
                  v220 = 0;
                  FillDpiInfo(&v205, &v206, (struct tagSIZE)v210, v131, gdmLogPixels, 0, v185, v187);
                }
                GetRemoteScaleOverrideTestHook(
                  (const unsigned __int16 *)(*(_QWORD *)(v120 + 2576) + 64LL),
                  v132,
                  (struct _DPI_INFORMATION *)(v120 + 2456));
                ++v61;
                *(_DWORD *)(v120 + 2548) = *(_DWORD *)(v120 + 2548) & 0xFFFFFF7F | ((unsigned __int8)a6 << 7);
              }
              while ( v61 < *(_DWORD *)(v17 + 20) );
              v55 = v202;
              v47 = (struct tagRECT *)a9;
            }
            UserSetScaleFactorsFromRemoteMetric(v119);
            v206.cx = 1;
          }
          else
          {
            *((_DWORD *)gpsi + 559) &= ~0x40u;
          }
          gdmLogPixelsOfPrimary = (96 * *(_DWORD *)(v55 + 2468) + 50) / 0x64u;
          AlignRects(v47, v216);
          v45 = Buf2;
          if ( memcmp(v47, Buf2, 16LL * v216) )
          {
            v164 = WdLogNewEntry5_WdWarning();
            WdLogEvent5_WdWarning(v164);
          }
          v62 = 0;
          if ( *(_DWORD *)(v17 + 20) )
          {
            do
            {
              v63 = 56LL * v62;
              v64 = *(_QWORD *)(v63 + v17 + 40);
              *(_QWORD *)(v64 + 2584) = *(_QWORD *)&v47[v62].left;
              v65 = *(void (__fastcall **)(__int64, __int64))(v64 + 3384);
              if ( v65 )
                v65((*(_QWORD *)(v64 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v64 + 2552) != 0LL), 2LL);
              v66 = v47[v62++];
              *(struct tagRECT *)(v63 + v17 + 56) = v66;
              *(_DWORD *)(v63 + v17 + 72) = *(_DWORD *)(v64 + 2464);
            }
            while ( v62 < *(_DWORD *)(v17 + 20) );
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v45 = Buf2;
          }
          if ( (unsigned int)bUniformSpaceDpiMode() )
          {
            v165 = PALLOCMEM2((unsigned int)(4 * *(_DWORD *)(v17 + 20)));
            if ( v165 )
            {
              v166 = *(_DWORD *)(v17 + 20);
              v167 = 0;
              if ( v166 )
              {
                do
                {
                  *(_DWORD *)(v165 + 4LL * v167) = v167;
                  ++v167;
                  v166 = *(_DWORD *)(v17 + 20);
                }
                while ( v167 < v166 );
                v36 = (MULTIDEVLOCKOBJ *)String1a;
              }
              do
              {
                v168 = 0;
                v169 = 0;
                if ( v166 == 1 )
                {
                  v166 = *(_DWORD *)(v17 + 20);
                }
                else
                {
                  do
                  {
                    v170 = v169 + 1;
                    v171 = *(unsigned int *)(v165 + 4 * v170);
                    v172 = *(unsigned int *)(v165 + 4LL * v169);
                    if ( *(_DWORD *)(56 * (v172 + 1) + v17) > *(_DWORD *)(56 * (v171 + 1) + v17) )
                    {
                      *(_DWORD *)(v165 + 4LL * v169) = v171;
                      v168 = 1;
                      *(_DWORD *)(v165 + 4 * v170) = v172;
                    }
                    v166 = *(_DWORD *)(v17 + 20);
                    ++v169;
                  }
                  while ( (unsigned int)v170 < v166 - 1 );
                }
              }
              while ( v168 );
              v47 = (struct tagRECT *)a9;
              v173 = v166 - 1;
              LODWORD(v174) = 0;
              v175 = 0;
              if ( v166 == 1 )
              {
LABEL_352:
                v180 = (unsigned int *)(v165 + 4LL * (unsigned int)v174);
                MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v17, *v180, 0xFFFFFFFF, 0, Src);
                v181 = v174;
                if ( (unsigned int)v174 < *(_DWORD *)(v17 + 20) - 1 )
                {
                  do
                  {
                    v182 = v181 + 1;
                    MapMonitorToUnifromSpaceInStripe(
                      (struct _MDEV *)v17,
                      *(_DWORD *)(v165 + 4 * v182),
                      *(_DWORD *)(v165 + 4LL * v181),
                      1,
                      Srca);
                    v181 = v182;
                  }
                  while ( (unsigned int)v182 < *(_DWORD *)(v17 + 20) - 1 );
                  v47 = (struct tagRECT *)a9;
                }
                while ( (_DWORD)v174 )
                {
                  v174 = (unsigned int)(v174 - 1);
                  MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v17, *(_DWORD *)(v165 + 4 * v174), *v180--, 0, Srca);
                }
                *(_DWORD *)(v17 + 16) |= 2u;
                *(_DWORD *)(v17 + 32) = 96;
                gbUniformSpaceDpiMode = 1;
              }
              else
              {
                while ( 1 )
                {
                  v176 = v175 + 1;
                  v177 = 56 * (*(unsigned int *)(v165 + 4LL * v175) + 1LL);
                  v178 = 56 * (*(unsigned int *)(v165 + 4 * v176) + 1LL);
                  v179 = *(_DWORD *)(v178 + v17);
                  if ( *(_DWORD *)(v177 + v17 + 8) != v179 )
                    break;
                  if ( *(_DWORD *)(v177 + v17) || *(_DWORD *)(v177 + v17 + 4) )
                  {
                    if ( !v179 && !*(_DWORD *)(v178 + v17 + 4) )
                      LODWORD(v174) = v175 + 1;
                  }
                  else
                  {
                    LODWORD(v174) = v175;
                  }
                  ++v175;
                  if ( (unsigned int)v176 >= v173 )
                    goto LABEL_352;
                }
              }
              Win32FreePool(v165);
              v45 = Buf2;
            }
          }
          else
          {
            gbUniformSpaceDpiMode = 0;
          }
        }
        Win32FreePool(v45);
      }
      if ( v47 )
        Win32FreePool(v47);
      MULTIDEVLOCKOBJ::vUnlock(v36);
      if ( v206.cx )
        ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    }
    MULTIDEVLOCKOBJ::`scalar deleting destructor'(v36, v37);
    goto LABEL_87;
  }
LABEL_300:
  if ( v17 )
  {
    DrvBackoutMDEV((struct _MDEV *)v17, v15);
    Win32FreePool(v17);
    v17 = 0LL;
  }
LABEL_88:
  if ( v198 )
    Win32FreePool(v198);
LABEL_90:
  v67 = WdLogNewEntry5_WdTrace(v16, v15);
  *(_QWORD *)(v67 + 24) = v17;
  WdLogEvent5_WdTrace(v67);
  return (struct _MDEV *)v17;
}
