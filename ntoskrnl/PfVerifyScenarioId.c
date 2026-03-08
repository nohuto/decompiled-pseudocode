/*
 * XREFs of PfVerifyScenarioId @ 0x1407E360C
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x1407E0090 (PfVerifyScenarioBuffer.c)
 *     PfVerifyTraceBuffer @ 0x1407E3490 (PfVerifyTraceBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfVerifyScenarioId(__int64 a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 29;
  for ( i = 29LL; i >= 0; --i )
  {
    if ( !*(_WORD *)(a1 + 2 * i) )
      break;
    --v1;
  }
  return v1 > 0;
}
