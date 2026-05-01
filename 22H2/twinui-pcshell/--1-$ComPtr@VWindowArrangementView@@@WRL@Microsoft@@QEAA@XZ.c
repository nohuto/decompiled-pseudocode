/*
 * XREFs of ??1?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ @ 0x18047BF20
 * Callers:
 *     ??$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArrangementView@@@Z @ 0x18047B73C (--$MakeAndInitialize@VWindowArrangementView@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVWindowArran.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$0 @ 0x18047CA8A (_WindowArrangementView--CancelPlacement_--_1_--dtor$0.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$1 @ 0x18047CA96 (_WindowArrangementView--CancelPlacement_--_1_--dtor$1.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$3 @ 0x18047CAAE (_WindowArrangementView--CancelPlacement_--_1_--dtor$3.c)
 *     _WindowArrangementView::Hide_::_1_::dtor$0 @ 0x18047D80C (_WindowArrangementView--Hide_--_1_--dtor$0.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$2 @ 0x18047F743 (_WindowArrangementView--ShowView_--_1_--dtor$2.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$3 @ 0x18047F74F (_WindowArrangementView--ShowView_--_1_--dtor$3.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$2 @ 0x1804803B7 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$2.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$3 @ 0x1804803C3 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::~ComPtr<WindowArrangementView>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
}
