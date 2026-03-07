__int64 __fastcall CDDisplayRenderTarget::RenderComposeTop(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // edi
  char v5; // r15
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  float v14; // xmm0_4
  int v15; // eax
  __int64 v16; // rcx
  char *v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  float v23; // xmm1_4
  __int64 v24; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v25; // r8
  CDDisplayRenderTarget *v26; // rbx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // eax
  __int64 v32; // rcx
  _OWORD v34[4]; // [rsp+30h] [rbp-49h] BYREF
  int v35; // [rsp+70h] [rbp-9h]
  __int128 v36; // [rsp+80h] [rbp+7h] BYREF
  __int128 v37; // [rsp+90h] [rbp+17h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_33;
    if ( *((_BYTE *)this + 11217) )
    {
      v11 = *((_DWORD *)this + 4549);
      v12 = 0;
      v13 = *((_DWORD *)this + 4550);
      *(_QWORD *)&v36 = 0LL;
      *((_QWORD *)&v36 + 1) = __PAIR64__(v13, v11);
    }
    else
    {
      v36 = *(_OWORD *)((char *)this + 18180);
      v11 = DWORD2(v36);
      v12 = v36;
    }
    v5 = 1;
    *(float *)&v37 = (float)v12;
    *((float *)&v37 + 1) = (float)SDWORD1(v36);
    v14 = (float)SHIDWORD(v36);
    *((float *)&v37 + 2) = (float)v11;
    v36 = 0LL;
    *((float *)&v37 + 3) = v14;
    v15 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v37, D2D1_ANTIALIAS_MODE_ALIASED, 0);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x382u, 0LL);
      return v4;
    }
    v17 = (char *)this + 18208;
    if ( *((_BYTE *)this + 11217) )
      v17 = (char *)this + 18344;
    v18 = CComposeTop::Render(a3, a2, v17, &v36);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x38Du, 0LL);
    }
    else
    {
      v20 = *(float *)&v36;
      if ( *(float *)&v37 > *(float *)&v36 )
      {
        LODWORD(v36) = v37;
        v20 = *(float *)&v37;
      }
      v21 = *((float *)&v36 + 1);
      if ( *((float *)&v37 + 1) > *((float *)&v36 + 1) )
      {
        DWORD1(v36) = DWORD1(v37);
        v21 = *((float *)&v37 + 1);
      }
      v22 = *((float *)&v36 + 2);
      if ( *((float *)&v36 + 2) > *((float *)&v37 + 2) )
      {
        DWORD2(v36) = DWORD2(v37);
        v22 = *((float *)&v37 + 2);
      }
      v23 = *((float *)&v36 + 3);
      if ( *((float *)&v36 + 3) > *((float *)&v37 + 3) )
      {
        HIDWORD(v36) = HIDWORD(v37);
        v23 = *((float *)&v37 + 3);
      }
      if ( v22 <= v20 || v23 <= v21 )
        v36 = 0uLL;
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v36) )
        goto LABEL_33;
      CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, (struct MilRectF *)&v36, 1);
      v26 = *((_BYTE *)this + 11217)
          ? (CDDisplayRenderTarget *)((char *)this + 18344)
          : (CDDisplayRenderTarget *)((char *)this + 18208);
      v27 = *(_OWORD *)v26;
      v28 = *((_OWORD *)v26 + 1);
      v35 = *((_DWORD *)v26 + 16);
      v34[0] = v27;
      v29 = *((_OWORD *)v26 + 2);
      v34[1] = v28;
      v30 = *((_OWORD *)v26 + 3);
      v34[2] = v29;
      v34[3] = v30;
      CMILMatrix::Invert((CMILMatrix *)v34, v24, v25);
      v37 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v34, (struct MilRectF *)&v36, (float *)&v37);
      v31 = CComposeTop::NewContentRendered(a3);
      v4 = v31;
      if ( v31 >= 0 )
        goto LABEL_33;
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x3A1u, 0LL);
    }
LABEL_36:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  v9 = CComposeTop::FullRender(a3, (__int64)a2, (__int64)this + (*((_BYTE *)this + 11217) != 0 ? 18344LL : 18208LL));
  v4 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x370u, 0LL);
    return v4;
  }
LABEL_33:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_36;
  return v4;
}
