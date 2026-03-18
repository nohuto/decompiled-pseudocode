/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C005E080
 * Callers:
 *     RIMRegisterForInputEx @ 0x1C005E010 (RIMRegisterForInputEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0044B20 (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 *     CreateKernelSemaphore @ 0x1C005EA70 (CreateKernelSemaphore.c)
 *     ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x1C005EAFC (-RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C005EB24 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C005EC04 (RIMCheckPressureDefaultSetting.c)
 *     RawInputManagerObjectCreate @ 0x1C005ECC4 (RawInputManagerObjectCreate.c)
 *     rimConvertUserToKernelSemaphoreHandle @ 0x1C005EDD8 (rimConvertUserToKernelSemaphoreHandle.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C005EE9C (rimConvertUserToKernelTimerHandle.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C005EF60 (rimConvertUserToKernelEventHandle.c)
 *     rimCheckForRegistrationConflicts @ 0x1C005F020 (rimCheckForRegistrationConflicts.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1C0186440 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDd @ 0x1C018651C (WPP_RECORDER_AND_TRACE_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01A82F4 (RIMDiscoverSpecificDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        HANDLE *a13)
{
  int v13; // r15d
  unsigned int v14; // r10d
  struct _UNICODE_STRING *v15; // rbx
  __int64 KernelSemaphore; // r14
  unsigned int i; // r15d
  PVOID v19; // r14
  __int64 v20; // rbx
  int v21; // r15d
  int v22; // ebx
  int v23; // eax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // sf
  BOOL v28; // r14d
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  char *v32; // r14
  unsigned int j; // r8d
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct _UNICODE_STRING *v39; // rbx
  BOOL v40; // ecx
  void *v41; // r13
  unsigned int v42; // ebx
  _UNKNOWN **v43; // r8
  int v45; // eax
  unsigned __int64 v46; // rdx
  PVOID v47; // r13
  __int64 Pool2; // rbx
  unsigned int v49; // r10d
  __int64 v50; // rbx
  _DWORD *v51; // r8
  PDEVICE_OBJECT v52; // rcx
  __int16 v53; // r9
  void *v54; // rdx
  __int64 v55; // rax
  unsigned int m; // ebx
  void *v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // r8d
  __int64 v60; // rbx
  __int64 v61; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v63; // r8
  _BYTE **v64; // rax
  __int64 Length; // rdx
  PVOID v66; // r14
  unsigned __int64 k; // rcx
  char v68; // r15
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  void *v73; // rdx
  int TableContext; // [rsp+20h] [rbp-388h]
  int v75; // [rsp+28h] [rbp-380h]
  int v76; // [rsp+30h] [rbp-378h]
  int v77; // [rsp+38h] [rbp-370h]
  char v78; // [rsp+60h] [rbp-348h]
  int v79; // [rsp+68h] [rbp-340h]
  void *v80; // [rsp+70h] [rbp-338h]
  struct _UNICODE_STRING *v81; // [rsp+78h] [rbp-330h]
  unsigned int v82; // [rsp+80h] [rbp-328h]
  int v83; // [rsp+88h] [rbp-320h] BYREF
  unsigned int v84; // [rsp+90h] [rbp-318h]
  int v85; // [rsp+94h] [rbp-314h]
  void *v86; // [rsp+98h] [rbp-310h]
  HANDLE v87; // [rsp+A0h] [rbp-308h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-300h] BYREF
  BOOL v89; // [rsp+B0h] [rbp-2F8h]
  __int64 v90; // [rsp+B8h] [rbp-2F0h]
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-2E8h] BYREF
  HANDLE *v92; // [rsp+D0h] [rbp-2D8h]
  __int64 v93; // [rsp+D8h] [rbp-2D0h]
  HANDLE Handle; // [rsp+E0h] [rbp-2C8h] BYREF
  HANDLE v95; // [rsp+E8h] [rbp-2C0h] BYREF
  HANDLE v96; // [rsp+F0h] [rbp-2B8h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+F8h] [rbp-2B0h]
  _QWORD v98[2]; // [rsp+100h] [rbp-2A8h] BYREF
  __int128 v99; // [rsp+110h] [rbp-298h]
  UNICODE_STRING SourceString; // [rsp+120h] [rbp-288h] BYREF
  int v101; // [rsp+130h] [rbp-278h]
  int v102; // [rsp+138h] [rbp-270h]
  __int64 v103; // [rsp+140h] [rbp-268h]
  unsigned __int64 v104; // [rsp+148h] [rbp-260h]
  __int128 v105; // [rsp+150h] [rbp-258h]
  __int64 v106; // [rsp+160h] [rbp-248h]
  __int64 v107; // [rsp+168h] [rbp-240h]
  PVOID BackTrace[20]; // [rsp+170h] [rbp-238h] BYREF
  PVOID v109[20]; // [rsp+210h] [rbp-198h] BYREF
  PVOID v110[20]; // [rsp+2B0h] [rbp-F8h] BYREF
  void *v111[3]; // [rsp+350h] [rbp-58h] BYREF

  *(_QWORD *)&DestinationString.Length = a4;
  v14 = a3;
  v82 = a3;
  v15 = a2;
  v81 = a2;
  v98[1] = a2;
  v98[0] = a4;
  v93 = a6;
  v90 = a7;
  Object = a8;
  v92 = a13;
  Handle = (HANDLE)-1LL;
  v95 = (HANDLE)-1LL;
  v96 = (HANDLE)-1LL;
  v87 = (HANDLE)-1LL;
  memset(v111, 0, sizeof(v111));
  v85 = a12 == 0;
  v89 = a12 != 0;
  LOBYTE(v13) = 0;
  v83 = v13;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      11,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    v14 = v82;
  }
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        (_DWORD)gRimLog,
        2,
        1,
        12,
        (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
        a1);
    }
    v52 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v53 = 13;
    goto LABEL_120;
  }
  if ( v15 )
  {
    if ( a1 && ((a1 - 1) & a1) == 0 && !v14 )
      goto LABEL_10;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qDd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        TableContext,
        v75,
        v76,
        v77,
        (char)v15,
        a1,
        v14);
    }
    v52 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v53 = 15;
LABEL_120:
      WPP_RECORDER_AND_TRACE_SF_(
        v52->AttachedDevice,
        (_DWORD)a2,
        a3,
        (_DWORD)gRimLog,
        4,
        1,
        v53,
        (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    }
    return 3221225485LL;
  }
  if ( v14 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      if ( a12 )
      {
        v45 = rimCheckForRegistrationConflicts(a1, a2, a3);
        if ( v45 == 1 )
          return 3221225506LL;
        v83 = v45 == 0;
      }
      goto LABEL_10;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        (_DWORD)gRimLog,
        2,
        1,
        16,
        (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
        a1,
        v14);
    }
    v52 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v53 = 17;
      goto LABEL_120;
    }
    return 3221225485LL;
  }
LABEL_10:
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v80 = (void *)KernelSemaphore;
  if ( !KernelSemaphore )
    return 3221225495LL;
  v86 = (void *)CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !v86 )
  {
    v54 = (void *)KernelSemaphore;
    goto LABEL_124;
  }
  for ( i = 0; ; ++i )
  {
    if ( i > 2 )
    {
      v21 = rimConvertUserToKernelEventHandle(v93, &Handle);
      v22 = rimConvertUserToKernelTimerHandle(v90, &v95);
      v23 = rimConvertUserToKernelSemaphoreHandle(Object, &v96);
      v27 = v21 < 0;
      if ( v21 >= 0 )
      {
        if ( v22 >= 0 && v23 >= 0 )
        {
          KeEnterCriticalRegion();
          v28 = a12 != 0;
          v21 = RawInputManagerObjectCreate(v28, v29, v30, v31, &v87);
          KeLeaveCriticalRegion();
          if ( v21 >= 0 )
          {
            Object = 0LL;
            v21 = RawInputManagerObjectResolveHandle((char *)v87, 3u, 1, &Object);
            v79 = v21;
            if ( v21 >= 0 )
            {
              v32 = (char *)Object;
              *((_QWORD *)Object + 9) = v87;
              *((_WORD *)v32 + 40) = 0;
              v32[82] = 0;
              *((_DWORD *)v32 + 21) = a1;
              *((_QWORD *)v32 + 15) = a5;
              *((_QWORD *)v32 + 13) = 0LL;
              *((_QWORD *)v32 + 14) = 0LL;
              *((_QWORD *)v32 + 99) = 0LL;
              *((_QWORD *)v32 + 100) = 0LL;
              *((_QWORD *)v32 + 53) = 0LL;
              *((_DWORD *)v32 + 102) = 0;
              *((_QWORD *)v32 + 52) = 0LL;
              *((_QWORD *)v32 + 55) = v32 + 432;
              *((_QWORD *)v32 + 54) = v32 + 432;
              *((_OWORD *)v32 + 28) = 0LL;
              *((_OWORD *)v32 + 29) = 0LL;
              *((_QWORD *)v32 + 57) = v32 + 448;
              *((_QWORD *)v32 + 56) = v32 + 448;
              memset(v32 + 504, 0, 0xE8uLL);
              RIMCheckPressureDefaultSetting(v32);
              *((_DWORD *)v32 + 272) = v85;
              *((_QWORD *)v32 + 137) = v80;
              *((_DWORD *)v32 + 276) = 0;
              v80 = 0LL;
              *((_QWORD *)v32 + 141) = v86;
              *((_DWORD *)v32 + 284) = 0;
              v86 = 0LL;
              for ( j = 0; j <= 2; ++j )
              {
                v34 = 4LL * j;
                v35 = 32 * (j + 4LL);
                *(_OWORD *)&v32[v35] = *(_OWORD *)&(&off_1C024A610)[v34];
                *(_OWORD *)&v32[v35 + 16] = *(_OWORD *)(&off_1C024A610 + v34 + 2);
                *(_QWORD *)&v32[8 * j + 224] = 0LL;
                *(_QWORD *)&v32[8 * j + 312] = v111[j];
                *(_DWORD *)&v32[4 * j + 296] = 0;
                v111[j] = 0LL;
                *(_DWORD *)&v32[16 * j + 256] = j;
                *(_QWORD *)&v32[16 * j + 248] = v32;
              }
              *((_QWORD *)v32 + 42) = v95;
              *((_QWORD *)v32 + 50) = a9;
              *((_QWORD *)v32 + 43) = Handle;
              v32[392] = v83;
              v32[393] = 0;
              *((_QWORD *)v32 + 44) = 0LL;
              *((_QWORD *)v32 + 45) = 0LL;
              *((_QWORD *)v32 + 46) = v96;
              *((_QWORD *)v32 + 48) = v32 + 376;
              *((_QWORD *)v32 + 47) = v32 + 376;
              v32[808] = 0;
              *((_QWORD *)v32 + 117) = 0LL;
              *((_QWORD *)v32 + 116) = 500 * gliQpcFreq.QuadPart / 1000;
              *((_QWORD *)v32 + 120) = 5000 * gliQpcFreq.QuadPart / 1000;
              *((_QWORD *)v32 + 107) = a10;
              *((_QWORD *)v32 + 108) = a11;
              v32[736] = 0;
              RawInputManagerObject::bTouchInputAllowed = 1;
              v32[737] = 0;
              KeQueryPerformanceCounter((PLARGE_INTEGER)v32 + 93);
              *((_QWORD *)v32 + 94) = 1LL;
              *((_QWORD *)v32 + 104) = 0LL;
              *((_QWORD *)v32 + 96) = v32 + 760;
              *((_QWORD *)v32 + 95) = v32 + 760;
              *((_QWORD *)v32 + 98) = v32 + 776;
              *((_QWORD *)v32 + 97) = v32 + 776;
              *((_QWORD *)v32 + 103) = v32 + 816;
              *((_QWORD *)v32 + 102) = v32 + 816;
              *((_QWORD *)v32 + 106) = v32 + 840;
              *((_QWORD *)v32 + 105) = v32 + 840;
              *((_QWORD *)v32 + 140) = v32 + 1112;
              *((_QWORD *)v32 + 139) = v32 + 1112;
              RtlInitializeGenericTableAvl(
                (PRTL_AVL_TABLE)(v32 + 968),
                rimUserMemAllocNodeCompare,
                rimUserMemAllocNodeAlloc,
                (PRTL_AVL_FREE_ROUTINE)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::FreeTableEntry,
                0LL);
              *((_DWORD *)v32 + 22) = v82;
              v39 = v81;
              if ( !v82 )
                goto LABEL_27;
              if ( v81 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38);
              if ( 4 * (unsigned __int64)v82 > 0xFFFFFFFF )
              {
                v21 = -1073741811;
                v79 = -1073741811;
                goto LABEL_27;
              }
              v46 = 4 * v82;
              v102 = 1885435218;
              v107 = 260LL;
              v47 = gpLeakTrackingAllocator;
              if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70617552) == 0x70617552 )
              {
                v58 = 0LL;
                if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
                {
                  while ( *((_DWORD *)gpLeakTrackingAllocator + v58) != 1885435218 )
                  {
                    if ( ++v58 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                      goto LABEL_61;
                  }
                  v78 = 0;
                  if ( v46 < 0x1000 || ((4 * (_WORD)v82) & 0xFFF) != 0 )
                  {
                    v78 = 1;
                    v46 += 16LL;
                  }
                  Pool2 = ExAllocatePool2(260LL, v46);
                  if ( Pool2 )
                  {
                    memset(v109, 0, sizeof(v109));
                    RtlCaptureStackBackTrace(0, 0x14u, v109, 0LL);
                    if ( v78 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
                    {
                      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                              v47,
                                              Pool2,
                                              v109) )
                      {
                        Pool2 += 16LL;
                        goto LABEL_62;
                      }
                    }
                    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                                 v47,
                                                 Pool2,
                                                 v109) )
                    {
                      goto LABEL_62;
                    }
                    ExFreePoolWithTag((PVOID)Pool2, 0);
                  }
                  Pool2 = 0LL;
                  goto LABEL_62;
                }
              }
LABEL_61:
              Pool2 = ExAllocatePool2(260LL, v46);
LABEL_62:
              *((_QWORD *)v32 + 12) = Pool2;
              if ( Pool2 )
              {
                if ( a12 )
                {
                  v49 = 0;
                  v84 = 0;
                  v50 = *(_QWORD *)&DestinationString.Length;
                  while ( v49 < v82 )
                  {
                    v51 = (_DWORD *)(v50 + 4LL * v49);
                    if ( (unsigned __int64)v51 >= MmUserProbeAddress )
                      v51 = (_DWORD *)MmUserProbeAddress;
                    *(_DWORD *)(*((_QWORD *)v32 + 12) + 4LL * v49++) = *v51;
                    v84 = v49;
                  }
                  v39 = v81;
                  v41 = 0LL;
                  v40 = a12 != 0;
LABEL_28:
                  if ( !v39 )
                  {
                    if ( v21 >= 0 && !v32[392] )
                      RIMDiscoverDevicesOfInputType((unsigned int *)v32);
                    RIMIDEAdoptOrphanedRimDevs(v32);
LABEL_33:
                    InputTraceLogging::RIM::RawInputManagerObjectUsed((const struct RawInputManagerObject *)v32);
                    ObfDereferenceObject(v32);
                    v28 = a12 != 0;
                    goto LABEL_34;
                  }
                  SourceString = 0LL;
                  p_DestinationString = 0LL;
                  DestinationString = 0LL;
                  if ( !v40 )
                  {
                    p_DestinationString = v39;
                    goto LABEL_204;
                  }
                  if ( (unsigned __int64)v39 >= MmUserProbeAddress )
                    v39 = (struct _UNICODE_STRING *)MmUserProbeAddress;
                  v61 = *(unsigned int *)&v39->Length;
                  v85 = v61;
                  *(_DWORD *)&SourceString.Length = v61;
                  Buffer = v39->Buffer;
                  SourceString.Buffer = Buffer;
                  if ( ((unsigned __int8)Buffer & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v63 = (ULONG64)Buffer + (unsigned __int16)v61 + 2;
                  v64 = (_BYTE **)MmUserProbeAddress;
                  if ( v63 < MmUserProbeAddress && (unsigned __int16)v61 <= HIWORD(v85) )
                  {
                    if ( (v61 & 1) != 0 )
                      goto LABEL_177;
                    if ( v63 > (unsigned __int64)Buffer )
                      goto LABEL_179;
                  }
                  if ( (v61 & 1) == 0 )
                  {
LABEL_178:
                    **v64 = 0;
LABEL_179:
                    if ( SourceString.Length )
                    {
                      DestinationString.MaximumLength = SourceString.Length;
                      DestinationString.Length = SourceString.Length;
                      Length = SourceString.Length;
                      v83 = 1886221394;
                      v98[0] = 260LL;
                      v66 = gpLeakTrackingAllocator;
                      *(_QWORD *)&v105 = v98;
                      *((_QWORD *)&v105 + 1) = &v83;
                      v99 = v105;
                      v103 = SourceString.Length;
                      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7452) == 0x706D7452 )
                      {
                        for ( k = 0LL; ; ++k )
                        {
                          v104 = k;
                          if ( k >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
                            goto LABEL_198;
                          if ( *((_DWORD *)gpLeakTrackingAllocator + k) == 1886221394 )
                            break;
                        }
                        v68 = 0;
                        if ( SourceString.Length < 0x1000uLL || (SourceString.Length & 0xFFF) != 0 )
                        {
                          v68 = 1;
                          Length = SourceString.Length + 16LL;
                          v103 = Length;
                        }
                        v69 = ExAllocatePool2(*(_QWORD *)v99 & 0xFFFFFFFFFFFFFFFDuLL, Length);
                        if ( !v69 )
                        {
LABEL_193:
                          v69 = 0LL;
                          goto LABEL_199;
                        }
                        memset(v110, 0, sizeof(v110));
                        RtlCaptureStackBackTrace(0, 0x14u, v110, 0LL);
                        if ( v68 && (unsigned __int64)(v69 & 0xFFF) + 16 < 0x1000 )
                        {
                          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                                  v66,
                                                  v69,
                                                  v110) )
                          {
                            v69 += 16LL;
                            goto LABEL_199;
                          }
                          goto LABEL_192;
                        }
                        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                                 v66,
                                                 v69,
                                                 v110) )
                        {
LABEL_192:
                          ExFreePoolWithTag((PVOID)v69, 0);
                          goto LABEL_193;
                        }
                      }
                      else
                      {
LABEL_198:
                        v69 = ExAllocatePool2(*(_QWORD *)v99 & 0xFFFFFFFFFFFFFFFDuLL, SourceString.Length);
                      }
LABEL_199:
                      DestinationString.Buffer = (PWSTR)v69;
                      if ( v69 )
                      {
                        RtlCopyUnicodeString(&DestinationString, &SourceString);
                        p_DestinationString = &DestinationString;
                      }
                      v21 = v79;
                    }
                    else
                    {
                      v21 = -1073741801;
                    }
                    v32 = (char *)Object;
LABEL_204:
                    if ( v21 >= 0 )
                    {
                      RIMLockExclusive((__int64)(v32 + 104));
                      v21 = RIMDiscoverSpecificDevice(v32);
                      *((_QWORD *)v32 + 14) = 0LL;
                      ExReleasePushLockExclusiveEx(v32 + 104, 0LL);
                      KeLeaveCriticalRegion();
                      if ( v21 < 0 )
                      {
                        if ( *((_QWORD *)v32 + 12) )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v70, v72);
                        v73 = (void *)*((_QWORD *)v32 + 52);
                        if ( v73 )
                        {
                          NSInstrumentation::CLeakTrackingAllocator::Free(
                            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                            v73);
                          *((_QWORD *)v32 + 52) = 0LL;
                        }
                        *((_QWORD *)v32 + 42) = -1LL;
                        *((_QWORD *)v32 + 43) = -1LL;
                        *((_QWORD *)v32 + 46) = -1LL;
                      }
                    }
                    if ( DestinationString.Buffer )
                      NSInstrumentation::CLeakTrackingAllocator::Free(
                        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                        DestinationString.Buffer);
                    goto LABEL_33;
                  }
LABEL_177:
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, Buffer, v63);
                  v64 = (_BYTE **)MmUserProbeAddress;
                  goto LABEL_178;
                }
                v59 = 0;
                v84 = 0;
                v60 = *(_QWORD *)&DestinationString.Length;
                while ( v59 < v82 )
                {
                  *(_DWORD *)(*((_QWORD *)v32 + 12) + 4LL * v59) = *(_DWORD *)(v60 + 4LL * v59);
                  ++v59;
                }
                v84 = v59;
              }
              else
              {
                v21 = -1073741801;
                v79 = -1073741801;
              }
              v39 = v81;
LABEL_27:
              v40 = a12 != 0;
              v41 = 0LL;
              goto LABEL_28;
            }
          }
LABEL_217:
          v41 = v80;
LABEL_34:
          v42 = 0;
          if ( v21 < 0 )
          {
            while ( v42 <= 2 )
            {
              v24 = v111[v42];
              if ( v24 )
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  v24);
              ++v42;
            }
            if ( v80 )
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                v80);
            if ( v86 )
              NSInstrumentation::CLeakTrackingAllocator::Free(
                (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                v86);
            if ( Handle != (HANDLE)-1LL )
              ZwClose(Handle);
            if ( v95 != (HANDLE)-1LL )
              ZwClose(v95);
            if ( v96 != (HANDLE)-1LL )
              ZwClose(v96);
            if ( v87 != (HANDLE)-1LL )
              ObCloseHandle(v87, 1);
          }
          else
          {
            while ( v42 <= 2 )
            {
              if ( v111[v42] )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
              ++v42;
            }
            if ( v41 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
            if ( v86 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
            if ( v28 )
            {
              v24 = v92;
              if ( (unsigned __int64)v92 >= MmUserProbeAddress )
                v24 = (_QWORD *)MmUserProbeAddress;
              *v24 = v87;
              v43 = &WPP_RECORDER_INITIALIZED;
              goto LABEL_46;
            }
            *v92 = v87;
          }
          v43 = &WPP_RECORDER_INITIALIZED;
LABEL_46:
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v24) = 0;
          }
          if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v24,
              (_DWORD)v43,
              (_DWORD)gRimLog,
              4,
              1,
              20,
              (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
              v21);
          }
          return (unsigned int)v21;
        }
        v27 = v21 < 0;
      }
      if ( !v27 )
        v21 = v22;
      v28 = a12 != 0;
      goto LABEL_217;
    }
    v101 = 1668301138;
    v106 = 68LL;
    v19 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63704152) != 0x63704152
      || (v55 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_15:
      v20 = ExAllocatePool2(68LL, 104LL);
      goto LABEL_16;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v55) != 1668301138 )
    {
      if ( ++v55 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_15;
    }
    v20 = ExAllocatePool2(68LL, 120LL);
    if ( !v20 )
      goto LABEL_134;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(v20 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v19,
                              v20,
                              BackTrace) )
        goto LABEL_16;
LABEL_133:
      ExFreePoolWithTag((PVOID)v20, 0);
LABEL_134:
      v20 = 0LL;
      goto LABEL_16;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v19,
                             v20,
                             BackTrace) )
      goto LABEL_133;
    v20 += 16LL;
LABEL_16:
    v111[i] = (void *)v20;
    if ( !v20 )
      break;
  }
  for ( m = 0; m <= 2; ++m )
  {
    v57 = v111[m];
    if ( v57 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v57);
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    v80);
  v54 = v86;
LABEL_124:
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    v54);
  return 3221225495LL;
}
