/*
 * XREFs of CmpFindNameInList @ 0x1406D0F6C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x1406D0128 (CmpFindValueByName.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17A84 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A2922C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29B60 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1406D2824 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
