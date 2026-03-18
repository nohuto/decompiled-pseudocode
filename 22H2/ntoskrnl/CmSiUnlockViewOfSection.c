/*
 * XREFs of CmSiUnlockViewOfSection @ 0x140354438
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14070B0F4 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x1407C3BD4 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x14082B0D8 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140885B00 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwUnlockVirtualMemory @ 0x14041E200 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall CmSiUnlockViewOfSection(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  v4 = *a2;
  v7 = a3;
  v6 = a4;
  return ZwUnlockVirtualMemory(v4, &v7, &v6, 1LL);
}
