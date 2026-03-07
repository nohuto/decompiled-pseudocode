__int64 __fastcall CSecondarySysmemBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CSecondarySysmemBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
