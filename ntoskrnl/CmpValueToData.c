/*
 * XREFs of CmpValueToData @ 0x1407FEFF8
 * Callers:
 *     CmpFindControlSet @ 0x1407FEB10 (CmpFindControlSet.c)
 *     CmpSortDriverList @ 0x140B330B4 (CmpSortDriverList.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B333A8 (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindTagIndex @ 0x140B33EDC (CmpFindTagIndex.c)
 *     CmpAddDriverToList @ 0x140B340F4 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B3493C (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B34C18 (CmpGetStateSepKeysRedirectionPathValue.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpGetValueData @ 0x1407AAC20 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

PVOID __fastcall CmpValueToData(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, ULONG_PTR a3, unsigned int *a4)
{
  _BYTE v7[8]; // [rsp+40h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-10h] BYREF

  P[0] = 0LL;
  v7[0] = 0;
  if ( !CmpGetValueData(BugCheckParameter3, a2, a3, a4, (__int64)P, (__int64)v7) )
    return 0LL;
  if ( v7[0] == 1 )
  {
    ExFreePoolWithTag(P[0], 0);
    KeBugCheckEx(0x51u, 8uLL, 0LL, BugCheckParameter3, a3);
  }
  return P[0];
}
