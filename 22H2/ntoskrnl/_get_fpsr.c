/*
 * XREFs of _get_fpsr @ 0x14042A970
 * Callers:
 *     _clrfp @ 0x1403DDC28 (_clrfp.c)
 *     _ctrlfp @ 0x1403DDC4C (_ctrlfp.c)
 *     _set_statfp @ 0x1403DDCD0 (_set_statfp.c)
 *     _statfp @ 0x1403DDCF8 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
