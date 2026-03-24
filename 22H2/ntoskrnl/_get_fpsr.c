/*
 * XREFs of _get_fpsr @ 0x140408FE0
 * Callers:
 *     _clrfp @ 0x1403D60C0 (_clrfp.c)
 *     _ctrlfp @ 0x1403D60E4 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D6168 (_set_statfp.c)
 *     _statfp @ 0x1403D6190 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
