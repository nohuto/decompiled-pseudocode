/*
 * XREFs of ExpFreeTablePagedPool @ 0x140704514
 * Callers:
 *     ExpFreeHandleTable @ 0x140704400 (ExpFreeHandleTable.c)
 *     ExpFreeLowLevelTable @ 0x1407044D4 (ExpFreeLowLevelTable.c)
 *     ExpAllocateMidLevelTable @ 0x140704638 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14070644C (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1409F63C0 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140295600 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFreeTablePagedPool(struct _KPROCESS *a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
