/*
 * XREFs of HalpTimerClearProblem @ 0x140506994
 * Callers:
 *     HalpSetTimerAnyMode @ 0x1405068F0 (HalpSetTimerAnyMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerClearProblem(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( HalpTimerLastProblem == a2 )
    HalpTimerLastProblem = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 252) == a2 )
    {
      *(_QWORD *)(a1 + 252) = 0LL;
      *(_QWORD *)(a1 + 264) = 0LL;
    }
  }
  return result;
}
