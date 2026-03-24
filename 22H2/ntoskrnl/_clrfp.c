/*
 * XREFs of _clrfp @ 0x1403D60C0
 * Callers:
 *     _raise_exc_ex @ 0x1403D5DD0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1403D61CA (_fclrf.c)
 *     _get_fpsr @ 0x140408FE0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
