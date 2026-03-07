_DWORD *__fastcall CProjectedShadowCaster::CalculateCasterBounds(
        __int64 a1,
        _DWORD *a2,
        const struct CVisualTree *a3,
        char *a4)
{
  __int64 v4; // rax
  float v6; // xmm6_4
  float v7; // xmm7_4
  int v10; // xmm1_4
  int v12; // xmm0_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  CVisual *v15; // rbx
  char v16; // si
  __int64 v17; // rcx
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  bool v22; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v23[64]; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+80h] [rbp-80h]
  _BYTE v25[64]; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+D0h] [rbp-30h]
  float v27; // [rsp+E0h] [rbp-20h] BYREF
  float v28; // [rsp+E4h] [rbp-1Ch]
  float v29; // [rsp+E8h] [rbp-18h]
  float v30; // [rsp+ECh] [rbp-14h]
  __int128 v31; // [rsp+F0h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v6 = 0.0;
  v7 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v10 = *(_DWORD *)(v4 + 144);
  v12 = *(_DWORD *)(v4 + 140);
  *a2 = 0;
  a2[1] = 0;
  a2[2] = v12;
  a2[3] = v10;
  v13 = *(float *)(v4 + 140);
  v14 = *(float *)(v4 + 144);
  v15 = *(CVisual **)(a1 + 64);
  v26 = 0;
  v29 = v13;
  v30 = v14;
  CMILMatrix::SetToIdentity((CMILMatrix *)v25);
  v16 = 0;
  while ( v15 )
  {
    v17 = *((_QWORD *)v15 + 31);
    if ( v17 )
    {
      v31 = 0LL;
      if ( (unsigned __int8)CGeometry::TryGetAxisAlignedRectangle(v17, (char *)v15 + 140, &v31) )
      {
        if ( *(float *)&v31 > v6 )
        {
          v27 = *(float *)&v31;
          v6 = *(float *)&v31;
        }
        v18 = v7;
        if ( *((float *)&v31 + 1) > v7 )
        {
          v28 = *((float *)&v31 + 1);
          v7 = *((float *)&v31 + 1);
          v18 = *((float *)&v31 + 1);
        }
        v19 = v13;
        if ( v13 > *((float *)&v31 + 2) )
        {
          v29 = *((float *)&v31 + 2);
          v13 = *((float *)&v31 + 2);
          v19 = *((float *)&v31 + 2);
        }
        v20 = v14;
        if ( v14 > *((float *)&v31 + 3) )
        {
          v30 = *((float *)&v31 + 3);
          v14 = *((float *)&v31 + 3);
          v20 = *((float *)&v31 + 3);
        }
        if ( v19 <= v6 || v20 <= v18 )
        {
          v14 = 0.0;
          v13 = 0.0;
          v7 = 0.0;
          v30 = 0.0;
          v6 = 0.0;
          v29 = 0.0;
          v28 = 0.0;
          v27 = 0.0;
        }
        v16 = 1;
      }
    }
    if ( !*(_QWORD *)(a1 + 72) || CVisual::GetTransformParent(v15, a3, 0LL) )
      break;
    v24 = 0;
    CVisual::CalcTransform(v15, a3, 0LL, &v22, (struct CMILMatrix *)v23, 0LL);
    if ( v22 )
    {
      if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v23) )
        break;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v23, (struct MilRectF *)&v27);
      CMILMatrix::Multiply((CMILMatrix *)v25, (const struct CMILMatrix *)v23);
      v14 = v30;
      v13 = v29;
      v7 = v28;
      v6 = v27;
    }
    v15 = (CVisual *)*((_QWORD *)v15 + 11);
  }
  if ( CMILMatrix::Invert((CMILMatrix *)v25) )
  {
    *a4 = v16;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v25, (struct MilRectF *)&v27);
  }
  return a2;
}
