/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714
 * Callers:
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DD0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C006CE40 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C006F4B0 (UserRemoteConnectedSessionUsingXddm.c)
 *     DrvGetDeviceFromName @ 0x1C00719F0 (DrvGetDeviceFromName.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0072BC8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0073504 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0075FB4 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0076CBC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0076D18 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0076E30 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x1C0076F20 (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     AlignRects @ 0x1C0077068 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C00770EC (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0077110 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00793CC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C007A970 (DrvGetDisplayDriverNames.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00BB16C (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BEC88 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00C2B08 (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C00C57C0 (IsGetWin8StyleDpiSettingFromRegistrySupported.c)
 *     GetWin8StyleDpiSettingFromRegistry @ 0x1C00C57EC (GetWin8StyleDpiSettingFromRegistry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D05E0 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00D2A8C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00D3520 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D3B90 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?AdjustForOrientation@@YA?AUtagSIZE@@II_N@Z @ 0x1C00D4340 (-AdjustForOrientation@@YA-AUtagSIZE@@II_N@Z.c)
 *     wcsncmp @ 0x1C00D6268 (wcsncmp.c)
 *     memcmp @ 0x1C00DD6E0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01708D4 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C0172648 (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     IsGetDpiSettingWithNoDefaultSupported @ 0x1C023DA70 (IsGetDpiSettingWithNoDefaultSupported.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        unsigned int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v9; // rsi
  int v11; // r14d
  struct D3DKMT_GETPATHSMODALITY *v12; // r12
  PVOID v13; // rdi
  int v14; // eax
  int v15; // r15d
  __int64 Pool2; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  struct _devicemodeW *v18; // rax
  unsigned int v19; // edx
  struct D3DKMT_GETPATHSMODALITY *v20; // r11
  int v21; // eax
  int v22; // ecx
  struct tagSIZE v23; // r9
  unsigned int v24; // r13d
  bool v25; // sf
  HDEV v26; // rbx
  wchar_t *v27; // rdi
  int i; // eax
  __int16 v29; // cx
  int PrimaryAttachFlags; // eax
  __int64 v31; // rbx
  __int64 v32; // r10
  __int64 DisplayDriverNames; // rax
  struct _DRV_NAMES *v34; // r15
  __int64 v35; // r14
  unsigned __int16 v36; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  int v39; // eax
  unsigned int v40; // eax
  HDEV v41; // rcx
  unsigned int v42; // eax
  HDEV *v43; // rdx
  __int64 v44; // r12
  __int64 v45; // r8
  HDEV v46; // rax
  unsigned int v47; // ecx
  unsigned int *v48; // r14
  unsigned __int64 v49; // rax
  PVOID v50; // rbx
  unsigned __int64 v51; // rdx
  __int64 v52; // r14
  unsigned int v53; // r12d
  struct D3DKMT_GETPATHSMODALITY *v54; // r13
  __int64 v55; // rax
  MULTIDEVLOCKOBJ *v56; // r15
  unsigned int v57; // edx
  int v58; // ebx
  unsigned int v59; // eax
  unsigned int v60; // edx
  __int64 v61; // rcx
  int v62; // eax
  unsigned int v63; // eax
  size_t v64; // rbx
  _DWORD *v65; // rsi
  void *v66; // rax
  void *v67; // rdi
  unsigned int v68; // r10d
  unsigned int v69; // r9d
  __int64 v70; // rdx
  __int64 v71; // rax
  _DWORD *v72; // r8
  __int64 v73; // rax
  unsigned int v74; // r12d
  unsigned int v75; // esi
  __int64 v76; // rdi
  unsigned int v77; // ebx
  unsigned int v78; // edi
  __int64 v79; // rbx
  int v80; // ecx
  int v81; // eax
  unsigned int v82; // r12d
  int v83; // ecx
  unsigned int v84; // ebx
  unsigned int m; // esi
  __int64 v86; // r12
  __int64 v87; // rbx
  void (__fastcall *v88)(__int64, __int64); // rax
  __int128 v89; // xmm0
  struct _devicemodeW *v90; // rcx
  __int64 v92; // rax
  struct _DRV_NAMES *v93; // r13
  int v94; // ecx
  unsigned int v95; // r14d
  unsigned int v96; // r15d
  unsigned int v97; // r12d
  struct _devicemodeW *v98; // rax
  int v99; // eax
  struct _devicemodeW *v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rcx
  int v105; // eax
  unsigned int v106; // edx
  unsigned int k; // r8d
  int v108; // eax
  __int64 v109; // rcx
  __int64 v110; // rdx
  unsigned int v111; // eax
  unsigned int v112; // edx
  unsigned int v113; // edx
  int v114; // ecx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rbx
  unsigned int v118; // kr04_4
  struct tagSIZE v119; // rax
  unsigned int v120; // edx
  unsigned int v121; // ecx
  bool v122; // r8
  struct tagSIZE v123; // rax
  unsigned int v124; // esi
  unsigned int v125; // r9d
  unsigned __int64 v126; // rdx
  __int64 v127; // rax
  wchar_t *DeviceFromName; // rax
  int v129; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rcx
  struct _ERESOURCE *v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  unsigned int v136; // eax
  unsigned __int16 j; // cx
  __int64 v138; // rdx
  int v139; // eax
  struct _devicemodeW *v140; // rbx
  struct _devicemodeW *v141; // rdx
  struct _devicemodeW *v142; // rcx
  int v143; // r14d
  int v144; // ebx
  HDEV v145; // rax
  struct _devicemodeW *v146; // rax
  struct _devicemodeW *v147; // rdx
  int v148; // eax
  __int64 v149; // rdx
  __int64 v150; // rax
  char v151; // di
  __int64 v152; // rax
  char v153; // al
  char v154; // al
  int DpiSettingWithNoDefaultSupported; // eax
  unsigned int v156; // eax
  int v157; // edx
  unsigned int v158; // eax
  _DWORD *v159; // rsi
  unsigned int v160; // ecx
  unsigned int n; // eax
  int v162; // r8d
  int v163; // edx
  __int64 v164; // rdi
  __int64 v165; // r10
  __int64 v166; // rbx
  unsigned int v167; // r10d
  __int64 v168; // rdi
  int v169; // edx
  __int64 v170; // r9
  __int64 v171; // r8
  __int64 v172; // rax
  int v173; // ecx
  unsigned int *v174; // r12
  int v175; // r8d
  __int64 v176; // rbx
  unsigned int Src; // [rsp+28h] [rbp-E0h]
  unsigned int Srca; // [rsp+28h] [rbp-E0h]
  int v179; // [rsp+38h] [rbp-D0h]
  int v180; // [rsp+38h] [rbp-D0h]
  struct _DPI_INFORMATION *v181; // [rsp+40h] [rbp-C8h]
  int v182; // [rsp+48h] [rbp-C0h]
  int v183; // [rsp+58h] [rbp-B0h]
  int v184; // [rsp+5Ch] [rbp-ACh]
  HDEV v185; // [rsp+60h] [rbp-A8h]
  unsigned int v186[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _devicemodeW *v187; // [rsp+70h] [rbp-98h] BYREF
  __int64 v188; // [rsp+78h] [rbp-90h]
  struct _devicemodeW *v189; // [rsp+80h] [rbp-88h]
  int PruneFlag; // [rsp+88h] [rbp-80h]
  int v191; // [rsp+8Ch] [rbp-7Ch]
  int v192; // [rsp+90h] [rbp-78h]
  void *Buf2; // [rsp+98h] [rbp-70h]
  void *Buf1; // [rsp+A0h] [rbp-68h]
  unsigned int v195; // [rsp+A8h] [rbp-60h] BYREF
  int v196; // [rsp+ACh] [rbp-5Ch] BYREF
  HDEV v197; // [rsp+B0h] [rbp-58h] BYREF
  int v198[2]; // [rsp+B8h] [rbp-50h]
  unsigned int v199; // [rsp+C0h] [rbp-48h] BYREF
  struct tagSIZE v200; // [rsp+C8h] [rbp-40h] BYREF
  struct tagSIZE v201; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v202[2]; // [rsp+D8h] [rbp-30h] BYREF
  struct tagSIZE *v203; // [rsp+E0h] [rbp-28h]
  struct tagSIZE v204[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v205; // [rsp+F8h] [rbp-10h]
  PVOID BackTrace[20]; // [rsp+108h] [rbp+0h] BYREF
  PVOID v207[28]; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v211; // [rsp+2B0h] [rbp+1A8h] BYREF

  v211 = a4;
  v9 = 0LL;
  v184 = 0;
  LODWORD(v188) = 0;
  v11 = 0;
  v191 = 0;
  v201.cx = 0;
  v198[0] = a4 & 1;
  PruneFlag = a6 != 0;
  Src = (unsigned int)a5;
  WdLogSingleEntry4(4LL, a1, a3);
  v12 = a9;
  v13 = gpLeakTrackingAllocator;
  v14 = *((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447;
  v15 = a9 != 0LL ? 4 : 1;
  LODWORD(Buf2) = v15;
  if ( v14 == 1936876615 && (v127 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v127) != 1936876615 )
    {
      if ( ++v127 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(260LL, 112LL);
    if ( !Pool2 )
      goto LABEL_133;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v13,
                              Pool2,
                              BackTrace) )
      {
        v9 = Pool2;
        goto LABEL_4;
      }
LABEL_214:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      goto LABEL_133;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v13,
                             Pool2,
                             BackTrace) )
      goto LABEL_214;
    Pool2 += 16LL;
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 96LL);
  }
  v9 = Pool2;
  if ( !Pool2 )
    goto LABEL_133;
LABEL_4:
  v17 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  *(_DWORD *)(Pool2 + 20) = 0;
  *(_QWORD *)(Pool2 + 24) = a3;
  v18 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::Allocate(v17, 260LL, 0xDCuLL, 1986356295);
  v20 = 0LL;
  v189 = v18;
  if ( !v18 )
    goto LABEL_200;
  v192 = a8;
LABEL_6:
  while ( 2 )
  {
    while ( 2 )
    {
      v21 = v184;
      v22 = 1;
      v19 = 0;
      v183 = 1;
      LODWORD(Buf1) = 0;
      v23 = 0LL;
      v197 = 0LL;
      v24 = 0;
      v200 = 0LL;
      v195 = 0;
      v199 = 0;
      v186[0] = 0;
      while ( 1 )
      {
        v25 = v21 < 0;
        if ( v21 )
          break;
        v26 = (HDEV)v20;
        v185 = (HDEV)v20;
        v197 = (HDEV)v20;
        if ( a1 )
        {
          if ( !*(_QWORD *)&v23 )
          {
            DeviceFromName = DrvGetDeviceFromName(a1);
            v20 = 0LL;
            v200 = (struct tagSIZE)DeviceFromName;
            v27 = DeviceFromName;
            if ( !a5 )
            {
              v22 = 0;
              v183 = 0;
              goto LABEL_17;
            }
            goto LABEL_235;
          }
        }
        else if ( !*(_QWORD *)&v23 )
        {
          goto LABEL_10;
        }
        if ( a5 )
        {
          if ( v19 >= *((_DWORD *)a5 + 5) )
            goto LABEL_75;
          v26 = (HDEV)*((_QWORD *)a5 + 7 * v19 + 5);
          v185 = v26;
          LODWORD(Buf1) = v19 + 1;
          v27 = (wchar_t *)*((_QWORD *)v26 + 319);
          if ( v27 == *(wchar_t **)&v23 )
            goto LABEL_29;
          v129 = v11;
          if ( (*((_DWORD *)v27 + 40) & 8) != 0 )
            v129 = v11 ^ 1;
          if ( v129 )
            goto LABEL_29;
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(*((HSEMAPHORE *)v26 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *((_QWORD *)v26 + 6), 11LL);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v130 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v26 + 440);
          ++*((_DWORD *)v26 + 3);
          ++*((_DWORD *)v26 + 2);
          TrackObjectReferenceIncrement(1u, v130);
          if ( ((_DWORD)v26[10] & 0x400) != 0 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
              PsLeavePriorityRegion(v131);
            }
            DrvEnableDisplay(v26);
            EngAcquireSemaphore(ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion(v132);
          }
          EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *((_QWORD *)v26 + 6));
          v133 = (struct _ERESOURCE *)*((_QWORD *)v26 + 6);
          if ( v133 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v133);
            PsLeavePriorityRegion(v134);
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          v20 = 0LL;
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v135);
            v20 = 0LL;
          }
          v136 = (*((_DWORD *)v27 + 40) >> 2) & 1;
          v195 = 1;
          v199 = v136;
LABEL_235:
          v22 = v183;
          goto LABEL_17;
        }
LABEL_10:
        if ( v15 == 4 )
        {
          if ( v24 >= *((unsigned __int16 *)v12 + 10) )
          {
LABEL_134:
            if ( v191 == (_DWORD)v20 )
            {
              WdLogSingleEntry1(2LL, -1073741823LL);
              goto LABEL_325;
            }
            WdLogSingleEntry0(5LL);
            v20 = 0LL;
            v15 = 1;
            LODWORD(Buf2) = 1;
            v11 = 1;
            LODWORD(v188) = 1;
            goto LABEL_6;
          }
          v31 = v24;
          if ( (*((_QWORD *)v12 + 37 * v24 + 7) & 0x1000000000LL) != 0 )
            goto LABEL_240;
          if ( !IsPrimaryPathInCloneGroup(v12, v24) || *(_DWORD *)((char *)v12 + v32 + 248) < (int)v20 )
          {
            v22 = v183;
LABEL_240:
            v186[0] = v24 + 1;
            goto LABEL_30;
          }
          v27 = gpGraphicsDeviceList;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( (*((_DWORD *)v27 + 40) & 0x800000) != 0
                && *((_DWORD *)v27 + 62) == *(_DWORD *)((char *)v12 + v32 + 72)
                && *((_DWORD *)v27 + 63) == *(_DWORD *)((char *)v12 + v32 + 76)
                && *((_DWORD *)v27 + 64) == *(_DWORD *)((char *)v12 + v32 + 80) )
              {
                break;
              }
              v27 = (wchar_t *)*((_QWORD *)v27 + 16);
            }
            while ( v27 );
            v26 = (HDEV)v20;
            goto LABEL_43;
          }
          goto LABEL_249;
        }
        v27 = gpGraphicsDeviceList;
        for ( i = (int)v20; v27 && i != v19; ++i )
          v27 = (wchar_t *)*((_QWORD *)v27 + 16);
        LODWORD(Buf1) = v19 + 1;
        if ( gbBaseVideo != (_DWORD)v20 )
        {
          if ( !v27 )
            goto LABEL_75;
          if ( (*((_DWORD *)v27 + 40) & 0x2800000) == 0 )
            goto LABEL_30;
LABEL_17:
          if ( v15 == 4 )
          {
            if ( v26 )
            {
              WdLogSingleEntry0(1LL);
              v20 = 0LL;
            }
LABEL_43:
            if ( !v27 || (*((_DWORD *)v27 + 41) & 1) != 0 )
            {
              v26 = v185;
              if ( v185 )
                goto LABEL_55;
            }
            else
            {
              DisplayDriverNames = DrvGetDisplayDriverNames(v27);
              v20 = 0LL;
              v34 = (struct _DRV_NAMES *)DisplayDriverNames;
              if ( DisplayDriverNames )
              {
                if ( v24 >= *((unsigned __int16 *)v12 + 10) )
                  WdLogSingleEntry0(1LL);
                v35 = 296LL * v24;
                if ( _bittest64((const signed __int64 *)((char *)v12 + v35 + 56), 0x24u) )
                  WdLogSingleEntry0(1LL);
                if ( !*(_QWORD *)((char *)v12 + v35 + 304) )
                  WdLogSingleEntry0(1LL);
                v36 = gdmLogPixels;
                if ( !gdmLogPixels )
                {
                  v36 = 0;
                  v186[0] = 0;
                  if ( qword_1C029C5F0 )
                  {
                    qword_1C029C5F0(1LL, v186);
                    v36 = v186[0];
                  }
                  gdmLogPixels = v36;
                }
                *(_WORD *)(*(_QWORD *)((char *)v12 + v35 + 304) + 166LL) = v36;
                DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v27);
                DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v27);
                v26 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)v27,
                        v34,
                        *(struct _devicemodeW **)((char *)v12 + v35 + 304),
                        a3,
                        DriverCapableOverRide,
                        DriverAccelerationsLevel,
                        v198[0],
                        (v211 >> 2) & 1,
                        1u,
                        &v197);
                v185 = v26;
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  v34);
                v20 = 0LL;
                if ( v26 )
                {
                  *(_DWORD *)(v26 + 630) = *(_DWORD *)((char *)v12 + v35 + 276);
LABEL_55:
                  v186[0] = v24 + 1;
                  goto LABEL_56;
                }
              }
              else
              {
                v185 = v26;
                if ( v26 )
                  goto LABEL_55;
              }
              gpLastFailedPhysDisp = (__int64)v27;
              DrvLogDisplayDriverEvent(2LL);
            }
            v31 = v24;
LABEL_249:
            if ( !IsPrimaryPathInCloneGroup(v12, v24) || *((_DWORD *)v12 + 74 * v31 + 62) < (int)v20 )
            {
              WdLogSingleEntry0(1LL);
              v20 = 0LL;
            }
            for ( j = (unsigned __int16)v20; j < *((_WORD *)v12 + 10); ++j )
            {
              v138 = 296LL * j;
              if ( *(_DWORD *)((char *)v12 + v138 + 240) == *((_DWORD *)v12 + 74 * v31 + 60) )
                *(_DWORD *)((char *)v12 + v138 + 248) = -1073741823;
            }
            v26 = v185;
            goto LABEL_55;
          }
        }
        if ( !v27 )
          goto LABEL_75;
        if ( (*((_DWORD *)v27 + 41) & 1) != 0 )
          goto LABEL_30;
        if ( a6 == -1 )
        {
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v27);
          LODWORD(v20) = 0;
        }
        if ( !v26 )
        {
          if ( gForceDisconnect != (_DWORD)v20 || v15 == 3 )
            v29 = -1;
          else
            v29 = gProtocolType;
          PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v27, v29, &v199, &v195);
          v20 = 0LL;
          if ( !PrimaryAttachFlags )
            goto LABEL_75;
          if ( v15 == 1 || v15 == 3 )
          {
            if ( !v195 )
              goto LABEL_29;
            if ( (*((_DWORD *)v27 + 40) & 8) != 0 )
            {
LABEL_198:
              if ( !v11 )
                goto LABEL_29;
            }
            else if ( v11 )
            {
              goto LABEL_29;
            }
          }
          else if ( v15 == 2 )
          {
            v139 = *((_DWORD *)v27 + 40);
            if ( (v139 & 8) != 0 )
            {
              if ( !v195 )
                goto LABEL_29;
              goto LABEL_198;
            }
            if ( (v139 & 0x2000000) != 0 || v191 || gProtocolType == -1 )
              goto LABEL_29;
          }
          else
          {
            WdLogSingleEntry0(1LL);
            v20 = 0LL;
            if ( (*((_DWORD *)v27 + 40) & 8) != 0 || v191 )
              goto LABEL_29;
          }
          v92 = DrvGetDisplayDriverNames(v27);
          v20 = 0LL;
          v93 = (struct _DRV_NAMES *)v92;
          if ( !v92 )
            goto LABEL_29;
          v94 = *((_DWORD *)v27 + 40);
          v187 = 0LL;
          v196 = 0;
          if ( (v94 & 8) != 0 )
          {
            v95 = 4;
            v96 = 0;
            v97 = 0;
          }
          else
          {
            v95 = 1;
            v96 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v27);
            v97 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v27);
          }
          v98 = a2;
          if ( !a2 )
          {
            memset(v189, 0, sizeof(struct _devicemodeW));
            v98 = v189;
            v189->dmSize = 220;
          }
          v99 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)v27,
                  &v187,
                  &v196,
                  0LL,
                  v98,
                  0,
                  PruneFlag,
                  a7,
                  v192,
                  0LL);
          if ( v99 == 1073741839 )
          {
            DrvLogDisplayDriverEvent(4LL);
            goto LABEL_146;
          }
          if ( v99 == -1073741776 )
          {
            v140 = *(struct _devicemodeW **)(*(_QWORD *)(v9 + 40) + 2568LL);
            if ( v187 && v187 != v189 )
            {
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                v187);
              v187 = 0LL;
            }
            v99 = DrvProbeAndCaptureDevmode(
                    (struct tagGRAPHICS_DEVICE *)v27,
                    &v187,
                    &v196,
                    0LL,
                    v140,
                    0,
                    PruneFlag,
                    a7,
                    v192,
                    0LL);
            v26 = v185;
          }
          if ( v99 < 0 )
          {
            DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
            if ( (*((_DWORD *)v27 + 40) & 0x2000000) != 0 )
              gulDriverFailureReason = 4;
          }
          else
          {
LABEL_146:
            v26 = hCreateHDEV(
                    (struct tagGRAPHICS_DEVICE *)v27,
                    v93,
                    v187,
                    a3,
                    v96,
                    v97,
                    v198[0],
                    (v211 >> 2) & 1,
                    v95,
                    &v197);
            if ( !v26 && (*((_DWORD *)v27 + 40) & 0x2000000) != 0 )
              gulDriverFailureReason = 5;
          }
          v100 = a2;
          if ( (*((_DWORD *)v27 + 40) & 8) == 0 && !a2 )
          {
            if ( v26 )
              goto LABEL_150;
            DrvLogDisplayDriverEvent(4LL);
            v141 = v187;
            if ( v187 )
            {
              if ( v187->dmBitsPerPel == 4 )
              {
                DrvLogDisplayDriverEvent(5LL);
                v141 = v187;
              }
              if ( v141 != v189 )
              {
                if ( v141 )
                  NSInstrumentation::CLeakTrackingAllocator::Free(
                    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                    v141);
                v187 = 0LL;
              }
            }
            memset(v189, 0, sizeof(struct _devicemodeW));
            v142 = v189;
            v143 = v192;
            v182 = v192;
            v189->dmSize = 220;
            if ( (int)DrvProbeAndCaptureDevmode(
                        (struct tagGRAPHICS_DEVICE *)v27,
                        &v187,
                        &v196,
                        0LL,
                        v142,
                        1,
                        PruneFlag,
                        a7,
                        v182,
                        0LL) >= 0 )
            {
              v144 = (v211 >> 2) & 1;
              v145 = hCreateHDEV((struct tagGRAPHICS_DEVICE *)v27, v93, v187, a3, v96, v97, v198[0], v144, 1u, &v197);
              if ( v145 )
                goto LABEL_297;
              v146 = v187;
              if ( v187->dmPelsWidth == 640 && v187->dmPelsHeight == 480 && v187->dmBitsPerPel == 4 )
              {
                v26 = 0LL;
                goto LABEL_300;
              }
              if ( v187 != v189 )
              {
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  v187);
                v187 = 0LL;
              }
              memset(v189, 0, sizeof(struct _devicemodeW));
              v147 = v189;
              v189->dmSize = 220;
              v148 = a7;
              v147->dmBitsPerPel = (*((_DWORD *)v27 + 40) & 0x800000) != 0 ? 32 : 4;
              v180 = PruneFlag;
              v147->dmPelsWidth = 640;
              v147->dmPelsHeight = 480;
              v147->dmFields = 1835008;
              if ( (int)DrvProbeAndCaptureDevmode(
                          (struct tagGRAPHICS_DEVICE *)v27,
                          &v187,
                          &v196,
                          0LL,
                          v147,
                          0,
                          v180,
                          v148,
                          v143,
                          0LL) < 0 )
              {
                v26 = 0LL;
              }
              else
              {
                v145 = hCreateHDEV((struct tagGRAPHICS_DEVICE *)v27, v93, v187, a3, v96, v97, v198[0], v144, 1u, &v197);
LABEL_297:
                v26 = v145;
              }
            }
            v146 = v187;
LABEL_300:
            if ( v146 )
            {
              v149 = v26 != 0LL;
            }
            else
            {
              v146 = v189;
              v149 = 2LL;
            }
            DrvDxgkLogCodePointPacket(26LL, v149, v146->dmPelsWidth, v146->dmPelsHeight);
            v100 = 0LL;
          }
          if ( !v26 && !v100 )
          {
            gpLastFailedPhysDisp = (__int64)v27;
            DrvLogDisplayDriverEvent(2LL);
          }
LABEL_150:
          if ( v187 && v187 != v189 )
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              v187);
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v93);
          v12 = a9;
          v20 = 0LL;
LABEL_56:
          if ( !v26 )
            goto LABEL_29;
        }
        WdLogSingleEntry0(5LL);
        v39 = *((_DWORD *)v27 + 40);
        v20 = 0LL;
        v191 = 1;
        if ( v199 )
          v40 = v39 | 4;
        else
          v40 = v39 & 0xFFFFFFFB;
        *((_DWORD *)v27 + 40) = v40;
        v41 = v197;
        if ( !v197 )
        {
          if ( a5 )
          {
            v42 = *((_DWORD *)a5 + 5);
            if ( v42 )
            {
              v43 = (HDEV *)((char *)a5 + 40);
              v44 = (unsigned int)((_DWORD)v197 + 1);
              v45 = v42;
              do
              {
                v46 = *v43;
                v43 += 7;
                if ( v27 == *((wchar_t **)v46 + 319) )
                  v41 = v46;
                v197 = v41;
                v45 -= v44;
              }
              while ( v45 );
              v12 = a9;
            }
          }
        }
        *(_QWORD *)(56LL * *(unsigned int *)(v9 + 20) + v9 + 40) = v26;
        *(_QWORD *)(56LL * *(unsigned int *)(v9 + 20) + v9 + 48) = v197;
        v47 = *(_DWORD *)(v9 + 20);
        if ( v47 + 2 >= v47 )
        {
          v48 = (unsigned int *)v9;
          *(_DWORD *)(v9 + 20) = v47 + 1;
          v49 = 96LL * (v47 + 2);
          if ( v49 > 0xFFFFFFFF )
            goto LABEL_323;
          if ( (_DWORD)v49 )
          {
            v50 = gpLeakTrackingAllocator;
            v51 = (unsigned int)v49;
            if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
              || (v150 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
            {
LABEL_71:
              v9 = ExAllocatePool2(260LL, v51);
              v20 = 0LL;
LABEL_72:
              if ( !v9 )
              {
LABEL_323:
                v22 = v183;
                v21 = -1073741670;
                v184 = -1073741670;
                v9 = (__int64)v48;
                goto LABEL_31;
              }
              memmove((void *)v9, v48, 96LL * v48[5]);
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                v48);
              v20 = 0LL;
              goto LABEL_29;
            }
            while ( *((_DWORD *)gpLeakTrackingAllocator + v150) != 1936876615 )
            {
              if ( ++v150 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                goto LABEL_71;
            }
            v151 = 0;
            if ( v51 < 0x1000 || (v51 & 0xFFF) != 0 )
            {
              v151 = 1;
              v51 += 16LL;
            }
            v152 = ExAllocatePool2(260LL, v51);
            v20 = 0LL;
            v9 = v152;
            if ( v152 )
            {
              memset(v207, 0, 0xA0uLL);
              RtlCaptureStackBackTrace(0, 0x14u, v207, 0LL);
              if ( v151 && (unsigned __int64)(v9 & 0xFFF) + 16 < 0x1000 )
              {
                v153 = NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v50, v9, v207);
                v20 = 0LL;
                if ( v153 )
                {
                  v9 += 16LL;
                  goto LABEL_72;
                }
              }
              else
              {
                v154 = NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v50, v9, v207);
                v20 = 0LL;
                if ( v154 )
                  goto LABEL_72;
              }
              ExFreePoolWithTag((PVOID)v9, 0);
              v20 = 0LL;
            }
          }
          v9 = 0LL;
          goto LABEL_72;
        }
LABEL_29:
        v22 = v183;
LABEL_30:
        v21 = v184;
LABEL_31:
        v15 = (int)Buf2;
        v24 = v186[0];
        v19 = (unsigned int)Buf1;
        v11 = v188;
        v23 = v200;
        if ( !v22 )
        {
          v25 = v21 < 0;
          break;
        }
      }
      if ( v25 )
        goto LABEL_325;
LABEL_75:
      v52 = v9;
      if ( v15 == 4 )
        goto LABEL_134;
      if ( v191 == (_DWORD)v20 )
      {
        if ( v15 == 1 )
        {
          WdLogSingleEntry0(5LL);
          v11 = v188;
          v15 = 2;
          v20 = 0LL;
          LODWORD(Buf2) = 2;
          if ( v192 )
            v192 = 0;
        }
        else
        {
          if ( v15 != 2 || !(unsigned int)UserIsWddmConnectedSession() )
          {
            WdLogSingleEntry0(5LL);
            goto LABEL_325;
          }
          WdLogSingleEntry0(5LL);
          v11 = v188;
          v15 = 3;
          LODWORD(Buf2) = 3;
          v20 = 0LL;
        }
        continue;
      }
      break;
    }
    if ( (_DWORD)v188 == (_DWORD)v20 )
    {
      WdLogSingleEntry0(5LL);
      v20 = 0LL;
      v11 = 1;
      LODWORD(v188) = 1;
      continue;
    }
    break;
  }
  if ( (v211 & 2) != 0 )
    goto LABEL_131;
  a6 = (unsigned int)v20;
  a9 = v20;
  v53 = (unsigned int)v20;
  v54 = v20;
  v55 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          260LL,
          0x68uLL,
          1819109447);
  v56 = (MULTIDEVLOCKOBJ *)v55;
  if ( !v55 )
    goto LABEL_325;
  *(_DWORD *)(v55 + 4) = 0;
  *(_QWORD *)(v55 + 8) = 0LL;
  *(_QWORD *)(v55 + 16) = 0LL;
  *(_DWORD *)v55 = 1;
  MULTIDEVLOCKOBJ::vInit((MULTIDEVLOCKOBJ *)v55, (struct _MDEV *)v9);
  v58 = 0;
  if ( (*(_DWORD *)v56 & 1) == 0 )
    goto LABEL_130;
  MULTIDEVLOCKOBJ::vLock(v56);
  v59 = *(_DWORD *)(v9 + 20);
  v60 = 0;
  LODWORD(a5) = 0;
  if ( !v59 )
    goto LABEL_89;
  LODWORD(a5) = 0;
  while ( 2 )
  {
    v61 = *(_QWORD *)(*(_QWORD *)(56LL * v60 + v9 + 40) + 2552LL);
    v62 = *(_DWORD *)(v61 + 160);
    if ( (v62 & 8) != 0 )
    {
      if ( (v62 & 4) != 0 )
      {
        v62 &= ~4u;
        *(_DWORD *)(v61 + 160) = v62;
        goto LABEL_86;
      }
    }
    else
    {
      if ( !v54 )
        v53 = v60;
LABEL_86:
      if ( (v62 & 4) != 0 )
      {
        if ( v54 )
        {
          LODWORD(a5) = -1073741438;
          *(_DWORD *)(v61 + 160) = v62 & 0xFFFFFFFB;
        }
        else
        {
          v54 = (struct D3DKMT_GETPATHSMODALITY *)v61;
          v53 = v60;
        }
      }
    }
    v59 = *(_DWORD *)(v9 + 20);
    if ( ++v60 < v59 )
      continue;
    break;
  }
  a6 = v53;
  a9 = v54;
LABEL_89:
  v63 = 16 * v59;
  v64 = v63;
  if ( !v63 )
    goto LABEL_127;
  Buf2 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                   (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                   260LL,
                   v63,
                   1936876615);
  v65 = Buf2;
  v66 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  260LL,
                  (unsigned int)v64,
                  1936876615);
  Buf1 = v66;
  v67 = v66;
  if ( !v65 )
    goto LABEL_125;
  if ( !v66 )
    goto LABEL_124;
  v68 = 0;
  v186[0] = 0;
  v69 = 0;
  if ( *(_DWORD *)(v52 + 20) )
  {
    do
    {
      v70 = 2LL * v69;
      v71 = *(_QWORD *)(56LL * v69 + v52 + 40);
      v72 = *(_DWORD **)(v71 + 2568);
      v65[2 * v70] = v72[19];
      v65[2 * v70 + 1] = v72[20];
      v65[2 * v70 + 2] = v72[19] + v72[43];
      v65[2 * v70 + 3] = v72[20] + v72[44];
      if ( (*(_DWORD *)(*(_QWORD *)(v71 + 2552) + 160LL) & 8) == 0 )
      {
        if ( !v54 && !v72[19] && !v72[20] )
        {
          v53 = v69;
          v54 = *(struct D3DKMT_GETPATHSMODALITY **)(v71 + 2552);
        }
        ++v68;
      }
      ++v69;
    }
    while ( v69 < *(_DWORD *)(v52 + 20) );
    v67 = Buf1;
    v186[0] = v68;
    a6 = v53;
    a9 = v54;
  }
  memmove(v67, v65, v64);
  if ( !gDrvDpiAdjusted )
  {
    gDrvDpiWin8Style = 0;
    v211 = 0;
    if ( ((gProtocolType + 1) & 0xFFFE) == 0 && (int)IsGetWin8StyleDpiSettingFromRegistrySupported(65534LL) >= 0 )
    {
      GetWin8StyleDpiSettingFromRegistry(v101);
      if ( gDrvDpiWin8Style )
      {
        DpiSettingWithNoDefaultSupported = IsGetDpiSettingWithNoDefaultSupported(v102);
        if ( DpiSettingWithNoDefaultSupported >= 0 && qword_1C029B168 )
          qword_1C029B168(0LL, &v211);
        v156 = v211;
        if ( v211 <= 0x60 )
          v156 = 96;
        if ( v156 >= 0x1E0 )
          LOWORD(v156) = 480;
        gdmLogPixels = v156;
      }
    }
  }
  v73 = v53;
  v74 = 0;
  v75 = 1;
  v76 = *(_QWORD *)(56 * v73 + v52 + 40);
  *(_QWORD *)v198 = v76;
  *(_DWORD *)(*(_QWORD *)(v76 + 2552) + 160LL) |= 4u;
  v77 = *(_DWORD *)(v52 + 20);
  if ( v77 )
  {
    v78 = a6;
    do
    {
      v200 = (struct tagSIZE)(56LL * v74);
      v79 = *(_QWORD *)(*(_QWORD *)&v200 + v52 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(v79 + 2552) + 160LL) & 0x800000) != 0 )
      {
        v80 = 0;
        if ( v74 == v78 )
          v80 = 32;
        *(_DWORD *)(v79 + 2516) = *(_DWORD *)(v79 + 2516) & 0xFFFFFFDF | v80;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_UniformDpiProgrammingModel__private_reporting,
          20743071LL,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
          0,
          3);
        Src = v79 + 2424;
        v81 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1C0296868)(
                *(_QWORD *)(*(_QWORD *)(v79 + 2552) + 240LL),
                *(unsigned int *)(*(_QWORD *)(v79 + 2552) + 256LL),
                0LL,
                v79 + 2104);
        if ( v81 < 0 )
          WdLogSingleEntry3(
            2LL,
            v81,
            *(_QWORD *)(*(_QWORD *)(v79 + 2552) + 240LL),
            *(unsigned int *)(*(_QWORD *)(v79 + 2552) + 256LL));
        v75 = 1;
        *(_DWORD *)(*(_QWORD *)&v200 + v52 + 92) = *(_DWORD *)(v79 + 2520);
      }
      v77 = *(_DWORD *)(v52 + 20);
      ++v74;
    }
    while ( v74 < v77 );
    v76 = *(_QWORD *)v198;
    v54 = a9;
  }
  v82 = 0;
  if ( !gDrvDpiAdjusted )
  {
    gDrvDpiWin8Style = 0;
    v211 = 0;
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
    {
      v111 = *(_DWORD *)(v76 + 3528);
      if ( v111 )
      {
        v112 = (96 * HIWORD(v111) + 50) / 0x64u;
      }
      else
      {
        if ( wcsncmp(*((const wchar_t **)v54 + 25), L"WORKERDD", *((unsigned int *)v54 + 66))
          && wcsncmp(*((const wchar_t **)v54 + 25), L"TSDDD", *((unsigned int *)v54 + 66)) )
        {
          gDrvDpiWin8Style = 1;
        }
        if ( qword_1C029C5F0 )
          qword_1C029C5F0(2LL, &v211);
        v112 = v211;
        if ( v211 <= 0x60 )
          v112 = 96;
        if ( v112 >= 0x1E0 )
          v112 = 480;
        v211 = v112;
      }
      gdmLogPixels = v112;
      v113 = 0;
      v77 = *(_DWORD *)(v52 + 20);
      if ( v77 )
      {
        do
        {
          v114 = gdmLogPixels;
          v115 = v113++;
          v116 = *(_QWORD *)(56 * v115 + v52 + 40);
          *(_DWORD *)(v116 + 2148) = gdmLogPixels;
          *(_DWORD *)(v116 + 2144) = v114;
          *(_WORD *)(*(_QWORD *)(v116 + 2568) + 166LL) = gdmLogPixels;
          v77 = *(_DWORD *)(v52 + 20);
        }
        while ( v113 < v77 );
      }
      goto LABEL_173;
    }
    v103 = (unsigned int)(96 * *(_DWORD *)(v76 + 2436) + 50);
    if ( (unsigned __int16)((unsigned int)v103 / 0x64) && qword_1C029C610 )
      qword_1C029C610(1LL, (unsigned __int16)((unsigned int)v103 / 0x64));
    if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported(v103) >= 0 )
      GetWin8StyleDpiSettingFromRegistry(v104);
    if ( gDrvDpiWin8Style )
    {
      if ( (int)IsGetDpiSettingWithNoDefaultSupported(v104) >= 0 && qword_1C029B168 )
        qword_1C029B168(0LL, &v211);
      v106 = v211;
      if ( v211 <= 0x60 )
        v106 = 96;
      if ( v106 >= 0x1E0 )
        v106 = 480;
      v211 = v106;
    }
    else
    {
      v105 = *(_DWORD *)(v76 + 2432);
      if ( !v105 )
      {
        gdmLogPixels = 96;
LABEL_169:
        v77 = *(_DWORD *)(v52 + 20);
        for ( k = 0; k < v77; ++k )
        {
          v108 = gdmLogPixels;
          v109 = *(_QWORD *)(56LL * k + v52 + 40);
          v110 = *(_QWORD *)(v109 + 2568);
          *(_DWORD *)(v109 + 2148) = gdmLogPixels;
          *(_DWORD *)(v109 + 2144) = v108;
          *(_WORD *)(v110 + 166) = gdmLogPixels;
          if ( gDrvDpiWin8Style )
          {
            v157 = 100 * gdmLogPixels;
            *(_DWORD *)(v109 + 2508) = 1234568;
            *(_DWORD *)(v109 + 2432) = (v157 + 48) / 0x60u;
          }
          v77 = *(_DWORD *)(v52 + 20);
        }
LABEL_173:
        gDrvDpiAdjusted = 1;
        goto LABEL_113;
      }
      v106 = (96 * v105 + 50) / 0x64u;
    }
    gdmLogPixels = v106;
    goto LABEL_169;
  }
LABEL_113:
  if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
  {
    LODWORD(a9) = 1;
    if ( v77 )
    {
      do
      {
        v117 = *(_QWORD *)(56LL * v82 + v52 + 40);
        v118 = *(_DWORD *)(v117 + 2116);
        LOBYTE(v211) = ((*(_DWORD *)(*(_QWORD *)(v117 + 2568) + 84LL) - 1) & 0xFFFFFFFD) == 0;
        v119 = AdjustForOrientation(*(_DWORD *)(v117 + 2112) / 0x3E8u, v118 / 0x3E8, v211);
        v120 = *(_DWORD *)(v117 + 2124);
        v121 = *(_DWORD *)(v117 + 2120);
        v201 = v119;
        v123 = AdjustForOrientation(v121, v120, v122);
        v124 = *(_DWORD *)(v117 + 3528);
        v200 = v123;
        v202[0] = 1;
        v203 = v204;
        *(_OWORD *)&v204[0].cx = 0LL;
        v202[1] = 32;
        v205 = 0LL;
        if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v202) < 0 )
          WdLogSingleEntry0(1LL);
        v181 = (struct _DPI_INFORMATION *)(v117 + 2424);
        if ( v124 )
        {
          FillDpiInfo(&v201, &v200, (struct tagSIZE)v204, v125, 0, HIWORD(v124), v179, v181);
          *(_DWORD *)(v117 + 2516) |= 0x200u;
          v75 = (unsigned int)a9;
        }
        else
        {
          *(_DWORD *)(v117 + 2516) &= ~0x200u;
          v75 = 0;
          LODWORD(a9) = 0;
          FillDpiInfo(&v201, &v200, (struct tagSIZE)v204, v125, gdmLogPixels, 0, v179, v181);
        }
        GetRemoteScaleOverrideTestHook(
          (const unsigned __int16 *)(*(_QWORD *)(v117 + 2552) + 64LL),
          v126,
          (struct _DPI_INFORMATION *)(v117 + 2424));
        ++v82;
        *(_DWORD *)(v117 + 2516) = *(_DWORD *)(v117 + 2516) & 0xFFFFFF7F | ((unsigned __int8)v211 << 7);
      }
      while ( v82 < *(_DWORD *)(v52 + 20) );
      v76 = *(_QWORD *)v198;
    }
    UserSetScaleFactorsFromRemoteMetric(v75);
    v201.cx = 1;
  }
  else
  {
    *((_DWORD *)gpsi + 559) &= ~0x40u;
  }
  v83 = *(_DWORD *)(v76 + 2436);
  v84 = v186[0];
  v67 = Buf1;
  gdmLogPixelsOfPrimary = (96 * v83 + 50) / 0x64u;
  AlignRects((struct tagRECT *)Buf1, v186[0]);
  if ( memcmp(v67, Buf2, 16LL * v84) )
    WdLogSingleEntry0(3LL);
  for ( m = 0; m < *(_DWORD *)(v52 + 20); *(_DWORD *)(v86 + v52 + 72) = *(_DWORD *)(v87 + 2432) )
  {
    v86 = 56LL * m;
    v87 = *(_QWORD *)(v86 + v52 + 40);
    *(_QWORD *)(v87 + 2560) = *((_QWORD *)v67 + 2 * m);
    v88 = *(void (__fastcall **)(__int64, __int64))(v87 + 3360);
    if ( v88 )
      v88((*(_QWORD *)(v87 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v87 + 2528) != 0LL), 2LL);
    v89 = *((_OWORD *)v67 + m++);
    *(_OWORD *)(v86 + v52 + 56) = v89;
  }
  if ( (unsigned int)bUniformSpaceDpiMode() )
  {
    v158 = 4 * *(_DWORD *)(v52 + 20);
    if ( v158 )
    {
      v159 = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                         260LL,
                         v158,
                         1936876615);
      if ( v159 )
      {
        v160 = *(_DWORD *)(v52 + 20);
        for ( n = 0; n < v160; v160 = *(_DWORD *)(v52 + 20) )
        {
          v159[n] = n;
          ++n;
        }
        while ( 1 )
        {
          v162 = 0;
          v163 = 0;
          if ( v160 == 1 )
            break;
          do
          {
            v164 = (unsigned int)(v163 + 1);
            v165 = (unsigned int)v159[v164];
            v166 = (unsigned int)v159[v163];
            if ( *(_DWORD *)(56 * (v166 + 1) + v52) > *(_DWORD *)(56 * (v165 + 1) + v52) )
            {
              v159[v163] = v165;
              v162 = 1;
              v159[v164] = v166;
            }
            v160 = *(_DWORD *)(v52 + 20);
            ++v163;
          }
          while ( (unsigned int)v164 < v160 - 1 );
          if ( !v162 )
            goto LABEL_370;
        }
        v160 = *(_DWORD *)(v52 + 20);
LABEL_370:
        v167 = v160 - 1;
        LODWORD(v168) = 0;
        v169 = 0;
        if ( v160 == 1 )
        {
LABEL_379:
          v174 = &v159[(unsigned int)v168];
          MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v52, *v174, 0xFFFFFFFF, 0, Src);
          v175 = v168;
          if ( (unsigned int)v168 < *(_DWORD *)(v52 + 20) - 1 )
          {
            do
            {
              v176 = (unsigned int)(v175 + 1);
              MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v52, v159[v176], v159[v175], 1, Srca);
              v175 = v176;
            }
            while ( (unsigned int)v176 < *(_DWORD *)(v52 + 20) - 1 );
          }
          while ( (_DWORD)v168 )
          {
            v168 = (unsigned int)(v168 - 1);
            MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v52, v159[v168], *v174--, 0, Srca);
          }
          *(_DWORD *)(v52 + 16) |= 2u;
          *(_DWORD *)(v52 + 32) = 96;
          gbUniformSpaceDpiMode = 1;
        }
        else
        {
          while ( 1 )
          {
            v170 = (unsigned int)(v169 + 1);
            v171 = 56 * ((unsigned int)v159[v169] + 1LL);
            v172 = 56 * ((unsigned int)v159[v170] + 1LL);
            v173 = *(_DWORD *)(v172 + v52);
            if ( *(_DWORD *)(v171 + v52 + 8) != v173 )
              break;
            if ( *(_DWORD *)(v171 + v52) || *(_DWORD *)(v171 + v52 + 4) )
            {
              if ( !v173 && !*(_DWORD *)(v172 + v52 + 4) )
                LODWORD(v168) = v169 + 1;
            }
            else
            {
              LODWORD(v168) = v169;
            }
            ++v169;
            if ( (unsigned int)v170 >= v167 )
              goto LABEL_379;
          }
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v159);
        v67 = Buf1;
      }
    }
  }
  else
  {
    gbUniformSpaceDpiMode = 0;
  }
  v65 = Buf2;
LABEL_124:
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    v65);
LABEL_125:
  if ( v67 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v67);
LABEL_127:
  MULTIDEVLOCKOBJ::vUnlock(v56);
  if ( v201.cx )
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId);
  v58 = (int)a5;
LABEL_130:
  MULTIDEVLOCKOBJ::`scalar deleting destructor'(v56, v57);
  v9 = v52;
  if ( v58 >= 0 )
  {
LABEL_131:
    v90 = v189;
    goto LABEL_132;
  }
LABEL_325:
  if ( !v9 )
    goto LABEL_131;
LABEL_200:
  DrvBackoutMDEV((struct _MDEV *)v9, v19);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)v9);
  v90 = v189;
  v9 = 0LL;
  if ( v189 )
LABEL_132:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v90);
LABEL_133:
  WdLogSingleEntry1(5LL, v9);
  return (struct _MDEV *)v9;
}
