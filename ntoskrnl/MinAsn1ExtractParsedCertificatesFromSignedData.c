/*
 * XREFs of MinAsn1ExtractParsedCertificatesFromSignedData @ 0x140A6EAD0
 * Callers:
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x14067DCCC (MincrypK_ParseCertificateChainWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MinAsn1ParseSignedDataCertificatesEx @ 0x140A6D9C8 (MinAsn1ParseSignedDataCertificatesEx.c)
 *     MinAsn1ExtractValues @ 0x140A6EB74 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ExtractParsedCertificatesFromSignedData(int a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v9[16]; // [rsp+40h] [rbp-158h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-148h]
  unsigned int v11[48]; // [rsp+B0h] [rbp-E8h] BYREF

  v8 = 24;
  result = MinAsn1ExtractValues(a1, a2, (unsigned int)&v8, (unsigned int)&qword_14000B370, 19, (__int64)v9);
  if ( (int)result > 0 )
    result = v10;
  if ( (int)result > 0 )
  {
    result = MinAsn1ParseSignedDataCertificatesEx(v11, a3, a4);
    if ( (int)result >= 0 )
      return result;
    result = a1 - v11[2] + (unsigned int)result;
  }
  *a3 = 0;
  return result;
}
