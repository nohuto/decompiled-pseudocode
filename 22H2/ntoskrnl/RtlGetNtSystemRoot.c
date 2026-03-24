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

__int64 __fastcall RtlGetNtSystemRoot(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals(v3, v2) + 141) + 30LL;
  else
    return 0xFFFFF78000000030uLL;
}
