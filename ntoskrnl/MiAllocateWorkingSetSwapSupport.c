/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x1402DBDF4
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1402DBD9C (MiReAllocateWorkingSetSwapSupport.c)
 *     MiGetKernelStackSwapSupport @ 0x1402DBFB8 (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateWorkingSetSwapSupport(__int64 a1)
{
  _QWORD *result; // rax

  result = MiAllocatePool(64, 16 * a1 + 40, 0x53576D4Du);
  if ( result )
  {
    result[1] = a1;
    *result = ((unsigned __int64)result + 47) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  return result;
}
