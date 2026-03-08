/*
 * XREFs of MinAsn1ParseECCSignature @ 0x140675194
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140A6C6A0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ParseRSAPublicKey @ 0x140A6D980 (MinAsn1ParseRSAPublicKey.c)
 */

__int64 __fastcall MinAsn1ParseECCSignature(__int64 a1, __int64 a2)
{
  return MinAsn1ParseRSAPublicKey(a1, a2);
}
