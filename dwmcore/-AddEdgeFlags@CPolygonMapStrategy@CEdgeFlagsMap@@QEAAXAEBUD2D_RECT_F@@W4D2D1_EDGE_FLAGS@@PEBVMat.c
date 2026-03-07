__int64 __fastcall CEdgeFlagsMap::CPolygonMapStrategy::AddEdgeFlags(__int64 a1, int *a2, int a3, float *a4, int a5)
{
  gsl::details *v8; // rcx
  int v9; // xmm2_4
  int v10; // xmm1_4
  int v11; // xmm0_4
  unsigned int v12; // ebx
  __int64 *v13; // r11
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // r11
  _QWORD *v17; // r10
  int *v18; // rsi
  float v19; // xmm0_4
  __int64 result; // rax
  float v21; // xmm1_4
  unsigned int v22; // edi
  float v23; // xmm1_4
  int *v24; // rdx
  int *v25; // r8
  struct D2D_POINT_2F v26; // [rsp+30h] [rbp-50h] BYREF
  int v27; // [rsp+38h] [rbp-48h] BYREF
  int v28; // [rsp+3Ch] [rbp-44h]
  int v29; // [rsp+40h] [rbp-40h]
  int v30; // [rsp+44h] [rbp-3Ch]
  int v31; // [rsp+48h] [rbp-38h]
  int v32; // [rsp+4Ch] [rbp-34h]
  int v33; // [rsp+50h] [rbp-30h]
  int v34; // [rsp+54h] [rbp-2Ch]
  int v35; // [rsp+58h] [rbp-28h] BYREF
  int v36; // [rsp+5Ch] [rbp-24h] BYREF
  int v37; // [rsp+60h] [rbp-20h] BYREF
  int v38; // [rsp+64h] [rbp-1Ch] BYREF

  DecomposeRectangleEdgeFlags(a3, &v38, &v35, &v36, &v37);
  v9 = *a2;
  v10 = a2[2];
  v28 = a2[1];
  v30 = v28;
  v11 = a2[3];
  v12 = 0;
  v27 = v9;
  v29 = v10;
  v31 = v10;
  v32 = v11;
  v33 = v9;
  v34 = v11;
  if ( a4 )
  {
    v13 = (__int64 *)&v27;
    v14 = 4LL;
    do
    {
      v15 = (_QWORD *)Matrix3x3::TransformHomogeneousPoint((Matrix3x3 *)a4, (struct D2D_POINT_2F)&v26, *v13);
      v13 = (__int64 *)(v16 + 8);
      *v17 = *v15;
      --v14;
    }
    while ( v14 );
    v18 = &v27;
    v19 = a4[3] * a4[1];
    result = 3LL;
    v21 = a4[4] * *a4;
    v22 = 0;
    v23 = v21 - v19;
    do
    {
      LODWORD(v26.x) = *(&v35 + result);
      v24 = &v27 + 2 * result;
      if ( v23 >= 0.0 )
      {
        v25 = v18;
      }
      else
      {
        v25 = &v27 + 2 * result;
        v24 = v18;
      }
      CConvexPolygonEdgeMap<unsigned int>::TryAddEdgeFromEndPoints(a1, v24, v25, &v26, a5);
      result = v22;
      v18 += 2;
      ++v22;
    }
    while ( v22 < 4 );
  }
  else
  {
    do
    {
      LODWORD(v26.x) = *(&v35 + v12);
      if ( v12 >= 4uLL )
      {
        gsl::details::terminate(v8);
        JUMPOUT(0x1801FC52ELL);
      }
      result = CConvexPolygonEdgeMap<unsigned int>::TryAddEdge(
                 a1,
                 (unsigned int)&unk_1802DC1B0 + 32 * v12,
                 (unsigned int)(&v27 + 2 * v12),
                 (unsigned int)&v26,
                 a5);
      ++v12;
    }
    while ( v12 < 4 );
  }
  return result;
}
