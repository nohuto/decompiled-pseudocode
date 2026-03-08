/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140237D60
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
