double __fastcall frnd(double result)
{
  if ( result < 9.007199254740991e15 && result > -9.007199254740991e15 )
    return (double)(int)result;
  return result;
}
