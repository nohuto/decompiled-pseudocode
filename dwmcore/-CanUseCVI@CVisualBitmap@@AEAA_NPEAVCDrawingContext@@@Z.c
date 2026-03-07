char __fastcall CVisualBitmap::CanUseCVI(CVisualBitmap *this, struct CDrawingContext *a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_DWORD *)a2 + 84)
    || *((_DWORD *)a2 + 85)
    || *((_DWORD *)a2 + 86)
    || (**((unsigned __int8 (__fastcall ***)(char *))a2 + 3))((char *)a2 + 24) )
  {
    return (int)CVisualBitmap::EnsureCachedVisualImage(this) >= 0;
  }
  return v2;
}
