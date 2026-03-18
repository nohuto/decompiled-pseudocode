/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001FC24
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 * Callees:
 *     DrvGetDisplayDriverNames @ 0x1C0017080 (DrvGetDisplayDriverNames.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00179AC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0018E08 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C001C0E8 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001C144 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C001C26C (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C001D7F0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001E410 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00210F0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00245E8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0041CF0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     DrvGetDeviceFromName @ 0x1C005B090 (DrvGetDeviceFromName.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0080338 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00BA8D0 (DrvDxgkLogCodePointPacket.c)
 *     AlignRects @ 0x1C00BD1E8 (AlignRects.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x1C00BD400 (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD52C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BD79C (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00C41A8 (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C00C489C (UserSetScaleFactorsFromRemoteMetric.c)
 *     IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C00C4A14 (IsGetWin8StyleDpiSettingFromRegistrySupported.c)
 *     GetWin8StyleDpiSettingFromRegistry @ 0x1C00C4A40 (GetWin8StyleDpiSettingFromRegistry.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00CA81C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00CB484 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBA60 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?AdjustForOrientation@@YA?AUtagSIZE@@II_N@Z @ 0x1C00CC558 (-AdjustForOrientation@@YA-AUtagSIZE@@II_N@Z.c)
 *     wcsncmp @ 0x1C00CE478 (wcsncmp.c)
 *     memcmp @ 0x1C00D6840 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0160B38 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C0163BDC (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     IsGetDpiSettingWithNoDefaultSupported @ 0x1C02326C0 (IsGetDpiSettingWithNoDefaultSupported.c)
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
  struct _MDEV *v10; // r13
  struct tagSIZE v14; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v15; // rdi
  int v16; // eax
  int v17; // r15d
  HDEV v18; // r13
  __int64 Pool2; // rbx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // r14
  NSInstrumentation::CLeakTrackingAllocator *v21; // rcx
  unsigned int *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned int v26; // edi
  bool v27; // sf
  __int64 v28; // rsi
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
  unsigned int *v52; // rsi
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
  unsigned int *v64; // rsi
  unsigned __int64 v65; // rsi
  unsigned int *v66; // rdi
  unsigned int v67; // ebx
  unsigned int v68; // r13d
  unsigned int k; // edi
  __int64 v70; // rbx
  _DWORD *v71; // rbx
  unsigned int v72; // edx
  unsigned int v73; // eax
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
  unsigned int *DisplayDriverNames; // r15
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
  struct _ERESOURCE *v147; // rcx
  struct _ERESOURCE *v148; // rcx
  struct _ERESOURCE *v149; // rcx
  unsigned int v150; // eax
  __int64 v151; // rbx
  int v152; // r11d
  unsigned __int16 i; // cx
  __int64 v154; // rdx
  int v155; // eax
  bool v156; // zf
  int v157; // eax
  bool v158; // zf
  struct _devicemodeW *v159; // rbx
  struct _devicemodeW *v160; // rdx
  struct _devicemodeW *v161; // rbx
  void *v162; // r9
  int v163; // ebx
  HDEV v164; // rcx
  unsigned int *v165; // rax
  struct _devicemodeW *v166; // rdx
  int v167; // eax
  __int64 v168; // rdx
  unsigned int v169; // edx
  char v170; // r10
  __int64 v171; // r11
  char v172; // si
  unsigned int v173; // eax
  int v174; // edx
  unsigned int v175; // eax
  _DWORD *v176; // rsi
  unsigned int v177; // eax
  unsigned int ii; // edx
  int v179; // r8d
  int v180; // edx
  unsigned int v181; // ecx
  __int64 v182; // rdi
  __int64 v183; // r10
  __int64 v184; // rbx
  unsigned int v185; // r10d
  __int64 v186; // rdi
  int v187; // edx
  __int64 v188; // r9
  __int64 v189; // r8
  __int64 v190; // rax
  int v191; // ecx
  unsigned int *v192; // r12
  int v193; // r8d
  __int64 v194; // rbx
  unsigned int Src; // [rsp+28h] [rbp-E0h]
  unsigned int Srca; // [rsp+28h] [rbp-E0h]
  int v197; // [rsp+38h] [rbp-D0h]
  int v198; // [rsp+38h] [rbp-D0h]
  struct _DPI_INFORMATION *v199; // [rsp+40h] [rbp-C8h]
  unsigned int v200; // [rsp+48h] [rbp-C0h]
  int v201; // [rsp+48h] [rbp-C0h]
  struct tagSIZE v202; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v203; // [rsp+60h] [rbp-A8h]
  int v204; // [rsp+64h] [rbp-A4h]
  __int64 v205; // [rsp+68h] [rbp-A0h]
  void *Buf2; // [rsp+70h] [rbp-98h]
  HDEV v207; // [rsp+78h] [rbp-90h]
  int v208; // [rsp+80h] [rbp-88h]
  struct _devicemodeW *v209; // [rsp+88h] [rbp-80h] BYREF
  int v210; // [rsp+90h] [rbp-78h]
  int v211; // [rsp+94h] [rbp-74h] BYREF
  int PruneFlag; // [rsp+98h] [rbp-70h]
  unsigned int v213; // [rsp+9Ch] [rbp-6Ch]
  int v214; // [rsp+A0h] [rbp-68h]
  unsigned int v215; // [rsp+A4h] [rbp-64h] BYREF
  void *Buf1; // [rsp+A8h] [rbp-60h]
  unsigned int v217; // [rsp+B0h] [rbp-58h] BYREF
  int v218; // [rsp+B4h] [rbp-54h] BYREF
  int v219; // [rsp+B8h] [rbp-50h]
  HDEV v220; // [rsp+C0h] [rbp-48h] BYREF
  struct tagSIZE v221; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v222; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int *DeviceFromName; // [rsp+D8h] [rbp-30h]
  unsigned int v224; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v225; // [rsp+E4h] [rbp-24h]
  unsigned int v226; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v227; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v228; // [rsp+F8h] [rbp-10h] BYREF
  size_t Size; // [rsp+100h] [rbp-8h] BYREF
  __int64 *v230; // [rsp+108h] [rbp+0h] BYREF
  struct tagSIZE *v231; // [rsp+110h] [rbp+8h]
  __int64 v232; // [rsp+118h] [rbp+10h] BYREF
  __int64 v233; // [rsp+120h] [rbp+18h] BYREF
  void *v234; // [rsp+128h] [rbp+20h]
  _QWORD v235[2]; // [rsp+138h] [rbp+30h] BYREF
  struct tagSIZE v236[2]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v237; // [rsp+158h] [rbp+50h]
  PVOID BackTrace[20]; // [rsp+168h] [rbp+60h] BYREF
  PVOID v239[28]; // [rsp+208h] [rbp+100h] BYREF
  unsigned int v243; // [rsp+310h] [rbp+208h] BYREF

  v243 = a4;
  v9 = a9;
  v10 = a5;
  v211 = a4 & 1;
  v204 = 0;
  v208 = 0;
  PruneFlag = a6 != 0;
  v214 = 0;
  v219 = 0;
  v14 = *(struct tagSIZE *)(SGDGetSessionState(a1) + 24);
  v202 = v14;
  WdLogSingleEntry4(4LL, a1, a3, a4, v10);
  v15 = gpLeakTrackingAllocator;
  v226 = 1936876615;
  v16 = *(_DWORD *)gpLeakTrackingAllocator;
  v232 = 260LL;
  Size = 96LL;
  v17 = v9 != 0LL ? 4 : 1;
  v18 = 0LL;
  LODWORD(v205) = v17;
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
      v221 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              0x73726447u,
              (unsigned __int64 *)&v221) )
      {
        v230 = &v232;
        v231 = (struct tagSIZE *)&v226;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v15,
                  &v230,
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
                                  v221,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_4;
          }
        }
        else if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>)(
                                     v15,
                                     Pool2,
                                     v221,
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
  v141 = (_QWORD *)ExAllocatePool2(v232 & 0xFFFFFFFFFFFFFFFDuLL, 112LL, v226);
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
  v234 = Buf2;
  if ( !Buf2 )
    goto LABEL_352;
  v210 = a8;
LABEL_7:
  while ( 2 )
  {
    while ( 2 )
    {
      v23 = v204;
      v24 = 1LL;
      v22 = 0LL;
      v203 = 1;
      v25 = 0;
      DeviceFromName = 0LL;
      v225 = 0;
      v26 = 0;
      v220 = 0LL;
      v217 = 0;
      v224 = 0;
      v213 = 0;
      do
      {
        v27 = v23 < 0;
        if ( v23 )
          goto LABEL_55;
        v207 = 0LL;
        v220 = 0LL;
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
            v225 = v25 + 1;
            v18 = (HDEV)*((_QWORD *)a5 + 7 * v25 + 5);
            v207 = v18;
            v28 = *((_QWORD *)v18 + 319);
            if ( (unsigned int *)v28 == v22 )
              goto LABEL_341;
            v144 = v208;
            if ( (*(_DWORD *)(v28 + 160) & 8) != 0 )
              v144 = v208 ^ 1;
            if ( v144 )
              goto LABEL_341;
            EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)&v202 + 80LL));
            EtwTraceGreLockAcquireSemaphoreExclusive(
              L"GreBaseGlobals.hsemDynamicModeChange",
              *(_QWORD *)(*(_QWORD *)&v202 + 80LL),
              1LL);
            EngAcquireSemaphore(*((HSEMAPHORE *)v18 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *((_QWORD *)v18 + 6), 11LL);
            EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)&v202 + 8LL));
            EtwTraceGreLockAcquireSemaphoreExclusive(
              L"GreBaseGlobals.hsemDriverMgmt",
              *(_QWORD *)(*(_QWORD *)&v202 + 8LL),
              16LL);
            v145 = *((_QWORD *)v18 + 440);
            ++*((_DWORD *)v18 + 3);
            ++*((_DWORD *)v18 + 2);
            TrackObjectReferenceIncrement(1LL, v145);
            if ( ((_DWORD)v18[10] & 0x400) != 0 )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(*(_QWORD *)&v202 + 8LL));
              v146 = *(struct _ERESOURCE **)(*(_QWORD *)&v202 + 8LL);
              if ( v146 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v146);
                PsLeavePriorityRegion();
              }
              DrvEnableDisplay(v18);
              EngAcquireSemaphore(*(HSEMAPHORE *)(*(_QWORD *)&v202 + 8LL));
              EtwTraceGreLockAcquireSemaphoreExclusive(
                L"GreBaseGlobals.hsemDriverMgmt",
                *(_QWORD *)(*(_QWORD *)&v202 + 8LL),
                16LL);
            }
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(*(_QWORD *)&v202 + 8LL));
            v147 = *(struct _ERESOURCE **)(*(_QWORD *)&v202 + 8LL);
            if ( v147 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v147);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *((_QWORD *)v18 + 6));
            v148 = (struct _ERESOURCE *)*((_QWORD *)v18 + 6);
            if ( v148 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v148);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(
              L"GreBaseGlobals.hsemDynamicModeChange",
              *(_QWORD *)(*(_QWORD *)&v202 + 80LL));
            v149 = *(struct _ERESOURCE **)(*(_QWORD *)&v202 + 80LL);
            if ( v149 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v149);
              PsLeavePriorityRegion();
            }
            v150 = (*(_DWORD *)(v28 + 160) >> 2) & 1;
            v217 = 1;
            v224 = v150;
          }
          else
          {
            DeviceFromName = (unsigned int *)DrvGetDeviceFromName(a1);
            v28 = (__int64)DeviceFromName;
            if ( !a5 )
            {
              v24 = 0LL;
              v203 = 0;
              goto LABEL_17;
            }
          }
          v24 = v203;
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
            if ( v214 )
            {
              WdLogSingleEntry0(5LL);
              v17 = 1;
              LODWORD(v205) = 1;
              v208 = 1;
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
            v24 = v203;
LABEL_253:
            v213 = v26 + 1;
LABEL_343:
            v18 = 0LL;
LABEL_51:
            v23 = v204;
            goto LABEL_52;
          }
          v28 = *(_QWORD *)(*(_QWORD *)&v14 + 1264LL);
          if ( v28 )
          {
            while ( (*(_DWORD *)(v28 + 160) & 0x800000) == 0
                 || *(_DWORD *)(v28 + 240) != *(_DWORD *)((char *)v9 + v93 + 72)
                 || *(_DWORD *)(v28 + 244) != *(_DWORD *)((char *)v9 + v93 + 76)
                 || *(_DWORD *)(v28 + 248) != *(_DWORD *)((char *)v9 + v93 + 80) )
            {
              v28 = *(_QWORD *)(v28 + 128);
              if ( !v28 )
                goto LABEL_244;
            }
          }
LABEL_139:
          if ( !v28 || (*(_DWORD *)(v28 + 164) & 1) != 0 )
          {
            if ( v18 )
              goto LABEL_154;
          }
          else
          {
            DisplayDriverNames = DrvGetDisplayDriverNames(v28);
            if ( DisplayDriverNames )
            {
              if ( v26 >= *((unsigned __int16 *)v9 + 10) )
                WdLogSingleEntry0(1LL);
              v96 = 296LL * v26;
              if ( _bittest64((const signed __int64 *)((char *)v9 + v96 + 56), 0x24u) )
                WdLogSingleEntry0(1LL);
              if ( !*(_QWORD *)((char *)v9 + v96 + 304) )
                WdLogSingleEntry0(1LL);
              v97 = *(_WORD *)(*(_QWORD *)&v202 + 1248LL);
              if ( !v97 )
              {
                v97 = 0;
                v215 = 0;
                if ( qword_1C0295CC0 )
                {
                  qword_1C0295CC0(1LL, &v215);
                  v97 = v215;
                }
                *(_WORD *)(*(_QWORD *)&v202 + 1248LL) = v97;
              }
              *(_WORD *)(*(_QWORD *)((char *)v9 + v96 + 304) + 166LL) = v97;
              DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)v28);
              DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)v28);
              v18 = hCreateHDEV(
                      (struct tagGRAPHICS_DEVICE *)v28,
                      (struct _DRV_NAMES *)DisplayDriverNames,
                      *(struct _devicemodeW **)((char *)v9 + v96 + 304),
                      a3,
                      DriverCapableOverRide,
                      DriverAccelerationsLevel,
                      v211,
                      (v243 >> 2) & 1,
                      1u,
                      &v220);
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, DisplayDriverNames);
              if ( v18 )
              {
                v100 = *(_DWORD *)((char *)v9 + v96 + 276);
                v26 = v213;
                *((_DWORD *)v18 + 630) = v100;
LABEL_154:
                v213 = v26 + 1;
                goto LABEL_155;
              }
              v26 = v213;
            }
            else if ( v18 )
            {
              goto LABEL_154;
            }
            *(_QWORD *)(*(_QWORD *)&v202 + 1328LL) = v28;
            DrvLogDisplayDriverEvent(2LL);
          }
LABEL_244:
          v151 = 296LL * v26;
          if ( !IsPrimaryPathInCloneGroup(v9, v26) || *(_DWORD *)((char *)v9 + v151 + 248) < v152 )
          {
            WdLogSingleEntry0(1LL);
            LOWORD(v152) = 0;
          }
          for ( i = v152; i < *((_WORD *)v9 + 10); ++i )
          {
            v154 = 296LL * i;
            if ( *(_DWORD *)((char *)v9 + v154 + 240) == *(_DWORD *)((char *)v9 + v151 + 240) )
              *(_DWORD *)((char *)v9 + v154 + 248) = -1073741823;
          }
          goto LABEL_154;
        }
        v28 = *(_QWORD *)(*(_QWORD *)&v14 + 1264LL);
        for ( j = 0; v28 && j != v25; ++j )
          v28 = *(_QWORD *)(v28 + 128);
        v225 = v25 + 1;
        if ( *(_DWORD *)(*(_QWORD *)&v202 + 1232LL) && v28 && (*(_DWORD *)(v28 + 160) & 0x2800000) == 0 )
        {
          v14 = v202;
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
        if ( (*(_DWORD *)(v28 + 164) & 1) != 0 )
        {
          v14 = v202;
          goto LABEL_343;
        }
        if ( a6 == -1 )
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v28);
        if ( v18 )
          goto LABEL_156;
        v222 = *(_QWORD *)(SGDGetSessionState(v24) + 24);
        if ( *(_DWORD *)(v222 + 1292) || v17 == 3 )
          v30 = -1;
        else
          v30 = gProtocolType;
        if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v28, v30, &v224, &v217) )
          goto LABEL_57;
        if ( v17 != 1 && v17 != 3 )
        {
          if ( v17 != 2 )
          {
            WdLogSingleEntry0(1LL);
            v157 = 0;
            if ( (*(_DWORD *)(v28 + 160) & 8) == 0 )
              LOBYTE(v157) = v214 == 0;
            goto LABEL_276;
          }
          v155 = *(_DWORD *)(v28 + 160);
          if ( (v155 & 8) != 0 )
          {
            if ( !v217 )
              goto LABEL_273;
            v156 = v208 == 0;
          }
          else
          {
            if ( (v155 & 0x2000000) != 0 || v214 )
              goto LABEL_273;
            v156 = gProtocolType == -1;
          }
          v157 = 1;
          if ( !v156 )
          {
LABEL_276:
            v158 = v157 == 0;
            v31 = (int *)(v28 + 160);
            goto LABEL_48;
          }
LABEL_273:
          v157 = 0;
          goto LABEL_276;
        }
        if ( !v217 )
          goto LABEL_50;
        v31 = (int *)(v28 + 160);
        if ( (*(_DWORD *)(v28 + 160) & 8) == 0 )
        {
          if ( v208 )
            goto LABEL_49;
          goto LABEL_31;
        }
        v158 = v208 == 0;
LABEL_48:
        if ( v158 )
          goto LABEL_49;
LABEL_31:
        Buf1 = DrvGetDisplayDriverNames(v28);
        v32 = (struct _DRV_NAMES *)Buf1;
        if ( !Buf1 )
          goto LABEL_173;
        v33 = *v31;
        v209 = 0LL;
        v218 = 0;
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
                &v209,
                &v218,
                0LL,
                v36,
                0,
                PruneFlag,
                a7,
                v210,
                0LL);
        if ( v37 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4LL);
LABEL_39:
          v200 = v34;
          v38 = a3;
          v207 = hCreateHDEV(
                   (struct tagGRAPHICS_DEVICE *)v28,
                   v32,
                   v209,
                   a3,
                   v35,
                   (unsigned int)v18,
                   v211,
                   (v243 >> 2) & 1,
                   v200,
                   &v220);
          v39 = v207;
          if ( !v207 && (*v31 & 0x2000000) != 0 )
            *(_DWORD *)(v222 + 1228) = 5;
          goto LABEL_40;
        }
        if ( v37 == -1073741776 )
        {
          v159 = *(struct _devicemodeW **)(*(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                     + 40)
                                         + 2568LL);
          if ( v209 && v209 != Buf2 )
          {
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v209);
            v209 = 0LL;
          }
          v37 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)v28,
                  &v209,
                  &v218,
                  0LL,
                  v159,
                  0,
                  PruneFlag,
                  a7,
                  v210,
                  0LL);
          v32 = (struct _DRV_NAMES *)Buf1;
        }
        if ( v37 >= 0 )
          goto LABEL_39;
        DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
        v39 = v207;
        v38 = a3;
        if ( (*v31 & 0x2000000) != 0 )
          *(_DWORD *)(v222 + 1228) = 4;
LABEL_40:
        v40 = a2;
        if ( (*v31 & 8) != 0 || a2 )
        {
          v41 = (struct _DRV_NAMES *)Buf1;
          goto LABEL_313;
        }
        if ( !v39 )
        {
          DrvLogDisplayDriverEvent(4LL);
          v160 = v209;
          if ( v209 )
          {
            if ( v209->dmBitsPerPel == 4 )
            {
              DrvLogDisplayDriverEvent(5LL);
              v160 = v209;
            }
            v161 = (struct _devicemodeW *)Buf2;
            if ( v160 != Buf2 )
            {
              if ( v160 )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v160);
              v209 = 0LL;
            }
          }
          else
          {
            v161 = (struct _devicemodeW *)Buf2;
          }
          memset(v161, 0, sizeof(struct _devicemodeW));
          v161->dmSize = 220;
          if ( (int)DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)v28,
                      &v209,
                      &v218,
                      0LL,
                      v161,
                      1,
                      PruneFlag,
                      a7,
                      v210,
                      0LL) >= 0 )
          {
            v162 = v38;
            v41 = (struct _DRV_NAMES *)Buf1;
            v163 = (v243 >> 2) & 1;
            v207 = hCreateHDEV(
                     (struct tagGRAPHICS_DEVICE *)v28,
                     (struct _DRV_NAMES *)Buf1,
                     v209,
                     v162,
                     v35,
                     (unsigned int)v18,
                     v211,
                     v163,
                     1u,
                     &v220);
            v164 = v207;
            if ( v207 )
              goto LABEL_307;
            v165 = (unsigned int *)v209;
            if ( v209->dmPelsWidth != 640 || v209->dmPelsHeight != 480 || v209->dmBitsPerPel != 4 )
            {
              if ( v209 != Buf2 )
              {
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v209);
                v209 = 0LL;
              }
              memset(Buf2, 0, 0xDCuLL);
              v166 = (struct _devicemodeW *)Buf2;
              *((_WORD *)Buf2 + 34) = 220;
              v201 = v210;
              v167 = a7;
              v166->dmBitsPerPel = (*v31 & 0x800000) != 0 ? 32 : 4;
              v198 = PruneFlag;
              v166->dmPelsWidth = 640;
              v166->dmPelsHeight = 480;
              v166->dmFields = 1835008;
              if ( (int)DrvProbeAndCaptureDevmode(
                          (struct tagGRAPHICS_DEVICE *)v28,
                          &v209,
                          &v218,
                          0LL,
                          v166,
                          0,
                          v198,
                          v167,
                          v201,
                          0LL) >= 0 )
              {
                v164 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)v28,
                         v41,
                         v209,
                         a3,
                         v35,
                         (unsigned int)v18,
                         v211,
                         v163,
                         1u,
                         &v220);
                v207 = v164;
                goto LABEL_307;
              }
LABEL_306:
              v164 = v207;
LABEL_307:
              v165 = (unsigned int *)v209;
            }
            if ( v165 )
            {
              v168 = v164 != 0LL;
            }
            else
            {
              v165 = (unsigned int *)Buf2;
              v168 = 2LL;
            }
            DrvDxgkLogCodePointPacket(26LL, v168, v165[43], v165[44]);
            v39 = v207;
            v40 = 0LL;
LABEL_313:
            if ( !v39 && !v40 )
            {
              *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(0LL) + 24) + 1328LL) = v28;
              DrvLogDisplayDriverEvent(2LL);
            }
            goto LABEL_44;
          }
          v41 = (struct _DRV_NAMES *)Buf1;
          goto LABEL_306;
        }
        v41 = (struct _DRV_NAMES *)Buf1;
LABEL_44:
        if ( v209 && v209 != Buf2 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v209);
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v41);
        v18 = v207;
LABEL_155:
        if ( !v18 )
        {
          v17 = v205;
LABEL_341:
          v14 = v202;
          v24 = v203;
          goto LABEL_343;
        }
LABEL_156:
        WdLogSingleEntry0(5LL);
        v101 = *(_DWORD *)(v28 + 160);
        v214 = 1;
        if ( v224 )
          v102 = v101 | 4;
        else
          v102 = v101 & 0xFFFFFFFB;
        *(_DWORD *)(v28 + 160) = v102;
        v103 = v220;
        if ( !v220 )
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
                if ( v28 == *((_QWORD *)v107 + 319) )
                  v103 = v107;
                v220 = v103;
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
                  + 48) = v220;
        v109 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
        if ( v109 + 2 < v109 )
        {
LABEL_49:
          v17 = v205;
LABEL_50:
          v14 = v202;
          v24 = v203;
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
          v227 = 1936876615;
          v233 = 260LL;
          v114 = *(_DWORD *)gpLeakTrackingAllocator;
          v222 = v113;
          if ( v114 )
          {
            if ( v114 != 1 )
            {
              if ( v114 == 2 )
              {
                v228 = 0LL;
                if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                        gpLeakTrackingAllocator,
                        0x73726447u,
                        &v228) )
                {
                  v235[0] = &v233;
                  v235[1] = &v227;
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                     v112,
                                                                                                     v235,
                                                                                                     &v222);
                  goto LABEL_171;
                }
                v172 = 0;
                if ( v113 < 0x1000 || (v113 & 0xFFF) != 0 )
                {
                  v113 += 16LL;
                  v172 = v170;
                  v222 = v113;
                }
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                                   v171,
                                                                                                   v113,
                                                                                                   v169);
                if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                {
                  _InterlockedAdd64((volatile signed __int64 *)v112 + 16, 1uLL);
                  NSInstrumentation::CBackTrace::CBackTrace(v239);
                  if ( v172
                    && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
                     + 16 < 0x1000 )
                  {
                    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                            v112,
                                            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                            v228,
                                            v239) )
                    {
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                      goto LABEL_171;
                    }
                  }
                  else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                               v112,
                                               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                               v228,
                                               v239) )
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
                                                                                               v233 & 0xFFFFFFFFFFFFFFFDuLL,
                                                                                               v113 + 16,
                                                                                               v227);
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
          v17 = v205;
          v14 = v202;
          v24 = v203;
          goto LABEL_51;
        }
LABEL_339:
        v17 = v205;
        v23 = -1073741670;
        v14 = v202;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v110;
        v24 = v203;
        v204 = -1073741670;
LABEL_52:
        v9 = a9;
        v26 = v213;
        v25 = v225;
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
      if ( !v214 )
      {
        if ( v17 == 1 )
        {
          WdLogSingleEntry0(5LL);
          v17 = 2;
          v14 = v202;
          LODWORD(v205) = 2;
          if ( v210 )
            v210 = 0;
        }
        else
        {
          if ( v17 != 2 || !(unsigned int)UserIsWddmConnectedSession() )
          {
            WdLogSingleEntry0(5LL);
            goto LABEL_352;
          }
          WdLogSingleEntry0(5LL);
          v14 = v202;
          v17 = 3;
          LODWORD(v205) = 3;
        }
        continue;
      }
      break;
    }
    if ( !v208 )
    {
      WdLogSingleEntry0(5LL);
      v14 = v202;
      v208 = 1;
      continue;
    }
    break;
  }
  if ( (v243 & 2) != 0 )
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
  v52 = (unsigned int *)Buf2;
  v53 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v51, 0x73726447u);
  v54 = v44;
  v207 = (HDEV)v44;
  Buf1 = v53;
  v55 = v53;
  if ( !Buf2 )
    goto LABEL_120;
  if ( !v53 )
    goto LABEL_119;
  v56 = 0;
  v215 = 0;
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
    v54 = (MULTIDEVLOCKOBJ *)v207;
    v215 = v56;
    a9 = v42;
  }
  v228 = (unsigned __int64)v54;
  DeviceFromName = v52;
  memmove(v55, v52, Size);
  v63 = *(struct tagSIZE *)(SGDGetSessionState(v62) + 24);
  v221 = v63;
  if ( !*(_DWORD *)(*(_QWORD *)&v63 + 1280LL) )
  {
    v243 = 0;
    *(_DWORD *)(*(_QWORD *)&v63 + 1288LL) = 0;
    if ( ((gProtocolType + 1) & 0xFFFE) == 0 )
    {
      v64 = DeviceFromName;
      v207 = (HDEV)v54;
      Buf2 = DeviceFromName;
      if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
      {
        GetWin8StyleDpiSettingFromRegistry(*(_QWORD *)&v63 + 1288LL);
        Buf2 = v64;
        v65 = v228;
        v207 = (HDEV)v228;
        if ( *(_DWORD *)(*(_QWORD *)&v63 + 1288LL) )
        {
          if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 && qword_1C02947F8 )
            qword_1C02947F8(0LL, &v243);
          v173 = v243;
          v207 = (HDEV)v65;
          if ( v243 <= 0x60 )
            v173 = 96;
          if ( v173 >= 0x1E0 )
            LOWORD(v173) = 480;
          *(_WORD *)(*(_QWORD *)&v63 + 1248LL) = v173;
          Buf2 = DeviceFromName;
        }
      }
    }
  }
  v66 = *(unsigned int **)(56LL * a6
                         + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                         + 40);
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
    v63 = v221;
    v42 = a9;
  }
  if ( *(_DWORD *)(*(_QWORD *)&v63 + 1280LL) )
    goto LABEL_106;
  v71 = (_DWORD *)(*(_QWORD *)&v63 + 1288LL);
  v243 = 0;
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
      if ( qword_1C0295CC0 )
        qword_1C0295CC0(2LL, &v243);
      v121 = v243;
      if ( v243 <= 0x60 )
        v121 = 96;
      if ( v121 >= 0x1E0 )
        v121 = 480;
      v243 = v121;
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
  v72 = (96 * v66[609] + 50) / 0x64;
  if ( (_WORD)v72 && qword_1C0295CE0 )
    qword_1C0295CE0(1LL, (unsigned __int16)v72);
  if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
    GetWin8StyleDpiSettingFromRegistry(*(_QWORD *)&v63 + 1288LL);
  if ( *v71 )
  {
    if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 && qword_1C02947F8 )
      qword_1C02947F8(0LL, &v243);
    v119 = v243;
    v74 = (_WORD *)(*(_QWORD *)&v63 + 1248LL);
    if ( v243 <= 0x60 )
      v119 = 96;
    if ( v119 >= 0x1E0 )
      v119 = 480;
    v243 = v119;
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
  *v74 = (96 * v73 + 50) / 0x64;
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
      v174 = 100 * (unsigned __int16)*v74;
      *(_DWORD *)(v77 + 2508) = 1234568;
      *(_DWORD *)(v77 + 2432) = (v174 + 48) / 0x60u;
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
        LOBYTE(v243) = ((*(_DWORD *)(*(_QWORD *)(v128 + 2568) + 84LL) - 1) & 0xFFFFFFFD) == 0;
        v130 = AdjustForOrientation(*(_DWORD *)(v128 + 2112) / 0x3E8u, v129 / 0x3E8, v243);
        v131 = *(_DWORD *)(v128 + 2124);
        v132 = *(_DWORD *)(v128 + 2120);
        v202 = v130;
        v134 = AdjustForOrientation(v132, v131, v133);
        v135 = *(_DWORD *)(v128 + 3552);
        v221 = v134;
        v230 = (__int64 *)(v136 | 0x2000000000LL);
        v231 = v236;
        *(_OWORD *)&v236[0].cx = 0LL;
        v237 = 0LL;
        if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)&v230) < 0 )
          WdLogSingleEntry0(1LL);
        v199 = (struct _DPI_INFORMATION *)(v128 + 2424);
        if ( v135 )
        {
          FillDpiInfo(&v202, &v221, (struct tagSIZE)v236, v137, 0, HIWORD(v135), v197, v199);
          *(_DWORD *)(v128 + 2516) |= 0x200u;
          v126 = (unsigned int)a9;
        }
        else
        {
          *(_DWORD *)(v128 + 2516) &= ~0x200u;
          v126 = 0;
          v138 = *(unsigned __int16 *)(*(_QWORD *)&v63 + 1248LL);
          LODWORD(a9) = 0;
          FillDpiInfo(&v202, &v221, (struct tagSIZE)v236, v137, v138, 0, v197, v199);
        }
        GetRemoteScaleOverrideTestHook(
          (const unsigned __int16 *)(*(_QWORD *)(v128 + 2552) + 64LL),
          v139,
          (struct _DPI_INFORMATION *)(v128 + 2424));
        ++v127;
        *(_DWORD *)(v128 + 2516) = *(_DWORD *)(v128 + 2516) & 0xFFFFFF7F | ((unsigned __int8)v243 << 7);
      }
      while ( v127 < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) );
      v66 = DeviceFromName;
    }
    UserSetScaleFactorsFromRemoteMetric(v126);
    v219 = v140;
  }
  else
  {
    *((_DWORD *)gpsi + 559) &= ~0x40u;
  }
  v79 = v215;
  *(_WORD *)(*(_QWORD *)&v63 + 1250LL) = (96 * v66[609] + 50) / 0x64;
  v55 = Buf1;
  AlignRects((struct tagRECT *)Buf1, v79);
  v52 = (unsigned int *)Buf2;
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
    v52 = (unsigned int *)Buf2;
    v55 = Buf1;
  }
  v87 = *(_QWORD *)(SGDGetSessionState(v80) + 24);
  a9 = (struct D3DKMT_GETPATHSMODALITY *)v87;
  if ( (unsigned int)bUniformSpaceDpiMode() )
  {
    v175 = 4 * *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
    if ( v175 )
    {
      v176 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, v175, 0x73726447u);
      if ( v176 )
      {
        v177 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
        for ( ii = 0;
              ii < v177;
              v177 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) )
        {
          v176[ii] = ii;
          ++ii;
        }
        do
        {
          v179 = 0;
          v180 = 0;
          v181 = v177;
          if ( v177 != 1 )
          {
            do
            {
              v182 = (unsigned int)(v180 + 1);
              v183 = (unsigned int)v176[v182];
              v184 = (unsigned int)v176[v180];
              if ( *(_DWORD *)(56 * (v184 + 1)
                             + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) > *(_DWORD *)(56 * (v183 + 1) + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) )
              {
                v176[v180] = v183;
                v179 = 1;
                v176[v182] = v184;
              }
              v181 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20);
              ++v180;
            }
            while ( (unsigned int)v182 < v181 - 1 );
          }
          v177 = v181;
        }
        while ( v179 );
        v185 = v181 - 1;
        LODWORD(v186) = 0;
        v187 = 0;
        if ( v181 == 1 )
        {
LABEL_398:
          v192 = &v176[(unsigned int)v186];
          MapMonitorToUnifromSpaceInStripe(
            (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            *v192,
            0xFFFFFFFF,
            0,
            Src);
          v193 = v186;
          if ( (unsigned int)v186 < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                              + 20)
                                  - 1 )
          {
            do
            {
              v194 = (unsigned int)(v193 + 1);
              MapMonitorToUnifromSpaceInStripe(
                (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                v176[v194],
                v176[v193],
                1,
                Srca);
              v193 = v194;
            }
            while ( (unsigned int)v194 < *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                   + 20)
                                       - 1 );
            v55 = Buf1;
          }
          while ( (_DWORD)v186 )
          {
            v186 = (unsigned int)(v186 - 1);
            MapMonitorToUnifromSpaceInStripe(
              (struct _MDEV *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
              v176[v186],
              *v192--,
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
            v188 = (unsigned int)(v187 + 1);
            v189 = 56 * ((unsigned int)v176[v187] + 1LL);
            v190 = 56 * ((unsigned int)v176[v188] + 1LL);
            v191 = *(_DWORD *)(v190 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            if ( *(_DWORD *)(v189 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) != v191 )
              break;
            if ( *(_DWORD *)(v189 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64)
              || *(_DWORD *)(v189 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) )
            {
              if ( !v191
                && !*(_DWORD *)(v190 + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) )
              {
                LODWORD(v186) = v187 + 1;
              }
            }
            else
            {
              LODWORD(v186) = v187;
            }
            ++v187;
            if ( (unsigned int)v188 >= v185 )
              goto LABEL_398;
          }
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v176);
      }
      v52 = (unsigned int *)Buf2;
    }
  }
  else
  {
    *(_DWORD *)(v87 + 1320) = 0;
  }
  v54 = (MULTIDEVLOCKOBJ *)v207;
LABEL_119:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v52);
LABEL_120:
  v44 = v54;
  if ( v55 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v55);
LABEL_122:
  MULTIDEVLOCKOBJ::vUnlock(v54);
  v91 = v234;
  Buf2 = v234;
  if ( v219 )
  {
    v211 = *(_DWORD *)SGDGetUserSessionState(v88, v22, v89, v90);
    ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &v211);
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
