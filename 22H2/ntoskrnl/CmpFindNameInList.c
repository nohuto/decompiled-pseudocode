/*
 * XREFs of CmpFindNameInList @ 0x1406E23E8
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14066EF68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpFindValueByName @ 0x1406E242C (CmpFindValueByName.c)
 *     CmQueryMultipleValueKey @ 0x1406E2464 (CmQueryMultipleValueKey.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140731D08 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F460 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpMergeKeyValues @ 0x1408794D0 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1406DED6C (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(__int64 a1, unsigned int *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a2, a3, a4, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
