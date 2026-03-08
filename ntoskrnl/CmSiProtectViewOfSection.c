/*
 * XREFs of CmSiProtectViewOfSection @ 0x14030D290
 * Callers:
 *     HvpViewMapCreateView @ 0x140730DF8 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140730EE4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1407326F8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140732864 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x1407611FC (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapSealRange @ 0x1407A50A4 (HvpViewMapSealRange.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140823068 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140880D20 (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x140412D10 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall CmSiProtectViewOfSection(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, a5, a6);
}
