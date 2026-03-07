double __fastcall XamlBounceInterpolation::EvaluateCurve(XamlBounceInterpolation *this, double a2)
{
  double v2; // xmm11_8
  double v3; // xmm12_8
  double v4; // xmm7_8
  double v5; // xmm7_8
  double v6; // xmm6_8
  double v7; // xmm0_8
  double v8; // xmm8_8
  double v9; // xmm10_8
  double v10; // xmm6_8
  double v11; // xmm7_8

  v2 = (double)*((int *)this + 8);
  v3 = *((float *)this + 9);
  v4 = (1.0 - pow_0(v3, v2)) / (1.0 - v3);
  v5 = v4 + pow_0(v3, v2) * 0.5;
  v6 = log_0(1.0 - v5 * a2 * (1.0 - v3));
  v7 = log_0(v3);
  v8 = floor_0(v6 / v7);
  v9 = (1.0 - v3) * v5;
  v10 = (1.0 - pow_0(v3, v8)) / v9;
  v11 = ((1.0 - pow_0(v3, v8 + 1.0)) / v9 - v10) * 0.5;
  return (a2 - (v11 + v10) - v11)
       * (COERCE_DOUBLE(COERCE_UNSIGNED_INT64(1.0 / pow_0(v3, v2 - v8)) ^ _xmm)
        / (v11
         * v11))
       * (a2 - (v11 + v10) + v11);
}
