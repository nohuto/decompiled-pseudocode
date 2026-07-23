/*
 * XREFs of RtlStringCbCopyNW @ 0x14026D5E8
 * Callers:
 *     PopDiagGetDriverName @ 0x1403890CC (PopDiagGetDriverName.c)
 *     LocalConvertSidToStringSidW @ 0x140668730 (LocalConvertSidToStringSidW.c)
 *     IopCheckIfNotNativeDriver @ 0x140891450 (IopCheckIfNotNativeDriver.c)
 *     AslPathWildcardFindFirst @ 0x140968CD4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409692A4 (AslPathWildcardFindNext.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x14096C9BC (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14096CC2C (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x14026D648 (RtlStringCopyWorkerW_2.c)
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  NTSTATUS v5; // edx
  size_t cchToCopy; // r9

  v4 = cbDest >> 1;
  v5 = 0;
  if ( v4 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    cchToCopy = cbToCopy >> 1;
    if ( cchToCopy > 0x7FFFFFFE )
    {
      v5 = -1073741811;
      *pszDest = 0;
    }
    else
    {
      return RtlStringCopyWorkerW_2(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
