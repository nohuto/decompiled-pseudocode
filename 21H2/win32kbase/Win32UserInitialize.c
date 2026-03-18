/*
 * XREFs of Win32UserInitialize @ 0x1C02E231C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserAddAtomToAtomTableEx @ 0x1C00570D0 (UserAddAtomToAtomTableEx.c)
 *     Initialize @ 0x1C00572BC (Initialize.c)
 *     IsIMMEnabledSystem @ 0x1C0057710 (IsIMMEnabledSystem.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C005773C (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C00593C0 (ApiSetEditionBaseDriverEntryInitialize.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0068700 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateSharedSection @ 0x1C02E2080 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C02E22A0 (InitKernelHandleTable.c)
 *     HMInitHandleTable @ 0x1C02E3220 (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C02E32B8 (InitCreateUserSubsystem.c)
 *     InitQEntryLookaside @ 0x1C02E364C (InitQEntryLookaside.c)
 *     InitSecurity @ 0x1C02E36BC (InitSecurity.c)
 */

__int64 __fastcall Win32UserInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  PDEVICE_OBJECT v4; // rcx
  __int64 v5; // r9
  int v6; // r12d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  struct tagTHREADINFO **v18; // rbx
  struct tagTHREADINFO *v19; // rbx
  __int64 v20; // rcx
  PVOID v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int inited; // edi
  int v25; // eax
  int v26; // eax
  int v27; // edi
  int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // r9
  _DWORD *v33; // rax
  _DWORD *v34; // r14
  void *v35; // rax
  PVOID Heap; // rax
  PVOID v37; // r14
  PVOID v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rcx
  void *v41; // rbx
  void *v42; // rbx
  int v43; // eax
  int v44; // edi
  void *v45; // rbx
  _DWORD *v46; // rbx
  void *v47; // rdi
  _DWORD *v48; // rbx
  void *v49; // rdi
  _DWORD *v50; // rbx
  void *v51; // rdi
  _DWORD *v52; // rbx
  void *v53; // rdi
  __int64 v54; // rax
  void *v55; // rbx
  LARGE_INTEGER *v56; // rbx
  unsigned int v57; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v59; // rcx
  __int64 *v60; // rbx
  __int64 v61; // rax
  __int64 Pool2; // rbx
  __int64 v63; // rax
  _QWORD DestinationString[3]; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v65; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v66; // [rsp+64h] [rbp-A4h] BYREF
  BOOL v67; // [rsp+68h] [rbp-A0h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF
  PVOID v69[20]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v70; // [rsp+1B8h] [rbp+B0h] BYREF
  int v71; // [rsp+1C0h] [rbp+B8h]
  GUID ActivityId; // [rsp+1C4h] [rbp+BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+1D8h] [rbp+D0h] BYREF
  BOOL *v74; // [rsp+1F8h] [rbp+F0h]
  __int64 v75; // [rsp+200h] [rbp+F8h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+208h] [rbp+100h] BYREF
  BOOL *v77; // [rsp+228h] [rbp+120h]
  __int64 v78; // [rsp+230h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+238h] [rbp+130h] BYREF
  BOOL *v80; // [rsp+258h] [rbp+150h]
  __int64 v81; // [rsp+260h] [rbp+158h]
  _BYTE KeyValueInformation[12]; // [rsp+268h] [rbp+160h] BYREF
  int v83; // [rsp+274h] [rbp+16Ch]
  _BYTE v84[12]; // [rsp+280h] [rbp+178h] BYREF
  int v85; // [rsp+28Ch] [rbp+184h]
  _BYTE v86[12]; // [rsp+298h] [rbp+190h] BYREF
  int v87; // [rsp+2A4h] [rbp+19Ch]
  _BYTE v88[12]; // [rsp+2B0h] [rbp+1A8h] BYREF
  int v89; // [rsp+2BCh] [rbp+1B4h]
  _BYTE v90[12]; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v91; // [rsp+2D4h] [rbp+1CCh]
  _BYTE v92[12]; // [rsp+2E0h] [rbp+1D8h] BYREF
  int v93; // [rsp+2ECh] [rbp+1E4h]
  _BYTE v94[12]; // [rsp+2F8h] [rbp+1F0h] BYREF
  int v95; // [rsp+304h] [rbp+1FCh]

  v3 = 0;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v5 = 24LL;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      24,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  if ( qword_1C029C688 && (int)qword_1C029C688(v4, a2, a3, v5) >= 0 )
  {
    if ( qword_1C029C690 )
    {
      v6 = qword_1C029C690();
      if ( v6 >= 0 )
        goto LABEL_11;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
    return (unsigned int)v6;
  }
LABEL_11:
  result = InitCreateSharedSection((__int64)v4, a2, a3);
  if ( (int)result >= 0 )
  {
    result = InitKernelHandleTable(v9, v8, v10);
    if ( (int)result >= 0 )
    {
      result = ApiSetEditionBaseDriverEntryInitialize();
      v14 = result;
      if ( (int)result >= 0 )
      {
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v12, v11, v13);
        else
          CurrentThreadWin32Thread = 0LL;
        v70 = CurrentThreadWin32Thread;
        v71 = 1;
        if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v70 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v75 = 4LL;
            v65 = v71 == 1;
            v74 = &v65;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD79,
              &ActivityId,
              0LL,
              3u,
              &v73);
          }
        }
        if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
          || (v16 = W32kEtwEnabledKeyword,
              v17 = 0x8000002010000000uLL,
              (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
          && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
          || (v17 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
          && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
          && (qword_1C028DB20 & 0x200000010000000LL) != 0
          && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
        {
          v56 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12, v16, v17);
          if ( v56 )
            v56[1] = KeQueryPerformanceCounter(0LL);
        }
        v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        EtwTraceAcquiredExclusiveUserCrit();
        if ( v18 )
        {
          v19 = *v18;
          if ( IsThreadCrossSessionAttached() )
            v19 = 0LL;
          if ( v70 )
          {
            v20 = *(unsigned int *)(v70 + 24);
            if ( *(_DWORD *)(v70 + 48) || (int)v20 > 0 )
            {
              *(_DWORD *)(v70 + 44) = 1;
              *(GUID *)(v70 + 28) = ActivityId;
              if ( (unsigned int)dword_1C028EE70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v78 = 4LL;
                  v66 = v71 == 1;
                  v77 = &v66;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD22,
                    &ActivityId,
                    0LL,
                    3u,
                    &v76);
                  v57 = dword_1C028EE70;
                }
                if ( v57 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                {
                  v81 = 4LL;
                  v67 = v71 == 1;
                  v80 = &v67;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C028EE70,
                    (unsigned __int8 *)dword_1C025AD4F,
                    &ActivityId,
                    0LL,
                    3u,
                    &v79);
                }
              }
            }
          }
          gptiCurrent = v19;
          if ( v19 )
          {
            *((_DWORD *)v19 + 377) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
            if ( CurrentProcessWin32Process )
            {
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
              {
                while ( 1 )
                {
                  v60 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  if ( !gpSharedUserCritDeferredUnlockListHead )
                    break;
                  v59 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                  gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                               + 2);
                  v60[2] = 0LL;
                  if ( !*(_DWORD *)(v59 + 8) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                    v59 = *v60;
                  }
                  HMUnlockObject(v59);
                }
              }
            }
          }
        }
        else
        {
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v70);
          gptiCurrent = 0LL;
        }
        if ( !(unsigned int)InitSecurity() )
          goto LABEL_252;
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
        *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 1144;
        *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
        *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
        *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
        gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL, v22, v23);
        inited = InitQEntryLookaside();
        if ( qword_1C029C698 && (int)qword_1C029C698() >= 0 )
        {
          if ( qword_1C029C6A0 )
            v25 = qword_1C029C6A0();
          else
            v25 = -1073741637;
          inited |= v25;
        }
        v26 = UserAtomTableHandle ? 0 : RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
        v27 = v26 | inited;
        v28 = UserLibmgmtAtomTableHandle ? 0 : RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
        v14 = v28 | v27;
        if ( v14 < 0 )
          goto LABEL_252;
        atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1);
        gatomFirstPinned = atomUSER32;
        if ( !atomUSER32 || !(unsigned int)InitCreateUserSubsystem() )
          goto LABEL_252;
        if ( qword_1C029C6A8 && (int)qword_1C029C6A8() >= 0 && qword_1C029C6B0 )
          qword_1C029C6B0();
        if ( qword_1C029B890 && (int)qword_1C029B890() >= 0 && (!qword_1C029B898 || (int)qword_1C029B898() < 0) )
          goto LABEL_252;
        gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1BB0uLL);
        if ( !gpsi )
          goto LABEL_252;
        v29 = 2;
        v30 = 2524LL;
        do
        {
          v31 = 0;
          v32 = v30;
          do
          {
            ++v31;
            *(_DWORD *)((char *)gpsi + v32) = -1;
            v32 += 4LL;
          }
          while ( v31 < 0x1E );
          ++v29;
          v30 += 120LL;
        }
        while ( v29 < 0x12 );
        v33 = gpsi;
        v34 = gpLeakTrackingAllocator;
        *((_DWORD *)gpsi + 1282) = 8;
        v33[1283] = 16;
        if ( (v34[10] & 0x70646B55) == 0x70646B55 && (v61 = 0LL, v34[11]) )
        {
          while ( v34[v61] != 1885629269 )
          {
            if ( ++v61 >= (unsigned __int64)(unsigned int)v34[11] )
              goto LABEL_53;
          }
          Pool2 = ExAllocatePool2(260LL, 184LL);
          if ( !Pool2 )
            goto LABEL_233;
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                   (__int64)v34,
                   Pool2,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              gpDispInfo = (PVOID)Pool2;
LABEL_55:
              Heap = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
              v21 = gpDispInfo;
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
                if ( (unsigned int)IsIMMEnabledSystem() )
                  _InterlockedOr((volatile signed __int32 *)gpsi, 4u);
                else
                  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFB);
                if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
                  _InterlockedOr((volatile signed __int32 *)gpsi, 8u);
                else
                  _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFF7);
                *((_DWORD *)gpsi + 231) = gdwDesktopSectionSize << 10;
                v37 = gpLeakTrackingAllocator;
                if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x646B7355) == 0x646B7355
                  && (v63 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
                {
                  while ( *((_DWORD *)gpLeakTrackingAllocator + v63) != 1684763477 )
                  {
                    if ( ++v63 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                      goto LABEL_65;
                  }
                  v39 = ExAllocatePool2(260LL, 272LL);
                  if ( !v39 )
                    goto LABEL_246;
                  memset(v69, 0, sizeof(v69));
                  RtlCaptureStackBackTrace(0, 0x14u, v69, 0LL);
                  if ( (unsigned __int64)(v39 & 0xFFF) + 16 >= 0x1000 )
                  {
                    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           (__int64)v37,
                           v39,
                           (struct NSInstrumentation::CBackTrace *)v69) )
                    {
                      gpkdiStatic = (PVOID)v39;
                      goto LABEL_67;
                    }
                    goto LABEL_245;
                  }
                  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                          (__int64)v37,
                          (const void *)v39,
                          (struct NSInstrumentation::CBackTrace *)v69) )
                  {
LABEL_245:
                    ExFreePoolWithTag((PVOID)v39, 0);
LABEL_246:
                    gpkdiStatic = 0LL;
                    goto LABEL_255;
                  }
                  v39 += 16LL;
                }
                else
                {
LABEL_65:
                  v39 = ExAllocatePool2(260LL, 256LL);
                }
                gpkdiStatic = (PVOID)v39;
                if ( v39 )
                {
LABEL_67:
                  *(_QWORD *)v39 = &diStatic;
                  if ( qword_1C029C6B8 && (int)qword_1C029C6B8() >= 0 && qword_1C029C6C0 )
                    qword_1C029C6C0();
                  if ( qword_1C029C6C8 && (int)qword_1C029C6C8() >= 0 && qword_1C029C6D0 )
                    qword_1C029C6D0();
                  if ( qword_1C029C6D8 && (int)qword_1C029C6D8() >= 0 && qword_1C029C6E0 )
                    qword_1C029C6E0();
                  if ( !qword_1C029C6E8
                    || (int)qword_1C029C6E8() < 0
                    || qword_1C029C6F0 && (unsigned int)qword_1C029C6F0() )
                  {
                    GroupedFGBoostProp::s_atom = UserAddAtomToAtomTableEx(
                                                   UserAtomTableHandle,
                                                   (__int64)L"AdditionalFGBoostProp",
                                                   1);
                    if ( GroupedFGBoostProp::s_atom
                      && (!qword_1C029C6F8
                       || (int)qword_1C029C6F8() < 0
                       || qword_1C029C700 && (unsigned int)qword_1C029C700()) )
                    {
                      if ( (unsigned int)HMInitHandleTable() )
                      {
                        gSharedInfo = (__int64)gpsi;
                        *(_OWORD *)&DestinationString[1] = 0LL;
                        v40 = *(_QWORD *)gpDispInfo;
                        dword_1C0294D98 = gCallerKernelAbiVersion;
                        DestinationString[0] = (unsigned int)gdwPolicyFlags;
                        qword_1C0294B78 = v40;
                        while ( 1 )
                        {
                          v41 = OpenCacheKeyEx(0LL, 2LL, 131097LL, (int *)DestinationString);
                          if ( !v41 )
                            break;
                          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"USERProcessHandleQuota");
                          if ( ZwQueryValueKey(
                                 v41,
                                 (PUNICODE_STRING)&DestinationString[1],
                                 KeyValuePartialInformation,
                                 KeyValueInformation,
                                 0x14u,
                                 (PULONG)DestinationString + 1) >= 0 )
                          {
                            v3 = v83;
                            LODWORD(DestinationString[0]) = 0;
                          }
                          else if ( !LODWORD(DestinationString[0]) )
                          {
                            v3 = 10000;
                          }
                          ZwClose(v41);
                          if ( !LODWORD(DestinationString[0]) )
                            goto LABEL_95;
                        }
                        v3 = 10000;
LABEL_95:
                        *(_OWORD *)&DestinationString[1] = 0LL;
                        gUserProcessHandleQuota = v3;
                        DestinationString[0] = (unsigned int)gdwPolicyFlags;
                        do
                        {
                          v42 = OpenCacheKeyEx(0LL, 2LL, 131097LL, (int *)DestinationString);
                          if ( !v42 )
                          {
                            v3 = 10000;
                            goto LABEL_102;
                          }
                          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"USERPostMessageLimit");
                          if ( ZwQueryValueKey(
                                 v42,
                                 (PUNICODE_STRING)&DestinationString[1],
                                 KeyValuePartialInformation,
                                 v84,
                                 0x14u,
                                 (PULONG)DestinationString + 1) >= 0 )
                          {
                            v3 = v85;
                            LODWORD(DestinationString[0]) = 0;
                          }
                          else if ( !LODWORD(DestinationString[0]) )
                          {
                            v3 = 10000;
                          }
                          ZwClose(v42);
                        }
                        while ( LODWORD(DestinationString[0]) );
                        if ( v3 )
                        {
LABEL_102:
                          v43 = v3;
                          goto LABEL_103;
                        }
                        v43 = -1;
LABEL_103:
                        v44 = gNestedWindowLimit;
                        gUserPostMessageLimit = v43;
                        *(_OWORD *)&DestinationString[1] = 0LL;
                        DestinationString[0] = (unsigned int)gdwPolicyFlags;
                        while ( 1 )
                        {
                          v45 = OpenCacheKeyEx(0LL, 2LL, 131097LL, (int *)DestinationString);
                          if ( !v45 )
                            break;
                          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"USERNestedWindowLimit");
                          if ( ZwQueryValueKey(
                                 v45,
                                 (PUNICODE_STRING)&DestinationString[1],
                                 KeyValuePartialInformation,
                                 v86,
                                 0x14u,
                                 (PULONG)DestinationString + 1) >= 0 )
                          {
                            v3 = v87;
                            LODWORD(DestinationString[0]) = 0;
                          }
                          else if ( !LODWORD(DestinationString[0]) )
                          {
                            v3 = v44;
                          }
                          ZwClose(v45);
                          if ( !LODWORD(DestinationString[0]) )
                            goto LABEL_109;
                        }
                        v3 = v44;
LABEL_109:
                        if ( (unsigned int)(v3 - 35) <= 0x41 )
                          gNestedWindowLimit = v3;
                        v46 = gpsi;
                        *(_OWORD *)&DestinationString[1] = 0LL;
                        DestinationString[0] = (unsigned int)gdwPolicyFlags;
                        while ( 1 )
                        {
                          v47 = OpenCacheKeyEx(0LL, 40LL, 131097LL, (int *)DestinationString);
                          if ( !v47 )
                            break;
                          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"Installed");
                          if ( ZwQueryValueKey(
                                 v47,
                                 (PUNICODE_STRING)&DestinationString[1],
                                 KeyValuePartialInformation,
                                 v88,
                                 0x14u,
                                 (PULONG)DestinationString + 1) >= 0 )
                          {
                            v46[560] = v89;
                            LODWORD(DestinationString[0]) = 0;
                          }
                          else if ( !LODWORD(DestinationString[0]) )
                          {
                            v46[560] = 0;
                          }
                          ZwClose(v47);
                          if ( !LODWORD(DestinationString[0]) )
                            goto LABEL_117;
                        }
                        v46[560] = 0;
LABEL_117:
                        v48 = gpsi;
                        *(_OWORD *)&DestinationString[1] = 0LL;
                        DestinationString[0] = (unsigned int)gdwPolicyFlags;
                        while ( 1 )
                        {
                          v49 = OpenCacheKeyEx(0LL, 41LL, 131097LL, (int *)DestinationString);
                          if ( !v49 )
                            break;
                          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"Installed");
                          if ( ZwQueryValueKey(
                                 v49,
                                 (PUNICODE_STRING)&DestinationString[1],
                                 KeyValuePartialInformation,
                                 v90,
                                 0x14u,
                                 (PULONG)DestinationString + 1) >= 0 )
                          {
                            v48[561] = v91;
                            LODWORD(DestinationString[0]) = 0;
                          }
                          else if ( !LODWORD(DestinationString[0]) )
                          {
                            v48[561] = 0;
                          }
                          ZwClose(v49);
                          if ( !LODWORD(DestinationString[0]) )
                            goto LABEL_123;
                        }
                        v48[561] = 0;
LABEL_123:
                        v50 = gpsi;
                        *(_OWORD *)&DestinationString[1] = 0LL;
                        DestinationString[0] = (unsigned int)gdwPolicyFlags;
                        while ( 1 )
                        {
                          v51 = OpenCacheKeyEx(0LL, 45LL, 131097LL, (int *)DestinationString);
                          if ( !v51 )
                            break;
                          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"R2BuildNumber");
                          if ( ZwQueryValueKey(
                                 v51,
                                 (PUNICODE_STRING)&DestinationString[1],
                                 KeyValuePartialInformation,
                                 v92,
                                 0x14u,
                                 (PULONG)DestinationString + 1) >= 0 )
                          {
                            v50[563] = v93;
                            LODWORD(DestinationString[0]) = 0;
                          }
                          else if ( !LODWORD(DestinationString[0]) )
                          {
                            v50[563] = 0;
                          }
                          ZwClose(v51);
                          if ( !LODWORD(DestinationString[0]) )
                            goto LABEL_129;
                        }
                        v50[563] = 0;
LABEL_129:
                        v52 = gpsi;
                        *(_OWORD *)&DestinationString[1] = 0LL;
                        DestinationString[0] = (unsigned int)gdwPolicyFlags;
                        while ( 1 )
                        {
                          v53 = OpenCacheKeyEx(0LL, 46LL, 131097LL, (int *)DestinationString);
                          if ( !v53 )
                            break;
                          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"StarterBuildNumber");
                          if ( ZwQueryValueKey(
                                 v53,
                                 (PUNICODE_STRING)&DestinationString[1],
                                 KeyValuePartialInformation,
                                 v94,
                                 0x14u,
                                 (PULONG)DestinationString + 1) >= 0 )
                          {
                            v52[562] = v95;
                            LODWORD(DestinationString[0]) = 0;
                          }
                          else if ( !LODWORD(DestinationString[0]) )
                          {
                            v52[562] = 0;
                          }
                          ZwClose(v53);
                          if ( !LODWORD(DestinationString[0]) )
                            goto LABEL_135;
                        }
                        v52[562] = 0;
LABEL_135:
                        Initialize();
                        if ( UIPrivelegeIsolation::fEnforce )
                        {
                          if ( qword_1C029C708 && (int)qword_1C029C708() >= 0 && qword_1C029C710 )
                            qword_1C029C710();
                          if ( qword_1C029C718 && (int)qword_1C029C718() >= 0 && qword_1C029C720 )
                            qword_1C029C720();
                        }
                        gdwMDAQThreshold = 5000;
                        gdwMDAQTimeoutDefenseInDepth = 30000;
                        *((_DWORD *)gpsi + 559) &= ~0x20u;
                        if ( qword_1C029C728 && (int)qword_1C029C728() >= 0 && qword_1C029C730 )
                          qword_1C029C730();
                        if ( qword_1C029C738 && (int)qword_1C029C738() >= 0 && qword_1C029C740 )
                          qword_1C029C740();
                        v54 = ExAllocatePool2(256LL, 24LL);
                        v55 = (void *)v54;
                        if ( v54 )
                        {
                          *(_QWORD *)v54 = 0LL;
                          *(_WORD *)(v54 + 8) = 0;
                          *(_QWORD *)(v54 + 16) = -50000000LL;
                          DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)v54);
                          v14 = 0;
                          DispBroker::DispBrokerClient::s_pSessionBroker = v55;
                          if ( !qword_1C029BA90 || (int)qword_1C029BA90() < 0 )
                          {
LABEL_157:
                            if ( !qword_1C029C768
                              || (int)qword_1C029C768() < 0
                              || qword_1C029C770 && (unsigned int)qword_1C029C770(&gSMWP, 4LL) )
                            {
                              goto LABEL_161;
                            }
                            goto LABEL_252;
                          }
                          if ( qword_1C029BA98 )
                          {
                            v14 = qword_1C029BA98();
                            if ( v14 >= 0 )
                              goto LABEL_157;
                          }
                          else
                          {
                            v14 = -1073741637;
                          }
                        }
                        else
                        {
                          DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
                          v14 = -1073741801;
                        }
                      }
                    }
                  }
LABEL_252:
                  v38 = gpkdiStatic;
                  if ( gpkdiStatic )
                  {
                    NSInstrumentation::CLeakTrackingAllocator::Free(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      (char *)gpkdiStatic);
                    gpkdiStatic = 0LL;
                  }
                  if ( v14 < 0 )
                    goto LABEL_161;
                }
LABEL_255:
                v14 = -1073741801;
LABEL_161:
                UserSessionSwitchLeaveCrit((__int64)v21, (__int64)v38, v22, v23);
                return (unsigned int)v14;
              }
              if ( gpDispInfo )
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  (char *)gpDispInfo);
LABEL_233:
              gpDispInfo = 0LL;
              goto LABEL_252;
            }
LABEL_230:
            ExFreePoolWithTag((PVOID)Pool2, 0);
            goto LABEL_233;
          }
          if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v34,
                  (const void *)Pool2,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
            goto LABEL_230;
          v35 = (void *)(Pool2 + 16);
        }
        else
        {
LABEL_53:
          v35 = (void *)ExAllocatePool2(260LL, 168LL);
        }
        gpDispInfo = v35;
        if ( !v35 )
          goto LABEL_252;
        goto LABEL_55;
      }
    }
  }
  return result;
}
