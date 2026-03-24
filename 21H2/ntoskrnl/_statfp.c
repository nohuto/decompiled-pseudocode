/*
 * XREFs of _statfp @ 0x1403D6890
 * Callers:
 *     _raise_exc_ex @ 0x1403D64D0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x140409960 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
