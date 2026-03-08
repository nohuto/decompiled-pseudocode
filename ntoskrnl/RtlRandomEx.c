/*
 * XREFs of RtlRandomEx @ 0x1402A6210
 * Callers:
 *     PspSelectNodeForProcess @ 0x1407067D8 (PspSelectNodeForProcess.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140726450 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MiInitializePartition @ 0x140837D40 (MiInitializePartition.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409E97F4 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x140ABF358 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
