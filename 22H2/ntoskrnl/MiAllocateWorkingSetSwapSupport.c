/*
 * XREFs of MiAllocateWorkingSetSwapSupport @ 0x140351768
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403504CC (MmOutSwapVirtualAddresses.c)
 *     MiGetKernelStackSwapSupport @ 0x140350BDC (MiGetKernelStackSwapSupport.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x140351710 (MiReAllocateWorkingSetSwapSupport.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
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
