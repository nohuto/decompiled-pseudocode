/*
 * XREFs of RtlGetNtSystemRoot @ 0x1407F7270
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x14067CA7C (ObpUseSystemDeviceMap.c)
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4BEA8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetProcessHistory @ 0x140A4F1C8 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A54908 (AslEnvVarQuery.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

char *__fastcall RtlGetNtSystemRoot(__int64 a1, __int64 a2)
{
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
    return (char *)&PsGetCurrentServerSiloGlobals()[82].Blink[1].Blink + 6;
  else
    return (char *)0xFFFFF78000000030LL;
}
