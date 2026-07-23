/*
 * XREFs of RtlGetSessionProperties @ 0x1409138E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlGetSessionProperties(ULONG SessionId, PULONG SharedUserSessionId)
{
  NTSTATUS v2; // ebx

  if ( SessionId == -1 )
    return -1073741811;
  v2 = 0;
  if ( !SharedUserSessionId )
    return -1073741811;
  *SharedUserSessionId = 0;
  *SharedUserSessionId = *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(
                                                   *(__int64 *)&SessionId,
                                                   (__int64)SharedUserSessionId)
                                     + 141)
                                   + 24LL) == SessionId;
  return v2;
}
