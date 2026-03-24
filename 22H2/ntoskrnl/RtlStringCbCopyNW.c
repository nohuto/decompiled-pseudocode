/*
 * XREFs of RtlStringCbCopyNW @ 0x1403481C8
 * Callers:
 *     PopDiagGetDriverName @ 0x14038887C (PopDiagGetDriverName.c)
 *     LocalConvertSidToStringSidW @ 0x1406EC2F0 (LocalConvertSidToStringSidW.c)
 *     IopCheckIfNotNativeDriver @ 0x140891340 (IopCheckIfNotNativeDriver.c)
 *     AslPathWildcardFindFirst @ 0x140968B44 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140969114 (AslPathWildcardFindNext.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x14096C82C (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14096CA9C (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x140348228 (RtlStringCopyWorkerW_2.c)
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
