/*
 * XREFs of PoFxQueryCurrentComponentPerfState @ 0x140585C10
 * Callers:
 *     <none>
 * Callees:
 *     PopFxQueryCurrentComponentPerfState @ 0x1405890BC (PopFxQueryCurrentComponentPerfState.c)
 */

__int64 __fastcall PoFxQueryCurrentComponentPerfState(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5)
{
  __int64 v5; // rdx

  if ( a2 )
    return 3221225485LL;
  if ( a3 >= *(_DWORD *)(a1 + 828) )
    return 3221225485LL;
  _mm_lfence();
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * a3);
  if ( !*(_QWORD *)(v5 + 424) )
    return 3221225485LL;
  PopFxQueryCurrentComponentPerfState(a1, v5, a4, 0, a5, 0LL);
  return 0LL;
}
