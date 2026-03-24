/*
 * XREFs of ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ @ 0x180185870
 * Callers:
 *     ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ @ 0x18018B260 (-HideVisuals@CMagnifierRenderTarget@@MEAAXXZ.c)
 * Callees:
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800DF12C (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 */

void __fastcall COffScreenRenderTarget::HideVisuals(COffScreenRenderTarget *this)
{
  char v1; // dl

  if ( *((_DWORD *)this + 442) == 1 )
  {
    v1 = 1;
  }
  else
  {
    if ( *((_DWORD *)this + 442) != 2 )
      return;
    v1 = 0;
  }
  CComposition::ShowHideCursors(*((CComposition **)this + 2), v1);
}
