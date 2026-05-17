/*
 * XREFs of _get_fpsr @ 0x1800A4310
 * Callers:
 *     _control87 @ 0x180094400 (_control87.c)
 *     _clrfp @ 0x180095820 (_clrfp.c)
 *     _ctrlfp @ 0x180095844 (_ctrlfp.c)
 *     _set_statfp @ 0x1800958C8 (_set_statfp.c)
 *     _statfp @ 0x1800958F0 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
