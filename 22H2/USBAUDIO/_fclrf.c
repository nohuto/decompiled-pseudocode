/*
 * XREFs of _fclrf @ 0x1C00128BA
 * Callers:
 *     _clrfp @ 0x1C00127BC (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
