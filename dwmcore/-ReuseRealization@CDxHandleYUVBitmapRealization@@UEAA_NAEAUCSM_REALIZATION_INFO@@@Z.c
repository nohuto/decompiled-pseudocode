char __fastcall CDxHandleYUVBitmapRealization::ReuseRealization(
        CDxHandleYUVBitmapRealization *this,
        struct CSM_REALIZATION_INFO *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *(_DWORD *)a2 == *((_DWORD *)this - 66) )
  {
    v2 = 1;
    *((_DWORD *)this - 65) = *((_DWORD *)a2 + 1);
  }
  return v2;
}
