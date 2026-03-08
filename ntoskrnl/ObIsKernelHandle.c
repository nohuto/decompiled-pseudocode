/*
 * XREFs of ObIsKernelHandle @ 0x140303080
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x14067E690 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1403521C8 (ObpIsKernelHandle.c)
 */

BOOLEAN __stdcall ObIsKernelHandle(HANDLE Handle)
{
  return ObpIsKernelHandle(Handle, 0LL);
}
