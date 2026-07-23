/*
 * XREFs of _statfp @ 0x1403D6A00
 * Callers:
 *     _raise_exc_ex @ 0x1403D6640 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x140409B40 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
