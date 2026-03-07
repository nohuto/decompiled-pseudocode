__int64 __fastcall CVisual::CalcRootBounds(CLayerVisual *this, __int64 a2)
{
  char v4; // r14
  __int64 v5; // rax
  __int128 v6; // xmm0
  unsigned __int64 v7; // xmm1_8
  _DWORD *v8; // rax
  CTransform3D *EffectInternal; // rdi
  CGeometry *v10; // rcx
  int v12; // r8d
  int ShapeData; // eax
  __int64 v14; // rcx
  int v15; // ebx
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  int v17; // edi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // xmm0_4
  const struct CMILMatrix *Matrix; // rax
  int v22; // eax
  _OWORD v23[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[32]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-60h]
  char v27; // [rsp+C0h] [rbp-40h]
  __int128 v28; // [rsp+D0h] [rbp-30h] BYREF
  int v29; // [rsp+E0h] [rbp-20h]
  int v30; // [rsp+E4h] [rbp-1Ch]
  __int128 v31; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v32; // [rsp+F8h] [rbp-8h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 93LL)
    && (*((_QWORD *)this + 89) || *((_QWORD *)this + 88))
    && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(this) )
  {
    v4 = 1;
  }
  v5 = *(_QWORD *)this;
  v32 = 0LL;
  (*(void (__fastcall **)(CLayerVisual *, char *, __int128 *))(v5 + 304))(this, (char *)this + 172, &v32);
  v6 = v32;
  v7 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 47), (__m128)*((unsigned int *)this + 48)).m128_u64[0];
  *(_OWORD *)a2 = v32;
  *(_QWORD *)(a2 + 16) = v7;
  v8 = (_DWORD *)*((_QWORD *)this + 29);
  v28 = v6;
  if ( (*v8 & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
            EffectInternal,
            187LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
              EffectInternal,
              58LL) )
        goto LABEL_7;
      EffectInternal = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
    if ( EffectInternal )
    {
      Matrix = CTransform3D::GetMatrix(EffectInternal, (const struct D2D_SIZE_F *)((char *)this + 140));
      v23[0] = *(_OWORD *)Matrix;
      v23[1] = *((_OWORD *)Matrix + 1);
      v23[2] = *((_OWORD *)Matrix + 2);
      v23[3] = *((_OWORD *)Matrix + 3);
      v24 = *((_DWORD *)Matrix + 16);
      v22 = *((_DWORD *)this + 27);
      if ( !v22 || v22 == 3 || v4 )
      {
        CMILMatrix::SetToIdentity((CMILMatrix *)v25);
        v27 = v27 & 0xF0 | 3;
        v26 = 0LL;
        CMILMatrix::Multiply((CMILMatrix *)v23, (const struct CMILMatrix *)v25);
      }
      CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)v23, (float *)a2, (float *)a2);
    }
  }
LABEL_7:
  v10 = (CGeometry *)*((_QWORD *)this + 31);
  if ( !v10 )
    return 0LL;
  if ( (*((_BYTE *)this + 102) & 1) != 0 )
    return 0LL;
  v12 = *((_DWORD *)this + 27);
  if ( v12 )
  {
    if ( v12 != 3 )
      return 0LL;
  }
  *(_QWORD *)&v28 = 0LL;
  BYTE8(v28) = 0;
  v31 = 0LL;
  ShapeData = CGeometry::GetShapeData(v10, (const struct D2D_SIZE_F *)((char *)this + 140), (struct CShapePtr *)&v28);
  v15 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, ShapeData, 0x62u, 0LL);
    goto LABEL_38;
  }
  v16 = (void (__fastcall ***)(_QWORD, __int64))v28;
  v17 = -2003292412;
  if ( (_QWORD)v28 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v28 + 48LL))(v28, &v31, 0LL);
    v17 = v18;
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x140u, 0LL);
      goto LABEL_36;
    }
    v16 = (void (__fastcall ***)(_QWORD, __int64))v28;
  }
  v15 = v17;
  if ( v17 < 0 )
  {
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v17, 0x63u, 0LL);
LABEL_38:
    v16 = (void (__fastcall ***)(_QWORD, __int64))v28;
  }
  if ( v15 == -2003304438 )
  {
    v15 = 0;
    v31 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( BYTE8(v28) && v16 )
    (**v16)(v16, 1LL);
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v15, 0x616u, 0LL);
  }
  else
  {
    v20 = *(_DWORD *)(a2 + 16);
    v28 = v31;
    v30 = *(_DWORD *)(a2 + 20);
    v29 = v20;
    TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
      (float *)a2,
      (float *)&v28);
  }
  return (unsigned int)v15;
}
