/*
 * XREFs of _fclrf @ 0x1C00DE5D0
 * Callers:
 *     _clrfp @ 0x1C00DE4D0 (_clrfp.c)
 * Callees:
 *     <none>
 */

void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
