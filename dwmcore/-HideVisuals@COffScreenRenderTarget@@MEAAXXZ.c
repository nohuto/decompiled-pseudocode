void __fastcall COffScreenRenderTarget::HideVisuals(COffScreenRenderTarget *this)
{
  char v1; // dl

  if ( *((_DWORD *)this + 438) == 1 )
  {
    v1 = 1;
  }
  else
  {
    if ( *((_DWORD *)this + 438) != 2 )
      return;
    v1 = 0;
  }
  CComposition::ShowHideCursors(*((CComposition **)this + 2), v1);
}
