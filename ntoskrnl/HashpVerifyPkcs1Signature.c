/*
 * XREFs of HashpVerifyPkcs1Signature @ 0x140A7467C
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140A6C6A0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SymCryptLoadMsbFirstUint64 @ 0x1403F0938 (SymCryptLoadMsbFirstUint64.c)
 *     SymCryptRsakeyCreate @ 0x1403F1CE4 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptRsakeySizeofModulus @ 0x1403F2470 (SymCryptRsakeySizeofModulus.c)
 *     SymCryptRsakeyWipe @ 0x1403F2484 (SymCryptRsakeyWipe.c)
 *     SymCryptDigitsFromBits @ 0x1403F36C0 (SymCryptDigitsFromBits.c)
 *     SymCryptIntBitsizeOfValue @ 0x1403F3750 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntCreate @ 0x1403F37C8 (SymCryptIntCreate.c)
 *     SymCryptIntSetValue @ 0x1403F391C (SymCryptIntSetValue.c)
 *     SymCryptIntWipe @ 0x1403F3A3C (SymCryptIntWipe.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403F4830 (SymCryptRsaPkcs1Verify.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HashpVerifyPkcs1Signature(
        int a1,
        const void *a2,
        size_t a3,
        _BYTE *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 a9,
        char a10)
{
  PVOID Pool2; // rax
  void *v13; // rdi
  unsigned int v14; // ebx
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  unsigned int v17; // r15d
  unsigned int *v18; // rsi
  int v19; // ecx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int64 *v24; // rax
  char v26; // [rsp+50h] [rbp-78h]
  __int64 v27; // [rsp+58h] [rbp-70h] BYREF
  __int64 v28; // [rsp+60h] [rbp-68h]
  size_t v29; // [rsp+68h] [rbp-60h]
  const void *v30; // [rsp+70h] [rbp-58h]
  __int128 v31; // [rsp+78h] [rbp-50h] BYREF

  v28 = a8;
  v29 = a3;
  v30 = a2;
  v27 = 0LL;
  v26 = byte_140D1C0B0;
  v31 = 0LL;
  if ( byte_140D1C0B0 )
    Pool2 = ExAllocateFromNPagedLookasideList(&stru_140D1B700);
  else
    Pool2 = (PVOID)ExAllocatePool2(258LL, 6816LL, 1919109443LL);
  v13 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( a5 > 8 )
    goto LABEL_7;
  v15 = (unsigned __int64)Pool2 - (((unsigned __int64)Pool2 + 31) & 0xFFFFFFFFFFFFFFE0uLL) + 6816;
  SymCryptDigitsFromBits();
  v16 = SymCryptIntCreate();
  if ( !v16 )
    goto LABEL_7;
  SymCryptIntSetValue();
  v17 = SymCryptIntBitsizeOfValue();
  SymCryptIntWipe(v16);
  if ( v17 < 0x400 )
  {
    v14 = -1073740760;
    goto LABEL_30;
  }
  *(_QWORD *)((char *)&v31 + 4) = v17;
  LODWORD(v31) = 1;
  HIDWORD(v31) = 1;
  v18 = (unsigned int *)SymCryptRsakeyCreate(
                          ((unsigned __int64)v13 + 31) & 0xFFFFFFFFFFFFFFE0uLL,
                          v15,
                          (unsigned int *)&v31);
  if ( !v18 )
  {
LABEL_7:
    v14 = -1073740760;
    goto LABEL_30;
  }
  if ( !(unsigned int)SymCryptLoadMsbFirstUint64(a4, a5, &v27)
    && !(unsigned int)SymCryptRsakeySetValue(a6, a7, (__int64)&v27, 1, 0LL, 0LL, 0, 2u, 0, (__int64)v18)
    && a9 == (unsigned int)SymCryptRsakeySizeofModulus((__int64)v18) )
  {
    v19 = 0;
    if ( (a10 & 1) != 0 )
      v19 = 2;
    v20 = a1 - 32771;
    if ( !v20 )
    {
      v24 = &SymCryptMd5OidList;
      goto LABEL_28;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v24 = &SymCryptSha1OidList;
      goto LABEL_28;
    }
    v22 = v21 - 8;
    if ( !v22 )
    {
      v24 = &SymCryptSha256OidList;
      goto LABEL_28;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      v24 = &SymCryptSha384OidList;
      goto LABEL_28;
    }
    if ( v23 == 1 )
    {
      v24 = &SymCryptSha512OidList;
LABEL_28:
      v14 = (unsigned int)SymCryptRsaPkcs1Verify((__int64)v18, v30, v29, v28, a9, 2, (__int64)v24, 2uLL, v19) != 0
          ? 0xC0000428
          : 0;
      goto LABEL_29;
    }
  }
  v14 = -1073740760;
LABEL_29:
  SymCryptRsakeyWipe(v18);
LABEL_30:
  if ( v26 )
    ExFreeToNPagedLookasideList(&stru_140D1B700, v13);
  else
    ExFreePoolWithTag(v13, 0x72634943u);
  return v14;
}
