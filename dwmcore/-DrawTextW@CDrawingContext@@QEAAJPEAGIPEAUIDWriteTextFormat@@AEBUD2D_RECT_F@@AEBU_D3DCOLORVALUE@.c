__int64 __fastcall CDrawingContext::DrawTextW(
        CDrawingContext *this,
        unsigned __int16 *a2,
        __int64 a3,
        struct IDWriteTextFormat *a4,
        const struct D2D_RECT_F *a5,
        const struct _D3DCOLORVALUE *a6)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // ecx
  enum D2D1_PRIMITIVE_BLEND v13; // r9d
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx

  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1895u, 0LL);
  }
  else
  {
    v12 = *((_DWORD *)this + 90);
    v13 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
    if ( v12 )
    {
      v14 = v12 - 1;
      if ( v14 )
      {
        if ( v14 == 3 )
          v13 = D2D1_PRIMITIVE_BLEND_MIN;
      }
      else
      {
        v13 = D2D1_PRIMITIVE_BLEND_COPY;
      }
    }
    v15 = CD2DContext::DrawTextW(
            (CD2DContext *)(*((_QWORD *)this + 5) + 16LL),
            (const struct ID2DContextOwner *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
            a2,
            3u,
            a4,
            a5,
            a6,
            (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 84) != 0),
            v13,
            D2D1_DRAW_TEXT_OPTIONS_NONE,
            DWRITE_MEASURING_MODE_NATURAL);
    v11 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x189Eu, 0LL);
  }
  return v11;
}
