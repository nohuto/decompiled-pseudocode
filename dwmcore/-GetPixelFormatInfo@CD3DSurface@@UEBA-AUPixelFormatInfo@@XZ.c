_DWORD *__fastcall CD3DSurface::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  *a2 = a1[11];
  a2[1] = a1[18];
  a2[2] = a1[19];
  return a2;
}
