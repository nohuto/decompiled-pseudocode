struct tagTHREADINFO *__fastcall PtiCurrentShared(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  v5 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    return *(struct tagTHREADINFO **)ThreadWin32Thread;
  return (struct tagTHREADINFO *)v5;
}
