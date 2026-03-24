/*
 * XREFs of CmpFindValueByName @ 0x1406E242C
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1406E2464 (CmQueryMultipleValueKey.c)
 *     CmpMarkCurrentValueDirty @ 0x14079F0B0 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407A5BEC (CmpMarkCurrentProfileDirty.c)
 *     CmpFindControlSet @ 0x1407ACF80 (CmpFindControlSet.c)
 *     CmpPreserveSystemHiveData @ 0x1408796BC (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A5F7C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140A5FC0C (CmpGetSystemControlValues.c)
 *     CmpSortDriverList @ 0x140A60418 (CmpSortDriverList.c)
 *     CmpFindTagIndex @ 0x140A607B0 (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140A6097C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A6112C (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140A61390 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     CmpFindNameInList @ 0x1406E23E8 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, (unsigned int *)(a2 + 36), a3, 0, 0LL, (__int64)&v4);
  return v4;
}
