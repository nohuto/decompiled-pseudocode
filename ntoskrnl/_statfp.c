/*
 * XREFs of _statfp @ 0x1403D87D8
 * Callers:
 *     _raise_exc_ex @ 0x1403D8440 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1404225E0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
