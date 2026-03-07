__int64 __fastcall CD2DContext::DrawInk(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Ink *a3,
        const struct _D3DCOLORVALUE *a4,
        struct ID2D1InkStyle *a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_PRIMITIVE_BLEND a7)
{
  struct D2D_MATRIX_3X2_F v12; // [rsp+30h] [rbp-28h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a7, &a6, &v12);
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 39) + 64LL))(
    *((_QWORD *)this + 39),
    a4);
  (*(void (__fastcall **)(_QWORD, struct ID2D1Ink *, _QWORD, struct ID2D1InkStyle *))(**((_QWORD **)this + 25) + 816LL))(
    *((_QWORD *)this + 25),
    a3,
    *((_QWORD *)this + 39),
    a5);
  return 0LL;
}
