/*
 * XREFs of HalpTimerSetSkip @ 0x140409CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KPCR *__fastcall HalpTimerSetSkip(char a1)
{
  KPCR *result; // rax

  result = KeGetPcr();
  BYTE2(result->HalReserved[5]) = a1;
  return result;
}
