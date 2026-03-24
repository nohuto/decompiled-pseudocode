/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x14032CAD4
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036B6A8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackInitialize @ 0x14072B0FC (CmpValueEnumStackInitialize.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140875D48 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  return HvpGetCellContextInitialize(a1 + 1);
}
