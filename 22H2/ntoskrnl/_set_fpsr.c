/*
 * XREFs of _set_fpsr @ 0x1403DDD30
 * Callers:
 *     _ctrlfp @ 0x1403DDC4C (_ctrlfp.c)
 *     _set_statfp @ 0x1403DDCD0 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
