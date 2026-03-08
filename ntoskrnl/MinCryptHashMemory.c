/*
 * XREFs of MinCryptHashMemory @ 0x140674E0C
 * Callers:
 *     MinCrypK_HashMemory @ 0x140A6C4C4 (MinCrypK_HashMemory.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     HashpHashMemory @ 0x140A7438C (HashpHashMemory.c)
 */

__int64 __fastcall MinCryptHashMemory(__int64 a1)
{
  return HashpHashMemory(a1, 1LL);
}
