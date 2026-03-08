/*
 * XREFs of MinCryptVerifySignedHash2 @ 0x140A6C6A0
 * Callers:
 *     MinCryptVerifySignedHash @ 0x140A6C678 (MinCryptVerifySignedHash.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ?MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z @ 0x140674D7C (-MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z.c)
 *     MinAsn1ParseECCSignature @ 0x140675194 (MinAsn1ParseECCSignature.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A6C590 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x140A6D938 (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x140A6D980 (MinAsn1ParseRSAPublicKey.c)
 *     HashpVerifyEcdsaSignature @ 0x140A74544 (HashpVerifyEcdsaSignature.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7467C (HashpVerifyPkcs1Signature.c)
 */

__int64 __fastcall MinCryptVerifySignedHash2(int a1, int a2, int a3, unsigned int *a4, __int64 a5, __int64 a6)
{
  char v10; // bl
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // r14d
  int v17; // eax
  _BYTE v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h]
  unsigned __int8 *Src; // [rsp+78h] [rbp-88h]
  size_t v22; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v23; // [rsp+88h] [rbp-78h]
  _BYTE v24[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v25[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v26; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v27; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v28[96]; // [rsp+D0h] [rbp-30h] BYREF

  v10 = 0;
  if ( (int)MinAsn1ParsePublicKeyInfo(a5, v24) < 0 )
    return (unsigned int)-1073740760;
  v12 = MinCryptDecodeSignatureAlgorithmIdentifier((__int64)v25);
  v13 = v12;
  if ( !v12 )
    return (unsigned int)-1073740760;
  v14 = v12 - 9216;
  if ( !v14 )
  {
    if ( (int)MinAsn1ParseRSAPublicKey(&v26, v19) >= 0 )
    {
      if ( a6 )
        v10 = (*(_BYTE *)(a6 + 4) & 0x40) != 0;
      v17 = HashpVerifyPkcs1Signature(
              a1,
              a2,
              a3,
              (_DWORD)v23,
              (unsigned int)v22,
              (__int64)Src,
              (unsigned int)Size,
              *((_QWORD *)a4 + 1),
              *a4,
              v10);
      if ( v17 < 0 )
        return (unsigned int)-1073740760;
      return (unsigned int)v17;
    }
    return (unsigned int)-1073740760;
  }
  if ( (unsigned int)(v14 - 2561) > 1 )
    return (unsigned int)-1073740760;
  if ( v13 == 11777 )
  {
    v15 = 32;
    goto LABEL_10;
  }
  if ( v13 != 11778 )
    return (unsigned int)-1073740760;
  v15 = 48;
LABEL_10:
  if ( (int)MinAsn1ParseECCSignature((__int64)a4, (__int64)v19) < 0 )
    return (unsigned int)-1073740760;
  if ( v26 != 2 * v15 + 1 )
    return (unsigned int)-1073740760;
  v16 = (int)v27;
  if ( *v27 != 4 )
    return (unsigned int)-1073740760;
  if ( (int)MinCryptCopyAsn1IntToFixedBuffer(Src, (unsigned int)Size, v28, v15) < 0 )
    return (unsigned int)-1073740760;
  if ( (int)MinCryptCopyAsn1IntToFixedBuffer(v23, (unsigned int)v22, &v28[v15], v15) < 0 )
    return (unsigned int)-1073740760;
  v11 = HashpVerifyEcdsaSignature(v13, v16 + 1, 2 * v15, a2, a3, (__int64)v28, 2 * v15);
  if ( v11 < 0 )
    return (unsigned int)-1073740760;
  return (unsigned int)v11;
}
