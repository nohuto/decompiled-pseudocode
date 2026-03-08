/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 * Callees:
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C000EFA0 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C001EDF8 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001EE54 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001EF7C (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C0020640 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0021420 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C0022420 (UserIsWddmConnectedSession.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0023F7C (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C0024700 (DrvGetDisplayDriverNames.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C002B828 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvGetDeviceFromName @ 0x1C003C370 (DrvGetDeviceFromName.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00723C0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00C9094 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00CA680 (DrvDxgkLogCodePointPacket.c)
 *     AlignRects @ 0x1C00CC4F8 (AlignRects.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x1C00CC740 (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CC86C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CCC78 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00D369C (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C00D3C50 (UserSetScaleFactorsFromRemoteMetric.c)
 *     IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C00D3DD4 (IsGetWin8StyleDpiSettingFromRegistrySupported.c)
 *     GetWin8StyleDpiSettingFromRegistry @ 0x1C00D3E00 (GetWin8StyleDpiSettingFromRegistry.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00D6948 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00D7854 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D7E30 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?AdjustForOrientation@@YA?AUtagSIZE@@II_N@Z @ 0x1C00D8914 (-AdjustForOrientation@@YA-AUtagSIZE@@II_N@Z.c)
 *     wcsncmp @ 0x1C00DAD28 (wcsncmp.c)
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C0190964 (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     IsGetDpiSettingWithNoDefaultSupported @ 0x1C0271580 (IsGetDpiSettingWithNoDefaultSupported.c)
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
  struct D3DKMT_GETPATHSMODALITY *v9; // r12
  unsigned int v10; // r13d
  struct tagSIZE v14; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v15; // rdi
  int v16; // eax
  int v17; // r15d
  HDEV v18; // r13
  __int64 Pool2; // rbx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // r14
  NSInstrumentation::CLeakTrackingAllocator *v21; // rcx
  _DWORD *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned int v26; // edi
  bool v27; // sf
  _DWORD *v28; // rsi
  int j; // eax
  unsigned __int16 v30; // ax
  int *v31; // r15
  struct _DRV_NAMES *v32; // rbx
  int v33; // ecx
  int v34; // edi
  unsigned int v35; // r12d
  struct _devicemodeW *v36; // rax
  int v37; // eax
  void *v38; // rdi
  HDEV v39; // rcx
  struct _devicemodeW *v40; // rax
  struct _DRV_NAMES *v41; // rdi
  struct D3DKMT_GETPATHSMODALITY *v42; // r12
  MULTIDEVLOCKOBJ *v43; // rax
  MULTIDEVLOCKOBJ *v44; // rbx
  int v45; // edi
  unsigned int v46; // eax
  unsigned int v47; // edx
  __int64 v48; // rcx
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // edi
  _DWORD *v52; // rsi
  void *v53; // rax
  MULTIDEVLOCKOBJ *v54; // rdi
  void *v55; // r13
  unsigned int v56; // r10d
  unsigned int v57; // r9d
  __int64 v58; // rdx
  __int64 v59; // rax
  _DWORD *v60; // r8
  __int64 v61; // rcx
  __int64 v62; // rcx
  struct tagSIZE v63; // r13
  void *v64; // rsi
  unsigned __int64 v65; // rsi
  _DWORD *v66; // rdi
  unsigned int v67; // ebx
  unsigned int v68; // r13d
  unsigned int k; // edi
  __int64 v70; // rbx
  _DWORD *v71; // rbx
  unsigned int v72; // edx
  int v73; // eax
  _WORD *v74; // r8
  unsigned int n; // r9d
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned int v79; // ebx
  __int64 v80; // rcx
  unsigned int v81; // r12d
  _QWORD *v82; // rsi
  __int64 v83; // r13
  __int64 v84; // rbx
  void (__fastcall *v85)(__int64, __int64); // rax
  __int128 v86; // xmm0
  __int64 v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  void *v91; // rsi
  __int64 v93; // r10
  int v94; // r11d
  struct _DRV_NAMES *DisplayDriverNames; // r15
  __int64 v96; // rdi
  __int16 v97; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  int v100; // ecx
  int v101; // eax
  unsigned int v102; // eax
  HDEV v103; // rcx
  unsigned int v104; // eax
  HDEV *v105; // rdx
  __int64 v106; // r8
  HDEV v107; // rax
  _DWORD *v108; // r15
  unsigned int v109; // ecx
  void *v110; // r12
  unsigned __int64 v111; // rax
  NSInstrumentation::CLeakTrackingAllocator *v112; // rbx
  unsigned __int64 v113; // rdi
  int v114; // eax
  int v115; // ecx
  __int64 v116; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v118; // eax
  unsigned int v119; // eax
  unsigned int v120; // eax
  unsigned int v121; // eax
  unsigned int m; // edx
  int v123; // ecx
  __int64 v124; // rax
  __int64 v125; // rax
  unsigned int v126; // r12d
  unsigned int v127; // edi
  __int64 v128; // rbx
  unsigned int v129; // kr00_4
  struct tagSIZE v130; // rax
  unsigned int v131; // edx
  unsigned int v132; // ecx
  bool v133; // r8
  struct tagSIZE v134; // rax
  unsigned int v135; // r12d
  unsigned int v136; // r10d
  unsigned int v137; // r9d
  unsigned int v138; // eax
  unsigned __int64 v139; // rdx
  int v140; // r10d
  _QWORD *v141; // rax
  unsigned int v142; // r10d
  __int64 v143; // r11
  int v144; // eax
  __int64 v145; // rdx
  struct _ERESOURCE *v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  struct _ERESOURCE *v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  struct _ERESOURCE *v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rcx
  struct _ERESOURCE *v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rcx
  unsigned int v158; // eax
  __int64 v159; // rbx
  int v160; // r11d
  unsigned __int16 i; // cx
  __int64 v162; // rdx
  int v163; // eax
  bool v164; // zf
  int v165; // eax
  bool v166; // zf
  struct _devicemodeW *v167; // rbx
  struct _devicemodeW *v168; // rdx
  struct _devicemodeW *v169; // rbx
  void *v170; // r9
  int v171; // ebx
  HDEV v172; // rcx
  unsigned int *v173; // rax
  struct _devicemodeW *v174; // rdx
  int v175; // eax
  __int64 v176; // rdx
  unsigned int v177; // edx
  char v178; // r10
  __int64 v179; // r11
  char v180; // si
  unsigned int v181; // eax
  int v182; // edx
  unsigned int v183; // eax
  _DWORD *v184; // rsi
  unsigned int v185; // eax
  unsigned int ii; // edx
  int v187; // r8d
  int v188; // edx
  unsigned int v189; // ecx
  __int64 v190; // rdi
  __int64 v191; // r10
  __int64 v192; // rbx
  unsigned int v193; // r10d
  __int64 v194; // rdi
  int v195; // edx
  __int64 v196; // r9
  __int64 v197; // r8
  __int64 v198; // rax
  int v199; // ecx
  unsigned int *v200; // r12
  int v201; // r8d
  __int64 v202; // rbx
  unsigned int Src; // [rsp+28h] [rbp-E0h]
  unsigned int Srca; // [rsp+28h] [rbp-E0h]
  int v205; // [rsp+38h] [rbp-D0h]
  int v206; // [rsp+38h] [rbp-D0h]
  struct _DPI_INFORMATION *v207; // [rsp+40h] [rbp-C8h]
  unsigned int v208; // [rsp+48h] [rbp-C0h]
  int v209; // [rsp+48h] [rbp-C0h]
  struct tagSIZE v210; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v211; // [rsp+60h] [rbp-A8h]
  int v212; // [rsp+64h] [rbp-A4h]
  __int64 v213; // [rsp+68h] [rbp-A0h]
  void *Buf2; // [rsp+70h] [rbp-98h]
  HDEV v215; // [rsp+78h] [rbp-90h]
  int v216; // [rsp+80h] [rbp-88h]
  struct _devicemodeW *v217; // [rsp+88h] [rbp-80h] BYREF
  int v218; // [rsp+90h] [rbp-78h]
  int v219; // [rsp+94h] [rbp-74h] BYREF
  int PruneFlag; // [rsp+98h] [rbp-70h]
  unsigned int v221; // [rsp+9Ch] [rbp-6Ch]
  int v222; // [rsp+A0h] [rbp-68h]
  unsigned int v223; // [rsp+A4h] [rbp-64h] BYREF
  void *Buf1; // [rsp+A8h] [rbp-60h]
  unsigned int v225; // [rsp+B0h] [rbp-58h] BYREF
  int v226; // [rsp+B4h] [rbp-54h] BYREF
  int v227; // [rsp+B8h] [rbp-50h]
  HDEV v228; // [rsp+C0h] [rbp-48h] BYREF
  struct tagSIZE v229; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v230; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *DeviceFromName; // [rsp+D8h] [rbp-30h]
  unsigned int v232; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v233; // [rsp+E4h] [rbp-24h]
  unsigned int v234; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v235; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v236; // [rsp+F8h] [rbp-10h] BYREF
  size_t Size; // [rsp+100h] [rbp-8h] BYREF
  __int64 *v238; // [rsp+108h] [rbp+0h] BYREF
  struct tagSIZE *v239; // [rsp+110h] [rbp+8h]
  __int64 v240; // [rsp+118h] [rbp+10h] BYREF
  __int64 v241; // [rsp+120h] [rbp+18h] BYREF
  void *v242; // [rsp+128h] [rbp+20h]
  _QWORD v243[2]; // [rsp+138h] [rbp+30h] BYREF
  struct tagSIZE v244[2]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v245; // [rsp+158h] [rbp+50h]
  PVOID BackTrace[20]; // [rsp+168h] [rbp+60h] BYREF
  PVOID v247[28]; // [rsp+208h] [rbp+100h] BYREF
  unsigned int v251; // [rsp+310h] [rbp+208h] BYREF

  v251 = a4;
  v9 = a9;
  v10 = (unsigned int)a5;
  v219 = a4 & 1;
  v212 = 0;
  v216 = 0;
  PruneFlag = a6 != 0;
  v222 = 0;
  v227 = 0;
  v14 = *(struct tagSIZE *)(SGDGetSessionState(a1) + 24);
  v210 = v14;
  Src = v10;
  WdLogSingleEntry4(4LL, a1, a3, a4);
  v15 = gpLeakTrackingAllocator;
  v234 = 1936876615;
  v16 = *(_DWORD *)gpLeakTrackingAllocator;
  v240 = 260LL;
  Size = 96LL;
  v17 = v9 != 0LL ? 4 : 1;
  v18 = 0LL;
  LODWORD(v213) = v17;
  if ( !v16 )
  {
    Pool2 = ExAllocatePool2(260LL, 96LL, 1936876615LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v15 + 14, 1uLL);
    goto LABEL_4;
  }
  if ( v16 != 1 )
  {
    if ( v16 == 2 )
    {
      v229 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              0x73726447u,
              (unsigned __int64 *)&v229) )
      {
        v238 = &v240;
        v239 = (struct tagSIZE *)&v234;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v15,
                  &v238,
                  &Size);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(v143, 112LL, v142);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v15 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>)(
                                  v15,
                                  Pool2,
                                  v229,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_4;
          }
        }
        else if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>)(
                                     v15,
                                     Pool2,
                                     v229,
                                     BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2;
          goto LABEL_5;
        }
        _InterlockedAdd64((volatile signed __int64 *)v15 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_408:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_129;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u) )
    goto LABEL_408;
  v141 = (_QWORD *)ExAllocatePool2(v240 & 0xFFFFFFFFFFFFFFFDuLL, 112LL, v234);
  Pool2 = (__int64)v141;
  if ( !v141
    || (_InterlockedAdd64((volatile signed __int64 *)v15 + 14, 1uLL),
        *v141 = 1936876615LL,
        Pool2 = (__int64)(v141 + 2),
        v141 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v15 + 1),
      (const void *)0x73726447);
  }
LABEL_4:
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2;
  if ( !Pool2 )
    goto LABEL_129;
LABEL_5:
  v21 = gpLeakTrackingAllocator;
  *(_DWORD *)(Pool2 + 20) = 0;
  *(_QWORD *)(Pool2 + 24) = a3;
  Buf2 = NSInstrumentation::CLeakTrackingAllocator::Allocate(v21, 0x104uLL, 0xDCuLL, 0x76656447u);
  v242 = Buf2;
  if ( !Buf2 )
    goto LABEL_352;
  v218 = a8;
LABEL_7:
  while ( 2 )
  {
    while ( 2 )
    {
      v23 = v212;
      v24 = 1LL;
      v22 = 0LL;
      v211 = 1;
      v25 = 0;
      DeviceFromName = 0LL;
      v233 = 0;
      v26 = 0;
      v228 = 0LL;
      v225 = 0;
      v232 = 0;
      v221 = 0;
      do
      {
        v27 = v23 < 0;
        if ( v23 )
          goto LABEL_55;
        v215 = 0LL;
        v228 = 0LL;
        if ( a1 )
        {
          if ( v22 )
          {
LABEL_225:
            if ( !a5 )
              goto LABEL_11;
            if ( v25 >= *((_DWORD *)a5 + 5) )
            {
              v18 = 0LL;
              goto LABEL_56;
            }
            v233 = v25 + 1;
            v18 = (HDEV)*((_QWORD *)a5 + 7 * v25 + 5);
            v215 = v18;
            v28 = (_DWORD *)*((_QWORD *)v18 + 319);
            if ( v28 == v22 )
              goto LABEL_341;
            v144 = v216;
            if ( (v28[40] & 8) != 0 )
              v144 = v216 ^ 1;
            if ( v144 )
              goto LABEL_341;
            EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)&v210 + 80LL));
            EtwTraceGreLockAcquireSemaphoreExclusive(
              L"GreBaseGlobals.hsemDynamicModeChange",
              *(_QWORD *)(*(_QWORD *)&v210 + 80LL),
              1LL);
            EngAcquireSemaphore(*((HSEMAPHORE *)v18 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *((_QWORD *)v18 + 6), 11LL);
            EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)&v210 + 8LL));
            EtwTraceGreLockAcquireSemaphoreExclusive(
              L"GreBaseGlobals.hsemDriverMgmt",
              *(_QWORD *)(*(_QWORD *)&v210 + 8LL),
              16LL);
            v145 = *((_QWORD *)v18 + 440);
            ++*((_DWORD *)v18 + 3);
            ++*((_DWORD *)v18 + 2);
            TrackObjectReferenceIncrement(1LL, v145);
            if ( ((_DWORD)v18[10] & 0x400) != 0 )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(*(_QWORD *)&v210 + 8LL));
              v146 = *(struct _ERESOURCE **)(*(_QWORD *)&v210 + 8LL);
              if ( v146 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v146);
                PsLeavePriorityRegion(v148, v147);
              }
              DrvEnableDisplay(v18);
              EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)&v210 + 8LL));
              EtwTraceGreLockAcquireSemaphoreExclusive(
                L"GreBaseGlobals.hsemDriverMgmt",
                *(_QWORD *)(*(_QWORD *)&v210 + 8LL),
                16LL);
            }
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(*(_QWORD *)&v210 + 8LL));
            v149 = *(struct _ERESOURCE **)(*(_QWORD *)&v210 + 8LL);
            if ( v149 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v149);
              PsLeavePriorityRegion(v151, v150);
            }
            EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *((_QWORD *)v18 + 6));
            v152 = (struct _ERESOURCE *)*((_QWORD *)v18 + 6);
            if ( v152 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v152);
              PsLeavePriorityRegion(v154, v153);
            }
            EtwTraceGreLockReleaseSemaphore(
              L"GreBaseGlobals.hsemDynamicModeChange",
              *(_QWORD *)(*(_QWORD *)&v210 + 80LL));
            v155 = *(struct _ERESOURCE **)(*(_QWORD *)&v210 + 80LL);
            if ( v155 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v155);
              PsLeavePriorityRegion(v157, v156);
            }
            v158 = (v28[40] >> 2) & 1;
            v225 = 1;
            v232 = v158;
          }
          else
          {
            DeviceFromName = (_DWORD *)DrvGetDeviceFromName(a1);
            v28 = DeviceFromName;
            if ( !a5 )
            {
              v24 = 0LL;
              v211 = 0;
              goto LABEL_17;
            }
          }
          v24 = v211;
          goto LABEL_17;
        }
        if ( v22 )
          goto LABEL_225;
LABEL_11:
        if ( v17 == 4 )
        {
          if ( v26 >= *((unsigned __int16 *)v9 + 10) )
          {
            v18 = 0LL;
LABEL_175:
            if ( v222 )
            {
              WdLogSingleEntry0(5LL);
              v17 = 1;
              LODWORD(v213) = 1;
              v216 = 1;
              goto LABEL_7;
            }
            WdLogSingleEntry1(2LL, -1073741823LL);
LABEL_352:
            if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            {
              DrvBackoutMDEV(
                (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                (unsigned int)v22);
              NSInstrumentation::CLeakTrackingAllocator::Free(
                gpLeakTrackingAllocator,
                (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
            }
            goto LABEL_127;
          }
          if ( (*((_QWORD *)v9 + 37 * v26 + 7) & 0x1000000000LL) != 0 )
            goto LABEL_253;
          if ( !IsPrimaryPathInCloneGroup(v9, v26) || *(_DWORD *)((char *)v9 + v93 + 248) < v94 )
          {
            v24 = v211;
LABEL_253:
            v221 = v26 + 1;
LABEL_343:
            v18 = 0LL;
LABEL_51:
            v23 = v212;
            goto LABEL_52;
          }
          v28 = *(_DWORD **)(*(_QWORD *)&v14 + 1264LL);
          if ( v28 )
          {
            while ( (v28[40] & 0x800000) == 0
                 || v28[60] != *(_DWORD *)((char *)v9 + v93 + 72)
                 || v28[61] != *(_DWORD *)((char *)v9 + v93 + 76)
                 || v28[62] != *(_DWORD *)((char *)v9 + v93 + 80) )
            {
              v28 = (_DWORD *)*((_QWORD *)v28 + 16);
              if ( !v28 )
                goto LABEL_244;
            }
          }
LABEL_139:
          if ( !v28 || (v28[41] & 1) != 0 )
          {
            if ( v18 )
              goto LABEL_154;
          }
          else
          {
            DisplayDriverNames = (struct _DRV_NAMES *)DrvGetDisplayDriverNames(v28);
            if ( DisplayDriverNames )
            {
              if ( v26 >= *((unsigned __int16 *)v9 + 10) )
                WdLogSingleEntry0(1LL);
              v96 = 296LL * v26;
              if ( _bittest64((const signed __int64 *)((char *)v9 + v96 + 56), 0x24u) )
                WdLogSingleEntry0(1LL);
              if ( !*(_QWORD *)((char *)v9 + v96 + 304) )
                WdLogSingleEntry0(1LL);
              v97 = *(_WORD *)(*(_QWORD *)&v210 + 1248LL);
              if ( !v97 )
              {
                v97 = 0;
                v223 = 0;
                if ( qword_1C02D6E38 )
                {
                  qword_1C02D6E38(1LL, &v223);
                  v97 = v223;
                }
                *(_WORD *)(*(_QWORD *)&v210 + 1248LL) = v97;
              }
              *(_WORD *)(*(_QWORD *)((char *)v9 + v96 + 304) + 166LL) = v97;
              DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v28);
              DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v28);
              v18 = hCreateHDEV(
                      (struct tagGRAPHICS_DEVICE *)v28,
                      DisplayDriverNames,
                      *(struct _devicemodeW **)((char *)v9 + v96 + 304),
                      a3,
                      DriverCapableOverRide,
                      DriverAccelerationsLevel,
                      v219,
                      (v251 >> 2) & 1,
                      1u,
                      &v228);
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, DisplayDriverNames);
              if ( v18 )
              {
                v100 = *(_DWORD *)((char *)v9 + v96 + 276);
                v26 = v221;
                *((_DWORD *)v18 + 630) = v100;
LABEL_154:
                v221 = v26 + 1;
                goto LABEL_155;
              }
              v26 = v221;
            }
            else if ( v18 )
            {
              goto LABEL_154;
            }
            *(_QWORD *)(*(_QWORD *)&v210 + 1328LL) = v28;
            DrvLogDisplayDriverEvent(2);
          }
LABEL_244:
          v159 = 296LL * v26;
          if ( !IsPrimaryPathInCloneGroup(v9, v26) || *(_DWORD *)((char *)v9 + v159 + 248) < v160 )
          {
            WdLogSingleEntry0(1LL);
            LOWORD(v160) = 0;
          }
          for ( i = v160; i < *((_WORD *)v9 + 10); ++i )
          {
            v162 = 296LL * i;
            if ( *(_DWORD *)((char *)v9 + v162 + 240) == *(_DWORD *)((char *)v9 + v159 + 240) )
              *(_DWORD *)((char *)v9 + v162 + 248) = -1073741823;
          }
          goto LABEL_154;
        }
        v28 = *(_DWORD **)(*(_QWORD *)&v14 + 1264LL);
        for ( j = 0; v28 && j != v25; ++j )
          v28 = (_DWORD *)*((_QWORD *)v28 + 16);
        v233 = v25 + 1;
        if ( *(_DWORD *)(*(_QWORD *)&v210 + 1232LL) && v28 && (v28[40] & 0x2800000) == 0 )
        {
          v14 = v210;
          goto LABEL_343;
        }
LABEL_17:
        if ( v17 == 4 )
        {
          if ( v18 )
            WdLogSingleEntry0(1LL);
          goto LABEL_139;
        }
        if ( !v28 )
        {
          v18 = 0LL;
          goto LABEL_57;
        }
        if ( (v28[41] & 1) != 0 )
        {
          v14 = v210;
          goto LABEL_343;
        }
        if ( a6 == -1 )
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v28);
        if ( v18 )
          goto LABEL_156;
        v230 = *(_QWORD *)(SGDGetSessionState(v24) + 24);
        if ( *(_DWORD *)(v230 + 1292) || v17 == 3 )
          v30 = -1;
        else
          v30 = gProtocolType;
        if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v28, v30, &v232, &v225) )
          goto LABEL_57;
        if ( v17 != 1 && v17 != 3 )
        {
          if ( v17 != 2 )
          {
            WdLogSingleEntry0(1LL);
            v165 = 0;
            if ( (v28[40] & 8) == 0 )
              LOBYTE(v165) = v222 == 0;
            goto LABEL_276;
          }
          v163 = v28[40];
          if ( (v163 & 8) != 0 )
          {
            if ( !v225 )
              goto LABEL_273;
            v164 = v216 == 0;
          }
          else
          {
            if ( (v163 & 0x2000000) != 0 || v222 )
              goto LABEL_273;
            v164 = gProtocolType == -1;
          }
          v165 = 1;
          if ( !v164 )
          {
LABEL_276:
            v166 = v165 == 0;
            v31 = v28 + 40;
            goto LABEL_48;
          }
LABEL_273:
          v165 = 0;
          goto LABEL_276;
        }
        if ( !v225 )
          goto LABEL_50;
        v31 = v28 + 40;
        if ( (v28[40] & 8) == 0 )
        {
          if ( v216 )
            goto LABEL_49;
          goto LABEL_31;
        }
        v166 = v216 == 0;
LABEL_48:
        if ( v166 )
          goto LABEL_49;
LABEL_31:
        Buf1 = (void *)DrvGetDisplayDriverNames(v28);
        v32 = (struct _DRV_NAMES *)Buf1;
        if ( !Buf1 )
          goto LABEL_173;
        v33 = *v31;
        v217 = 0LL;
        v226 = 0;
        if ( (v33 & 8) != 0 )
        {
          v34 = 4;
          v35 = 0;
        }
        else
        {
          v34 = 1;
          v35 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v28);
          LODWORD(v18) = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v28);
        }
        v36 = a2;
        if ( !a2 )
        {
          memset(Buf2, 0, 0xDCuLL);
          v36 = (struct _devicemodeW *)Buf2;
          *((_WORD *)Buf2 + 34) = 220;
        }
        v37 = DrvProbeAndCaptureDevmode(
                (struct tagGRAPHICS_DEVICE *)v28,
                &v217,
                &v226,
                0LL,
                v36,
                0,
                PruneFlag,
                a7,
                v218,
                0LL);
        if ( v37 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4);
LABEL_39:
          v208 = v34;
          v38 = a3;
          v215 = hCreateHDEV(
                   (struct tagGRAPHICS_DEVICE *)v28,
                   v32,
                   v217,
                   a3,
                   v35,
                   (unsigned int)v18,
                   v219,
                   (v251 >> 2) & 1,
                   v208,
                   &v228);
          v39 = v215;
          if ( !v215 && (*v31 & 0x2000000) != 0 )
            *(_DWORD *)(v230 + 1228) = 5;
          goto LABEL_40;
        }
        if ( v37 == -1073741776 )
        {
          v167 = *(struct _devicemodeW **)(*(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                     + 40)
                                         + 2568LL);
          if ( v217 && v217 != Buf2 )
          {
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v217);
            v217 = 0LL;
          }
          v37 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)v28,
                  &v217,
                  &v226,
                  0LL,
                  v167,
                  0,
                  PruneFlag,
                  a7,
                  v218,
                  0LL);
          v32 = (struct _DRV_NAMES *)Buf1;
        }
        if ( v37 >= 0 )
          goto LABEL_39;
        DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
        v39 = v215;
        v38 = a3;
        if ( (*v31 & 0x2000000) != 0 )
          *(_DWORD *)(v230 + 1228) = 4;
LABEL_40:
        v40 = a2;
        if ( (*v31 & 8) != 0 || a2 )
        {
          v41 = (struct _DRV_NAMES *)Buf1;
          goto LABEL_313;
        }
        if ( !v39 )
        {
          DrvLogDisplayDriverEvent(4);
          v168 = v217;
          if ( v217 )
          {
            if ( v217->dmBitsPerPel == 4 )
            {
              DrvLogDisplayDriverEvent(5);
              v168 = v217;
            }
            v169 = (struct _devicemodeW *)Buf2;
            if ( v168 != Buf2 )
            {
              if ( v168 )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v168);
              v217 = 0LL;
            }
          }
          else
          {
            v169 = (struct _devicemodeW *)Buf2;
          }
          memset(v169, 0, sizeof(struct _devicemodeW));
          v169->dmSize = 220;
          if ( (int)DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)v28,
                      &v217,
                      &v226,
                      0LL,
                      v169,
                      1,
                      PruneFlag,
                      a7,
                      v218,
                      0LL) >= 0 )
          {
            v170 = v38;
            v41 = (struct _DRV_NAMES *)Buf1;
            v171 = (v251 >> 2) & 1;
            v215 = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)v28,
                     (struct _DRV_NAMES *)Buf1,
                     v217,
                     v170,
                     v35,
                     (unsigned int)v18,
                     v219,
                     v171,
                     1u,
                     &v228);
            v172 = v215;
            if ( v215 )
              goto LABEL_307;
            v173 = (unsigned int *)v217;
            if ( v217->dmPelsWidth != 640 || v217->dmPelsHeight != 480 || v217->dmBitsPerPel != 4 )
            {
              if ( v217 != Buf2 )
              {
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v217);
                v217 = 0LL;
              }
              memset(Buf2, 0, 0xDCuLL);
              v174 = (struct _devicemodeW *)Buf2;
              *((_WORD *)Buf2 + 34) = 220;
              v209 = v218;
              v175 = a7;
              v174->dmBitsPerPel = (*v31 & 0x800000) != 0 ? 32 : 4;
              v206 = PruneFlag;
              v174->dmPelsWidth = 640;
              v174->dmPelsHeight = 480;
              v174->dmFields = 1835008;
              if ( (int)DrvProbeAndCaptureDevmode(
                          (struct tagGRAPHICS_DEVICE *)v28,
                          &v217,
                          &v226,
                          0LL,
                          v174,
                          0,
                          v206,
                          v175,
                          v209,
                          0LL) >= 0 )
              {
                v172 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)v28,
                         v41,
                         v217,
                         a3,
                         v35,
                         (unsigned int)v18,
                         v219,
                         v171,
                         1u,
                         &v228);
                v215 = v172;
                goto LABEL_307;
              }
LABEL_306:
              v172 = v215;
LABEL_307:
              v173 = (unsigned int *)v217;
            }
            if ( v173 )
            {
              v176 = v172 != 0LL;
            }
            else
            {
              v173 = (unsigned int *)Buf2;
              v176 = 2LL;
            }
            DrvDxgkLogCodePointPacket(26LL, v176, v173[43], v173[44]);
            v39 = v215;
            v40 = 0LL;
LABEL_313:
            if ( !v39 && !v40 )
            {
              *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(0LL) + 24) + 1328LL) = v28;
              DrvLogDisplayDriverEvent(2);
            }
            goto LABEL_44;
          }
          v41 = (struct _DRV_NAMES *)Buf1;
          goto LABEL_306;
        }
        v41 = (struct _DRV_NAMES *)Buf1;
LABEL_44:
        if ( v217 && v217 != Buf2 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v217);
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v41);
        v18 = v215;
LABEL_155:
        if ( !v18 )
        {
          v17 = v213;
LABEL_341:
          v14 = v210;
          v24 = v211;
          goto LABEL_343;
        }
LABEL_156:
        WdLogSingleEntry0(5LL);
        v101 = v28[40];
        v222 = 1;
        if ( v232 )
          v102 = v101 | 4;
        else
          v102 = v101 & 0xFFFFFFFB;
        v28[40] = v102;
        v103 = v228;
        if ( !v228 )
        {
          if ( a5 )
          {
            v104 = *((_DWORD *)a5 + 5);
            if ( v104 )
            {
              v105 = (HDEV *)((char *)a5 + 40);
              v106 = v104;
              do
              {
                v107 = *v105;
                v105 += 7;
                if ( v28 == *((_DWORD **)v107 + 319) )
                  v103 = v107;
                v228 = v103;
                --v106;
              }
              while ( v106 );
            }
          }
        }
        v108 = (_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
        *(_QWORD *)(56LL
                  * *(unsigned int *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20)
                  + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                  + 40) = v18;
        v18 = 0LL;
        *(_QWORD *)(56LL
                  * *(unsigned int *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20)
                  + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                  + 48) = v228;
        v109 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
        if ( v109 + 2 < v109 )
        {
LABEL_49:
          v17 = v213;
LABEL_50:
          v14 = v210;
          v24 = v211;
          goto LABEL_51;
        }
        v110 = (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        *v108 = v109 + 1;
        v111 = 96LL * (v109 + 2);
        if ( v111 > 0xFFFFFFFF )
          goto LABEL_339;
        if ( (_DWORD)v111 )
        {
          v112 = gpLeakTrackingAllocator;
          v113 = (unsigned int)v111;
          v235 = 1936876615;
          v241 = 260LL;
          v114 = *(_DWORD *)gpLeakTrackingAllocator;
          v230 = v113;
          if ( v114 )
          {
            if ( v114 != 1 )
            {
              if ( v114 == 2 )
              {
                v236 = 0LL;
                if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                        gpLeakTrackingAllocator,
                        0x73726447u,
                        &v236) )
                {
                  v243[0] = &v241;
                  v243[1] = &v235;
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                     v112,
                                                                                                     v243,
                                                                                                     &v230);
                  goto LABEL_171;
                }
                v180 = 0;
                if ( v113 < 0x1000 || (v113 & 0xFFF) != 0 )
                {
                  v113 += 16LL;
                  v180 = v178;
                  v230 = v113;
                }
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                                   v179,
                                                                                                   v113,
                                                                                                   v177);
                if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                {
                  _InterlockedAdd64((volatile signed __int64 *)v112 + 16, 1uLL);
                  NSInstrumentation::CBackTrace::CBackTrace(v247);
                  if ( v180
                    && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
                     + 16 < 0x1000 )
                  {
                    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                            v112,
                                            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                            v236,
                                            v247) )
                    {
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                      goto LABEL_171;
                    }
                  }
                  else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                               v112,
                                               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                               v236,
                                               v247) )
                  {
                    goto LABEL_171;
                  }
                  _InterlockedAdd64((volatile signed __int64 *)v112 + 17, 1uLL);
                  _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
                }
              }
LABEL_337:
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
              goto LABEL_171;
            }
            if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                    gpLeakTrackingAllocator,
                    0x73726447u)
              || v113 + 16 < v113 )
            {
              goto LABEL_337;
            }
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               v241 & 0xFFFFFFFFFFFFFFFDuLL,
                                                                                               v113 + 16,
                                                                                               v235);
            if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
              || (_InterlockedAdd64((volatile signed __int64 *)v112 + 14, 1uLL),
                  *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 1936876615LL,
                  (UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL) == 0) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v112 + 1),
                (const void *)0x73726447);
            }
          }
          else
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               260LL,
                                                                                               (unsigned int)v113,
                                                                                               1936876615LL);
            if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              _InterlockedAdd64((volatile signed __int64 *)v112 + 14, 1uLL);
          }
        }
        else
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
        }
LABEL_171:
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        {
          memmove(
            (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            v110,
            96LL * (unsigned int)*v108);
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v110);
LABEL_173:
          v17 = v213;
          v14 = v210;
          v24 = v211;
          goto LABEL_51;
        }
LABEL_339:
        v17 = v213;
        v23 = -1073741670;
        v14 = v210;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v110;
        v24 = v211;
        v212 = -1073741670;
LABEL_52:
        v9 = a9;
        v26 = v221;
        v25 = v233;
        v22 = DeviceFromName;
      }
      while ( (_DWORD)v24 );
      v27 = v23 < 0;
LABEL_55:
      if ( v27 )
        goto LABEL_352;
LABEL_56:
      if ( v17 == 4 )
        goto LABEL_175;
LABEL_57:
      if ( !v222 )
      {
        if ( v17 == 1 )
        {
          WdLogSingleEntry0(5LL);
          v17 = 2;
          v14 = v210;
          LODWORD(v213) = 2;
          if ( v218 )
            v218 = 0;
        }
        else
        {
          if ( v17 != 2 || !(unsigned int)UserIsWddmConnectedSession() )
          {
            WdLogSingleEntry0(5LL);
            goto LABEL_352;
          }
          WdLogSingleEntry0(5LL);
          v14 = v210;
          v17 = 3;
          LODWORD(v213) = 3;
        }
        continue;
      }
      break;
    }
    if ( !v216 )
    {
      WdLogSingleEntry0(5LL);
      v14 = v210;
      v216 = 1;
      continue;
    }
    break;
  }
  if ( (v251 & 2) != 0 )
    goto LABEL_127;
  a6 = 0;
  a9 = 0LL;
  v42 = 0LL;
  v43 = (MULTIDEVLOCKOBJ *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                             gpLeakTrackingAllocator,
                             0x104uLL,
                             0x68uLL,
                             0x6C6D6847u);
  v44 = v43;
  if ( !v43 )
    goto LABEL_352;
  *(_QWORD *)v43 = 1LL;
  *((_QWORD *)v43 + 1) = 0LL;
  *((_QWORD *)v43 + 2) = 0LL;
  MULTIDEVLOCKOBJ::vInit(
    v43,
    (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  v45 = 0;
  if ( (*(_DWORD *)v44 & 1) == 0 )
    goto LABEL_125;
  MULTIDEVLOCKOBJ::vLock(v44);
  v46 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
  v47 = 0;
  LODWORD(a5) = 0;
  if ( !v46 )
    goto LABEL_70;
  LODWORD(a5) = 0;
  while ( 2 )
  {
    v48 = *(_QWORD *)(*(_QWORD *)(56LL * v47
                                + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                + 40)
                    + 2552LL);
    v49 = *(_DWORD *)(v48 + 160);
    if ( (v49 & 8) != 0 )
    {
      if ( (v49 & 4) != 0 )
      {
        v49 &= ~4u;
        *(_DWORD *)(v48 + 160) = v49;
        goto LABEL_67;
      }
    }
    else
    {
      if ( !v42 )
        a6 = v47;
LABEL_67:
      if ( (v49 & 4) != 0 )
      {
        if ( v42 )
        {
          LODWORD(a5) = -1073741438;
          *(_DWORD *)(v48 + 160) = v49 & 0xFFFFFFFB;
        }
        else
        {
          v42 = (struct D3DKMT_GETPATHSMODALITY *)v48;
          a6 = v47;
        }
      }
    }
    v46 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
    if ( ++v47 < v46 )
      continue;
    break;
  }
  a9 = v42;
LABEL_70:
  v50 = 16 * v46;
  v51 = v50;
  Size = v50;
  if ( !v50 )
  {
    v54 = v44;
    goto LABEL_122;
  }
  Buf2 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v50, 0x73726447u);
  v52 = Buf2;
  v53 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v51, 0x73726447u);
  v54 = v44;
  v215 = (HDEV)v44;
  Buf1 = v53;
  v55 = v53;
  if ( !Buf2 )
    goto LABEL_120;
  if ( !v53 )
    goto LABEL_119;
  v56 = 0;
  v223 = 0;
  v57 = 0;
  if ( *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) )
  {
    do
    {
      v58 = 2LL * v57;
      v59 = *(_QWORD *)(56LL * v57 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40);
      v60 = *(_DWORD **)(v59 + 2568);
      v52[2 * v58] = v60[19];
      v52[2 * v58 + 1] = v60[20];
      v52[2 * v58 + 2] = v60[19] + v60[43];
      v52[2 * v58 + 3] = v60[20] + v60[44];
      v61 = *(_QWORD *)(v59 + 2552);
      if ( (*(_DWORD *)(v61 + 160) & 8) == 0 )
      {
        if ( !v42 && !v60[19] && !v60[20] )
        {
          a6 = v57;
          v42 = (struct D3DKMT_GETPATHSMODALITY *)v61;
        }
        ++v56;
      }
      ++v57;
    }
    while ( v57 < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) );
    v54 = (MULTIDEVLOCKOBJ *)v215;
    v223 = v56;
    a9 = v42;
  }
  v236 = (unsigned __int64)v54;
  DeviceFromName = v52;
  memmove(v55, v52, Size);
  v63 = *(struct tagSIZE *)(SGDGetSessionState(v62) + 24);
  v229 = v63;
  if ( !*(_DWORD *)(*(_QWORD *)&v63 + 1280LL) )
  {
    v251 = 0;
    *(_DWORD *)(*(_QWORD *)&v63 + 1288LL) = 0;
    if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
    {
      v64 = DeviceFromName;
      v215 = (HDEV)v54;
      Buf2 = DeviceFromName;
      if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
      {
        GetWin8StyleDpiSettingFromRegistry(*(_QWORD *)&v63 + 1288LL);
        Buf2 = v64;
        v65 = v236;
        v215 = (HDEV)v236;
        if ( *(_DWORD *)(*(_QWORD *)&v63 + 1288LL) )
        {
          if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 && qword_1C02D5968 )
            qword_1C02D5968(0LL, &v251);
          v181 = v251;
          v215 = (HDEV)v65;
          if ( v251 <= 0x60 )
            v181 = 96;
          if ( v181 >= 0x1E0 )
            LOWORD(v181) = 480;
          *(_WORD *)(*(_QWORD *)&v63 + 1248LL) = v181;
          Buf2 = DeviceFromName;
        }
      }
    }
  }
  v66 = *(_DWORD **)(56LL * a6 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40);
  DeviceFromName = v66;
  *(_DWORD *)(*((_QWORD *)v66 + 319) + 160LL) |= 4u;
  v67 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
  if ( v67 )
  {
    v68 = a6;
    for ( k = 0; k < v67; ++k )
    {
      Size = 56LL * k;
      v70 = *(_QWORD *)(Size + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(v70 + 2552) + 160LL) & 0x800000) != 0 )
      {
        v115 = 0;
        if ( k == v68 )
          v115 = 32;
        v116 = *(_DWORD *)(v70 + 2516) & 0xFFFFFFDF | v115;
        *(_DWORD *)(v70 + 2516) = v116;
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v116, 32LL);
        Src = v70 + 2424;
        v118 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(DxgkWin32kInterface + 520))(
                 *(_QWORD *)(*(_QWORD *)(v70 + 2552) + 232LL),
                 *(unsigned int *)(*(_QWORD *)(v70 + 2552) + 248LL),
                 0LL,
                 v70 + 2104);
        if ( v118 < 0 )
          WdLogSingleEntry3(
            2LL,
            v118,
            *(_QWORD *)(*(_QWORD *)(v70 + 2552) + 232LL),
            *(unsigned int *)(*(_QWORD *)(v70 + 2552) + 248LL));
        *(_DWORD *)(Size + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 92) = *(_DWORD *)(v70 + 2520);
      }
      v67 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
    }
    v66 = DeviceFromName;
    v63 = v229;
    v42 = a9;
  }
  if ( *(_DWORD *)(*(_QWORD *)&v63 + 1280LL) )
    goto LABEL_106;
  v71 = (_DWORD *)(*(_QWORD *)&v63 + 1288LL);
  v251 = 0;
  *(_DWORD *)(*(_QWORD *)&v63 + 1288LL) = 0;
  if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
  {
    v120 = v66[888];
    if ( v120 )
    {
      *(_WORD *)(*(_QWORD *)&v63 + 1248LL) = (96 * HIWORD(v120) + 50) / 0x64u;
    }
    else
    {
      if ( wcsncmp(*((const wchar_t **)v42 + 25), L"WORKERDD", *((unsigned int *)v42 + 64))
        && wcsncmp(*((const wchar_t **)v42 + 25), L"TSDDD", *((unsigned int *)v42 + 64)) )
      {
        *v71 = 1;
      }
      if ( qword_1C02D6E38 )
        qword_1C02D6E38(2LL, &v251);
      v121 = v251;
      if ( v251 <= 0x60 )
        v121 = 96;
      if ( v121 >= 0x1E0 )
        v121 = 480;
      v251 = v121;
      *(_WORD *)(*(_QWORD *)&v63 + 1248LL) = v121;
    }
    for ( m = 0;
          m < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
          *(_WORD *)(*(_QWORD *)(v125 + 2568) + 166LL) = *(_WORD *)(*(_QWORD *)&v63 + 1248LL) )
    {
      v123 = *(unsigned __int16 *)(*(_QWORD *)&v63 + 1248LL);
      v124 = m++;
      v125 = *(_QWORD *)(56 * v124 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40);
      *(_DWORD *)(v125 + 2148) = v123;
      *(_DWORD *)(v125 + 2144) = v123;
    }
    goto LABEL_105;
  }
  v72 = (96 * v66[609] + 50) / 0x64u;
  if ( (_WORD)v72 && qword_1C02D6E58 )
    qword_1C02D6E58(1LL, (unsigned __int16)v72);
  if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
    GetWin8StyleDpiSettingFromRegistry(*(_QWORD *)&v63 + 1288LL);
  if ( *v71 )
  {
    if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 && qword_1C02D5968 )
      qword_1C02D5968(0LL, &v251);
    v119 = v251;
    v74 = (_WORD *)(*(_QWORD *)&v63 + 1248LL);
    if ( v251 <= 0x60 )
      v119 = 96;
    if ( v119 >= 0x1E0 )
      v119 = 480;
    v251 = v119;
    goto LABEL_184;
  }
  v73 = v66[608];
  v74 = (_WORD *)(*(_QWORD *)&v63 + 1248LL);
  if ( !v73 )
  {
    LOWORD(v119) = 96;
LABEL_184:
    *v74 = v119;
    goto LABEL_101;
  }
  *v74 = (96 * v73 + 50) / 0x64u;
LABEL_101:
  for ( n = 0; n < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20); ++n )
  {
    v76 = (unsigned __int16)*v74;
    v77 = *(_QWORD *)(56LL * n + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40);
    v78 = *(_QWORD *)(v77 + 2568);
    *(_DWORD *)(v77 + 2148) = v76;
    *(_DWORD *)(v77 + 2144) = v76;
    *(_WORD *)(v78 + 166) = *v74;
    if ( *v71 )
    {
      v182 = 100 * (unsigned __int16)*v74;
      *(_DWORD *)(v77 + 2508) = 1234568;
      *(_DWORD *)(v77 + 2432) = (v182 + 48) / 0x60u;
    }
  }
LABEL_105:
  *(_DWORD *)(*(_QWORD *)&v63 + 1280LL) = 1;
  v67 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
LABEL_106:
  if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
  {
    LODWORD(a9) = 1;
    v126 = 1;
    if ( v67 )
    {
      v127 = 0;
      do
      {
        v128 = *(_QWORD *)(56LL * v127
                         + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                         + 40);
        v129 = *(_DWORD *)(v128 + 2116);
        LOBYTE(v251) = ((*(_DWORD *)(*(_QWORD *)(v128 + 2568) + 84LL) - 1) & 0xFFFFFFFD) == 0;
        v130 = AdjustForOrientation(*(_DWORD *)(v128 + 2112) / 0x3E8u, v129 / 0x3E8, v251);
        v131 = *(_DWORD *)(v128 + 2124);
        v132 = *(_DWORD *)(v128 + 2120);
        v210 = v130;
        v134 = AdjustForOrientation(v132, v131, v133);
        v135 = *(_DWORD *)(v128 + 3552);
        v229 = v134;
        v238 = (__int64 *)(v136 | 0x2000000000LL);
        v239 = v244;
        *(_OWORD *)&v244[0].cx = 0LL;
        v245 = 0LL;
        if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)&v238) < 0 )
          WdLogSingleEntry0(1LL);
        v207 = (struct _DPI_INFORMATION *)(v128 + 2424);
        if ( v135 )
        {
          FillDpiInfo(&v210, &v229, (struct tagSIZE)v244, v137, 0, HIWORD(v135), v205, v207);
          *(_DWORD *)(v128 + 2516) |= 0x200u;
          v126 = (unsigned int)a9;
        }
        else
        {
          *(_DWORD *)(v128 + 2516) &= ~0x200u;
          v126 = 0;
          v138 = *(unsigned __int16 *)(*(_QWORD *)&v63 + 1248LL);
          LODWORD(a9) = 0;
          FillDpiInfo(&v210, &v229, (struct tagSIZE)v244, v137, v138, 0, v205, v207);
        }
        GetRemoteScaleOverrideTestHook(
          (const unsigned __int16 *)(*(_QWORD *)(v128 + 2552) + 64LL),
          v139,
          (struct _DPI_INFORMATION *)(v128 + 2424));
        ++v127;
        *(_DWORD *)(v128 + 2516) = *(_DWORD *)(v128 + 2516) & 0xFFFFFF7F | ((unsigned __int8)v251 << 7);
      }
      while ( v127 < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) );
      v66 = DeviceFromName;
    }
    UserSetScaleFactorsFromRemoteMetric(v126);
    v227 = v140;
  }
  else
  {
    *((_DWORD *)gpsi + 559) &= ~0x40u;
  }
  v79 = v223;
  *(_WORD *)(*(_QWORD *)&v63 + 1250LL) = (96 * v66[609] + 50) / 0x64u;
  v55 = Buf1;
  AlignRects((struct tagRECT *)Buf1, v79);
  v52 = Buf2;
  if ( memcmp(v55, Buf2, 16LL * v79) )
    WdLogSingleEntry0(3LL);
  v81 = 0;
  if ( *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) )
  {
    v82 = v55;
    v80 = 0LL;
    do
    {
      v83 = 56LL * v81;
      v84 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + v83 + 40);
      *(_QWORD *)(v84 + 2560) = v82[2 * v81];
      v85 = *(void (__fastcall **)(__int64, __int64))(v84 + 3360);
      if ( v85 )
      {
        v85((*(_QWORD *)(v84 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v84 + 2528) != 0LL), 2LL);
        v80 = 0LL;
      }
      v86 = *(_OWORD *)&v82[2 * v81++];
      *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + v83 + 56) = v86;
      *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + v83 + 72) = *(_DWORD *)(v84 + 2432);
    }
    while ( v81 < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) );
    v52 = Buf2;
    v55 = Buf1;
  }
  v87 = *(_QWORD *)(SGDGetSessionState(v80) + 24);
  a9 = (struct D3DKMT_GETPATHSMODALITY *)v87;
  if ( (unsigned int)bUniformSpaceDpiMode() )
  {
    v183 = 4 * *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
    if ( v183 )
    {
      v184 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v183, 0x73726447u);
      if ( v184 )
      {
        v185 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
        for ( ii = 0;
              ii < v185;
              v185 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) )
        {
          v184[ii] = ii;
          ++ii;
        }
        do
        {
          v187 = 0;
          v188 = 0;
          v189 = v185;
          if ( v185 != 1 )
          {
            do
            {
              v190 = (unsigned int)(v188 + 1);
              v191 = (unsigned int)v184[v190];
              v192 = (unsigned int)v184[v188];
              if ( *(_DWORD *)(56 * (v192 + 1)
                             + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) > *(_DWORD *)(56 * (v191 + 1) + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) )
              {
                v184[v188] = v191;
                v187 = 1;
                v184[v190] = v192;
              }
              v189 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
              ++v188;
            }
            while ( (unsigned int)v190 < v189 - 1 );
          }
          v185 = v189;
        }
        while ( v187 );
        v193 = v189 - 1;
        LODWORD(v194) = 0;
        v195 = 0;
        if ( v189 == 1 )
        {
LABEL_398:
          v200 = &v184[(unsigned int)v194];
          MapMonitorToUnifromSpaceInStripe(
            (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            *v200,
            0xFFFFFFFF,
            0,
            Src);
          v201 = v194;
          if ( (unsigned int)v194 < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                              + 20)
                                  - 1 )
          {
            do
            {
              v202 = (unsigned int)(v201 + 1);
              MapMonitorToUnifromSpaceInStripe(
                (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                v184[v202],
                v184[v201],
                1,
                Srca);
              v201 = v202;
            }
            while ( (unsigned int)v202 < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                   + 20)
                                       - 1 );
            v55 = Buf1;
          }
          while ( (_DWORD)v194 )
          {
            v194 = (unsigned int)(v194 - 1);
            MapMonitorToUnifromSpaceInStripe(
              (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
              v184[v194],
              *v200--,
              0,
              Srca);
          }
          *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) |= 2u;
          *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = 96;
          *((_DWORD *)a9 + 330) = 1;
        }
        else
        {
          while ( 1 )
          {
            v196 = (unsigned int)(v195 + 1);
            v197 = 56 * ((unsigned int)v184[v195] + 1LL);
            v198 = 56 * ((unsigned int)v184[v196] + 1LL);
            v199 = *(_DWORD *)(v198 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            if ( *(_DWORD *)(v197 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) != v199 )
              break;
            if ( *(_DWORD *)(v197 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64)
              || *(_DWORD *)(v197 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) )
            {
              if ( !v199
                && !*(_DWORD *)(v198 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) )
              {
                LODWORD(v194) = v195 + 1;
              }
            }
            else
            {
              LODWORD(v194) = v195;
            }
            ++v195;
            if ( (unsigned int)v196 >= v193 )
              goto LABEL_398;
          }
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v184);
      }
      v52 = Buf2;
    }
  }
  else
  {
    *(_DWORD *)(v87 + 1320) = 0;
  }
  v54 = (MULTIDEVLOCKOBJ *)v215;
LABEL_119:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v52);
LABEL_120:
  v44 = v54;
  if ( v55 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v55);
LABEL_122:
  MULTIDEVLOCKOBJ::vUnlock(v54);
  v91 = v242;
  Buf2 = v242;
  if ( v227 )
  {
    v219 = *(_DWORD *)SGDGetUserSessionState(v88, v22, v89, v90);
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &v219);
    Buf2 = v91;
  }
  v45 = (int)a5;
  if ( v44 )
LABEL_125:
    MULTIDEVLOCKOBJ::`scalar deleting destructor'(v44);
  if ( v45 < 0 )
    goto LABEL_352;
LABEL_127:
  if ( Buf2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Buf2);
LABEL_129:
  WdLogSingleEntry1(5LL, UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  return (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
}
