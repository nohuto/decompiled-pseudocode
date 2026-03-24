/*
 * XREFs of RtlRandomEx @ 0x1403572D0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartition @ 0x1407974EC (MiInitializePartition.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F646C (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F200 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x1409C62A0 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
