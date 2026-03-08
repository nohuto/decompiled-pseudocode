/*
 * XREFs of Win32UserInitialize @ 0x1C031E444
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C001085C (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     IsIMMEnabledSystem @ 0x1C002D790 (IsIMMEnabledSystem.c)
 *     IsThreadCrossSessionAttached @ 0x1C004B600 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C004DF60 (IsEtwUserCritEnabled.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004E1A8 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418 (-SendUserCritSummary@UserCritTelemetry@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     OpenCacheKeyEx @ 0x1C00760E0 (OpenCacheKeyEx.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     UserAddAtomToAtomTableEx @ 0x1C00BE980 (UserAddAtomToAtomTableEx.c)
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C00CEA08 (ApiSetEditionBaseDriverEntryInitialize.c)
 *     Initialize @ 0x1C00D1ECC (Initialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C00D2B3C (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0167CA4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     InitKernelHandleTable @ 0x1C031E1A8 (InitKernelHandleTable.c)
 *     InitCreateSharedSection @ 0x1C031E224 (InitCreateSharedSection.c)
 *     HMInitHandleTable @ 0x1C031F424 (HMInitHandleTable.c)
 *     InitSecurity @ 0x1C031FB94 (InitSecurity.c)
 *     InitQEntryLookaside @ 0x1C031FF8C (InitQEntryLookaside.c)
 *     InitCreateUserSubsystem @ 0x1C032009C (InitCreateUserSubsystem.c)
 */

__int64 __fastcall Win32UserInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  PDEVICE_OBJECT v4; // rcx
  int v5; // r15d
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // r8
  PVOID Reserved; // rdx
  unsigned __int64 v14; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v16; // rax
  struct tagTHREADINFO **v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v24; // rbx
  __int64 v25; // r8
  struct tagTHREADINFO *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int inited; // esi
  int v32; // eax
  int v33; // eax
  int v34; // esi
  int v35; // eax
  unsigned int v36; // edx
  _DWORD *v37; // rax
  NSInstrumentation::CLeakTrackingAllocator *v38; // rbx
  int v39; // eax
  void *Pool2; // rdi
  PVOID Heap; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v47; // rdi
  int v48; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v50; // rcx
  void *v51; // rbx
  void *v52; // rbx
  int v53; // eax
  int v54; // edi
  void *v55; // rbx
  _DWORD *v56; // rbx
  void *v57; // rdi
  _DWORD *v58; // rbx
  void *v59; // rdi
  _DWORD *v60; // rbx
  void *v61; // rdi
  _DWORD *v62; // rbx
  void *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  void *v69; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v71; // rax
  __int64 *v72; // rbx
  _QWORD *v73; // rax
  unsigned int v74; // r10d
  __int64 v75; // r11
  __int64 v76; // rdi
  _QWORD *v77; // rax
  unsigned int v78; // r10d
  __int64 v79; // r11
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  ULONG Lengtha[2]; // [rsp+28h] [rbp-E0h]
  int v82; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v85; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v86; // [rsp+70h] [rbp-98h] BYREF
  __int64 v87; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v88; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v89; // [rsp+88h] [rbp-80h] BYREF
  __int64 v90; // [rsp+90h] [rbp-78h] BYREF
  __int64 v91; // [rsp+98h] [rbp-70h] BYREF
  __int64 v92; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v93[2]; // [rsp+A8h] [rbp-60h] BYREF
  PVOID BackTrace[20]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v95[20]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v97; // [rsp+204h] [rbp+FCh]
  _BYTE v98[12]; // [rsp+210h] [rbp+108h] BYREF
  int v99; // [rsp+21Ch] [rbp+114h]
  _BYTE v100[12]; // [rsp+228h] [rbp+120h] BYREF
  int v101; // [rsp+234h] [rbp+12Ch]
  _BYTE v102[12]; // [rsp+240h] [rbp+138h] BYREF
  int v103; // [rsp+24Ch] [rbp+144h]
  _BYTE v104[12]; // [rsp+258h] [rbp+150h] BYREF
  int v105; // [rsp+264h] [rbp+15Ch]
  _BYTE v106[12]; // [rsp+270h] [rbp+168h] BYREF
  int v107; // [rsp+27Ch] [rbp+174h]
  _BYTE v108[12]; // [rsp+288h] [rbp+180h] BYREF
  int v109; // [rsp+294h] [rbp+18Ch]

  v3 = 0;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      25,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  if ( qword_1C02D6ED0 && (int)qword_1C02D6ED0(v4, a2, a3) >= 0 )
  {
    if ( qword_1C02D6ED8 )
    {
      v5 = qword_1C02D6ED8();
      if ( v5 >= 0 )
        goto LABEL_11;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
    return (unsigned int)v5;
  }
LABEL_11:
  result = InitCreateSharedSection((__int64)v4, a2, a3);
  if ( (int)result >= 0 )
  {
    result = InitKernelHandleTable(v8, v7, v9);
    if ( (int)result >= 0 )
    {
      result = ApiSetEditionBaseDriverEntryInitialize();
      v11 = result;
      if ( (int)result >= 0 )
      {
        v12 = 0x200000010000000LL;
        if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
          || (Reserved = WPP_MAIN_CB.Reserved,
              v14 = 0x8000002010000000uLL,
              ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
          && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
          || ((__int64)WPP_MAIN_CB.Reserved & v12) != 0
          && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
          && (v12 & qword_1C02C4050) != 0
          && (v12 & qword_1C02C4058) == qword_1C02C4058 )
        {
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(
                                                        v10,
                                                        Reserved,
                                                        v12,
                                                        v14,
                                                        *(_QWORD *)Length);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        }
        v16 = SGDGetUserSessionState(v10, Reserved, v12, v14);
        v17 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v16 + 8));
        if ( v17 )
        {
          if ( IsEtwUserCritEnabled() )
          {
            v22 = PsGetCurrentThreadWin32Thread(v19, v18, v20, v21, *(_QWORD *)Length);
            if ( v22 )
            {
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v24 = PerformanceCounter.QuadPart - *(_QWORD *)(v22 + 8);
              if ( (dword_1C02D1900 & 1) == 0 )
              {
                dword_1C02D1900 |= 1u;
                memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
                word_1C02D2A38 = 0;
                byte_1C02D2A3A = 0;
                memset(&unk_1C02D2A40, 0, 0x168uLL);
                qword_1C02D2BB8 = 0LL;
                qword_1C02D2BD0 = 0LL;
                xmmword_1C02D2BA8 = 0LL;
                qword_1C02D2BE8 = 0LL;
                xmmword_1C02D2BC0 = 0LL;
                xmmword_1C02D2BF0 = 0uLL;
                xmmword_1C02D2BD8 = 0LL;
              }
              UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v24, 0);
              if ( (dword_1C02D1900 & 1) == 0 )
              {
                dword_1C02D1900 |= 1u;
                memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
                word_1C02D2A38 = 0;
                byte_1C02D2A3A = 0;
                memset(&unk_1C02D2A40, 0, 0x168uLL);
                qword_1C02D2BB8 = 0LL;
                qword_1C02D2BD0 = 0LL;
                xmmword_1C02D2BA8 = 0LL;
                qword_1C02D2BE8 = 0LL;
                xmmword_1C02D2BC0 = 0LL;
                xmmword_1C02D2BF0 = 0uLL;
                xmmword_1C02D2BD8 = 0LL;
              }
              UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
              *(LARGE_INTEGER *)(v22 + 8) = PerformanceCounter;
              if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                && (qword_1C02C4050 & 0x200000010000000LL) != 0
                && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                Lengtha[0] = 1000000 * v24 / gliQpcFreq.QuadPart;
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  &AcquiredExclusiveUserCritEvent,
                  v25,
                  v24,
                  *(_QWORD *)Lengtha,
                  gullUserCritAcquireToken);
              }
              if ( v24 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                && (signed __int64)(PerformanceCounter.QuadPart
                                  - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                {
                  Lengtha[0] = 1000 * v24 / gliQpcFreq.QuadPart;
                  McTemplateK0xqx_EtwWriteTransfer(
                    gullUserCritAcquireToken,
                    &AcquiredExclusiveUserCritTelemetryEvent,
                    v25,
                    v24,
                    *(_QWORD *)Lengtha,
                    gullUserCritAcquireToken);
                }
                WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
              }
              *(_QWORD *)(v22 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
          }
          v26 = *v17;
          if ( !IsThreadCrossSessionAttached() )
          {
            gptiCurrent = v26;
            if ( v26 )
            {
              *((_DWORD *)v26 + 387) = 1;
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
              if ( CurrentProcessWin32Process )
              {
                if ( *(_QWORD *)CurrentProcessWin32Process
                  && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                  && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                  && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                {
                  while ( 1 )
                  {
                    v72 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                    if ( !gpSharedUserCritDeferredUnlockListHead )
                      break;
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                                 + 2);
                    v71 = *v72;
                    v72[2] = 0LL;
                    if ( !*(_DWORD *)(v71 + 8) )
                    {
                      LODWORD(v87) = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                    }
                    HMUnlockObject(*v72);
                  }
                }
              }
            }
LABEL_30:
            if ( !(unsigned int)InitSecurity() )
              goto LABEL_265;
            *(_DWORD *)(ExWindowStationObjectType + 108LL) = 240;
            *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
            *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
            *(struct _GENERIC_MAPPING *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
            *((_DWORD *)ExDesktopObjectType + 27) = 336;
            *((_DWORD *)ExDesktopObjectType + 26) = 0;
            *((_DWORD *)ExDesktopObjectType + 23) = 983551;
            *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
            *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
            *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
            *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
            *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
            *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
            *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 1120;
            *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
            *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
            *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
            gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL, v29, v30);
            inited = InitQEntryLookaside();
            if ( qword_1C02D6EE0 && (int)qword_1C02D6EE0() >= 0 )
            {
              if ( qword_1C02D6EE8 )
                v32 = qword_1C02D6EE8();
              else
                v32 = -1073741637;
              inited |= v32;
            }
            v33 = UserAtomTableHandle ? 0 : RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
            v34 = v33 | inited;
            v35 = UserLibmgmtAtomTableHandle ? 0 : RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
            v11 = v35 | v34;
            if ( v11 < 0 )
              goto LABEL_265;
            atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1, 2LL);
            gatomFirstPinned = atomUSER32;
            if ( !atomUSER32 || !(unsigned int)InitCreateUserSubsystem() )
              goto LABEL_265;
            if ( qword_1C02D6EF0 && (int)qword_1C02D6EF0() >= 0 && qword_1C02D6EF8 )
              qword_1C02D6EF8();
            if ( qword_1C02D6170 && (int)qword_1C02D6170() >= 0 && (!qword_1C02D6178 || (int)qword_1C02D6178() < 0) )
              goto LABEL_265;
            gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1BB0uLL);
            if ( !gpsi )
              goto LABEL_265;
            v36 = 2;
            v28 = 2524LL;
            do
            {
              LODWORD(v29) = 0;
              v30 = v28;
              do
              {
                v29 = (unsigned int)(v29 + 1);
                *(_DWORD *)((char *)gpsi + v30) = -1;
                v30 += 4LL;
              }
              while ( (unsigned int)v29 < 0x1E );
              ++v36;
              v28 += 120LL;
            }
            while ( v36 < 0x12 );
            v37 = gpsi;
            v38 = gpLeakTrackingAllocator;
            v85 = 1885629269;
            v90 = 260LL;
            *((_DWORD *)gpsi + 1282) = 8;
            v37[1283] = 16;
            v39 = *(_DWORD *)v38;
            v87 = 168LL;
            if ( !v39 )
            {
              Pool2 = (void *)ExAllocatePool2(260LL, 168LL, 1885629269LL);
              if ( Pool2 )
                _InterlockedAdd64((volatile signed __int64 *)v38 + 14, 1uLL);
LABEL_59:
              gpDispInfo = Pool2;
              if ( !Pool2 )
                goto LABEL_265;
              goto LABEL_60;
            }
            if ( v39 == 1 )
            {
              if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v38, 0x70646B55u) )
                goto LABEL_264;
              v73 = (_QWORD *)ExAllocatePool2(v90 & 0xFFFFFFFFFFFFFFFDuLL, 184LL, v85);
              Pool2 = v73;
              if ( !v73
                || (_InterlockedAdd64((volatile signed __int64 *)v38 + 14, 1uLL),
                    *v73 = 1885629269LL,
                    Pool2 = v73 + 2,
                    v73 == (_QWORD *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v38 + 1),
                  0x70646B55uLL);
              }
              goto LABEL_59;
            }
            if ( v39 != 2 )
              goto LABEL_264;
            v88 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v38, 1885629269, &v88) )
            {
              v93[0] = &v90;
              v93[1] = &v85;
              Pool2 = (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                (__int64)v38,
                                (__int64)v93,
                                &v87);
              goto LABEL_59;
            }
            v76 = ExAllocatePool2(v75, 184LL, v74);
            if ( !v76 )
              goto LABEL_264;
            _InterlockedAdd64((volatile signed __int64 *)v38 + 16, 1uLL);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( (unsigned __int64)(v76 & 0xFFF) + 16 < 0x1000 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                     (__int64)v38,
                     (const void *)v76,
                     v88,
                     (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                Pool2 = (void *)(v76 + 16);
                goto LABEL_59;
              }
            }
            else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                        (__int64)v38,
                        v76,
                        v88,
                        (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              gpDispInfo = (PVOID)v76;
LABEL_60:
              Heap = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
              v28 = (__int64)gpDispInfo;
              *(_QWORD *)gpDispInfo = Heap;
              if ( *(_QWORD *)gpDispInfo )
              {
                if ( (unsigned int)IsDesktopHeapLoggingOn() )
                  _InterlockedOr((volatile signed __int32 *)gpsi, 0x100u);
                else
                  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFEFF);
                if ( (_BYTE)NlsMbCodePageTag )
                  _InterlockedOr((volatile signed __int32 *)gpsi, 2u);
                else
                  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFD);
                if ( (unsigned int)IsIMMEnabledSystem(v43, v42, v44, v45) )
                  _InterlockedOr((volatile signed __int32 *)gpsi, 4u);
                else
                  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFB);
                if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
                  _InterlockedOr((volatile signed __int32 *)gpsi, 8u);
                else
                  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFF7);
                v46 = gdwDesktopSectionSize << 10;
                LODWORD(v86) = 1684763477;
                *((_DWORD *)gpsi + 231) = v46;
                v28 = 256LL;
                v47 = gpLeakTrackingAllocator;
                v91 = 260LL;
                v92 = 256LL;
                v48 = *(_DWORD *)gpLeakTrackingAllocator;
                if ( !*(_DWORD *)gpLeakTrackingAllocator )
                {
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                                     260LL,
                                                                                                     256LL,
                                                                                                     1684763477LL);
                  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                    _InterlockedAdd64((volatile signed __int64 *)v47 + 14, 1uLL);
                  goto LABEL_72;
                }
                if ( v48 == 1 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                         gpLeakTrackingAllocator,
                         0x646B7355u) )
                  {
                    v77 = (_QWORD *)ExAllocatePool2(v91 & 0xFFFFFFFFFFFFFFFDuLL, 272LL, (unsigned int)v86);
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v77;
                    if ( !v77
                      || (_InterlockedAdd64((volatile signed __int64 *)v47 + 14, 1uLL),
                          *v77 = 1684763477LL,
                          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v77 + 2),
                          v77 == (_QWORD *)-16LL) )
                    {
                      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                        *((NSInstrumentation::CPointerHashTable **)v47 + 1),
                        0x646B7355uLL);
                    }
LABEL_72:
                    gpkdiStatic = (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                    {
LABEL_73:
                      *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = &diStatic;
                      if ( qword_1C02D6F00 && (int)qword_1C02D6F00() >= 0 && qword_1C02D6F08 )
                        qword_1C02D6F08();
                      if ( qword_1C02D6F10 && (int)qword_1C02D6F10() >= 0 && qword_1C02D6F18 )
                        qword_1C02D6F18();
                      if ( qword_1C02D6F20 && (int)qword_1C02D6F20() >= 0 && qword_1C02D6F28 )
                        qword_1C02D6F28();
                      if ( !qword_1C02D6F30
                        || (int)qword_1C02D6F30() < 0
                        || qword_1C02D6F38 && (unsigned int)qword_1C02D6F38() )
                      {
                        GroupedFGBoostProp::s_atom = UserAddAtomToAtomTableEx(
                                                       UserAtomTableHandle,
                                                       (__int64)L"AdditionalFGBoostProp",
                                                       1,
                                                       2LL);
                        if ( GroupedFGBoostProp::s_atom
                          && (!qword_1C02D6F40
                           || (int)qword_1C02D6F40() < 0
                           || qword_1C02D6F48 && (unsigned int)qword_1C02D6F48()) )
                        {
                          if ( (unsigned int)HMInitHandleTable() )
                          {
                            gSharedInfo = (__int64)gpsi;
                            ResultLength = 0;
                            DestinationString_8 = 0LL;
                            v50 = *(_QWORD *)gpDispInfo;
                            dword_1C02D1038 = gCallerKernelAbiVersion;
                            v82 = gdwPolicyFlags;
                            qword_1C02D0E18 = v50;
                            while ( 1 )
                            {
                              v51 = OpenCacheKeyEx(0LL, 2LL, 131097LL, &v82);
                              if ( !v51 )
                                break;
                              RtlInitUnicodeString(&DestinationString_8, L"USERProcessHandleQuota");
                              if ( ZwQueryValueKey(
                                     v51,
                                     &DestinationString_8,
                                     KeyValuePartialInformation,
                                     KeyValueInformation,
                                     0x14u,
                                     &ResultLength) >= 0 )
                              {
                                v3 = v97;
                                v82 = 0;
                              }
                              else if ( !v82 )
                              {
                                v3 = 10000;
                              }
                              ZwClose(v51);
                              if ( !v82 )
                                goto LABEL_101;
                            }
                            v3 = 10000;
LABEL_101:
                            DestinationString_8 = 0LL;
                            gUserProcessHandleQuota = v3;
                            ResultLength = 0;
                            v82 = gdwPolicyFlags;
                            do
                            {
                              v52 = OpenCacheKeyEx(0LL, 2LL, 131097LL, &v82);
                              if ( !v52 )
                              {
                                v3 = 10000;
                                goto LABEL_108;
                              }
                              RtlInitUnicodeString(&DestinationString_8, L"USERPostMessageLimit");
                              if ( ZwQueryValueKey(
                                     v52,
                                     &DestinationString_8,
                                     KeyValuePartialInformation,
                                     v98,
                                     0x14u,
                                     &ResultLength) >= 0 )
                              {
                                v3 = v99;
                                v82 = 0;
                              }
                              else if ( !v82 )
                              {
                                v3 = 10000;
                              }
                              ZwClose(v52);
                            }
                            while ( v82 );
                            if ( v3 )
                            {
LABEL_108:
                              v53 = v3;
                              goto LABEL_109;
                            }
                            v53 = -1;
LABEL_109:
                            v54 = gNestedWindowLimit;
                            gUserPostMessageLimit = v53;
                            DestinationString_8 = 0LL;
                            v82 = gdwPolicyFlags;
                            ResultLength = 0;
                            while ( 1 )
                            {
                              v55 = OpenCacheKeyEx(0LL, 2LL, 131097LL, &v82);
                              if ( !v55 )
                                break;
                              RtlInitUnicodeString(&DestinationString_8, L"USERNestedWindowLimit");
                              if ( ZwQueryValueKey(
                                     v55,
                                     &DestinationString_8,
                                     KeyValuePartialInformation,
                                     v100,
                                     0x14u,
                                     &ResultLength) >= 0 )
                              {
                                v3 = v101;
                                v82 = 0;
                              }
                              else if ( !v82 )
                              {
                                v3 = v54;
                              }
                              ZwClose(v55);
                              if ( !v82 )
                                goto LABEL_115;
                            }
                            v3 = v54;
LABEL_115:
                            if ( (unsigned int)(v3 - 35) <= 0x41 )
                              gNestedWindowLimit = v3;
                            v56 = gpsi;
                            DestinationString_8 = 0LL;
                            ResultLength = 0;
                            v82 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v57 = OpenCacheKeyEx(0LL, 40LL, 131097LL, &v82);
                              if ( !v57 )
                                break;
                              RtlInitUnicodeString(&DestinationString_8, L"Installed");
                              if ( ZwQueryValueKey(
                                     v57,
                                     &DestinationString_8,
                                     KeyValuePartialInformation,
                                     v102,
                                     0x14u,
                                     &ResultLength) >= 0 )
                              {
                                v56[560] = v103;
                                v82 = 0;
                              }
                              else if ( !v82 )
                              {
                                v56[560] = 0;
                              }
                              ZwClose(v57);
                              if ( !v82 )
                                goto LABEL_123;
                            }
                            v56[560] = 0;
LABEL_123:
                            v58 = gpsi;
                            DestinationString_8 = 0LL;
                            ResultLength = 0;
                            v82 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v59 = OpenCacheKeyEx(0LL, 41LL, 131097LL, &v82);
                              if ( !v59 )
                                break;
                              RtlInitUnicodeString(&DestinationString_8, L"Installed");
                              if ( ZwQueryValueKey(
                                     v59,
                                     &DestinationString_8,
                                     KeyValuePartialInformation,
                                     v104,
                                     0x14u,
                                     &ResultLength) >= 0 )
                              {
                                v58[561] = v105;
                                v82 = 0;
                              }
                              else if ( !v82 )
                              {
                                v58[561] = 0;
                              }
                              ZwClose(v59);
                              if ( !v82 )
                                goto LABEL_129;
                            }
                            v58[561] = 0;
LABEL_129:
                            v60 = gpsi;
                            DestinationString_8 = 0LL;
                            ResultLength = 0;
                            v82 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v61 = OpenCacheKeyEx(0LL, 45LL, 131097LL, &v82);
                              if ( !v61 )
                                break;
                              RtlInitUnicodeString(&DestinationString_8, L"R2BuildNumber");
                              if ( ZwQueryValueKey(
                                     v61,
                                     &DestinationString_8,
                                     KeyValuePartialInformation,
                                     v106,
                                     0x14u,
                                     &ResultLength) >= 0 )
                              {
                                v60[563] = v107;
                                v82 = 0;
                              }
                              else if ( !v82 )
                              {
                                v60[563] = 0;
                              }
                              ZwClose(v61);
                              if ( !v82 )
                                goto LABEL_135;
                            }
                            v60[563] = 0;
LABEL_135:
                            v62 = gpsi;
                            DestinationString_8 = 0LL;
                            ResultLength = 0;
                            v82 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v63 = OpenCacheKeyEx(0LL, 46LL, 131097LL, &v82);
                              if ( !v63 )
                                break;
                              RtlInitUnicodeString(&DestinationString_8, L"StarterBuildNumber");
                              if ( ZwQueryValueKey(
                                     v63,
                                     &DestinationString_8,
                                     KeyValuePartialInformation,
                                     v108,
                                     0x14u,
                                     &ResultLength) >= 0 )
                              {
                                v62[562] = v109;
                                v82 = 0;
                              }
                              else if ( !v82 )
                              {
                                v62[562] = 0;
                              }
                              ZwClose(v63);
                              if ( !v82 )
                                goto LABEL_141;
                            }
                            v62[562] = 0;
LABEL_141:
                            Initialize();
                            if ( UIPrivelegeIsolation::fEnforce )
                            {
                              if ( qword_1C02D6F50 && (int)qword_1C02D6F50() >= 0 && qword_1C02D6F58 )
                                qword_1C02D6F58();
                              if ( *(_DWORD *)SGDGetUserSessionState(v65, v64, v66, v67) == gServiceSessionId
                                && !gServiceSessionId
                                && qword_1C02D6F60
                                && (int)qword_1C02D6F60() >= 0
                                && qword_1C02D6F68 )
                              {
                                qword_1C02D6F68();
                              }
                            }
                            gdwMDAQThreshold = 5000;
                            gdwMDAQTimeoutDefenseInDepth = 30000;
                            *((_DWORD *)gpsi + 559) &= ~0x20u;
                            if ( qword_1C02D6F70 && (int)qword_1C02D6F70() >= 0 && qword_1C02D6F78 )
                              qword_1C02D6F78();
                            if ( qword_1C02D6F80 && (int)qword_1C02D6F80() >= 0 && qword_1C02D6F88 )
                              qword_1C02D6F88();
                            v68 = ExAllocatePool2(256LL, 24LL, 1146310722LL);
                            v69 = (void *)v68;
                            if ( v68 )
                            {
                              *(_QWORD *)v68 = 0LL;
                              *(_WORD *)(v68 + 8) = 0;
                              *(_QWORD *)(v68 + 16) = -50000000LL;
                              DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)v68);
                              v11 = 0;
                              DispBroker::DispBrokerClient::s_pSessionBroker = v69;
                              if ( !qword_1C02D6348 || (int)qword_1C02D6348() < 0 )
                              {
LABEL_160:
                                if ( !qword_1C02D6FB0
                                  || (int)qword_1C02D6FB0() < 0
                                  || qword_1C02D6FB8 && (unsigned int)qword_1C02D6FB8(&gSMWP, 4LL) )
                                {
                                  goto LABEL_164;
                                }
                                goto LABEL_265;
                              }
                              if ( qword_1C02D6350 )
                              {
                                v11 = qword_1C02D6350();
                                if ( v11 >= 0 )
                                  goto LABEL_160;
                              }
                              else
                              {
                                v11 = -1073741637;
                              }
                            }
                            else
                            {
                              DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
                              v11 = -1073741801;
                            }
                          }
                        }
                      }
LABEL_265:
                      v46 = (__int64)gpkdiStatic;
                      if ( gpkdiStatic )
                      {
                        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpkdiStatic);
                        gpkdiStatic = 0LL;
                      }
                      if ( v11 < 0 )
                        goto LABEL_164;
                    }
LABEL_268:
                    v11 = -1073741801;
LABEL_164:
                    UserSessionSwitchLeaveCrit(v28, v46, v29, v30);
                    return (unsigned int)v11;
                  }
                }
                else if ( v48 == 2 )
                {
                  v89 = 0LL;
                  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                          gpLeakTrackingAllocator,
                          1684763477,
                          &v89) )
                  {
                    *(_QWORD *)&DestinationString_8.Length = &v91;
                    DestinationString_8.Buffer = (PWSTR)&v86;
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___((__int64)v47, (__int64)&DestinationString_8, &v92);
                    goto LABEL_72;
                  }
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                                     v79,
                                                                                                     272LL,
                                                                                                     v78);
                  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                  {
                    _InterlockedAdd64((volatile signed __int64 *)v47 + 16, 1uLL);
                    NSInstrumentation::CBackTrace::CBackTrace(v95);
                    if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
                       + 16 < 0x1000 )
                    {
                      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             (__int64)v47,
                             (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                             v89,
                             (struct NSInstrumentation::CBackTrace *)v95) )
                      {
                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                        goto LABEL_72;
                      }
                    }
                    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                (__int64)v47,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v89,
                                (struct NSInstrumentation::CBackTrace *)v95) )
                    {
                      gpkdiStatic = (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                      goto LABEL_73;
                    }
                    _InterlockedAdd64((volatile signed __int64 *)v47 + 17, 1uLL);
                    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
                  }
                }
                gpkdiStatic = 0LL;
                goto LABEL_268;
              }
              if ( gpDispInfo )
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpDispInfo);
LABEL_264:
              gpDispInfo = 0LL;
              goto LABEL_265;
            }
            _InterlockedAdd64((volatile signed __int64 *)v38 + 17, 1uLL);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v76);
            goto LABEL_264;
          }
        }
        else
        {
          EtwTraceAcquiredExclusiveUserCrit();
        }
        gptiCurrent = 0LL;
        goto LABEL_30;
      }
    }
  }
  return result;
}
