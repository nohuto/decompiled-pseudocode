/*
 * XREFs of RtlRandomEx @ 0x14036C940
 * Callers:
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407F1308 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     PspSelectNodeForProcess @ 0x1407F1710 (PspSelectNodeForProcess.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14081D450 (MiInitializePartition.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EBB58 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x140A819C8 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
