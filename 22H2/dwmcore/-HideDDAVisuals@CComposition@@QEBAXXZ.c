/*
 * XREFs of ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x18012DE60
 * Callers:
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F9888 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HideVisuals@CVisualGroup@@QEAAXXZ @ 0x1801320C8 (-HideVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CComposition::HideDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)this + 126);
  if ( v1 )
    CVisualGroup::HideVisuals(v1);
}
