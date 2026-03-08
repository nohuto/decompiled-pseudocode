/*
 * XREFs of MiDeleteAweInfo @ 0x140A3EDD8
 * Callers:
 *     MiDeleteSectionAwe @ 0x140647390 (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140726E8C (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x140A3D3BC (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A3EA20 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14023A500 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x140A3ED88 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _DWORD *a2)
{
  if ( (a2[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 16));
  MiDeleteAweBitMap(a1, (__int64)(a2 + 6));
  ExFreePoolWithTag(a2, 0);
}
