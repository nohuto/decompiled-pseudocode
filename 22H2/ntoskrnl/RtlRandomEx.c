/*
 * XREFs of RtlRandomEx @ 0x140292480
 * Callers:
 *     PspSelectNodeForProcess @ 0x140705E5C (PspSelectNodeForProcess.c)
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x1407A8594 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     MiInitializePartition @ 0x140838DF0 (MiInitializePartition.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC694 (EtwpGetPrivateSessionTraceHandle.c)
 *     VfRandomGetNumber @ 0x140AC3358 (VfRandomGetNumber.c)
 * Callees:
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandomEx(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1LL) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
