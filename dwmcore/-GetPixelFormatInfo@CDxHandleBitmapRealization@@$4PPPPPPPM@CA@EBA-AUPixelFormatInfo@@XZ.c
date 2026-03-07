_DWORD *__fastcall CDxHandleBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CDxHandleBitmapRealization::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 32, a2);
}
