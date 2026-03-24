/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140341ED8
 * Callers:
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
