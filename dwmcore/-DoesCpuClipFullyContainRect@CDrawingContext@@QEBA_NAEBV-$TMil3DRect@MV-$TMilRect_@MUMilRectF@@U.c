char __fastcall CDrawingContext::DoesCpuClipFullyContainRect(__int64 a1, struct MilRectF *a2)
{
  CScopedClipStack *v2; // rdi
  __int64 v3; // rax
  __int64 v6; // r10
  const struct CMILMatrix *v7; // r11
  const struct CShape *TopCpuClipInScope; // rax
  char v9; // bl
  _BYTE v10[64]; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+70h] [rbp-90h]
  CShape *v12[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v13[48]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v14; // [rsp+100h] [rbp+0h] BYREF
  __int128 v15; // [rsp+110h] [rbp+10h] BYREF
  int v16; // [rsp+120h] [rbp+20h]
  int v17; // [rsp+124h] [rbp+24h]

  v2 = (CScopedClipStack *)(a1 + 896);
  v3 = *(_QWORD *)(a1 + 904);
  if ( v3 == *(_QWORD *)(a1 + 896) )
    return 0;
  if ( !*(_QWORD *)(v3 - 176) )
    return 0;
  v11 = 0;
  if ( !IsPure2DRect((__int64)a2) && !CMILMatrix::ProducesUniformZ<1>(*(_QWORD *)(v6 + 904) - 84LL) )
    return 0;
  if ( !CCpuClippingData::CalcScopeTransformFromWorld(
          (const struct CMILMatrix *)(*(_QWORD *)(v6 + 904) - 84LL),
          v7,
          (struct CMILMatrix *)v10) )
    return 0;
  v14 = 0LL;
  if ( IsPure2DRect((__int64)a2) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v10, a2, (float *)&v14);
  }
  else
  {
    v16 = 0;
    v17 = 0;
    v15 = 0LL;
    CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)v10, (float *)a2, (float *)&v15);
    v14 = v15;
  }
  CCpuClip::CCpuClip((CCpuClip *)v12);
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v2, 0LL);
  CCpuClip::Initialize((CCpuClip *)v12, TopCpuClipInScope, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
  v9 = CCpuClip::FullyContains(v12, (struct MilRectF *)&v14, 0LL);
  CShapePtr::Release((CShapePtr *)v13);
  return v9;
}
