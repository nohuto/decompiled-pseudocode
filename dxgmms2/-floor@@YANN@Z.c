double __fastcall floor(double a1)
{
  int v1; // eax

  v1 = (int)a1;
  if ( a1 < 0.0 )
    return (double)((int)((double)(1 - v1) + a1) - (1 - v1));
  return (double)v1;
}
