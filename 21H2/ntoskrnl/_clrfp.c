/*
 * XREFs of _clrfp @ 0x1403D6930
 * Callers:
 *     _raise_exc_ex @ 0x1403D6640 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1403D6A3A (_fclrf.c)
 *     _get_fpsr @ 0x140409B40 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
