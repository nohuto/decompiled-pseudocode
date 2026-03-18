/*
 * XREFs of VfFreeMemoryNotification @ 0x140A81748
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140A7F132 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x140A7F844 (VfDeadlockDeleteMemoryRange.c)
 */

char __fastcall VfFreeMemoryNotification(unsigned __int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  return VfRemLockDeleteMemoryRange(a1, a2);
}
