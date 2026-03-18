/*
 * XREFs of KiAllocateHeteroConfigBuffer @ 0x140A92074
 * Callers:
 *     KiCompleteKernelInit @ 0x140A8D340 (KiCompleteKernelInit.c)
 * Callees:
 *     KeGetThreadWorkloadClassCount @ 0x14036EA64 (KeGetThreadWorkloadClassCount.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 KiAllocateHeteroConfigBuffer()
{
  int ThreadWorkloadClassCount; // ebx
  __int64 Pool2; // rax

  ThreadWorkloadClassCount = KeGetThreadWorkloadClassCount();
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(12672 * ThreadWorkloadClassCount + 24), 1699243339LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 20) = ThreadWorkloadClassCount;
  KiHeteroConfig = Pool2;
  return 0LL;
}
