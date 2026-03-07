__int64 __fastcall ThreadLockAlways(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  v7 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  result = *(_QWORD *)(v7 + 416);
  *a2 = result;
  *(_QWORD *)(v7 + 416) = a2;
  a2[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
