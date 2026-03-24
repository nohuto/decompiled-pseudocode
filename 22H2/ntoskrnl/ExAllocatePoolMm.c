/*
 * XREFs of ExAllocatePoolMm @ 0x1402BBA40
 * Callers:
 *     MiAllocateAccessLog @ 0x14033DCF0 (MiAllocateAccessLog.c)
 *     MiZeroPageCalibrate @ 0x1403AAC44 (MiZeroPageCalibrate.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054F718 (MiLockWorkingSetForLargeMapping.c)
 *     MiAddSecureEntry @ 0x14061FBE0 (MiAddSecureEntry.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MiInsertSharedCommitNode @ 0x140638E70 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExpAllocatePoolWithTagFromNode @ 0x1402BC810 (ExpAllocatePoolWithTagFromNode.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     ExpPoolFlagsToPoolType @ 0x1409B4010 (ExpPoolFlagsToPoolType.c)
 */

PVOID __fastcall ExAllocatePoolMm(int a1, SIZE_T a2, ULONG a3, unsigned int a4)
{
  char v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+31h] [rbp-17h] BYREF
  POOL_TYPE PoolType; // [rsp+34h] [rbp-14h] BYREF

  PoolType = NonPagedPool;
  v9 = 0;
  v8 = 0;
  if ( (int)ExpPoolFlagsToPoolType(a1, 1, (unsigned int)&PoolType, (unsigned int)&v9, (__int64)&v8) < 0 )
    return 0LL;
  if ( v9 )
    return ExAllocatePoolWithQuotaTag(PoolType, a2, a3);
  return (PVOID)ExpAllocatePoolWithTagFromNode((unsigned int)PoolType, a2, a3, a4, v8 != 0);
}
