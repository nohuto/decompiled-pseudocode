/*
 * XREFs of ??1?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ @ 0x18047C2B0
 * Callers:
 *     ??$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArrangementView@@@Z @ 0x18047BACC (--$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArran.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$0 @ 0x18047CE1A (_WindowArrangementView--CancelPlacement_--_1_--dtor$0.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$1 @ 0x18047CE26 (_WindowArrangementView--CancelPlacement_--_1_--dtor$1.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$3 @ 0x18047CE3E (_WindowArrangementView--CancelPlacement_--_1_--dtor$3.c)
 *     _WindowArrangementView::Hide_::_1_::dtor$0 @ 0x18047DB9C (_WindowArrangementView--Hide_--_1_--dtor$0.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$2 @ 0x18047FAD3 (_WindowArrangementView--ShowView_--_1_--dtor$2.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$3 @ 0x18047FADF (_WindowArrangementView--ShowView_--_1_--dtor$3.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$2 @ 0x180480747 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$2.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$3 @ 0x180480753 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::~ComPtr<WindowArrangementView>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
}
