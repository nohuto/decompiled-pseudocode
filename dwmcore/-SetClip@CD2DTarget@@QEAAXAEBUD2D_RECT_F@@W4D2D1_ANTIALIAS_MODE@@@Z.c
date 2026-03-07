void __fastcall CD2DTarget::SetClip(CD2DTarget *this, const struct D2D_RECT_F *a2, enum D2D1_ANTIALIAS_MODE a3)
{
  bool v3; // zf
  __int128 v5; // xmm0

  v3 = *((_BYTE *)this + 73) == 0;
  v5 = (__int128)*a2;
  *((_DWORD *)this + 17) = a3;
  *(_OWORD *)((char *)this + 52) = v5;
  if ( !v3 )
    CD2DContext::D2DSetWorldClip(*((CD2DContext **)this + 2), (const struct D2D_RECT_F *)((char *)this + 52), a3);
  *((_BYTE *)this + 72) = 1;
}
