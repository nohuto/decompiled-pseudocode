__int64 __fastcall CBitmapResource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmapResource::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
