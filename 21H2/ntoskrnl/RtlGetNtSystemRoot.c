/*
 * XREFs of RtlGetNtSystemRoot @ 0x140761D60
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x140659150 (ObpUseSystemDeviceMap.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     SdbpGetProcessHistory @ 0x140A13308 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A17E60 (AslEnvVarQuery.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetNtSystemRoot()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 30LL;
  else
    return 0xFFFFF78000000030uLL;
}
