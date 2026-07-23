/*
 * XREFs of RtlSetSystemGlobalData @ 0x1403F8564
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 */

// local variable allocation has failed, the output may be wrong!
DWORD __cdecl RtlSetSystemGlobalData(RTL_SYSTEM_GLOBAL_DATA_ID DataId, PVOID Buffer, DWORD Size)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( PsIsCurrentThreadInServerSilo(*(__int64 *)&DataId, (__int64)Buffer) )
    *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v5, v4) + 141) + 584LL) = *(_DWORD *)Buffer;
  else
    MEMORY[0xFFFFF78000000240] = *(_DWORD *)Buffer;
  return 0;
}
