AtomicExecutionCheck *__fastcall AtomicExecutionCheck::AtomicExecutionCheck(AtomicExecutionCheck *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  AtomicExecutionCheck *result; // rax

  *(_BYTE *)this = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(this) + 8)
    || (v3 = SGDGetUserSessionState(v2), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 8))) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v4);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  result = this;
  *(_BYTE *)this = 1;
  return result;
}
