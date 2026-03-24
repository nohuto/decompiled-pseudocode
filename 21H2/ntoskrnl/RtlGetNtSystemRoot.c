/*
 * XREFs of RtlGetNtSystemRoot @ 0x1406BC270
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x1405CF1CC (ObpUseSystemDeviceMap.c)
 *     AslEnvVarQuery @ 0x14075417C (AslEnvVarQuery.c)
 *     MiDriverLoadSucceeded @ 0x14075C644 (MiDriverLoadSucceeded.c)
 *     SdbpGetProcessHistory @ 0x1409662BC (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlGetNtSystemRoot(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 30LL;
  else
    return 0xFFFFF78000000030uLL;
}
