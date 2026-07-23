/*
 * XREFs of _get_fpsr @ 0x140409B40
 * Callers:
 *     _clrfp @ 0x1403D6930 (_clrfp.c)
 *     _ctrlfp @ 0x1403D6954 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D69D8 (_set_statfp.c)
 *     _statfp @ 0x1403D6A00 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
