bool __fastcall CScratchRenderTargetBitmap::IsCrossFrameCacheable(CScratchRenderTargetBitmap *this)
{
  return *((_BYTE *)this + 25) == 0;
}
