__int64 __fastcall CBitmap::SetColorSpace(CBitmap *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 25) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (int)"onecoreuap\\windows\\DWM\\common\\bitmaps\\Bitmap.h",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
  else
  {
    *((_DWORD *)this + 24) = a2;
    return 0LL;
  }
}
