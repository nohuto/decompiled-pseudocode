/*
 * XREFs of MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A6C590
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140A6C6A0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x140A6D684 (MinAsn1ParseAlgorithmIdentifier.c)
 */

__int64 __fastcall MinCryptDecodeSignatureAlgorithmIdentifier(__int64 a1)
{
  SIZE_T v1; // rbp
  const void **v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  SIZE_T v5; // rbp
  const void **v6; // rsi
  __int64 v7; // rdi
  _BYTE v8[32]; // [rsp+20h] [rbp-68h] BYREF
  SIZE_T Length; // [rsp+40h] [rbp-48h]
  void *Source1; // [rsp+48h] [rbp-40h]
  SIZE_T v11; // [rsp+50h] [rbp-38h]
  void *v12; // [rsp+58h] [rbp-30h]

  if ( (int)MinAsn1ParseAlgorithmIdentifier(a1, v8) < 0 )
    return 0LL;
  v1 = (unsigned int)Length;
  v2 = (const void **)&off_140A76C38;
  v3 = 0LL;
  while ( (_DWORD)v1 != *((_DWORD *)v2 - 2) || RtlCompareMemory(Source1, *v2, v1) != v1 )
  {
    v3 = (unsigned int)(v3 + 1);
    v2 += 3;
    if ( (unsigned int)v3 >= 2 )
      return 0LL;
  }
  result = (unsigned int)dword_140A76C40[6 * v3];
  if ( (_DWORD)result == 11776 )
  {
    v5 = (unsigned int)v11;
    v6 = (const void **)&off_140A76C08;
    v7 = 0LL;
    while ( (_DWORD)v5 != *((_DWORD *)v6 - 2) || RtlCompareMemory(v12, *v6, v5) != v5 )
    {
      v7 = (unsigned int)(v7 + 1);
      v6 += 3;
      if ( (unsigned int)v7 >= 2 )
        return 0LL;
    }
    return (unsigned int)dword_140A76C10[6 * v7];
  }
  return result;
}
