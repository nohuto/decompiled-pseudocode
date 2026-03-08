/*
 * XREFs of MinCryptIsCertPresent @ 0x14067503C
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

__int64 __fastcall MinCryptIsCertPresent(const void **a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v7; // r14d
  unsigned int v8; // eax

  v3 = 0;
  if ( !a3 )
    return 0LL;
  v7 = *(_DWORD *)a1;
  while ( 1 )
  {
    v8 = *(_DWORD *)(a2 + 16LL * v3);
    if ( v7 == v8 && !memcmp(a1[1], *(const void **)(a2 + 16LL * v3 + 8), v8) )
      break;
    if ( ++v3 >= a3 )
      return 0LL;
  }
  return 1LL;
}
