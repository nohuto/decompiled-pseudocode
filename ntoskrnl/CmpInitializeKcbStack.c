/*
 * XREFs of CmpInitializeKcbStack @ 0x14078361C
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitializeKcbStack(__int64 a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 2) = -1;
  return result;
}
