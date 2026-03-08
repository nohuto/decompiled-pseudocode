/*
 * XREFs of MmGetCurrentProcessorColor @ 0x14020D7A0
 * Callers:
 *     MiAddSecureEntry @ 0x1407D3424 (MiAddSecureEntry.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
}
