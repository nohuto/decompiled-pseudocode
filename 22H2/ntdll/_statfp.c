/*
 * XREFs of _statfp @ 0x1800958F0
 * Callers:
 *     _raise_exc_ex @ 0x1800952E0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800A4310 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
