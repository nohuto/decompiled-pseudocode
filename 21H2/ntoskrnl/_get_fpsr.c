/*
 * XREFs of _get_fpsr @ 0x140409960
 * Callers:
 *     _clrfp @ 0x1403D67C0 (_clrfp.c)
 *     _ctrlfp @ 0x1403D67E4 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D6868 (_set_statfp.c)
 *     _statfp @ 0x1403D6890 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
