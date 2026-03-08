/*
 * XREFs of MinCryptDecodeHashAlgorithmIdentifier @ 0x140A6C4E8
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x140A6D684 (MinAsn1ParseAlgorithmIdentifier.c)
 */

__int64 __fastcall MinCryptDecodeHashAlgorithmIdentifier(__int64 a1)
{
  unsigned int v1; // esi
  SIZE_T v3; // rbp
  const void **v4; // r14
  unsigned int v5; // edi
  _BYTE v6[32]; // [rsp+20h] [rbp-68h] BYREF
  SIZE_T Length; // [rsp+40h] [rbp-48h]
  void *Source1; // [rsp+48h] [rbp-40h]

  v1 = 0;
  if ( (int)MinAsn1ParseAlgorithmIdentifier(a1, v6) < 0 )
    return 0LL;
  v3 = (unsigned int)Length;
  v4 = (const void **)&off_140A7B058;
  v5 = 0;
  while ( (_DWORD)v3 != *((_DWORD *)v4 - 2) || RtlCompareMemory(Source1, *v4, v3) != v3 )
  {
    ++v5;
    v4 += 3;
    if ( v5 >= 0x14 )
      return v1;
  }
  return LODWORD(qword_140A7B060[3 * v5]);
}
