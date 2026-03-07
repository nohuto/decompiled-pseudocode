float __cdecl sqrtf(float X)
{
  float result; // xmm0_4

  if ( (LODWORD(X) & 0x7F800000) != 0x7F800000 )
  {
LABEL_7:
    if ( (LODWORD(X) & 0x7FFFFFFF) == 0 || X >= 0.0 )
      return fsqrt(X);
LABEL_6:
    result = 0.0;
    handle_errorf((unsigned int)"sqrtf", 5, -4194304, 1, 8, 33, LODWORD(X), 0, 1);
    return result;
  }
  if ( (LODWORD(X) & 0x7FFFFF) == 0 )
  {
    if ( X < 0.0 )
      goto LABEL_6;
    goto LABEL_7;
  }
  result = 0.0;
  handle_errorf((unsigned int)"sqrtf", 5, LODWORD(X) | 0x400000, 1, 0, 33, LODWORD(X), 0, 1);
  return result;
}
