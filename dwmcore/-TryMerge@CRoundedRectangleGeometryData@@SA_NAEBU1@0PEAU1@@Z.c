bool __fastcall CRoundedRectangleGeometryData::TryMerge(
        const struct CRoundedRectangleGeometryData *a1,
        const struct CRoundedRectangleGeometryData *a2,
        struct CRoundedRectangleGeometryData *a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 BaseRect; // rax
  __int64 v7; // r8
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // xmm4_4
  int v18; // xmm5_4
  __int64 v19; // rcx
  bool result; // al
  float v21; // [rsp+20h] [rbp-48h] BYREF
  float v22; // [rsp+24h] [rbp-44h]
  float v23; // [rsp+28h] [rbp-40h]
  float v24; // [rsp+2Ch] [rbp-3Ch]
  _BYTE v25[16]; // [rsp+30h] [rbp-38h] BYREF

  CRoundedRectangleGeometryData::GetBaseRect(a1, &v21, a3, a1);
  BaseRect = CRoundedRectangleGeometryData::GetBaseRect(a2, v25, v4, v5);
  v8 = v21;
  v9 = *(float *)BaseRect;
  if ( *(float *)BaseRect > v21 )
  {
    v21 = *(float *)BaseRect;
    v8 = v9;
  }
  v10 = v22;
  v11 = *(float *)(BaseRect + 4);
  v12 = v22;
  if ( v11 > v22 )
  {
    v22 = *(float *)(BaseRect + 4);
    v10 = v11;
    v12 = v11;
  }
  v13 = v23;
  if ( v23 > *(float *)(BaseRect + 8) )
  {
    v23 = *(float *)(BaseRect + 8);
    v13 = v23;
  }
  v14 = v24;
  if ( v24 > *(float *)(BaseRect + 12) )
  {
    v24 = *(float *)(BaseRect + 12);
    v14 = v24;
  }
  if ( v13 <= v8
    || v14 <= v12
    || (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsCloseToEmpty<void>(&v21) )
  {
    *(_DWORD *)v7 = 0;
    result = 1;
    *(_DWORD *)(v7 + 4) = 0;
    *(_DWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 12) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)(v7 + 48) = 0;
    *(_BYTE *)(v7 + 52) = 1;
  }
  else
  {
    *(float *)v7 = v8;
    *(float *)(v7 + 4) = v10;
    *(_DWORD *)(v7 + 8) = v17;
    *(_DWORD *)(v7 + 12) = v18;
    *(_BYTE *)(v7 + 52) = 0;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    return (unsigned __int8)lambda_130f3fd38fafab82521855fb46aefe92_::operator()(v15, v16)
        && (unsigned __int8)lambda_130f3fd38fafab82521855fb46aefe92_::operator()(v19, a2);
  }
  return result;
}
