/*
 * XREFs of _clrfp @ 0x1403DDC28
 * Callers:
 *     _raise_exc_ex @ 0x1403DD960 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1403DDD40 (_fclrf.c)
 *     _get_fpsr @ 0x14042A970 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
