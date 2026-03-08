/*
 * XREFs of ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800D3228
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800D303C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18007F820 (-AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800836C0 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CRoundedRectangleGeometryData::IsEllipse(CRoundedRectangleGeometryData *this)
{
  CRoundedRectangleGeometryData *v1; // rcx
  char v2; // al
  __int64 v3; // rcx
  char v4; // dl
  float v6[4]; // [rsp+20h] [rbp-28h] BYREF

  CRoundedRectangleGeometryData::GetBaseRect((__int64)this, (__int64)v6);
  v2 = CRoundedRectangleGeometryData::AreAllCornerRadiiEqual(v1);
  v4 = 0;
  if ( v2
    && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v6[2] - v6[0]) - (float)(*(float *)(v3 + 16) + *(float *)(v3 + 16))) & _xmm) <= 0.0000011920929 )
  {
    return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v6[3] - v6[1]) - (float)(*(float *)(v3 + 20) + *(float *)(v3 + 20))) & _xmm) <= 0.0000011920929;
  }
  return v4;
}
