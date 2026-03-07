_DWORD *__fastcall CD2DBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
