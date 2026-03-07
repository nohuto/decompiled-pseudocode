__int64 __fastcall CD2DContext::DrawTextW(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        struct IDWriteTextFormat *a5,
        const struct D2D_RECT_F *a6,
        const struct _D3DCOLORVALUE *a7,
        enum D2D1_ANTIALIAS_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9,
        enum D2D1_DRAW_TEXT_OPTIONS a10,
        enum DWRITE_MEASURING_MODE a11)
{
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a9, &a8, 0LL);
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 39) + 64LL))(
    *((_QWORD *)this + 39),
    a7);
  (*(void (__fastcall **)(_QWORD, unsigned __int16 *, _QWORD, struct IDWriteTextFormat *, const struct D2D_RECT_F *, _QWORD, enum D2D1_DRAW_TEXT_OPTIONS, enum DWRITE_MEASURING_MODE))(**((_QWORD **)this + 25) + 216LL))(
    *((_QWORD *)this + 25),
    a3,
    a4,
    a5,
    a6,
    *((_QWORD *)this + 39),
    a10,
    a11);
  return 0LL;
}
