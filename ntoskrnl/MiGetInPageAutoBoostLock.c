/*
 * XREFs of MiGetInPageAutoBoostLock @ 0x14020CAA0
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x14078DBC4 (MiPrefetchControlArea.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 */

_QWORD *MiGetInPageAutoBoostLock()
{
  _QWORD *result; // rax

  result = (_QWORD *)MiAllocatePool(64LL, 8LL, 1095330125LL);
  if ( result )
    *result = 1LL;
  return result;
}
