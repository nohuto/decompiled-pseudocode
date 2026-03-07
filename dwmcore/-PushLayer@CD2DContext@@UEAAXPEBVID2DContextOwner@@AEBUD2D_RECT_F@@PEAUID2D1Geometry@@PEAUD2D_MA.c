void __fastcall CD2DContext::PushLayer(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Geometry *a4,
        struct D2D_MATRIX_3X2_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_LAYER_OPTIONS1 a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  int v12; // eax
  CD2DTarget *v13; // rdi

  CD2DContext::FlushDrawList(this);
  v12 = *((_DWORD *)this + 88);
  v13 = 0LL;
  if ( v12 )
    v13 = *(CD2DTarget **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v12 - 1));
  CD2DContext::EnsureBeginDraw(this);
  CD2DTarget::PushLayer(v13, a3, a4, a5, a6, a7, a8, a9);
}
