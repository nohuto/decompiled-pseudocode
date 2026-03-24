/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00423C4
 * Callers:
 *     ProcessMouseEvent @ 0x1C0043810 (ProcessMouseEvent.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0031470 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0042830 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0042874 (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0042964 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     IsMouseIVEnabled @ 0x1C0042988 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C0043200 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0043318 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C00433E8 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0043770 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C00437F0 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C0044480 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00496F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01AFD2C (-DeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z @ 0x1C01B027C (-OriginIdToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_ORIGIN_ID@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U?$_tlgWrapSz@D@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444AEBU?$_tlgWrapSz@D@@5@Z @ 0x1C01BE1BC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U-$_tlgWrapSz@D@@U3@@-$_tlgW.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01BEF28 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BF58C (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01C00FC (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  char *v2; // rsi
  CMouseProcessor::CMouseQueue *v3; // r12
  bool v4; // al
  bool v5; // bl
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  CMouseProcessor *v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v28; // r14
  _BYTE *v29; // rdx
  int v30; // edx
  int v31; // r8d
  unsigned int v32; // edi
  bool (__fastcall **v33)(const struct CMouseProcessor::CMouseEvent *); // rbx
  void (*v34)(void); // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  PERESOURCE *v47; // rdi
  int v48; // [rsp+78h] [rbp-90h] BYREF
  int v49; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v50; // [rsp+80h] [rbp-88h] BYREF
  int v51; // [rsp+84h] [rbp-84h] BYREF
  int v52; // [rsp+88h] [rbp-80h] BYREF
  int v53; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v54; // [rsp+90h] [rbp-78h] BYREF
  void **v55; // [rsp+98h] [rbp-70h] BYREF
  _BYTE *v56; // [rsp+A0h] [rbp-68h]
  int v57; // [rsp+A8h] [rbp-60h]
  _BYTE v58[8]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v59[8]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v61; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-30h] BYREF
  int v64; // [rsp+E0h] [rbp-28h]
  __int64 v65; // [rsp+E8h] [rbp-20h]
  unsigned __int8 v66; // [rsp+F0h] [rbp-18h]
  GUID ActivityId; // [rsp+F4h] [rbp-14h] BYREF
  _BYTE v68[28]; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int16 v69; // [rsp+124h] [rbp+1Ch]
  unsigned __int16 v70; // [rsp+126h] [rbp+1Eh]
  int v71; // [rsp+13Ch] [rbp+34h]
  int v72; // [rsp+140h] [rbp+38h]
  __int64 v73; // [rsp+160h] [rbp+58h]
  unsigned int v74; // [rsp+170h] [rbp+68h]
  unsigned int v75; // [rsp+174h] [rbp+6Ch]
  char v76; // [rsp+178h] [rbp+70h]
  __int64 v77; // [rsp+18Ch] [rbp+84h]
  int v78; // [rsp+194h] [rbp+8Ch]
  __int64 v79; // [rsp+1A8h] [rbp+A0h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v81; // [rsp+1D8h] [rbp+D0h]
  __int64 v82; // [rsp+1E0h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+1E8h] [rbp+E0h] BYREF
  int *v84; // [rsp+208h] [rbp+100h]
  __int64 v85; // [rsp+210h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+218h] [rbp+110h] BYREF
  int *v87; // [rsp+238h] [rbp+130h]
  __int64 v88; // [rsp+240h] [rbp+138h]

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v59,
    "ProcessMouse",
    0LL);
  EtwTraceStartProcessQueuedMouseEvents();
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)v68);
  v2 = (char *)this + 2776;
  v3 = (CMouseProcessor *)((char *)this + 80);
  while ( 1 )
  {
    RIMLockExclusive((__int64)v2);
    v4 = CMouseProcessor::CMouseQueue::Dequeue(v3, (struct CMouseProcessor::RawMouseEvent *)v68);
    *((_QWORD *)v2 + 1) = 0LL;
    v5 = v4;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( !v5 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v58,
      "ProcessMouseEvent",
      (const struct InputTraceLogging::ThreadLockedPerfRegion *)v59);
    if ( (unsigned int)dword_1C024AA90 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 64LL, v7, v8) )
    {
      v60 = InputTraceLogging::OriginIdToString(v75);
      v61 = (__int64)InputTraceLogging::DeviceTypeToString(v74);
      v48 = v70;
      v49 = v69;
      v50 = v72;
      v51 = v71;
      v62 = v73;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        (int)&dword_1C024AA90,
        (int)&dword_1C021FEDA,
        (__int64)&v62,
        (__int64)&v51,
        (__int64)&v50,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v61,
        (__int64)&v60);
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v66 = 1;
      v41 = PsGetCurrentThreadWin32Thread(v9);
      v65 = v41;
      if ( v41 && (*(int *)(v41 + 24) > 0 || *(_DWORD *)(v65 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024AA90 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v42, v43) )
          {
            v52 = v66;
            v82 = 4LL;
            v81 = &v52;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024AA90,
              (int)&dword_1C0217FD7,
              (int)&ActivityId,
              0,
              3u,
              &v80);
          }
        }
      }
    }
    else
    {
      v65 = 0LL;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v11 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v65 && (*(_DWORD *)(v65 + 48) || *(int *)(v65 + 24) > 0) )
    {
      *(_DWORD *)(v65 + 44) = 1;
      *(GUID *)(v65 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024AA90 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, (unsigned int)dword_1C024AA90, v18) )
        {
          v53 = v66;
          v85 = 4LL;
          v84 = &v53;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F80, (int)&ActivityId, 0, 3u, &v83);
          v44 = (unsigned int)dword_1C024AA90;
        }
        if ( (unsigned int)v44 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v44, v45) )
        {
          v54 = v66;
          v88 = 4LL;
          v87 = &v54;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217FAD, (int)&ActivityId, 0, 3u, &v86);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v38 = PsGetCurrentProcess(v20, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(v38),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v22 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v22 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
      if ( v22 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v22 + 488) & 0x1000000) != 0 )
          {
            v26 = (CMouseProcessor *)*(unsigned int *)(v22 + 1232);
            if ( (char)v26 >= 0 && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              v28 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v28[2];
                  v46 = *v28;
                  v28[2] = 0LL;
                  if ( !*(_DWORD *)(v46 + 8) )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
                  v47 = (PERESOURCE *)GetDomainLockRef(12);
                  if ( v47 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
                  ExReleaseResourceAndLeaveCriticalRegion(*v47);
                  HMUnlockObject(*v28);
                  tagDomLock::LockExclusive(v47);
                  v28 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v2 = (char *)this + 2776;
                v3 = (CMouseProcessor *)((char *)this + 80);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    CMouseProcessor::ComputeUIPIForMouseEvent(v26, (struct CMouseProcessor::RawMouseEvent *)v68);
    v29 = v68;
    v55 = &CMouseProcessor::CMouseEvent::`vftable';
    v56 = v68;
    v57 = 0;
    if ( (v76 & 1) != 0 || v75 == 1 )
      goto LABEL_35;
    v63 = v77;
    v64 = v78;
    if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v63, v68, v79 != 0) )
    {
      v29 = v56;
LABEL_35:
      v31 = *((_DWORD *)v29 + 28);
      if ( (v31 & 0x800) == 0 )
      {
        v35 = *((unsigned __int16 *)v29 + 14);
        v36 = *((_QWORD *)v29 + 10);
        v37 = ((v31 & 0x40) != 0 ? 16 : 32) | 8;
        if ( (v31 & 0x80u) == 0 )
          v37 = (v31 & 0x40) != 0 ? 16 : 32;
        CInputGlobals::UpdateInputGlobals(gpInputGlobals, v36, 3LL, v35, 0, v37);
      }
      CMouseProcessor::CMouseRawInput::Initialize(
        (CMouseProcessor *)((char *)this + 3456),
        (const struct CMouseProcessor::CMouseEvent *)&v55);
      v32 = 0;
      v33 = &off_1C0202C30;
      do
      {
        if ( !*v33 || (*v33)((const struct CMouseProcessor::CMouseEvent *)&v55) )
          ((void (__fastcall *)(CMouseProcessor *, void ***))v33[1])(this, &v55);
        ++v32;
        v33 += 2;
      }
      while ( v32 < 3 );
      if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
        CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
          (CMouseProcessor *)((char *)this + 3904),
          (const struct CMouseProcessor::CMouseEvent *)&v55);
      v34 = (void (*)(void))*((_QWORD *)v56 + 20);
      if ( v34 )
        v34();
      goto LABEL_45;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v30,
        6,
        15,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    InputTraceLogging::Mouse::DropInput(*((_QWORD *)v56 + 11), 10LL);
LABEL_45:
    UserSessionSwitchLeaveCrit();
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v58);
  }
  if ( (unsigned __int8)IsMouseIVEnabled() && (unsigned __int8)isRootPartition() )
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer((CMouseProcessor *)((char *)this + 3904));
  EtwTraceStopProcessQueuedMouseEvents();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v59);
}
