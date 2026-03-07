__int64 __fastcall CBackdropVisualImage::CalcOcclusion(CBackdropVisualImage *a1, __int64 a2)
{
  if ( !*((_BYTE *)a1 + 1953) )
    return 0LL;
  CBackdropVisualImage::EnsureAncestorList(a1);
  return CCachedVisualImage::CalcOcclusion(a1, a2);
}
