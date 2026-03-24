/*
 * XREFs of CmpAllocate @ 0x1407201B0
 * Callers:
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140872E98 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1406574DC (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140720214 (CmpClaimGlobalQuota.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rdi

  v4 = NumberOfBytes;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(NumberOfBytes) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a2 != 0 ? PagedPoolCacheAligned : PagedPool), v4, a3);
  if ( !PoolWithTag )
    CmpReleaseGlobalQuota(v4);
  return PoolWithTag;
}
