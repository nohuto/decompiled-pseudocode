void __fastcall CRenderTargetBitmap::SetProtected(CRenderTargetBitmap *this, char a2)
{
  if ( a2 != *((_BYTE *)this + 25) )
  {
    *((_BYTE *)this + 25) = a2;
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 120));
  }
}
