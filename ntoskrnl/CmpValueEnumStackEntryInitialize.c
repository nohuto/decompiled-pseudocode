/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x140614350
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140614374 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x140A22A88 (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextReinitialize(a1 + 1);
}
