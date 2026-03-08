/*
 * XREFs of ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18007F070
 * Callers:
 *     ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18007F000 (-GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ @ 0x18007F050 (-AllowsOcclusion@CRoundedRectangleShape@@UEBA_NXZ.c)
 *     ?EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ @ 0x1800D2F98 (-EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRoundedRectangleGeometryData::HasIntersectingCorners(CRoundedRectangleGeometryData *this)
{
  float v1; // xmm3_4
  char result; // al
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4

  v1 = *((float *)this + 1);
  result = 0;
  v3 = *(float *)this;
  if ( *((_BYTE *)this + 52) )
  {
    v4 = v3 + *((float *)this + 2);
    v5 = v1 + *((float *)this + 3);
  }
  else
  {
    v4 = *((float *)this + 2);
    v5 = *((float *)this + 3);
  }
  v6 = v4 - v3;
  if ( *((_BYTE *)this + 52) )
  {
    if ( (float)(*((float *)this + 4) + *((float *)this + 4)) <= v6 )
    {
      v7 = v5 - v1;
      v8 = *((float *)this + 5) + *((float *)this + 5);
LABEL_8:
      if ( v8 <= v7 )
        return result;
    }
  }
  else if ( (float)(*((float *)this + 6) + *((float *)this + 4)) <= v6
         && (float)(*((float *)this + 10) + *((float *)this + 8)) <= v6 )
  {
    v7 = v5 - v1;
    if ( (float)(*((float *)this + 11) + *((float *)this + 5)) <= v7 )
    {
      v8 = *((float *)this + 9) + *((float *)this + 7);
      goto LABEL_8;
    }
  }
  return 1;
}
