/*
 * XREFs of ?Is3D@CMILMatrix@@QEBA_NXZ @ 0x1800DFF1C
 * Callers:
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x1800DFED0 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180059E30 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CMILMatrix::Is3D(CMILMatrix *this)
{
  bool v1; // al
  __int64 v2; // r10
  char v3; // dl

  v1 = CMILMatrix::ProducesUniformZ<1>((__int64)this);
  v3 = 0;
  if ( !v1 || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v2 + 56) - 0.0) & _xmm) >= 0.000081380211 )
    return 1;
  return v3;
}
