/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1402F707C
 * Callers:
 *     AuthzBasepFindSecurityAttribute @ 0x1402478D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepEqualUnicodeString @ 0x140297EF8 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403657AC (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
