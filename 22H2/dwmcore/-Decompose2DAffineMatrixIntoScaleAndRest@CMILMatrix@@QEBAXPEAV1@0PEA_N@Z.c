/*
 * XREFs of ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180011914
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18000F2AC (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801AE1B4 (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071B00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DBE0 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800B5084 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB9D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E8FC4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

void __fastcall CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest(
        CMILMatrix *this,
        struct CMILMatrix *a2,
        struct CMILMatrix *a3,
        bool *a4)
{
  CMILMatrix *v8; // rcx
  bool v9; // al
  CMILMatrix *v10; // rcx
  float v11; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF

  CMILMatrix::Get2DScaleDimensions(this, &v12, &v11);
  CMILMatrix::SetToIdentity(a2);
  CMILMatrix::Scale(v8, v12, v11, 1.0);
  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
  *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 16);
  v9 = CMILMatrix::Invert(a3);
  *a4 = v9;
  if ( v9 )
    CMILMatrix::Multiply(v10, this);
}
