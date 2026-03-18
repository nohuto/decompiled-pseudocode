/*
 * XREFs of VfFreeMemoryNotification @ 0x140AC30E8
 * Callers:
 *     MmFreeContiguousMemory @ 0x1403C2FA0 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140AC11C2 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x140AC16EC (VfDeadlockDeleteMemoryRange.c)
 */

void __fastcall VfFreeMemoryNotification(unsigned __int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  VfRemLockDeleteMemoryRange(a1, a2);
}
