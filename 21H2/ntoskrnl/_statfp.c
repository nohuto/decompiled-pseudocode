/*
 * XREFs of _statfp @ 0x1403E5CC4
 * Callers:
 *     _raise_exc_ex @ 0x1403E5930 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14042B9F0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
