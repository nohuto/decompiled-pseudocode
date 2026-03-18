/*
 * XREFs of _statfp @ 0x1403DDCF8
 * Callers:
 *     _raise_exc_ex @ 0x1403DD960 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14042A970 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
