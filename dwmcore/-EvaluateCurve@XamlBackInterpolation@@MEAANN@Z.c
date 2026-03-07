double __fastcall XamlBackInterpolation::EvaluateCurve(XamlBackInterpolation *this, double a2)
{
  double v3; // xmm0_8

  v3 = pow_0(a2, 3.0);
  return v3 - sin_0(a2 * 3.141592741012573) * (*((float *)this + 8) * a2);
}
