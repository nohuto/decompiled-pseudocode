/*
 * XREFs of _get_fpsr @ 0x1C00CF730
 * Callers:
 *     _clrfp @ 0x1C00CF5AC (_clrfp.c)
 *     _ctrlfp @ 0x1C00CF5D0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00CF654 (_set_statfp.c)
 *     _statfp @ 0x1C00CF67C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
