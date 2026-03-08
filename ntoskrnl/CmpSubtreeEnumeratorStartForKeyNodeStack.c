/*
 * XREFs of CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140A1DBC4
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A18A38 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140A23F00 (CmpPromoteSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140A1D8C8 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140A1DA80 (CmpSubtreeEnumeratorStart.c)
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
