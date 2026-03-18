/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x1407C7ABC
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1407C79F4 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1406D9ED0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_140002128, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
