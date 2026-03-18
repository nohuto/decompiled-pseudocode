/*
 * XREFs of _set_fpsr @ 0x1403E5CF0
 * Callers:
 *     _ctrlfp @ 0x1403E5C18 (_ctrlfp.c)
 *     _set_statfp @ 0x1403E5C9C (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
