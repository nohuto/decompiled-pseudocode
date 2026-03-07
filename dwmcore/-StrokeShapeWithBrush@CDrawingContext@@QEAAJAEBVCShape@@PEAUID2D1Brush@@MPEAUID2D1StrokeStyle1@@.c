__int64 __fastcall CDrawingContext::StrokeShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3,
        float a4,
        struct ID2D1StrokeStyle1 *a5)
{
  __int64 v6; // rax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ecx
  enum D2D1_PRIMITIVE_BLEND v16; // r9d
  int v17; // eax
  unsigned int v18; // ecx
  int WidenedBounds; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // ecx
  struct ID2D1Geometry *v25; // [rsp+48h] [rbp-31h] BYREF
  __int64 v26; // [rsp+50h] [rbp-29h] BYREF
  __int128 v27; // [rsp+58h] [rbp-21h] BYREF
  __int128 v28; // [rsp+68h] [rbp-11h] BYREF
  int v29; // [rsp+78h] [rbp-1h]
  int v30; // [rsp+7Ch] [rbp+3h]

  v26 = 0LL;
  v6 = *(_QWORD *)a2;
  v25 = 0LL;
  v9 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, struct ID2D1Geometry **))(v6 + 24))(a2, 0LL, &v25);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA3Eu, 0LL);
    goto LABEL_7;
  }
  if ( !CScopedClipStack::HasDeferredD2DLayers((CDrawingContext *)((char *)this + 896)) )
    goto LABEL_3;
  v27 = 0LL;
  WidenedBounds = CShape::GetWidenedBounds(a2, &v27, v12, a5);
  v11 = WidenedBounds;
  if ( WidenedBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, WidenedBounds, 0xA45u, 0LL);
    goto LABEL_7;
  }
  v29 = 0;
  v30 = 0;
  v28 = v27;
  v22 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v26, this, &v28, 0LL);
  v11 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xA47u, 0LL);
  }
  else
  {
LABEL_3:
    v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA4Au, 0LL);
    }
    else
    {
      v15 = *((_DWORD *)this + 90);
      v16 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
      if ( v15 )
      {
        v24 = v15 - 1;
        if ( v24 )
        {
          if ( v24 == 3 )
            v16 = D2D1_PRIMITIVE_BLEND_MIN;
        }
        else
        {
          v16 = D2D1_PRIMITIVE_BLEND_COPY;
        }
      }
      v17 = CD2DContext::DrawShape(
              (CD2DContext *)(*((_QWORD *)this + 5) + 16LL),
              (const struct ID2DContextOwner *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
              v25,
              a3,
              a4,
              a5,
              (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 84) != 0),
              v16);
      v11 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xA52u, 0LL);
    }
  }
LABEL_7:
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
  return v11;
}
