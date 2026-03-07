AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(
        AtomicExecutionCheck *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentThreadWin32Thread; // rax
  AtomicExecutionCheck *result; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-38h]

  *(_BYTE *)this = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(this, a2, a3, a4) + 8)
    || (v9 = SGDGetUserSessionState(v6, v5, v7, v8), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v9 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v11, v10, v12, v13, BugCheckParameter4);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  result = this;
  *(_BYTE *)this = 1;
  return result;
}
