/*
 * XREFs of FilterEval @ 0x140788970
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140788864 (PiDqQueryEvaluateFilter.c)
 *     ConstraintEval @ 0x1407FB848 (ConstraintEval.c)
 *     ValidFilter @ 0x1407FBFE0 (ValidFilter.c)
 * Callees:
 *     FilterEvalStrict @ 0x14078A088 (FilterEvalStrict.c)
 *     FilterEvalImpliedAnd @ 0x14078DB48 (FilterEvalImpliedAnd.c)
 */

__int64 __fastcall FilterEval(int a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (_DWORD)a4, a5);
  return FilterEvalImpliedAnd(a1, a2, a3, (_DWORD)a4, a5);
}
