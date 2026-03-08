/*
 * XREFs of CmpFindValueByName @ 0x1407A74A0
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmpFindControlSet @ 0x1407FEB10 (CmpFindControlSet.c)
 *     CmpMarkCurrentProfileDirty @ 0x140814218 (CmpMarkCurrentProfileDirty.c)
 *     CmpMarkCurrentValueDirty @ 0x140820E94 (CmpMarkCurrentValueDirty.c)
 *     CmpPreserveSystemHiveData @ 0x140A1F84C (CmpPreserveSystemHiveData.c)
 *     CmpSortDriverList @ 0x140B330B4 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetSystemControlValues @ 0x140B33800 (CmpGetSystemControlValues.c)
 *     CmpFindTagIndex @ 0x140B33EDC (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140B340F4 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B3493C (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B34C18 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     CmpFindNameInList @ 0x1407A74D8 (CmpFindNameInList.c)
 */

__int64 __fastcall CmpFindValueByName(int a1, int a2, int a3)
{
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CmpFindNameInList(a1, a2 + 36, a3, 0, 0LL, (__int64)&v4);
  return v4;
}
