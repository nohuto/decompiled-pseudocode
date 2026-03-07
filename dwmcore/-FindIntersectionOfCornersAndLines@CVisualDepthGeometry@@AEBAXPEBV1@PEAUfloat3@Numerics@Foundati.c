void __fastcall CVisualDepthGeometry::FindIntersectionOfCornersAndLines(
        CVisualDepthGeometry *this,
        const struct CVisualDepthGeometry *a2,
        struct Windows::Foundation::Numerics::float3 *a3,
        int *a4)
{
  float *v4; // rbx
  const struct Windows::Foundation::Numerics::float3 *v5; // r10
  int v6; // esi
  const struct Windows::Foundation::Numerics::float3 *v8; // r11
  __int64 v12; // r14
  __int64 v13; // rax
  float v14; // xmm1_4
  float v15; // xmm0_4
  float *v16; // r8
  float v17; // xmm4_4
  char v18; // al
  __int64 v19; // rdx
  float v20; // eax
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  float v23; // [rsp+38h] [rbp-48h] BYREF
  float v24; // [rsp+3Ch] [rbp-44h]
  float v25; // [rsp+40h] [rbp-40h]
  __int64 v26; // [rsp+48h] [rbp-38h] BYREF
  float v27; // [rsp+50h] [rbp-30h]

  v4 = (float *)((char *)this + 44);
  v5 = (const struct CVisualDepthGeometry *)((char *)a2 + 160);
  v6 = 1;
  v8 = (const struct CVisualDepthGeometry *)((char *)a2 + 36);
  v12 = 4LL;
  do
  {
    v13 = v6 % 4;
    v14 = *((float *)this + 3 * v13 + 11) - *v4;
    v23 = *((float *)this + 3 * v13 + 9) - *(v4 - 2);
    v15 = *((float *)this + 3 * v13 + 10) - *(v4 - 1);
    v25 = v14;
    v24 = v15;
    if ( PlaneLineIntersection(
           v8,
           v5,
           (const struct Windows::Foundation::Numerics::float3 *)(v4 - 2),
           (const struct Windows::Foundation::Numerics::float3 *)&v23,
           (struct Windows::Foundation::Numerics::float3 *)&v26) )
    {
      v17 = (float)((float)((float)((float)(*((float *)&v26 + 1) - *(v4 - 1)) * v24)
                          + (float)((float)(*(float *)&v26 - *v16) * v23))
                  + (float)((float)(v27 - *v4) * v25))
          / (float)((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25));
      if ( v17 >= 0.0 && v17 <= 1.0 )
      {
        v22 = v26;
        v18 = CVisualDepthGeometry::ContainsPoint(a2, (const struct Windows::Foundation::Numerics::float2 *)&v22, 1);
        v5 = (const struct CVisualDepthGeometry *)((char *)a2 + 160);
        v8 = (const struct CVisualDepthGeometry *)((char *)a2 + 36);
        if ( v18 )
        {
          v19 = *a4;
          v20 = v27;
          v21 = 3 * v19;
          *(_QWORD *)((char *)a3 + 4 * v21) = v26;
          *((float *)a3 + v21 + 2) = v20;
          *a4 = v19 + 1;
        }
      }
    }
    ++v6;
    v4 += 3;
    --v12;
  }
  while ( v12 );
}
