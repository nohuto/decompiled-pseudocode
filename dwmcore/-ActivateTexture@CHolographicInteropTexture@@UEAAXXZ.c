void __fastcall CHolographicInteropTexture::ActivateTexture(CHolographicInteropTexture *this)
{
  *((_BYTE *)this + 152) = 1;
  *((_BYTE *)this + 160) = 1;
}
