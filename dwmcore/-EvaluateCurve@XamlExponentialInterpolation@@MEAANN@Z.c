double __fastcall XamlExponentialInterpolation::EvaluateCurve(XamlExponentialInterpolation *this, double a2)
{
  double v2; // xmm8_8
  double v3; // xmm7_8
  double v4; // xmm8_8

  v2 = a2;
  if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) >= 0.0000011920929 )
  {
    v3 = *((float *)this + 8);
    v4 = exp_0(v3 * a2) - 1.0;
    return v4 / (exp_0(v3) - 1.0);
  }
  return v2;
}
