/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1406C3EE0
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BFE04 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x140252E40 (HalSystemVectorDispatchEntry.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = HalSystemVectorDispatchEntry();
  return (char *)PsGetServerSiloGlobals(v0) + 1072;
}
