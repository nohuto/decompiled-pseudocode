/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1407EB230
 * Callers:
 *     IoConfigureCrashDump @ 0x14054FA04 (IoConfigureCrashDump.c)
 *     IopStoreBootDriveLetter @ 0x140B3CE40 (IopStoreBootDriveLetter.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293330 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = PdcCreateWatchdogAroundClientCall();
  return (char *)PsGetServerSiloGlobals(v0) + 1264;
}
