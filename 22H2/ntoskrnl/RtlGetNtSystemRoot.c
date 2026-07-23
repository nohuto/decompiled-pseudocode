/*
 * XREFs of RtlGetNtSystemRoot @ 0x14069F2A0
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x1405CF1CC (ObpUseSystemDeviceMap.c)
 *     AslEnvVarQuery @ 0x14075396C (AslEnvVarQuery.c)
 *     MiDriverLoadSucceeded @ 0x14075BE34 (MiDriverLoadSucceeded.c)
 *     SdbpGetProcessHistory @ 0x14096630C (SdbpGetProcessHistory.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(v1, v0) )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}
