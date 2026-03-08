/*
 * XREFs of ?IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z @ 0x1801FA178
 * Callers:
 *     ?CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z @ 0x1801F9208 (-CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBrushDrawListGenerator::IsRatioWithinThresholdF(float a1, float a2)
{
  float v2; // xmm1_4
  double v3; // xmm2_8

  if ( COERCE_FLOAT(LODWORD(a1) & _xmm) < 0.0000011920929 )
  {
    if ( COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929 )
      return 1;
    v2 = a1 / a2;
  }
  else
  {
    v2 = a2 / a1;
  }
  v3 = COERCE_FLOAT(LODWORD(v2) & _xmm);
  return v3 > 0.000009999999747378752 && v3 < 100000.0;
}
