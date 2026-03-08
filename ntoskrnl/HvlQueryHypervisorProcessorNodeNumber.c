/*
 * XREFs of HvlQueryHypervisorProcessorNodeNumber @ 0x14053DC90
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1403C8E08 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryHypervisorProcessorNodeNumber(unsigned int a1)
{
  int *LpcbByLpIndex; // rax
  _WORD *v2; // r10

  if ( (HvlpFlags & 2) == 0 )
    return 3221225473LL;
  if ( a1 >= 0x400 )
    return 3221225473LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  if ( !LpcbByLpIndex )
    return 3221225473LL;
  *v2 = *((_WORD *)LpcbByLpIndex + 7);
  return 0LL;
}
