/*
 * XREFs of _fclrf @ 0x1403D6A3A
 * Callers:
 *     _clrfp @ 0x1403D6930 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
