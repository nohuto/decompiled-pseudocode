/*
 * XREFs of _fclrf @ 0x1403D68CA
 * Callers:
 *     _clrfp @ 0x1403D67C0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
