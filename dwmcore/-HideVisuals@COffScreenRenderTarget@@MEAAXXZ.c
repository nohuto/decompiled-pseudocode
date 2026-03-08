/*
 * XREFs of ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E6C00
 * Callers:
 *     ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x1801ECF70 (-HideVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18001D410 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 */

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
