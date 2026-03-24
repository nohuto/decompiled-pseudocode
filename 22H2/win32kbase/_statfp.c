/*
 * XREFs of _statfp @ 0x1C00CF7DC
 * Callers:
 *     _raise_exc_ex @ 0x1C00CF450 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C00CF890 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
