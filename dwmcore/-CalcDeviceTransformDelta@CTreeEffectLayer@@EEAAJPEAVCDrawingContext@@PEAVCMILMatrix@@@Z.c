__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  CMILMatrix *v3; // r15
  unsigned int v7; // esi
  __int64 v8; // rcx
  int ShadowBounds; // eax
  unsigned int v10; // ecx
  char *v11; // r8
  CVisual *v12; // rcx
  float v13; // xmm0_4
  float v14; // xmm2_4
  __int128 v15; // xmm0
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v20; // eax
  unsigned int v21; // ecx
  float v22[4]; // [rsp+30h] [rbp-49h] BYREF
  _OWORD v23[4]; // [rsp+40h] [rbp-39h] BYREF
  int v24; // [rsp+80h] [rbp+7h]
  __int128 v25; // [rsp+90h] [rbp+17h] BYREF

  v3 = (CTreeEffectLayer *)((char *)this + 128);
  v7 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 400), (CTreeEffectLayer *)((char *)this + 128));
  v8 = *((_QWORD *)this + 32);
  if ( v8 )
  {
    v25 = 0LL;
    ShadowBounds = CLayerVisual::GetShadowBounds(v8, &v25);
    v7 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ShadowBounds, 0x24Eu, 0LL);
      return v7;
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v25) )
    {
      *(_OWORD *)((char *)this + 212) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      v11 = (char *)this + 212;
      if ( *(_BYTE *)(*((_QWORD *)this + 32) + 729LL) )
        CDrawingContext::CalcLocalSpaceClippedBounds(a2, &v25, v11);
      else
        CDrawingContext::CalcWorldSpaceClippedBounds(a2, &v25, v11);
    }
  }
  if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(*((CLayerVisual **)this + 32)) )
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)v23);
    CMILMatrix::Translate((CMILMatrix *)v23, (float)-*((_DWORD *)this + 4), (float)-*((_DWORD *)this + 5));
    CMILMatrix::Scale((CMILMatrix *)v23, *((float *)this + 70), *((float *)this + 70), 1.0);
    v20 = CDrawingContext::PushTransformInternal(
            a2,
            *((const struct CVisual **)this + 32),
            (const struct CMILMatrix *)v23,
            0,
            1);
    v7 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x275u, 0LL);
    }
    else
    {
      CVisual::GetEffectiveSize(*((CVisual **)this + 32), v22, &v22[1]);
      *(_QWORD *)&v25 = 0LL;
      *((_QWORD *)&v25 + 1) = *(_QWORD *)v22;
      CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v23, (struct MilRectF *)&v25);
      CMILMatrix::SetToIdentity(a3);
    }
  }
  else
  {
    CVisual::GetEffectiveSize(v12, v22, &v22[1]);
    *(_QWORD *)&v25 = 0LL;
    *((_QWORD *)&v25 + 1) = *(_QWORD *)v22;
    CMILMatrix::Transform2DBoundsHelper<1>(v3, (struct MilRectF *)&v25);
    v13 = *((float *)this + 51) - *((float *)this + 49);
    v14 = *((float *)this + 70);
    v24 = 0;
    *((float *)this + 51) = (float)(v13 * v14) + *((float *)this + 49);
    *((float *)this + 52) = (float)((float)(*((float *)this + 52) - *((float *)this + 50)) * v14)
                          + *((float *)this + 50);
    CMILMatrix::SetToIdentity((CMILMatrix *)v23);
    CMILMatrix::Translate((CMILMatrix *)v23, (float)-*((_DWORD *)this + 4), (float)-*((_DWORD *)this + 5));
    CMILMatrix::Scale((CMILMatrix *)v23, *((float *)this + 70), *((float *)this + 70), 1.0);
    v15 = v23[1];
    v16 = v24;
    *(_OWORD *)a3 = v23[0];
    v17 = v23[2];
    *((_OWORD *)a3 + 1) = v15;
    v18 = v23[3];
    *((_OWORD *)a3 + 2) = v17;
    *((_OWORD *)a3 + 3) = v18;
    *((_DWORD *)a3 + 16) = v16;
  }
  return v7;
}
