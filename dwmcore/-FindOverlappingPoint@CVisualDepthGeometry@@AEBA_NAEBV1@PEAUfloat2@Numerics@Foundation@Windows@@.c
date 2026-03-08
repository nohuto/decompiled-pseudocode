/*
 * XREFs of ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180009998
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x180008BB8 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 * Callees:
 *     ?ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z @ 0x1800079DC (-ContainsPoint@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@_N@Z.c)
 *     ?IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180009AA0 (-IsPointOnPolygonBorder@CVisualDepthGeometry@@AEBA_NAEBUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x180267790 (-Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z.c)
 */

bool __fastcall CVisualDepthGeometry::FindOverlappingPoint(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  unsigned int v3; // xmm4_4
  unsigned int v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  char v9; // r8
  float v10; // xmm4_4
  float v11; // xmm5_4
  bool result; // al
  int v13; // xmm5_4
  int v14; // ebx
  __int64 v15; // rdi
  const struct CLineSegment *v16; // rax
  int *v17; // r15
  __int64 v18; // r12
  CLineSegment *v19; // r13
  const struct CLineSegment *v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22; // r9
  __int64 v23; // r10
  int v24; // xmm1_4
  char v25; // r8
  int v26; // xmm1_4
  __int64 i; // rax
  unsigned __int64 v28; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-D0h]
  __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  struct Windows::Foundation::Numerics::float2 *v32; // [rsp+48h] [rbp-C0h]
  float v33[48]; // [rsp+58h] [rbp-B0h]

  v3 = *((_DWORD *)a2 + 37);
  v5 = *((_DWORD *)a2 + 38);
  v6 = 0.0;
  v32 = a3;
  v7 = 0.0;
  v29 = 0LL;
  v28 = __PAIR64__(v5, v3);
  if ( CVisualDepthGeometry::ContainsPoint(this, (const struct Windows::Foundation::Numerics::float2 *)&v28, 0)
    || (v13 = *((_DWORD *)this + 38),
        LODWORD(v28) = *((_DWORD *)this + 37),
        HIDWORD(v28) = v13,
        CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v28, v9)) )
  {
    v29 = __PAIR64__(LODWORD(v11), LODWORD(v10));
    v7 = v11;
    v6 = v10;
    if ( !CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v29)
      && !CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v29) )
    {
      goto LABEL_4;
    }
  }
  v14 = 0;
  v30 = 4LL;
  v15 = 0LL;
  v16 = (const struct CVisualDepthGeometry *)((char *)a2 + 84);
  v17 = (int *)((char *)this + 40);
  v18 = a2 - this;
  v19 = (CVisualDepthGeometry *)((char *)this + 84);
  do
  {
    v20 = v16;
    do
    {
      if ( CLineSegment::Intersects(v19, v20, (struct Windows::Foundation::Numerics::float2 *)&v31) )
      {
        ++v14;
        ++v15;
        *v22 = v31;
      }
      v20 = (const struct CLineSegment *)(v21 + 16);
    }
    while ( v23 != 1 );
    v24 = *v17;
    LODWORD(v28) = *(v17 - 1);
    HIDWORD(v28) = v24;
    if ( CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v28, 1) )
    {
      ++v14;
      *(_QWORD *)&v33[2 * v15++] = v28;
    }
    v26 = *(int *)((char *)v17 + v18);
    LODWORD(v28) = *(int *)((char *)v17 + v18 - 4);
    HIDWORD(v28) = v26;
    if ( CVisualDepthGeometry::ContainsPoint(this, (const struct Windows::Foundation::Numerics::float2 *)&v28, v25) )
    {
      ++v14;
      *(_QWORD *)&v33[2 * v15++] = v28;
    }
    v19 = (CLineSegment *)((char *)v19 + 16);
    v16 = (const struct CVisualDepthGeometry *)((char *)a2 + 84);
    v17 += 3;
    --v30;
  }
  while ( v30 );
  if ( v14 <= 0 )
  {
    if ( !v14 )
      return 0;
  }
  else
  {
    for ( i = 0LL; i < v14; v7 = v7 + v33[2 * i++ + 1] )
      v6 = v6 + v33[2 * i];
    *(float *)&v29 = v6 * (float)(1.0 / (float)v14);
    *((float *)&v29 + 1) = v7 * (float)(1.0 / (float)v14);
  }
  if ( !CVisualDepthGeometry::IsPointOnPolygonBorder(this, (const struct Windows::Foundation::Numerics::float2 *)&v29)
    && !CVisualDepthGeometry::IsPointOnPolygonBorder(a2, (const struct Windows::Foundation::Numerics::float2 *)&v29) )
  {
LABEL_4:
    result = 1;
    *(_QWORD *)v32 = v29;
    return result;
  }
  return 0;
}
