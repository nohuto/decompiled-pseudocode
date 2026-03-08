/*
 * XREFs of I_MinCryptCheckEKU @ 0x140A6C868
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6CBC8 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

char __fastcall I_MinCryptCheckEKU(const void **a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  size_t v7; // rbp

  v3 = 0;
  if ( !a2 )
    return 0;
  v7 = *(unsigned int *)a1;
  while ( *(_DWORD *)(a3 + 16LL * v3) != (_DWORD)v7 || memcmp(*(const void **)(a3 + 16LL * v3 + 8), a1[1], v7) )
  {
    if ( ++v3 >= a2 )
      return 0;
  }
  return 1;
}
