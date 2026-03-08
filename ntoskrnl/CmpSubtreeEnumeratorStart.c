/*
 * XREFs of CmpSubtreeEnumeratorStart @ 0x140A1DA80
 * Callers:
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140A1DB88 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140A1DBC4 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpStartKcbStack @ 0x1407AF450 (CmpStartKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140A1D5E8 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140A21424 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStart @ 0x140A2158C (CmpKeyEnumStackStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStart(__int64 a1, __int16 a2)
{
  __int64 Pool; // rax
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  _WORD *v7; // rbx
  __int16 v8; // bx
  __int64 v9; // rsi

  *(_WORD *)(a1 + 2) = a2;
  Pool = CmpAllocatePool(256LL, 208896LL, 825838915LL);
  *(_QWORD *)(a1 + 96) = Pool;
  if ( !Pool )
    return 3221225626LL;
  v5 = 0LL;
  v6 = 512LL;
  do
  {
    v7 = (_WORD *)(v5 + *(_QWORD *)(a1 + 96));
    memset(v7, 0, 0x198uLL);
    v7[13] = -1;
    CmpKeyEnumStackInitialize(v7 + 28);
    v5 += 408LL;
    --v6;
  }
  while ( v6 );
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 96) + 408LL * v8;
    result = CmpStartKcbStack(v9 + 24, *(_WORD *)(a1 + 2));
    if ( (int)result < 0 )
      break;
    result = CmpKeyEnumStackStart(v9 + 56, *(unsigned __int16 *)(a1 + 2));
    if ( (int)result < 0 )
      break;
    if ( ++v8 >= 512 )
      return CmpStartKeyNodeStack(a1 + 16, *(_WORD *)(a1 + 2));
  }
  return result;
}
