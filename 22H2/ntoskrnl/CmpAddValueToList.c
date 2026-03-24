/*
 * XREFs of CmpAddValueToList @ 0x14087B408
 * Callers:
 *     CmpSetValueKeyNew @ 0x1406577D0 (CmpSetValueKeyNew.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14066EF68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14072A170 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSetValueKeyTombstone @ 0x14086EA4C (CmpSetValueKeyTombstone.c)
 *     CmpSyncKeyValues @ 0x140879E7C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x1406E0254 (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpAddValueToList(ULONG_PTR a1, int a2, unsigned int a3, int a4, unsigned int *a5)
{
  return CmpAddValueToListEx(a1, a2, a3, a4, a5, 1);
}
