/*
 * XREFs of CmpSubtreeEnumeratorStartForKcbStack @ 0x140876828
 * Callers:
 *     CmpPromoteSubtree @ 0x14072A0A8 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14072A620 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 * Callees:
 *     CmpSubtreeEnumeratorStart @ 0x14072AF4C (CmpSubtreeEnumeratorStart.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140876748 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKcbStack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *(_WORD *)(a2 + 2), a3, a4);
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKcbStack(a1, a2);
    return 0LL;
  }
  return result;
}
