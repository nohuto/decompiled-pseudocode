/*
 * XREFs of SmmGetFreeBlockFromPool @ 0x1C00703EC
 * Callers:
 *     SmmAcquireBlock @ 0x1C006FC8C (SmmAcquireBlock.c)
 * Callees:
 *     SmmRemoveBlockFromPool @ 0x1C00705E8 (SmmRemoveBlockFromPool.c)
 */

_QWORD *__fastcall SmmGetFreeBlockFromPool(_QWORD **a1, char a2, unsigned __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdx

  v3 = *a1;
  if ( *a1 == a1 )
    return 0LL;
  while ( 1 )
  {
    v6 = v3 - 2;
    v7 = v3[2] & 0xFFFFFFFFFFFFFLL;
    if ( a3 >= v7 && a3 < v7 + (1LL << a2) )
      break;
    v3 = (_QWORD *)*v3;
    if ( v3 == a1 )
      return 0LL;
  }
  SmmRemoveBlockFromPool(a1, v3 - 2);
  return v6;
}
