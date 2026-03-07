struct tagTHREADINFO *__fastcall PtiCurrentShared(__int64 a1)
{
  __int64 v1; // rax
  __int64 ThreadWin32Thread; // rax

  v1 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    return *(struct tagTHREADINFO **)ThreadWin32Thread;
  else
    return 0LL;
}
