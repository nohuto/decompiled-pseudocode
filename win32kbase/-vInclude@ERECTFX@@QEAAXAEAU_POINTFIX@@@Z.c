void __fastcall ERECTFX::vInclude(ERECTFX *this, struct _POINTFIX *a2)
{
  FIX x; // eax
  FIX y; // eax

  x = a2->x;
  if ( *(_DWORD *)this <= a2->x )
  {
    if ( *((_DWORD *)this + 2) < x )
      *((_DWORD *)this + 2) = x;
  }
  else
  {
    *(_DWORD *)this = x;
  }
  y = a2->y;
  if ( *((_DWORD *)this + 3) >= y )
  {
    if ( *((_DWORD *)this + 1) > y )
      *((_DWORD *)this + 1) = y;
  }
  else
  {
    *((_DWORD *)this + 3) = y;
  }
}
