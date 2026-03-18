/*
 * XREFs of _get_fpsr @ 0x1C00DE690
 * Callers:
 *     _clrfp @ 0x1C00DE4D0 (_clrfp.c)
 *     _ctrlfp @ 0x1C00DE4F4 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00DE578 (_set_statfp.c)
 *     _statfp @ 0x1C00DE5A0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
