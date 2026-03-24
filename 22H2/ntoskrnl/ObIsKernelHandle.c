/*
 * XREFs of ObIsKernelHandle @ 0x14034FF70
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x1406FB498 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1402C8F50 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((unsigned __int64)Handle, 0);
}
