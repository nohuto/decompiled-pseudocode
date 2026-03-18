/*
 * XREFs of ThreadLockAlways @ 0x1C0047B20
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ThreadLockAlways(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  v6 = 0LL;
  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, (__int64)a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  result = *(_QWORD *)(v6 + 416);
  *a2 = result;
  *(_QWORD *)(v6 + 416) = a2;
  a2[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  return result;
}
