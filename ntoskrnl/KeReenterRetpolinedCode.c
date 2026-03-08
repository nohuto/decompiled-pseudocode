/*
 * XREFs of KeReenterRetpolinedCode @ 0x14040ACB0
 * Callers:
 *     <none>
 * Callees:
 *     KxReenterRetpolinedCode @ 0x140571938 (KxReenterRetpolinedCode.c)
 */

unsigned __int8 KeReenterRetpolinedCode()
{
  unsigned __int8 result; // al

  result = KeGetPcr()->Prcb.BpbRetpolineState;
  if ( (result & 1) != 0 )
    return KxReenterRetpolinedCode();
  return result;
}
