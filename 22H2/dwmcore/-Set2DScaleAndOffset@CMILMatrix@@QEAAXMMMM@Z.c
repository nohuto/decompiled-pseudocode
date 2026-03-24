/*
 * XREFs of ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1802115D8
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013B98 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Set2DScaleAndOffset(CMILMatrix *this, float a2, float a3, float a4, float a5)
{
  char v5; // al

  *(float *)this = a2;
  *((float *)this + 13) = a5;
  *((float *)this + 12) = a4;
  *(_QWORD *)((char *)this + 60) = 1065353216LL;
  *((float *)this + 5) = a3;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 32) = 32064;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - 1.0) & _xmm) >= 0.000081380211
    || (v5 = 84, COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 - 1.0) & _xmm) >= 0.000081380211) )
  {
    v5 = 124;
  }
  *((_BYTE *)this + 64) = v5;
}
