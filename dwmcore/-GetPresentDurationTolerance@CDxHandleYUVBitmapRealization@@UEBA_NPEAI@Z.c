bool __fastcall CDxHandleYUVBitmapRealization::GetPresentDurationTolerance(
        CDxHandleYUVBitmapRealization *this,
        unsigned int *a2)
{
  unsigned int v2; // eax

  if ( (*((_DWORD *)this - 68) & 0x2000) != 0 )
    v2 = *((_DWORD *)this - 92);
  else
    v2 = 0;
  *a2 = v2;
  return (*((_DWORD *)this - 68) & 0x2000) != 0;
}
