bool __fastcall CDxHandleYUVBitmapRealization::GetLetterboxingMargins(
        CDxHandleYUVBitmapRealization *this,
        struct MilRectF *a2)
{
  if ( (*((_DWORD *)this - 68) & 0x8000) != 0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this - 78);
    *((_DWORD *)a2 + 1) = *((_DWORD *)this - 77);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this - 76);
    *((_DWORD *)a2 + 3) = *((_DWORD *)this - 75);
  }
  return (*((_DWORD *)this - 68) & 0x8000) != 0;
}
