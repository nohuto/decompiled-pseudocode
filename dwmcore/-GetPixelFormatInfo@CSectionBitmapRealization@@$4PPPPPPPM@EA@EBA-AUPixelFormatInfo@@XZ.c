_DWORD *__fastcall CSectionBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CSectionBitmapRealization::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 64, a2);
}
