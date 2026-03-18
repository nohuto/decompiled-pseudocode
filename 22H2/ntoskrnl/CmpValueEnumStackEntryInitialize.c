/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x14061680C
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140616830 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x140A257E8 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextReinitialize(a1 + 1);
}
