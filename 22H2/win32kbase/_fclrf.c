/*
 * XREFs of _fclrf @ 0x1C00CF80A
 * Callers:
 *     _clrfp @ 0x1C00CF70C (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
