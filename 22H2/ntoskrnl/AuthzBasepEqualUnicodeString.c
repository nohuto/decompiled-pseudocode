/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140225BA8
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140225924 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022D0E0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindTokenAttribute @ 0x14066ED24 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1406B7784 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140361A30 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x1406DA3A0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive();
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
