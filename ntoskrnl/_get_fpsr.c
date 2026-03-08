/*
 * XREFs of _get_fpsr @ 0x1404225E0
 * Callers:
 *     _clrfp @ 0x1403D8708 (_clrfp.c)
 *     _ctrlfp @ 0x1403D872C (_ctrlfp.c)
 *     _set_statfp @ 0x1403D87B0 (_set_statfp.c)
 *     _statfp @ 0x1403D87D8 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
