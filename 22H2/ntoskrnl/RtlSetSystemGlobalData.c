/*
 * XREFs of RtlSetSystemGlobalData @ 0x1403F7C14
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
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
