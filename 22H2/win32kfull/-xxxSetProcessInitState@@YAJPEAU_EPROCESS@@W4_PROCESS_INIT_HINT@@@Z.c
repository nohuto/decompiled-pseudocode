/*
 * XREFs of ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C0118748
 * Callers:
 *     ?xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z @ 0x1C00A0414 (-xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00E3594 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0089E68 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     zzzCalcStartCursorHide @ 0x1C00E5F30 (zzzCalcStartCursorHide.c)
 *     AllocateW32Process @ 0x1C0118940 (AllocateW32Process.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C011BC6C (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetProcessInitState(AtomicExecutionCheck *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rdx
  int W32Process; // edi
  __int64 v18; // r8
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KEVENT *v22; // rcx
  __int64 v23; // rax
  int v25; // eax
  int v26; // [rsp+90h] [rbp+18h] BYREF
  int v27; // [rsp+98h] [rbp+20h]

  AtomicExecutionCheck::EnforceConsistency(a1);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5, v4, v6);
  LOBYTE(v26) = 1;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( gdwDeferWinEvent && !(unsigned int)AtomicExecutionCheck::GetCount(v9, v8, v10) )
  {
    v27 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 861LL);
  }
  ++gdwDeferWinEvent;
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  v15 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    if ( a2 )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 816) & 0x10000000) == 0 )
      {
        v26 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 174LL);
      }
      goto LABEL_5;
    }
LABEL_21:
    if ( (*(_DWORD *)(v15 + 816) & 0x10000000) != 0 )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 191LL);
    }
    v25 = *(_DWORD *)(v15 + 12);
    if ( (v25 & 4) != 0 )
    {
      if ( (v25 & 0x20) == 0 )
      {
        v26 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 197LL);
      }
      *(_DWORD *)(v15 + 12) &= ~4u;
      zzzCalcStartCursorHide(0LL, 0LL);
    }
    *(_DWORD *)(v15 + 12) |= 1u;
    v22 = *(struct _KEVENT **)(v15 + 16);
    if ( v22 )
    {
      if ( v22 == (struct _KEVENT *)-1LL )
        goto LABEL_20;
      KeSetEvent(v22, 1, 0);
      ObfDereferenceObject(*(PVOID *)(v15 + 16));
    }
    *(_QWORD *)(v15 + 16) = -1LL;
LABEL_20:
    --gdwDeferWinEvent;
    v23 = PsGetCurrentThreadWin32Thread(v22, v12, v14);
    --*(_DWORD *)(v23 + 48);
    return 0LL;
  }
  W32Process = AllocateW32Process(a1);
  if ( W32Process >= 0 )
  {
    v15 = PsGetProcessWin32Process(a1);
    if ( a2 )
    {
LABEL_5:
      if ( PsGetCurrentProcess(v13, v12, v14) != gpepCSRSS )
      {
        v26 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 208LL);
      }
      if ( (*(_DWORD *)(v15 + 12) & 0x20) != 0 )
      {
        v26 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 209LL);
      }
      *(_DWORD *)(v15 + 12) |= 0x20u;
      gdwPUDFlags |= 0x8000000u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v19 = 0;
      }
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v19,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          10LL,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
          v15);
      if ( a1 == (AtomicExecutionCheck *)gpepCSRSS )
      {
        v26 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 221LL);
      }
      if ( a2 == 2 )
      {
        *(_DWORD *)(v15 + 12) |= 2u;
        v20 = 0LL;
        v21 = 0LL;
      }
      else
      {
        if ( a2 != 1 )
        {
          v26 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 232LL);
        }
        v20 = 2000LL;
        v21 = v15;
      }
      zzzCalcStartCursorHide(v21, v20);
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  --gdwDeferWinEvent;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v26, v16, v18);
  return (unsigned int)W32Process;
}
