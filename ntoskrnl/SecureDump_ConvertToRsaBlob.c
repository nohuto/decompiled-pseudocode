/*
 * XREFs of SecureDump_ConvertToRsaBlob @ 0x14055B6F0
 * Callers:
 *     SecureDump_ValidateAmeCertChain @ 0x14055C3D0 (SecureDump_ValidateAmeCertChain.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SecureDump_ConvertParsedRSAPubKeyToBCryptPubKey @ 0x14055B5F8 (SecureDump_ConvertParsedRSAPubKeyToBCryptPubKey.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x140A6D938 (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x140A6D980 (MinAsn1ParseRSAPublicKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ConvertToRsaBlob(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  _DWORD *Pool2; // rax
  void *v5; // rbx
  _BYTE v7[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v9[64]; // [rsp+60h] [rbp-58h] BYREF

  v3 = -1073739510;
  if ( (int)MinAsn1ParsePublicKeyInfo(a1, v7) >= 0 && (int)MinAsn1ParseRSAPublicKey(v8, v9) >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 540LL, 1886217299LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      v3 = SecureDump_ConvertParsedRSAPubKeyToBCryptPubKey((__int64)v9, Pool2);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0);
      else
        *a2 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
