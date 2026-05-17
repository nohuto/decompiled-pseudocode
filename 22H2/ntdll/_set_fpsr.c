/*
 * XREFs of _set_fpsr @ 0x180096820
 * Callers:
 *     _control87 @ 0x180094400 (_control87.c)
 *     _ctrlfp @ 0x180095844 (_ctrlfp.c)
 *     _set_statfp @ 0x1800958C8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
