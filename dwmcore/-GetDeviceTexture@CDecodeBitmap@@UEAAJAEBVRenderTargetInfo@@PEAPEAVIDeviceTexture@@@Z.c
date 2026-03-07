__int64 __fastcall CDecodeBitmap::GetDeviceTexture(
        CDecodeBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  if ( *((_BYTE *)this - 96) )
    return CRenderTargetBitmap::GetDeviceTexture((CDecodeBitmap *)((char *)this - 8), a2, a3, a4);
  *a3 = 0LL;
  return 2291674884LL;
}
