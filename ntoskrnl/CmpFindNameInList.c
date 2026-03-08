/*
 * XREFs of CmpFindNameInList @ 0x1407A74D8
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmpFindValueByName @ 0x1407A74A0 (CmpFindValueByName.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A14D34 (CmEnumerateValueKeyFromMergedView.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A264CC (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpFindNameInListWithStatus @ 0x1407A8DA0 (CmpFindNameInListWithStatus.c)
 */

bool __fastcall CmpFindNameInList(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int NameInListWithStatus; // eax

  NameInListWithStatus = CmpFindNameInListWithStatus(a1, a5, a6);
  return (int)(NameInListWithStatus + 0x80000000) < 0 || NameInListWithStatus == -1073741772;
}
