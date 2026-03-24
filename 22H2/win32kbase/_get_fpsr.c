/*
 * XREFs of _get_fpsr @ 0x1C00CF890
 * Callers:
 *     _clrfp @ 0x1C00CF70C (_clrfp.c)
 *     _ctrlfp @ 0x1C00CF730 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00CF7B4 (_set_statfp.c)
 *     _statfp @ 0x1C00CF7DC (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
