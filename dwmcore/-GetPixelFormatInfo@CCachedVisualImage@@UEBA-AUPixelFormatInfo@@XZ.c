_DWORD *__fastcall CCachedVisualImage::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // rax

  *a2 = *(_DWORD *)(a1 - 1652);
  a2[2] = *(_DWORD *)(a1 - 1644) == 2;
  result = a2;
  a2[1] = *(_DWORD *)(a1 - 1648) != 0 ? 1 : 3;
  return result;
}
