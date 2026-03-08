/*
 * XREFs of EditionIsGetKeyStateBlocked @ 0x1C00D14B0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall EditionIsGetKeyStateBlocked(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax

  v1 = SGDGetUserSessionState(a1);
  v2 = 0;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  LOBYTE(v2) = *(_QWORD *)(v3 + 456) != grpdeskRitInput;
  return v2;
}
