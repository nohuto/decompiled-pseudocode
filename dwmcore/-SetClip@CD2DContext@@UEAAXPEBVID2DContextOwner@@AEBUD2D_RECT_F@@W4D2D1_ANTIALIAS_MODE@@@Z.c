void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        enum D2D1_ANTIALIAS_MODE a4)
{
  int v4; // eax
  CD2DTarget *v5; // rsi
  CD2DContext *v8; // r10

  v4 = *((_DWORD *)this + 88);
  v5 = 0LL;
  v8 = this;
  if ( v4 )
    v5 = *(CD2DTarget **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 437)
    || *((_BYTE *)this + 439)
    || a4 != *((_DWORD *)this + 104)
    || !AreEqual(a3, (const struct D2D_RECT_F *)this + 25) )
  {
    CD2DContext::FlushDrawList(v8);
    CD2DTarget::SetClip(v5, a3, a4);
  }
}
