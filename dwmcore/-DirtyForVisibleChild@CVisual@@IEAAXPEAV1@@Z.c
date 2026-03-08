/*
 * XREFs of ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@@Z @ 0x1800E7F90
 * Callers:
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1800E7EF4 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

void __fastcall CVisual::DirtyForVisibleChild(CVisual *this, struct CVisual *a2)
{
  CVisual::PropagateFlags((__int64)this, 0x11u);
  CVisual::PropagateFlags((__int64)a2, 4u);
  CVisual::NotifyMidManipulationUpdate(this, 2LL, a2);
}
