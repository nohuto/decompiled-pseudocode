__int64 __fastcall CLegacyRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CLegacyRenderTarget::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 16, a2);
}
