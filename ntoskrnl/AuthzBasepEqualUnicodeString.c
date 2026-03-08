/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140297EF8
 * Callers:
 *     AuthzBasepFindSecurityAttribute @ 0x1402478D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140297C74 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindTokenAttribute @ 0x14066C6D4 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x14070B828 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1402F707C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, a2);
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
