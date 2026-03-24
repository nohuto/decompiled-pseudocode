/*
 * XREFs of RtlSetSystemGlobalData @ 0x1403F7C14
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
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
