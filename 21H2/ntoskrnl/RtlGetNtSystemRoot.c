/*
 * XREFs of RtlGetNtSystemRoot @ 0x14061B3E0
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x1405CF1CC (ObpUseSystemDeviceMap.c)
 *     AslEnvVarQuery @ 0x14075433C (AslEnvVarQuery.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 *     SdbpGetProcessHistory @ 0x14096649C (SdbpGetProcessHistory.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
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
