/*
 * XREFs of HalReadBootRegister @ 0x140A8D824
 * Callers:
 *     HalpResetSBF @ 0x140A8D7E8 (HalpResetSBF.c)
 *     HalpInitBootTable @ 0x140B6316C (HalpInitBootTable.c)
 * Callees:
 *     HalpGetCmosData @ 0x14039F6B0 (HalpGetCmosData.c)
 */

__int64 __fastcall HalReadBootRegister(__int64 a1)
{
  if ( !HalpSimpleBootFlagTable )
    return 3221225486LL;
  if ( !a1 )
    return 3221225485LL;
  HalpGetCmosData(0, *(unsigned __int8 *)(HalpSimpleBootFlagTable + 36), a1, 1);
  return 0LL;
}
