/*
 * XREFs of RtlSetSystemGlobalData @ 0x1403F8534
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlSetSystemGlobalData(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( PsIsCurrentThreadInServerSilo(a1, (__int64)a2) )
    *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v4, v3) + 141) + 584LL) = *a2;
  else
    MEMORY[0xFFFFF78000000240] = *a2;
  return 0LL;
}
