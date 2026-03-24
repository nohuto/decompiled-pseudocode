/*
 * XREFs of RtlRandomEx @ 0x1402E5D70
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D04E4 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14079C65C (MiInitializePartition.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F641C (PopPublishAndPurgePowerRequestStats.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F1B0 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x1409C6290 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
