/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x140706670
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x1407045FC (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14070663C (ExpAllocateLowLevelTable.c)
 * Callees:
 *     PsChargeProcessPagedPoolQuota @ 0x1407D6CF0 (PsChargeProcessPagedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void *__fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, __int64 a2)
{
  void *Pool2; // rbx

  Pool2 = (void *)ExAllocatePool2(256LL, a2, 1651794511LL);
  if ( Pool2 && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(Pool2, 0x6274624Fu);
    return 0LL;
  }
  return Pool2;
}
