/*
 * XREFs of ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18021EFC8
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18002E360 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

bool __fastcall CComponentTransform2D::IsIdentity(CComponentTransform2D *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((float *)this + 40) == 0.0
    && *((float *)this + 41) == 0.0
    && *((float *)this + 46) == 1.0
    && *((float *)this + 47) == 1.0
    && *((float *)this + 48) == 0.0
    && *((float *)this + 44) == 0.0
    && *((float *)this + 45) == 0.0 )
  {
    return D2D1::Matrix3x2F::IsIdentity((CComponentTransform2D *)((char *)this + 196));
  }
  return v1;
}
