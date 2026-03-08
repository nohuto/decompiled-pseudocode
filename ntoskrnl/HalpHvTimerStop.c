/*
 * XREFs of HalpHvTimerStop @ 0x1403CFBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HalpHvTimerStop(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax

  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  *(_QWORD *)(a1 + 24 * v1) &= ~1uLL;
  result = *(_QWORD *)(a1 + 24 * v1);
  __writemsr(0x400000B0u, result);
  return result;
}
