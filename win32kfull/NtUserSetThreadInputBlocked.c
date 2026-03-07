__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 CurrentThreadWin32Thread; // rax
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  if ( !*(_QWORD *)(SGDGetUserSessionState() + 8)
    || (v5 = SGDGetUserSessionState(), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v5 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( a1 != 4096 )
    goto LABEL_11;
  v7 = *(_DWORD *)(gptiCurrent + 1272LL);
  if ( !a2 )
  {
    if ( (v7 & 0x8000) != 0 )
    {
      v8 = v7 & 0xFFFF7FFF;
      goto LABEL_7;
    }
LABEL_11:
    UserSetLastError(87LL);
    goto LABEL_8;
  }
  if ( (v7 & 0x8000) != 0 )
    goto LABEL_11;
  v8 = v7 | 0x8000;
LABEL_7:
  *(_DWORD *)(gptiCurrent + 1272LL) = v8;
  v4 = 1LL;
LABEL_8:
  v9 = PsGetCurrentThreadWin32Thread();
  --*(_DWORD *)(v9 + 48);
  UserSessionSwitchLeaveCrit();
  return v4;
}
