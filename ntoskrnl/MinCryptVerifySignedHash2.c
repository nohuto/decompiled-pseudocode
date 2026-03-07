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
