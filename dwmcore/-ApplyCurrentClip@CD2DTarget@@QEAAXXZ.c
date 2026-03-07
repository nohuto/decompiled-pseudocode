void __fastcall CD2DTarget::ApplyCurrentClip(CD2DTarget *this)
{
  if ( *((_BYTE *)this + 72) )
    CD2DTarget::SetClip(this, (const struct D2D_RECT_F *)((char *)this + 52), *((enum D2D1_ANTIALIAS_MODE *)this + 17));
  else
    CD2DContext::D2DRemoveClip(*((CD2DContext **)this + 2));
}
