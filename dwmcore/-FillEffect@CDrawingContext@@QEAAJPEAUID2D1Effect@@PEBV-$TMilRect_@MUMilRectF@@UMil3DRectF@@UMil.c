__int64 __fastcall CDrawingContext::FillEffect(
        CDrawingContext *this,
        struct ID2D1Effect *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_POINT_2F *a4,
        char a5)
{
  char v9; // si
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  enum D2D1_INTERPOLATION_MODE v13; // eax
  __int64 v14; // r10
  enum D2D1_COMPOSITE_MODE v15; // r9d
  int v16; // eax
  unsigned int v17; // ecx
  int v19; // eax
  unsigned int v20; // ecx

  v9 = 0;
  if ( a5 )
  {
    v19 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v12 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x9DAu, 0LL);
      return v12;
    }
    v9 = 1;
  }
  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x9E3u, 0LL);
  }
  else
  {
    v13 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 83));
    v15 = D2D1_COMPOSITE_MODE_MASK_INVERT;
    if ( *((_DWORD *)this + 90) != 2 )
      v15 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
    v16 = CD2DContext::FillEffect(
            (CD2DContext *)(v14 + 16),
            (const struct ID2DContextOwner *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
            a2,
            a3,
            a4,
            v13,
            v15);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x9EAu, 0LL);
  }
  if ( v9 )
    CDrawingContext::PopTransformInternal(this, 1);
  return v12;
}
