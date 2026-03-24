/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x14035ADE0
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
