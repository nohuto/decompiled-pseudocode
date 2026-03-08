/*
 * XREFs of ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x180129CEC
 * Callers:
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F6508 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?RestoreVisuals@CVisualGroup@@QEAAXXZ @ 0x180214CF4 (-RestoreVisuals@CVisualGroup@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreDDAVisuals(CComposition *this)
{
  CVisualGroup *v1; // rcx

  v1 = (CVisualGroup *)*((_QWORD *)g_pComposition + 126);
  if ( v1 )
    CVisualGroup::RestoreVisuals(v1);
}
