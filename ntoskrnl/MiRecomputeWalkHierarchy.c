/*
 * XREFs of MiRecomputeWalkHierarchy @ 0x140224510
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRecomputeWalkHierarchy(_DWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // r9
  unsigned __int64 *v6; // r11
  __int64 v7; // r10
  unsigned __int64 *v8; // r8
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // r10

  result = a2;
  v5 = a3;
  if ( (*a1 & 0x4000) == 0 || (v6 = (unsigned __int64 *)&a1[4 * a3 + 20], a2 > *v6) )
  {
    v6 = (unsigned __int64 *)&a1[4 * a3 + 20];
    *v6 = a2;
  }
  if ( a3 < 3LL )
  {
    v7 = 3LL - a3;
    v8 = v6 + 2;
    do
    {
      result = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *v8 = result;
      v8 += 2;
      --v7;
    }
    while ( v7 );
  }
  if ( v5 )
  {
    v9 = v6 - 2;
    do
    {
      v10 = (__int64)(a2 << 25) >> 16;
      if ( (*a1 & 0x4000) == 0 || (a2 = *v9, v10 > *v9) )
      {
        a2 = v10;
        *v9 = v10;
      }
      v9 -= 2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
