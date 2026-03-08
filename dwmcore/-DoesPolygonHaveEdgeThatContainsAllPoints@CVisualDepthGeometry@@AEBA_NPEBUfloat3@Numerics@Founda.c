/*
 * XREFs of ?DoesPolygonHaveEdgeThatContainsAllPoints@CVisualDepthGeometry@@AEBA_NPEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x180267540
 * Callers:
 *     ?AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@Z @ 0x1802674E0 (-AreVisualsAbutting@CVisualDepthGeometry@@AEBA_NAEBV1@PEBUfloat3@Numerics@Foundation@Windows@@H@.c)
 * Callees:
 *     ?DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z @ 0x180009AFC (-DistSquaredToLine@@YAMAEBUfloat2@Numerics@Foundation@Windows@@00@Z.c)
 */

char __fastcall CVisualDepthGeometry::DoesPolygonHaveEdgeThatContainsAllPoints(
        CVisualDepthGeometry *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        int a3)
{
  __int64 v5; // r11
  int i; // r9d
  const struct Windows::Foundation::Numerics::float2 *v7; // rdx
  const struct Windows::Foundation::Numerics::float2 *v8; // r8
  const struct Windows::Foundation::Numerics::float3 *v9; // r10
  int v10; // xmm1_4
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // r10
  float v14; // xmm0_4
  float v15; // xmm5_4
  int v17; // [rsp+48h] [rbp+20h] BYREF
  int v18; // [rsp+4Ch] [rbp+24h]

  v5 = a3;
  for ( i = 0; i < 4; i = v12 + 1 )
  {
    v7 = (CVisualDepthGeometry *)((char *)this + 16 * i + 84);
    if ( v5 <= 0 )
      return 1;
    v8 = (const struct Windows::Foundation::Numerics::float2 *)((char *)v7 + 8);
    v9 = a2;
    while ( 1 )
    {
      v10 = *((_DWORD *)v9 + 1);
      v17 = *(_DWORD *)v9;
      v18 = v10;
      v14 = DistSquaredToLine((const struct Windows::Foundation::Numerics::float2 *)&v17, v7, v8);
      if ( v15 <= COERCE_FLOAT(LODWORD(v14) & _xmm) )
        break;
      v9 = (const struct Windows::Foundation::Numerics::float3 *)(v13 + 12);
      if ( v11 + 1 >= v5 )
        return 1;
    }
  }
  return 0;
}
