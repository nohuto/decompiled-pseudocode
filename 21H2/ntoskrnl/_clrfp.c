/*
 * XREFs of _clrfp @ 0x1403D67C0
 * Callers:
 *     _raise_exc_ex @ 0x1403D64D0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1403D68CA (_fclrf.c)
 *     _get_fpsr @ 0x140409960 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
