/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1402BF7EC
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
