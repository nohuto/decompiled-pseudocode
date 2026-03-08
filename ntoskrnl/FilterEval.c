/*
 * XREFs of FilterEval @ 0x1406CC630
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x1406CC524 (PiDqQueryEvaluateFilter.c)
 *     ConstraintEval @ 0x140747E38 (ConstraintEval.c)
 *     ValidFilter @ 0x1407483C4 (ValidFilter.c)
 * Callees:
 *     FilterEvalImpliedAnd @ 0x140761F24 (FilterEvalImpliedAnd.c)
 *     FilterEvalStrict @ 0x140762048 (FilterEvalStrict.c)
 */

__int64 __fastcall FilterEval(int a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  if ( !a3 )
    return 3221225485LL;
  if ( (*a4 & 0xFF00000) != 0 )
    return FilterEvalStrict(a1, a2, a3, (_DWORD)a4, a5);
  return FilterEvalImpliedAnd(a1, a2, a3, (_DWORD)a4, a5);
}
