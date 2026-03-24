/*
 * XREFs of RtlStringCbCopyNW @ 0x14027F1B8
 * Callers:
 *     PopDiagGetDriverName @ 0x140388F7C (PopDiagGetDriverName.c)
 *     LocalConvertSidToStringSidW @ 0x140673500 (LocalConvertSidToStringSidW.c)
 *     IopCheckIfNotNativeDriver @ 0x1408912F0 (IopCheckIfNotNativeDriver.c)
 *     AslPathWildcardFindFirst @ 0x140968AF4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409690C4 (AslPathWildcardFindNext.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x14096C7DC (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14096CA4C (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x14027F218 (RtlStringCopyWorkerW_1.c)
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
      return RtlStringCopyWorkerW_1(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
