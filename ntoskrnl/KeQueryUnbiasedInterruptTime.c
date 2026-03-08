/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x140296260
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
