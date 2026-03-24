/*
 * XREFs of KeComputeSha256 @ 0x140399090
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x14095BA1C (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     SymCryptSha256 @ 0x1403EBA58 (SymCryptSha256.c)
 */

__int64 __fastcall KeComputeSha256(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptSha256(a1, a2, a3);
}
