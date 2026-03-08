/*
 * XREFs of ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x180264840
 * Callers:
 *     <none>
 * Callees:
 *     exp_0 @ 0x180117704 (exp_0.c)
 *     sin_0 @ 0x180117788 (sin_0.c)
 */

double __fastcall XamlElasticInterpolation::EvaluateCurve(XamlElasticInterpolation *this, double a2)
{
  double v3; // xmm8_8
  double v4; // xmm7_8
  double v5; // xmm8_8

  if ( COERCE_FLOAT(*((_DWORD *)this + 9) & _xmm) >= 0.0000011920929 )
  {
    v4 = *((float *)this + 9);
    v5 = exp_0(v4 * a2) - 1.0;
    v3 = v5 / (exp_0(v4) - 1.0);
  }
  else
  {
    v3 = a2;
  }
  return sin_0(((double)*((int *)this + 8) * 6.283185482025146 + 1.570796370506287) * a2) * v3;
}
