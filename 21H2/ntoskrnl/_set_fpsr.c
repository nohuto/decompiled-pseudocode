/*
 * XREFs of _set_fpsr @ 0x1403D6A30
 * Callers:
 *     _ctrlfp @ 0x1403D6954 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D69D8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
