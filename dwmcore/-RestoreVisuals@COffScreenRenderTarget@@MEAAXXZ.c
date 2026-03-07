void __fastcall COffScreenRenderTarget::RestoreVisuals(CComposition **this)
{
  if ( *((_DWORD *)this + 438) )
    CComposition::RestoreCursors(this[2]);
}
