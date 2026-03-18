/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140361A30
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140225BA8 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022D0E0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14030C028 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
