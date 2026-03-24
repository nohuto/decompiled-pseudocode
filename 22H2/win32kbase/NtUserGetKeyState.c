/*
 * XREFs of NtUserGetKeyState @ 0x1C0006DA0
 * Callers:
 *     <none>
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C00075C0 (PostUpdateKeyStateEvent.c)
 *     ChangeAcquireResourceType @ 0x1C0007820 (ChangeAcquireResourceType.c)
 *     EtwTraceUIPIInputError @ 0x1C0007E30 (EtwTraceUIPIInputError.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0037134 (EtwTraceReleaseUserCrit.c)
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00902C8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C01AE2DC (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *ThreadWin32Thread; // rax
  const struct tagTHREADINFO *v7; // rdx
  unsigned int v8; // ecx
  _BYTE *v9; // rax
  int v10; // ebx
  int v11; // ebx
  struct _KTHREAD *v12; // r12
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rax
  int v17; // r9d
  __int16 v18; // r8
  __int64 v19; // rbx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  int v32; // eax
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+78h] [rbp-40h] BYREF

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v5, v4),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 432) + 388LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v21 = *(_QWORD *)(v3 + 432);
    v7 = *(const struct tagTHREADINFO **)(v21 + 88);
    if ( (*(_DWORD *)(v21 + 388) & 1) != 0 )
      PostUpdateKeyStateEvent();
  }
  if ( (unsigned __int8)a1 >= 0x20u )
  {
    v8 = 0;
    v9 = &unk_1C0211308;
    while ( *v9 != (_BYTE)a1 )
    {
      ++v8;
      ++v9;
      if ( v8 >= 0xE )
      {
        if ( (unsigned __int8)a1 < 0x5Bu || (unsigned __int8)a1 > 0x5Cu && (unsigned __int8)(a1 + 96) > 5u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v7,
              10,
              490,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          v10 = 0;
          if ( qword_1C0255E48 && (int)qword_1C0255E48() >= 0 && qword_1C0255E50 )
            v10 = qword_1C0255E50();
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v7,
              10,
              491,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          if ( v10 )
          {
            LOWORD(v19) = 0;
            goto LABEL_39;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v7,
              10,
              182,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          v11 = 0;
          if ( qword_1C02572B8 && (int)qword_1C02572B8() >= 0 && qword_1C02572C0 )
            v11 = qword_1C02572C0(1LL);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v7) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v7,
              10,
              183,
              (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
          }
          if ( !v11 )
          {
            EtwTraceUIPIInputError((struct tagTHREADINFO *)v3, 0LL, 3);
            LOWORD(v19) = 0;
            goto LABEL_39;
          }
        }
        break;
      }
    }
  }
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread((InputDelegation *)v3, v7) )
  {
    LOWORD(v19) = 0;
  }
  else if ( a1 >= 0x100 )
  {
    UserSetLastError(87LL);
    LOWORD(v19) = 0;
  }
  else
  {
    v12 = KeGetCurrentThread();
    v13 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v25 = PsGetCurrentProcess(v15, v14),
          v26 = PsGetProcessSessionIdEx(v25),
          v27 = PsGetCurrentThreadProcess(),
          v26 == (unsigned int)PsGetProcessSessionIdEx(v27)) )
    {
      v16 = (__int64 *)PsGetThreadWin32Thread(v12);
      if ( v16 )
        v13 = *v16;
    }
    v17 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v13 + 432) + 228);
    v7 = (const struct tagTHREADINFO *)(a1 & 3);
    v18 = _bittest(&v17, (unsigned __int8)(2 * (_BYTE)v7 + 1));
    LOWORD(v19) = v18 | 0xFF80;
    if ( !_bittest(&v17, (unsigned __int8)(2 * (_BYTE)v7)) )
      LOWORD(v19) = v18;
  }
LABEL_39:
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
    && InputDelegation::IsDelegationEnabledForThread((InputDelegation *)v3, v7) )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 480) + 112LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v3 + 480) + 116LL) = 0LL;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 480) + 112LL) = *((_DWORD *)gpsi + 1746);
    *(_QWORD *)(*(_QWORD *)(v3 + 480) + 116LL) = *(_QWORD *)(*(_QWORD *)(v3 + 432) + 228LL);
  }
  v19 = (__int16)v19;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C0256C48 )
    qword_1C0256C48();
  if ( (_DWORD)gdwInAtomicOperation )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1359LL);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    v31 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v32 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v31 + 44) || *(_DWORD *)(v31 + 48) || v32 > 0)
        && (unsigned int)dword_1C024AA90 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C024AA90, 0x2000LL, v29, v30) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024AA90, (int)&dword_1C0217F61, v31 + 28, 0, 2u, &v33);
      }
      *(_DWORD *)(v31 + 44) = 0;
      *(_OWORD *)(v31 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v19;
}
