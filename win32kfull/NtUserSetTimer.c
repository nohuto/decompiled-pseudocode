__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // ebx
  unsigned int v18; // edi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx

  EnterCrit(0LL, 0LL);
  v11 = 0LL;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v9) + 8)
    || (v12 = SGDGetUserSessionState(v10), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a1 )
  {
    v16 = ValidateHwnd(a1);
    if ( !v16 )
      goto LABEL_19;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = 10;
  if ( a3 >= 0xA )
    v17 = a3;
  if ( v17 > 0x7FFFFFFF )
    v17 = 0x7FFFFFFF;
  v18 = a5;
  if ( a5 == 2147483637 )
  {
    v18 = 0x7FFFFFFF - v17;
  }
  else if ( a5 != -1 && (v17 + a5 < v17 || v17 + a5 > 0x7FFFFFFF) )
  {
    UserSetLastError(87);
    goto LABEL_19;
  }
  if ( !v16 )
    goto LABEL_18;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
  v20 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v20 = 0LL;
  if ( v20 != *(_QWORD **)(*(_QWORD *)(v16 + 16) + 424LL) )
    UserSetLastError(5);
  else
LABEL_18:
    v11 = InternalSetTimer(v16, a2, v17, a4, v18, 0);
LABEL_19:
  v21 = PsGetCurrentThreadWin32Thread(v15);
  --*(_DWORD *)(v21 + 48);
  UserSessionSwitchLeaveCrit(v22);
  return v11;
}
