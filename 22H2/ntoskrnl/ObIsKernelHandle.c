/*
 * XREFs of ObIsKernelHandle @ 0x14036EA30
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x140681A70 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1402BEB24 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle((__int64)Handle, 0);
}
