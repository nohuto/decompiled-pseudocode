/*
 * XREFs of IvtInitializeLargePagePte @ 0x14052ADD0
 * Callers:
 *     IvtInitializeIdentityMappings @ 0x14052ABF4 (IvtInitializeIdentityMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall IvtInitializeLargePagePte(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 result; // rax

  v4 = 1LL << a3;
  v6 = 512LL;
  do
  {
    v7 = 1LL;
    v8 = *a1 | 0x80;
    v9 = 2LL;
    if ( a3 == 30 )
    {
      do
      {
        v8 |= v7++;
        --v9;
      }
      while ( v9 );
      v10 = 0xFFFFFC0000000LL;
      v11 = a2 & 0xFFFFFFFFC0000000uLL;
    }
    else
    {
      do
      {
        v8 |= v7++;
        --v9;
      }
      while ( v9 );
      v10 = 0xFFFFFFFE00000LL;
      v11 = a2 >> a3 << 21;
    }
    a2 += v4;
    result = v8 ^ v10 & (v8 ^ v11);
    *a1++ = result;
    --v6;
  }
  while ( v6 );
  return result;
}
