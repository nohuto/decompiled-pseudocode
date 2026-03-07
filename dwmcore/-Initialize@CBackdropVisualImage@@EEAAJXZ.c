__int64 __fastcall CBackdropVisualImage::Initialize(CBackdropVisualImage *this)
{
  bool v2; // zf
  __int64 v3; // rcx
  char v4; // dl

  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 87;
  *((_DWORD *)this + 41) = 1;
  CCachedVisualImage::ChoosePixelFormat(this);
  v2 = *((_BYTE *)this + 1953) == 0;
  *((_BYTE *)this + 1776) = 1;
  if ( !v2 )
    *((_QWORD *)this + 204) = this;
  v3 = *((_QWORD *)this + 223);
  *((_BYTE *)this + 1912) = 1;
  if ( (*(_BYTE *)(v3 + 272) & 1) == 0
    || (v4 = *(_BYTE *)(v3 + 102), *((_BYTE *)this + 1912) = (v4 & 4) != 0, (v4 & 4) != 0) )
  {
    if ( (**(_DWORD **)(v3 + 232) & 0x200000) != 0 )
      *((_BYTE *)this + 1912) = *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v3) + 303);
  }
  return 0LL;
}
