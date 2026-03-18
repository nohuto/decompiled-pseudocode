/*
 * XREFs of MiDeleteAweInfo @ 0x140A41AB8
 * Callers:
 *     MiDeleteSectionAwe @ 0x1406499AC (MiDeleteSectionAwe.c)
 *     MmDeleteProcessAddressSpace @ 0x140705A98 (MmDeleteProcessAddressSpace.c)
 *     MiAllocateAweInfo @ 0x140A4009C (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A41700 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402FD3A0 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x140A41A68 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(struct _KPROCESS *a1, _DWORD *a2)
{
  if ( (a2[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 16));
  MiDeleteAweBitMap(a1, (__int64)(a2 + 6));
  ExFreePoolWithTag(a2, 0);
}
