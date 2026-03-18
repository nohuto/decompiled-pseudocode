/*
 * XREFs of HalReadBootRegister @ 0x140A90CB4
 * Callers:
 *     HalpResetSBF @ 0x140A90C78 (HalpResetSBF.c)
 *     HalpInitBootTable @ 0x140B66DDC (HalpInitBootTable.c)
 * Callees:
 *     HalpGetCmosData @ 0x1403A4C90 (HalpGetCmosData.c)
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
