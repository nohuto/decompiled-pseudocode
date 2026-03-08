/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C00356F0
 * Callers:
 *     RIMRegisterForInputEx @ 0x1C0032510 (RIMRegisterForInputEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimCheckForRegistrationConflicts @ 0x1C0032578 (rimCheckForRegistrationConflicts.c)
 *     RIMUnregisterForInput @ 0x1C00326C0 (RIMUnregisterForInput.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00345C8 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C00346BC (RIMCheckPressureDefaultSetting.c)
 *     ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x1C0034770 (-RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectCreate @ 0x1C0034798 (RawInputManagerObjectCreate.c)
 *     rimConvertUserToKernelSemaphoreHandle @ 0x1C00348B4 (rimConvertUserToKernelSemaphoreHandle.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C003496C (rimConvertUserToKernelTimerHandle.c)
 *     CreateKernelSemaphore @ 0x1C0035610 (CreateKernelSemaphore.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00374F8 (RIMDiscoverDevicesOfInputType.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0039ED8 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1C017A884 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDd @ 0x1C01A80F0 (WPP_RECORDER_AND_TRACE_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01D1704 (RIMDiscoverSpecificDevice.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        unsigned __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        HANDLE *a13)
{
  int v13; // r10d
  __int64 v14; // r9
  int v16; // eax
  void *KernelSemaphore; // rbx
  unsigned int i; // r12d
  NSInstrumentation::CLeakTrackingAllocator *v19; // r14
  __int64 v20; // rbx
  int v21; // ebx
  int v22; // r14d
  int v23; // eax
  _QWORD *v24; // rdx
  bool v25; // sf
  BOOL v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  char *v30; // r14
  unsigned int j; // r8d
  __int64 v32; // rcx
  __int64 v33; // rax
  ULONG64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  unsigned int v37; // eax
  unsigned __int64 v38; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v39; // r12
  int v40; // eax
  __int64 Pool2; // rbx
  unsigned int v42; // r10d
  unsigned int v43; // r11d
  unsigned __int64 v44; // rbx
  unsigned __int64 *v45; // rax
  _BOOL8 v46; // rdx
  unsigned int v47; // ebx
  _UNKNOWN **v48; // r8
  PDEVICE_OBJECT v50; // rcx
  __int16 v51; // ax
  void *v52; // rdx
  _QWORD *v53; // rax
  unsigned int v54; // edx
  __int64 v55; // r10
  unsigned int k; // ebx
  void *v57; // rdx
  _QWORD *v58; // rax
  unsigned int v59; // r10d
  unsigned int v60; // r11d
  unsigned __int64 v61; // rbx
  ULONG64 v62; // rax
  int v63; // ecx
  WCHAR *v64; // rax
  unsigned __int64 v65; // rbx
  ULONG64 v66; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v67; // r14
  int v68; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rax
  WCHAR *v70; // rbx
  WCHAR *v71; // rax
  unsigned int v72; // edx
  char v73; // r12
  void *v74; // rdx
  int TableContext; // [rsp+20h] [rbp-3C8h]
  int v76; // [rsp+28h] [rbp-3C0h]
  int v77; // [rsp+30h] [rbp-3B8h]
  int v78; // [rsp+38h] [rbp-3B0h]
  int v79; // [rsp+60h] [rbp-388h]
  char v80; // [rsp+68h] [rbp-380h]
  bool v81; // [rsp+70h] [rbp-378h]
  int v82; // [rsp+70h] [rbp-378h]
  unsigned int v83; // [rsp+78h] [rbp-370h] BYREF
  PVOID Object; // [rsp+80h] [rbp-368h] BYREF
  unsigned int v85; // [rsp+88h] [rbp-360h] BYREF
  WCHAR *v86; // [rsp+90h] [rbp-358h]
  int v87; // [rsp+98h] [rbp-350h]
  void *v88; // [rsp+A0h] [rbp-348h]
  void *v89; // [rsp+A8h] [rbp-340h]
  HANDLE v90; // [rsp+B0h] [rbp-338h] BYREF
  unsigned __int64 v91; // [rsp+B8h] [rbp-330h] BYREF
  unsigned __int64 *v92; // [rsp+C0h] [rbp-328h]
  unsigned int *v93; // [rsp+C8h] [rbp-320h]
  unsigned int v94; // [rsp+D0h] [rbp-318h] BYREF
  unsigned __int64 v95; // [rsp+D8h] [rbp-310h] BYREF
  HANDLE *v96; // [rsp+E0h] [rbp-308h]
  unsigned __int64 v97; // [rsp+E8h] [rbp-300h] BYREF
  void *v98; // [rsp+F0h] [rbp-2F8h]
  __int64 v99; // [rsp+F8h] [rbp-2F0h]
  HANDLE Handle; // [rsp+100h] [rbp-2E8h] BYREF
  HANDLE v101; // [rsp+108h] [rbp-2E0h] BYREF
  HANDLE v102; // [rsp+110h] [rbp-2D8h] BYREF
  unsigned __int64 v103; // [rsp+118h] [rbp-2D0h] BYREF
  unsigned __int64 v104; // [rsp+120h] [rbp-2C8h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+128h] [rbp-2C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+130h] [rbp-2B8h] BYREF
  unsigned __int64 v107; // [rsp+140h] [rbp-2A8h] BYREF
  _QWORD v108[2]; // [rsp+148h] [rbp-2A0h] BYREF
  __int64 v109; // [rsp+158h] [rbp-290h] BYREF
  __int64 v110; // [rsp+160h] [rbp-288h] BYREF
  WCHAR *v111; // [rsp+168h] [rbp-280h]
  UNICODE_STRING SourceString; // [rsp+170h] [rbp-278h] BYREF
  _QWORD v113[2]; // [rsp+180h] [rbp-268h] BYREF
  _QWORD v114[2]; // [rsp+190h] [rbp-258h] BYREF
  _QWORD v115[2]; // [rsp+1A0h] [rbp-248h] BYREF
  PVOID BackTrace[20]; // [rsp+1B0h] [rbp-238h] BYREF
  PVOID v117[20]; // [rsp+250h] [rbp-198h] BYREF
  PVOID v118[20]; // [rsp+2F0h] [rbp-F8h] BYREF
  void *v119[3]; // [rsp+390h] [rbp-58h] BYREF

  v91 = a4;
  v13 = a3;
  v83 = a3;
  v14 = a2;
  v92 = (unsigned __int64 *)a2;
  v108[1] = a2;
  v95 = v91;
  v99 = a6;
  v98 = a7;
  v97 = a8;
  v96 = a13;
  Handle = (HANDLE)-1LL;
  v101 = (HANDLE)-1LL;
  v102 = (HANDLE)-1LL;
  v90 = (HANDLE)-1LL;
  memset(v119, 0, sizeof(v119));
  v85 = a12 == 0;
  v81 = 0;
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
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      11,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
    v14 = (__int64)v92;
    v13 = v83;
  }
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        2,
        1,
        12,
        (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
        a1);
    }
    v50 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v51 = 13;
    goto LABEL_125;
  }
  if ( v14 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || v13 )
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
        WPP_RECORDER_AND_TRACE_SF_qDd(
          WPP_GLOBAL_Control->AttachedDevice,
          a2,
          a3,
          v14,
          TableContext,
          v76,
          v77,
          v78,
          v14,
          a1,
          v13);
      }
      v50 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(a2) = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v51 = 15;
      goto LABEL_125;
    }
  }
  else if ( v13 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      if ( a12 )
      {
        v16 = rimCheckForRegistrationConflicts(a1, a2, a3, 0LL);
        if ( v16 == 1 )
          return 3221225506LL;
        v81 = v16 == 0;
      }
      goto LABEL_14;
    }
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        2,
        1,
        16,
        (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
        a1,
        v13);
    }
    v50 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(a2) = 0;
    }
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)a2 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v51 = 17;
LABEL_125:
    WPP_RECORDER_AND_TRACE_SF_(
      v50->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      v51,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
    return 3221225485LL;
  }
LABEL_14:
  KernelSemaphore = (void *)CreateKernelSemaphore(0, -1);
  v88 = KernelSemaphore;
  if ( !KernelSemaphore )
    return 3221225495LL;
  v89 = (void *)CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !v89 )
  {
    v52 = KernelSemaphore;
    goto LABEL_129;
  }
  for ( i = 0; ; ++i )
  {
    if ( i > 2 )
    {
      v21 = rimConvertUserToKernelEventHandle(v99, &Handle);
      v22 = rimConvertUserToKernelTimerHandle(v98, &v101);
      v23 = rimConvertUserToKernelSemaphoreHandle((void *)v97, &v102);
      v25 = v21 < 0;
      if ( v21 >= 0 )
      {
        if ( v22 >= 0 && v23 >= 0 )
        {
          KeEnterCriticalRegion();
          v26 = a12 != 0;
          v79 = RawInputManagerObjectCreate(a12 != 0, v27, v28, v29, &v90);
          KeLeaveCriticalRegion();
          if ( v79 < 0 || (Object = 0LL, v79 = RawInputManagerObjectResolveHandle(v90, 3LL, 1LL, &Object), v79 < 0) )
          {
LABEL_53:
            v47 = 0;
            if ( v79 < 0 )
            {
              while ( v47 <= 2 )
              {
                v24 = v119[v47];
                if ( v24 )
                  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v24);
                ++v47;
              }
              if ( v88 )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v88);
              if ( v89 )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v89);
              if ( Handle != (HANDLE)-1LL )
                ZwClose(Handle);
              if ( v101 != (HANDLE)-1LL )
                ZwClose(v101);
              if ( v102 != (HANDLE)-1LL )
                ZwClose(v102);
              if ( v90 != (HANDLE)-1LL )
                ObCloseHandle(v90, 1);
            }
            else
            {
              while ( v47 <= 2 )
              {
                if ( v119[v47] )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 613LL);
                ++v47;
              }
              if ( v88 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 616LL);
              if ( v89 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 617LL);
              if ( v26 )
              {
                v24 = v96;
                if ( (unsigned __int64)v96 >= MmUserProbeAddress )
                  v24 = (_QWORD *)MmUserProbeAddress;
                *v24 = v90;
                v48 = &WPP_RECORDER_INITIALIZED;
                goto LABEL_66;
              }
              *v96 = v90;
            }
            v48 = &WPP_RECORDER_INITIALIZED;
LABEL_66:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v24) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v24) = 0;
            }
            if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_d(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)v24,
                (_DWORD)v48,
                (_DWORD)gRimLog,
                4,
                1,
                20,
                (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
                v79);
            }
            return (unsigned int)v79;
          }
          v30 = (char *)Object;
          *((_QWORD *)Object + 9) = v90;
          *((_WORD *)v30 + 40) = 0;
          v30[82] = 0;
          *((_DWORD *)v30 + 21) = a1;
          *((_QWORD *)v30 + 15) = a5;
          *((_QWORD *)v30 + 13) = 0LL;
          *((_QWORD *)v30 + 14) = 0LL;
          *((_QWORD *)v30 + 95) = 0LL;
          *((_QWORD *)v30 + 96) = 0LL;
          *((_QWORD *)v30 + 53) = 0LL;
          *((_DWORD *)v30 + 102) = 0;
          *((_QWORD *)v30 + 52) = 0LL;
          *((_QWORD *)v30 + 55) = v30 + 432;
          *((_QWORD *)v30 + 54) = v30 + 432;
          *((_OWORD *)v30 + 28) = 0LL;
          *((_OWORD *)v30 + 29) = 0LL;
          *((_QWORD *)v30 + 57) = v30 + 448;
          *((_QWORD *)v30 + 56) = v30 + 448;
          memset(v30 + 480, 0, 0xE8uLL);
          RIMCheckPressureDefaultSetting((__int64)v30);
          *((_DWORD *)v30 + 264) = v85;
          *((_QWORD *)v30 + 133) = v88;
          *((_DWORD *)v30 + 268) = 0;
          v88 = 0LL;
          *((_QWORD *)v30 + 137) = v89;
          *((_DWORD *)v30 + 276) = 0;
          v89 = 0LL;
          for ( j = 0; j <= 2; ++j )
          {
            v32 = 4LL * j;
            v33 = 32 * (j + 4LL);
            *(_OWORD *)&v30[v33] = *(_OWORD *)&(&off_1C0280590)[v32];
            *(_OWORD *)&v30[v33 + 16] = *(_OWORD *)(&off_1C0280590 + v32 + 2);
            *(_QWORD *)&v30[8 * j + 224] = 0LL;
            *(_QWORD *)&v30[8 * j + 312] = v119[j];
            *(_DWORD *)&v30[4 * j + 296] = 0;
            v119[j] = 0LL;
            *(_DWORD *)&v30[16 * j + 256] = j;
            *(_QWORD *)&v30[16 * j + 248] = v30;
          }
          *((_QWORD *)v30 + 42) = v101;
          *((_QWORD *)v30 + 50) = a9;
          *((_QWORD *)v30 + 43) = Handle;
          v30[392] = v81;
          v30[393] = 0;
          *((_QWORD *)v30 + 44) = 0LL;
          *((_QWORD *)v30 + 45) = 0LL;
          *((_QWORD *)v30 + 46) = v102;
          *((_QWORD *)v30 + 48) = v30 + 376;
          *((_QWORD *)v30 + 47) = v30 + 376;
          v30[776] = 0;
          *((_QWORD *)v30 + 113) = 0LL;
          *((_QWORD *)v30 + 112) = 500 * gliQpcFreq.QuadPart / 1000;
          *((_QWORD *)v30 + 116) = 5000 * gliQpcFreq.QuadPart / 1000;
          *((_QWORD *)v30 + 103) = a10;
          *((_QWORD *)v30 + 104) = a11;
          *((_WORD *)v30 + 356) = 0;
          *(_QWORD *)(v30 + 716) = 1LL;
          *((_QWORD *)v30 + 100) = 0LL;
          *((_QWORD *)v30 + 92) = v30 + 728;
          *((_QWORD *)v30 + 91) = v30 + 728;
          *((_QWORD *)v30 + 94) = v30 + 744;
          *((_QWORD *)v30 + 93) = v30 + 744;
          *((_QWORD *)v30 + 99) = v30 + 784;
          *((_QWORD *)v30 + 98) = v30 + 784;
          *((_QWORD *)v30 + 102) = v30 + 808;
          *((_QWORD *)v30 + 101) = v30 + 808;
          *((_QWORD *)v30 + 136) = v30 + 1080;
          *((_QWORD *)v30 + 135) = v30 + 1080;
          RtlInitializeGenericTableAvl(
            (PRTL_AVL_TABLE)v30 + 9,
            rimUserMemAllocNodeCompare,
            rimUserMemAllocNodeAlloc,
            rimUserMemAllocNodeFree,
            0LL);
          v36 = v83;
          *((_DWORD *)v30 + 22) = v83;
          if ( !(_DWORD)v36 )
            goto LABEL_73;
          if ( v92 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 462LL);
          v37 = 4 * v36;
          if ( (unsigned __int64)(4 * v36) > 0xFFFFFFFF )
          {
            v79 = -1073741811;
            goto LABEL_73;
          }
          v38 = v37;
          v85 = 1885435218;
          v110 = 260LL;
          v39 = gpLeakTrackingAllocator;
          v107 = v37;
          v40 = *(_DWORD *)gpLeakTrackingAllocator;
          if ( !*(_DWORD *)gpLeakTrackingAllocator )
          {
            Pool2 = ExAllocatePool2(260LL, (unsigned int)v38, 1885435218LL);
            if ( Pool2 )
            {
              _InterlockedAdd64((volatile signed __int64 *)v39 + 14, 1uLL);
              v30 = (char *)Object;
            }
            goto LABEL_38;
          }
          if ( v40 == 1 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70617552u)
              && v38 + 16 >= v38 )
            {
              v58 = (_QWORD *)ExAllocatePool2(v110 & 0xFFFFFFFFFFFFFFFDuLL, v38 + 16, v85);
              Pool2 = (__int64)v58;
              if ( !v58
                || (_InterlockedAdd64((volatile signed __int64 *)v39 + 14, 1uLL),
                    v30 = (char *)Object,
                    *v58 = 1885435218LL,
                    Pool2 = (__int64)(v58 + 2),
                    v58 == (_QWORD *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v39 + 1),
                  (const void *)0x70617552);
              }
LABEL_38:
              *((_QWORD *)v30 + 12) = Pool2;
              if ( Pool2 )
              {
                if ( a12 )
                {
                  v42 = 0;
                  v87 = 0;
                  v43 = v83;
                  v44 = v91;
                  while ( v42 < v43 )
                  {
                    v35 = v42;
                    v34 = v44 + 4LL * v42;
                    if ( v34 >= MmUserProbeAddress )
                      v34 = MmUserProbeAddress;
                    *(_DWORD *)(*((_QWORD *)v30 + 12) + 4LL * v42++) = *(_DWORD *)v34;
                    v87 = v42;
                  }
                  v45 = v92;
                  v46 = a12 != 0;
LABEL_46:
                  if ( !v45 )
                  {
                    if ( v79 >= 0 && !v30[392] )
                      RIMDiscoverDevicesOfInputType(v30);
                    RIMIDEAdoptOrphanedRimDevs((PVOID **)v30, v46, v34, v35);
LABEL_51:
                    InputTraceLogging::RIM::RawInputManagerObjectUsed((const struct RawInputManagerObject *)v30);
                    ObfDereferenceObject(v30);
LABEL_52:
                    v26 = a12 != 0;
                    goto LABEL_53;
                  }
                  SourceString = 0LL;
                  p_DestinationString = 0LL;
                  DestinationString = 0LL;
                  if ( !v46 )
                  {
                    p_DestinationString = (struct _UNICODE_STRING *)v45;
                    goto LABEL_224;
                  }
                  v62 = (ULONG64)v92;
                  if ( (unsigned __int64)v92 >= MmUserProbeAddress )
                    v62 = MmUserProbeAddress;
                  v63 = *(_DWORD *)v62;
                  v82 = *(_DWORD *)v62;
                  *(_DWORD *)&SourceString.Length = *(_DWORD *)v62;
                  v64 = *(WCHAR **)(v62 + 8);
                  SourceString.Buffer = v64;
                  if ( ((unsigned __int8)v64 & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v65 = (unsigned __int16)v63;
                  v66 = (ULONG64)v64 + (unsigned __int16)v63 + 2;
                  if ( v66 <= (unsigned __int64)v64 || v66 >= MmUserProbeAddress )
                    ExRaiseAccessViolation();
                  if ( (unsigned __int16)v63 > HIWORD(v82) )
                  {
                    if ( (v63 & 1) == 0 )
                      goto LABEL_222;
                  }
                  else if ( (v63 & 1) == 0 )
                  {
                    if ( !(_WORD)v63 )
                    {
                      v79 = -1073741801;
LABEL_219:
                      v30 = (char *)Object;
LABEL_224:
                      if ( v79 >= 0 )
                      {
                        RIMLockExclusive(v30 + 104);
                        v79 = RIMDiscoverSpecificDevice(v30, p_DestinationString);
                        *((_QWORD *)v30 + 14) = 0LL;
                        ExReleasePushLockExclusiveEx(v30 + 104, 0LL);
                        KeLeaveCriticalRegion();
                        if ( v79 < 0 )
                        {
                          if ( *((_QWORD *)v30 + 12) )
                            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 562LL);
                          v74 = (void *)*((_QWORD *)v30 + 52);
                          if ( v74 )
                          {
                            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v74);
                            *((_QWORD *)v30 + 52) = 0LL;
                          }
                          *((_QWORD *)v30 + 42) = -1LL;
                          *((_QWORD *)v30 + 43) = -1LL;
                          *((_QWORD *)v30 + 46) = -1LL;
                        }
                      }
                      if ( DestinationString.Buffer )
                        NSInstrumentation::CLeakTrackingAllocator::Free(
                          gpLeakTrackingAllocator,
                          DestinationString.Buffer);
                      goto LABEL_51;
                    }
                    DestinationString.MaximumLength = v63;
                    DestinationString.Length = v63;
                    v83 = 1886221394;
                    v95 = 260LL;
                    v67 = gpLeakTrackingAllocator;
                    v92 = &v95;
                    v93 = &v83;
                    v97 = (unsigned __int16)v63;
                    v68 = *(_DWORD *)gpLeakTrackingAllocator;
                    if ( !*(_DWORD *)gpLeakTrackingAllocator )
                    {
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(260LL, (unsigned __int16)v63, 1886221394LL);
                      v70 = (WCHAR *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                        _InterlockedAdd64((volatile signed __int64 *)v67 + 14, 1uLL);
                      goto LABEL_193;
                    }
                    if ( v68 == 1 )
                    {
                      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                             gpLeakTrackingAllocator,
                             0x706D7452u)
                        && v65 + 16 >= v65 )
                      {
                        v71 = (WCHAR *)ExAllocatePool2(v95 & 0xFFFFFFFFFFFFFFFDuLL, v65 + 16, v83);
                        v70 = v71;
                        if ( v71 )
                          _InterlockedAdd64((volatile signed __int64 *)v67 + 14, 1uLL);
                        v111 = v71;
                        if ( !v71
                          || (*(_QWORD *)v71 = 1886221394LL, v70 = v71 + 8, v111 = v71 + 8, v71 == (WCHAR *)-16LL) )
                        {
                          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                            *((NSInstrumentation::CPointerHashTable **)v67 + 1),
                            (const void *)0x706D7452);
                        }
                        goto LABEL_215;
                      }
                      goto LABEL_214;
                    }
                    if ( v68 == 2 )
                    {
                      v91 = 0LL;
                      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                              gpLeakTrackingAllocator,
                              0x706D7452u,
                              &v91) )
                      {
                        v115[0] = &v95;
                        v115[1] = &v83;
                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(v67, v115, &v97);
                        v70 = (WCHAR *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
LABEL_193:
                        v86 = (WCHAR *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                        goto LABEL_216;
                      }
                      v73 = 0;
                      if ( v65 < 0x1000 || (v65 & 0xFFF) != 0 )
                      {
                        v73 = 1;
                        v65 += 16LL;
                        v97 = v65;
                      }
                      v70 = (WCHAR *)ExAllocatePool2(260LL, v65, v72);
                      if ( v70 )
                      {
                        _InterlockedAdd64((volatile signed __int64 *)v67 + 16, 1uLL);
                        NSInstrumentation::CBackTrace::CBackTrace(v118);
                        if ( v73 && (unsigned __int64)((unsigned __int16)v70 & 0xFFF) + 16 < 0x1000 )
                        {
                          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                                  v67,
                                                  v70,
                                                  v91,
                                                  v118) )
                          {
                            v70 += 8;
LABEL_215:
                            v86 = v70;
LABEL_216:
                            DestinationString.Buffer = v70;
                            if ( v70 )
                            {
                              RtlCopyUnicodeString(&DestinationString, &SourceString);
                              p_DestinationString = &DestinationString;
                            }
                            goto LABEL_219;
                          }
                        }
                        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                                     v67,
                                                     v70,
                                                     v91,
                                                     v118) )
                        {
                          goto LABEL_215;
                        }
                        _InterlockedAdd64((volatile signed __int64 *)v67 + 17, 1uLL);
                        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(v70);
                      }
                    }
LABEL_214:
                    v70 = 0LL;
                    goto LABEL_215;
                  }
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 525LL);
LABEL_222:
                  ExRaiseAccessViolation();
                }
                v34 = 0LL;
                v87 = 0;
                v60 = v83;
                v61 = v91;
                while ( (unsigned int)v34 < v60 )
                {
                  *(_DWORD *)(*((_QWORD *)v30 + 12) + 4LL * (unsigned int)v34) = *(_DWORD *)(v61
                                                                                           + 4LL * (unsigned int)v34);
                  v34 = (unsigned int)(v34 + 1);
                }
                v87 = v34;
              }
              else
              {
                v79 = -1073741801;
              }
LABEL_73:
              v46 = a12 != 0;
              v45 = v92;
              goto LABEL_46;
            }
          }
          else if ( v40 == 2 )
          {
            v104 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70617552u, &v104) )
            {
              v114[0] = &v110;
              v114[1] = &v85;
              Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                        v39,
                        v114,
                        &v107);
              goto LABEL_38;
            }
            v80 = 0;
            if ( v38 < 0x1000 || (v38 & 0xFFF) != 0 )
            {
              v80 = 1;
              v38 += 16LL;
              v107 = v38;
            }
            Pool2 = ExAllocatePool2(260LL, v38, v59);
            if ( Pool2 )
            {
              _InterlockedAdd64((volatile signed __int64 *)v39 + 16, 1uLL);
              v30 = (char *)Object;
              NSInstrumentation::CBackTrace::CBackTrace(v117);
              if ( v80 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v39,
                                        Pool2,
                                        v104,
                                        v117) )
                {
                  Pool2 += 16LL;
                  goto LABEL_38;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v39,
                                           Pool2,
                                           v104,
                                           v117) )
              {
                goto LABEL_38;
              }
              _InterlockedAdd64((volatile signed __int64 *)v39 + 17, 1uLL);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
              v30 = (char *)Object;
            }
          }
          Pool2 = 0LL;
          goto LABEL_38;
        }
        v25 = v21 < 0;
      }
      if ( !v25 )
        v21 = v22;
      v79 = v21;
      goto LABEL_52;
    }
    v94 = 1668301138;
    v108[0] = 68LL;
    v19 = gpLeakTrackingAllocator;
    v109 = 104LL;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( *(_DWORD *)gpLeakTrackingAllocator == 1 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63704152u) )
          goto LABEL_143;
        v53 = (_QWORD *)ExAllocatePool2(v108[0] & 0xFFFFFFFFFFFFFFFDuLL, 120LL, v94);
        v20 = (__int64)v53;
        if ( !v53
          || (_InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL),
              *v53 = 1668301138LL,
              v20 = (__int64)(v53 + 2),
              v53 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v19 + 1),
            (const void *)0x63704152);
        }
      }
      else
      {
        if ( *(_DWORD *)gpLeakTrackingAllocator != 2 )
          goto LABEL_143;
        v103 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x63704152u, &v103) )
        {
          v113[0] = v108;
          v113[1] = &v94;
          v20 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v19,
                  v113,
                  &v109);
          goto LABEL_21;
        }
        v109 = 120LL;
        v20 = ExAllocatePool2(v55, 120LL, v54);
        if ( !v20 )
          goto LABEL_143;
        _InterlockedAdd64((volatile signed __int64 *)v19 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(v20 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v19,
                                  v20,
                                  v103,
                                  BackTrace) )
            goto LABEL_21;
LABEL_142:
          _InterlockedAdd64((volatile signed __int64 *)v19 + 17, 1uLL);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v20);
LABEL_143:
          v20 = 0LL;
          goto LABEL_21;
        }
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v19,
                                 v20,
                                 v103,
                                 BackTrace) )
          goto LABEL_142;
        v20 += 16LL;
      }
    }
    else
    {
      v20 = ExAllocatePool2(68LL, 104LL, 1668301138LL);
      if ( v20 )
        _InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL);
    }
LABEL_21:
    v119[i] = (void *)v20;
    if ( !v20 )
      break;
  }
  for ( k = 0; k <= 2; ++k )
  {
    v57 = v119[k];
    if ( v57 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v57);
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v88);
  v52 = v89;
LABEL_129:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v52);
  return 3221225495LL;
}
