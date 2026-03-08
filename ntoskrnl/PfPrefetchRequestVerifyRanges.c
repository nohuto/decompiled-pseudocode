/*
 * XREFs of PfPrefetchRequestVerifyRanges @ 0x140765FE0
 * Callers:
 *     PfPrefetchRequestVerify @ 0x140765CC0 (PfPrefetchRequestVerify.c)
 * Callees:
 *     PfRequestRangeCheck @ 0x140765FA0 (PfRequestRangeCheck.c)
 */

__int64 __fastcall PfPrefetchRequestVerifyRanges(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  unsigned int v6; // r8d
  unsigned int v9; // edx
  unsigned int *v10; // r11
  __int64 v11; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  unsigned __int64 *v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // r9d
  unsigned __int64 v17; // r8
  __int64 v18; // rax

  v6 = *a3;
  v9 = a3[2];
  if ( !v6 )
  {
    if ( v9 )
      return 20000LL;
    return 0LL;
  }
  if ( !v9 )
    return 21000LL;
  if ( v6 > *(_DWORD *)(a2 + 32) )
    return 22000LL;
  if ( !PfRequestRangeCheck((unsigned int *)(a2 + 24), v9, 16 * v6, 8, 0) )
    return 23000LL;
  v11 = v10[2];
  v12 = 0;
  v13 = *v10;
  v14 = (unsigned __int64 *)(a1 + v11);
  v15 = 0LL;
  v16 = 0;
  if ( !v13 )
    return 0LL;
  while ( 1 )
  {
    v17 = *v14;
    if ( *v14 < v15 )
      break;
    if ( ((a4 - 1) & (unsigned int)v17) != 0 )
      return 24500LL;
    v18 = *((unsigned int *)v14 + 2);
    v15 = v17 + v18;
    if ( v17 + v18 < v17 )
      return 24750LL;
    if ( !(_DWORD)v18 )
      return 25000LL;
    if ( ((unsigned int)v18 >> 12) + v12 + 2 < v12 )
      return 26000LL;
    ++v16;
    v14 += 2;
    v12 += ((unsigned int)v18 >> 12) + 2;
    if ( v16 >= v13 )
      return 0LL;
  }
  return 24000LL;
}
