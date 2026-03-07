// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetProcessInitState(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  int W32Process; // edi
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KEVENT *v17; // rcx
  __int64 v18; // rax
  int v20; // eax
  int v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+98h] [rbp+20h]

  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 8)
    || (v5 = SGDGetUserSessionState(v4), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 8))) )
  {
    v21 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v6);
  LOBYTE(v21) = 1;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( gdwDeferWinEvent && !AtomicExecutionCheck::GetCount() )
  {
    v22 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 917LL);
  }
  ++gdwDeferWinEvent;
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  v12 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    if ( a2 )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 812) & 0x10000000) == 0 )
      {
        v21 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 181LL);
      }
      goto LABEL_7;
    }
LABEL_23:
    if ( (*(_DWORD *)(v12 + 812) & 0x10000000) != 0 )
    {
      v21 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 198LL);
    }
    v20 = *(_DWORD *)(v12 + 12);
    if ( (v20 & 4) != 0 )
    {
      if ( (v20 & 0x20) == 0 )
      {
        v21 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 204LL);
      }
      *(_DWORD *)(v12 + 12) &= ~4u;
      zzzCalcStartCursorHide(0LL, 0LL);
    }
    *(_DWORD *)(v12 + 12) |= 1u;
    v17 = *(struct _KEVENT **)(v12 + 16);
    if ( v17 )
    {
      if ( v17 == (struct _KEVENT *)-1LL )
        goto LABEL_22;
      KeSetEvent(v17, 1, 0);
      ObfDereferenceObject(*(PVOID *)(v12 + 16));
    }
    *(_QWORD *)(v12 + 16) = -1LL;
LABEL_22:
    --gdwDeferWinEvent;
    v18 = PsGetCurrentThreadWin32Thread(v17);
    --*(_DWORD *)(v18 + 48);
    return 0LL;
  }
  W32Process = AllocateW32Process(a1);
  if ( W32Process >= 0 )
  {
    v12 = PsGetProcessWin32Process(a1);
    if ( a2 )
    {
LABEL_7:
      if ( PsGetCurrentProcess(v10, v9, v11) != gpepCSRSS )
      {
        v21 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 215LL);
      }
      if ( (*(_DWORD *)(v12 + 12) & 0x20) != 0 )
      {
        v21 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 216LL);
      }
      *(_DWORD *)(v12 + 12) |= 0x20u;
      gdwPUDFlags |= 0x8000000u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v14 = 0;
      }
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          10LL,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
          v12);
      if ( a1 == gpepCSRSS )
      {
        v21 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 228LL);
      }
      if ( a2 == 2 )
      {
        *(_DWORD *)(v12 + 12) |= 2u;
        v15 = 0LL;
        v16 = 0LL;
      }
      else
      {
        if ( a2 != 1 )
        {
          v21 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 239LL);
        }
        v15 = 2000LL;
        v16 = v12;
      }
      zzzCalcStartCursorHide(v16, v15);
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  --gdwDeferWinEvent;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
  return (unsigned int)W32Process;
}
