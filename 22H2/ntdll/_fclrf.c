/*
 * XREFs of _fclrf @ 0x18009682A
 * Callers:
 *     _clrfp @ 0x180095820 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
