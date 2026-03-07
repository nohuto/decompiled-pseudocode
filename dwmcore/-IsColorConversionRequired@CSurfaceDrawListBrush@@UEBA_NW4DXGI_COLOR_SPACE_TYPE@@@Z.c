bool __fastcall CSurfaceDrawListBrush::IsColorConversionRequired(
        CSurfaceDrawListBrush *this,
        enum DXGI_COLOR_SPACE_TYPE a2)
{
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)(CDrawListBitmap::GetPixelFormatInfo((__int64)this + 56, (__int64)v3) + 8) != a2;
}
