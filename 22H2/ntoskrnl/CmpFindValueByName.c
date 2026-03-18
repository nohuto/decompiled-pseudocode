/*
 * XREFs of CmpFindValueByName @ 0x1406D0128
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmpFindControlSet @ 0x1408268A0 (CmpFindControlSet.c)
 *     CmpMarkCurrentValueDirty @ 0x140828F04 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084BAAC (CmpMarkCurrentProfileDirty.c)
 *     CmpPreserveSystemHiveData @ 0x140A225AC (CmpPreserveSystemHiveData.c)
 *     CmpSortDriverList @ 0x140B5C1E8 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5C4DC (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140B5C934 (CmpGetSystemControlValues.c)
 *     CmpFindTagIndex @ 0x140B5D010 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140B5D228 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B5DA70 (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B5DD4C (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     CmpFindNameInList @ 0x1406D0F6C (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
