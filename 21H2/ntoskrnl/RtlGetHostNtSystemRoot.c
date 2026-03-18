/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1406EB3B0
 * Callers:
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = HalSystemVectorDispatchEntry();
  return (char *)PsGetServerSiloGlobals(v0) + 1264;
}
