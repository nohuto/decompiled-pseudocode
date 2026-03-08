/*
 * XREFs of I_MinCryptFindIssuerCertificateByName @ 0x140A6C8E0
 * Callers:
 *     MinCryptCheckCertsAndKeys @ 0x140674F10 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     I_MinCryptGetCertificateEKUs @ 0x140A6CAE0 (I_MinCryptGetCertificateEKUs.c)
 *     I_MinCryptCheckEKURequirements @ 0x140A6DC80 (I_MinCryptCheckEKURequirements.c)
 */

__int64 __fastcall I_MinCryptFindIssuerCertificateByName(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  SIZE_T v5; // r15
  const void *v7; // rax
  unsigned int v10; // edi
  const void **i; // rsi
  const void *v13; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF

  v5 = *a1;
  v7 = (const void *)*((_QWORD *)a1 + 1);
  v13 = v7;
  if ( !(_DWORD)v5 )
    return 0LL;
  v10 = 0;
  if ( !a2 )
    return 0LL;
  for ( i = (const void **)(a3 + 168); (_DWORD)v5 != *((_DWORD *)i - 2); i += 30 )
  {
LABEL_12:
    if ( ++v10 >= a2 )
      return 0LL;
  }
  if ( RtlCompareMemory(v7, *i, v5) != v5 )
  {
LABEL_11:
    v7 = v13;
    goto LABEL_12;
  }
  if ( a4 && a5 && (*(_DWORD *)(a4 + 4) & 1) != 0 )
  {
    v14 = 50;
    if ( (int)I_MinCryptGetCertificateEKUs(a3 + 240LL * v10 + 224, &v14, a5) >= 0
      && (unsigned __int8)I_MinCryptCheckEKURequirements(v14, a5, a4) )
    {
      return a3 + 240LL * v10;
    }
    goto LABEL_11;
  }
  return a3 + 240LL * v10;
}
