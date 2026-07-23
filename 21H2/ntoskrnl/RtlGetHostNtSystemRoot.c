/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x140622AA0
 * Callers:
 *     IoConfigureCrashDump @ 0x1403C0230 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = HalSystemVectorDispatchEntry();
  return (char *)PsGetServerSiloGlobals(v0) + 1072;
}
