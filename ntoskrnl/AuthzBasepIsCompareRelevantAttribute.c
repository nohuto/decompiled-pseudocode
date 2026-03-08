/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x1407768CC
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140776804 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1406D5A70 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_140004E70, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
