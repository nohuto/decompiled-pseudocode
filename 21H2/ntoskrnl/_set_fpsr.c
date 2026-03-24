/*
 * XREFs of _set_fpsr @ 0x1403D68C0
 * Callers:
 *     _ctrlfp @ 0x1403D67E4 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D6868 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
