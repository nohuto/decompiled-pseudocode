/*
 * XREFs of KeComputeSha256 @ 0x1403BEB10
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x14084C910 (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     SymCryptSha256 @ 0x1403ED8FC (SymCryptSha256.c)
 */

__int64 __fastcall KeComputeSha256(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptSha256(a1, a2, a3);
}
