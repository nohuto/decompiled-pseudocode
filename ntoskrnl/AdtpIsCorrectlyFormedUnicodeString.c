/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140395DE0
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
