__int64 __fastcall NtGdiCreateCompatibleBitmap(__int64 a1, int a2, int a3)
{
  return GreCreateCompatibleBitmapInternal(a1, a2, a3 & 0xF0FFFFFF, 0, 0LL, 0LL);
}
