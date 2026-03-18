/*
 * XREFs of CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140A20924
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A1B788 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140A26C60 (CmpPromoteSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140A20628 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140A207E0 (CmpSubtreeEnumeratorStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *a2);
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKeyNodeStack(a1, a2);
    return 0LL;
  }
  return result;
}
