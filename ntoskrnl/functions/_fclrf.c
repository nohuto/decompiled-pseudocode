void fclrf()
{
  _mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}
