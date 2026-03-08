/*
 * XREFs of MinCryptCheckCertsAndKeys @ 0x140674F10
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MinCryptVerifySignedHash @ 0x140A6C678 (MinCryptVerifySignedHash.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140A6C8E0 (I_MinCryptFindIssuerCertificateByName.c)
 *     MinAsn1ParseCertificate @ 0x140A6D7E0 (MinAsn1ParseCertificate.c)
 */

__int64 __fastcall MinCryptCheckCertsAndKeys(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6,
        int a7,
        int a8)
{
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  __int64 IssuerCertificateByName; // rax
  void *v19[30]; // [rsp+30h] [rbp-138h] BYREF

  v13 = -1073740760;
  memset(v19, 0, sizeof(v19));
  v14 = 0;
  v15 = 0;
  if ( a6 )
  {
    while ( 1 )
    {
      if ( (int)MinAsn1ParseCertificate(*((_QWORD *)a5 + 1), *a5, v19) >= 0 )
      {
        v16 = *(_DWORD *)(a4 + 16);
        if ( LODWORD(v19[2]) == v16 && !memcmp(v19[3], *(const void **)(a4 + 24), v16) )
          return v14;
        IssuerCertificateByName = I_MinCryptFindIssuerCertificateByName((int)a4 + 112, 1, (unsigned int)v19, 0, 0LL);
        if ( IssuerCertificateByName )
          return (unsigned int)MinCryptVerifySignedHash(a1, a2, a3, (int)a4 + 64, IssuerCertificateByName + 176);
      }
      ++v15;
      a5 += 4;
      if ( v15 >= a6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( a8 )
      return (unsigned int)-1073741822;
    return v13;
  }
}
