/*
 * XREFs of MinAsn1ParseRSAPublicKey @ 0x140A6D980
 * Callers:
 *     SecureDump_ConvertToRsaBlob @ 0x14055B6F0 (SecureDump_ConvertToRsaBlob.c)
 *     MinCryptIsKeyPresent @ 0x1406750BC (MinCryptIsKeyPresent.c)
 *     MinAsn1ParseECCSignature @ 0x140675194 (MinAsn1ParseECCSignature.c)
 *     MinCryptVerifySignedHash2 @ 0x140A6C6A0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ExtractValues @ 0x140A6EB74 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseRSAPublicKey(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 3;
  result = MinAsn1ExtractValues(
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)a1,
             (unsigned int)&v4,
             (unsigned int)&qword_14000B6B0,
             4,
             a2);
  if ( (int)result > 0 )
    return *(unsigned int *)(a2 + 16);
  return result;
}
