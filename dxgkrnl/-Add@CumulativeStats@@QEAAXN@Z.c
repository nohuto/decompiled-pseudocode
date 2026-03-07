void __fastcall CumulativeStats::Add(CumulativeStats *this, double a2)
{
  double v2; // xmm0_8

  ++*(_DWORD *)this;
  *((double *)this + 3) = a2 + *((double *)this + 3);
  v2 = *((double *)this + 1);
  *((double *)this + 4) = a2 * a2 + *((double *)this + 4);
  if ( v2 > a2 )
    *((double *)this + 1) = a2;
  if ( a2 > *((double *)this + 2) )
    *((double *)this + 2) = a2;
}
