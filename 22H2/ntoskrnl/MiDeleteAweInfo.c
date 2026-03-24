/*
 * XREFs of MiDeleteAweInfo @ 0x1408D5E94
 * Callers:
 *     MiDeleteSectionAwe @ 0x14054BA48 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x1406601A4 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x1408D4BD0 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1408D5B10 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402E9ED0 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1408D5E3C (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _QWORD *a2)
{
  if ( (*(_DWORD *)a2 & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 7));
  MiDeleteAweBitMap(a1, a2 + 2);
  ExFreePoolWithTag(a2, 0);
}
