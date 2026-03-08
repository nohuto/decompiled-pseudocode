/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x14079C490
 * Callers:
 *     IoConfigureCrashDump @ 0x14054D564 (IoConfigureCrashDump.c)
 *     IopStoreBootDriveLetter @ 0x140B54800 (IopStoreBootDriveLetter.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = PdcCreateWatchdogAroundClientCall();
  return (char *)PsGetServerSiloGlobals(v0) + 1264;
}
