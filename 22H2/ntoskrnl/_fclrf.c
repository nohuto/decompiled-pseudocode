/*
 * XREFs of _fclrf @ 0x1403DDD40
 * Callers:
 *     _clrfp @ 0x1403DDC28 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
