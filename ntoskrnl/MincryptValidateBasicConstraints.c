/*
 * XREFs of MincryptValidateBasicConstraints @ 0x14067DECC
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MinAsn1DecodeInteger @ 0x14067E004 (MinAsn1DecodeInteger.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A6DAB8 (MinAsn1ParseSingleExtensionValue.c)
 *     MinAsn1ExtractValues @ 0x140A6EB74 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MincryptValidateBasicConstraints(_DWORD *a1, int a2, char a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _BYTE v9[8]; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  __int128 v11; // [rsp+40h] [rbp-9h] BYREF
  int v12; // [rsp+50h] [rbp+7h] BYREF
  __int128 v13; // [rsp+58h] [rbp+Fh]
  __int128 v14; // [rsp+68h] [rbp+1Fh]
  __int64 v15; // [rsp+78h] [rbp+2Fh]

  v4 = 0;
  v12 = 0;
  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  if ( !a2 )
    return v4;
  v9[0] = 0;
  if ( !*a1 )
    goto LABEL_14;
  if ( (int)MinAsn1ParseSingleExtensionValue(&qword_140A75AB0, a1, v9, &v11) <= 0 )
    goto LABEL_15;
  if ( !v9[0] )
  {
LABEL_14:
    if ( a3 )
      return v4;
LABEL_15:
    *a4 |= 0x20000000u;
    return (unsigned int)-1073740760;
  }
  LODWORD(v10) = 3;
  if ( (int)MinAsn1ExtractValues(DWORD2(v11), v11, (unsigned int)&v10, (unsigned int)&qword_140006BC0, 3, (__int64)&v12) <= 0
    || v12 <= 0
    || !DWORD2(v13)
    || !*(_BYTE *)v14 )
  {
    goto LABEL_15;
  }
  if ( DWORD2(v14) )
  {
    v9[0] = 0;
    v10 = 0LL;
    if ( (int)MinAsn1DecodeInteger(v15, DWORD2(v14), &v10, v9) <= 0 || v9[0] || (unsigned int)(a2 - 1) > v10 )
    {
      *a4 |= 0x8000000u;
      return (unsigned int)-1073740760;
    }
  }
  return v4;
}
