/*
 * XREFs of I_MinCryptGetCommonName @ 0x140A6CB7C
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     MinAsn1ParseAndDecodeRDNComponent @ 0x140A6D6CC (MinAsn1ParseAndDecodeRDNComponent.c)
 */

__int64 __fastcall I_MinCryptGetCommonName(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v4 = 0LL;
  result = MinAsn1ParseAndDecodeRDNComponent(a1, a2, &v5, &v4);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(a2 + 10) = v5;
    *(_QWORD *)a2 = *((_QWORD *)&v4 + 1);
    *(_WORD *)(a2 + 8) = v4;
  }
  return result;
}
