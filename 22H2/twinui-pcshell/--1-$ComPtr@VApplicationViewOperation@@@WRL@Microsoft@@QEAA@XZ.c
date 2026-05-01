/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x180213DC0
 * Callers:
 *     __lambda_280d05e5955ef1ef6fea1bffa32e8a2c_::operator()_::_1_::dtor$0 @ 0x1800D6529 (__lambda_280d05e5955ef1ef6fea1bffa32e8a2c_--operator()_--_1_--dtor$0.c)
 *     _CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured_::_1_::dtor$0 @ 0x1801754AF (_CDesktopPositioner--CreateAppViewOperationWithTitleBarAndChromeConfigured_--_1_--dtor$0.c)
 *     _FullScreenPositioner::ApplyPendingPositioningOperations_::_1_::dtor$0 @ 0x1802145E9 (_FullScreenPositioner--ApplyPendingPositioningOperations_--_1_--dtor$0.c)
 *     _FullScreenPositioner::PositionView_::_1_::dtor$1 @ 0x1802163F1 (_FullScreenPositioner--PositionView_--_1_--dtor$1.c)
 *     _FullScreenPositioner::SetViewStateForDesiredAppState_::_1_::dtor$1 @ 0x180216C6B (_FullScreenPositioner--SetViewStateForDesiredAppState_--_1_--dtor$1.c)
 *     _HolographicPositioner::_EnsureHolographicViewConfiguration_::_1_::dtor$1 @ 0x1802B3C6F (_HolographicPositioner--_EnsureHolographicViewConfiguration_--_1_--dtor$1.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$2 @ 0x1802B5F0E (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$2.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$1 @ 0x1802CC00D (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$1.c)
 *     _wil::MakeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x1802F481E (_wil--MakeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     _TitleBarController::AttachTitleBarToView_::_1_::dtor$4 @ 0x1802F6552 (_TitleBarController--AttachTitleBarToView_--_1_--dtor$4.c)
 *     _TitleBarController::OnViewRecovered_::_1_::dtor$1 @ 0x1802F77C0 (_TitleBarController--OnViewRecovered_--_1_--dtor$1.c)
 *     _TabTransferManager::PrepareTabAndViewForDrag_::_1_::dtor$3 @ 0x1802FFC6F (_TabTransferManager--PrepareTabAndViewForDrag_--_1_--dtor$3.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$8 @ 0x180307550 (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$8.c)
 *     _ViewGroup::OnTemplateAppliedToWindow_::_1_::dtor$9 @ 0x18030755C (_ViewGroup--OnTemplateAppliedToWindow_--_1_--dtor$9.c)
 *     _SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange_::_1_::dtor$0 @ 0x1804489F6 (_SurfaceHubPositioner--_RepositionAppViewsOnWorkAreaChange_--_1_--dtor$0.c)
 *     _SurfaceHubPositioner::_SetDefaultLayout_::_1_::dtor$1 @ 0x180448CA3 (_SurfaceHubPositioner--_SetDefaultLayout_--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_ApplicationViewOperation__::_1_::dtor$0 @ 0x180449387 (_wil--MakeAndInitializeOrThrow_ApplicationViewOperation__--_1_--dtor$0.c)
 *     _KioskPositioner::CreateApplicationViewOperation_::_1_::dtor$1 @ 0x18044A633 (_KioskPositioner--CreateApplicationViewOperation_--_1_--dtor$1.c)
 *     _VoiceAssistantPositioner::SetViewStateForDesiredAppState_::_1_::dtor$2 @ 0x180451F55 (_VoiceAssistantPositioner--SetViewStateForDesiredAppState_--_1_--dtor$2.c)
 *     _CDesktopPositioner::DragCompleted_::_1_::dtor$4 @ 0x18045AFC1 (_CDesktopPositioner--DragCompleted_--_1_--dtor$4.c)
 *     _CDesktopPositioner::PositionViewWithOptions_::_1_::dtor$0_0 @ 0x18045C7B1 (_CDesktopPositioner--PositionViewWithOptions_--_1_--dtor$0_0.c)
 *     _CDesktopPositioner::PresentationChangedForView_::_1_::dtor$3 @ 0x18045CA3D (_CDesktopPositioner--PresentationChangedForView_--_1_--dtor$3.c)
 *     _CDesktopPositioner::ResizeView_::_1_::dtor$0 @ 0x18045CCE5 (_CDesktopPositioner--ResizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_MinimizeView_::_1_::dtor$0 @ 0x18045F701 (_CDesktopPositioner--_MinimizeView_--_1_--dtor$0.c)
 *     _CDesktopPositioner::_RestoreView_::_1_::dtor$0 @ 0x18045FB7D (_CDesktopPositioner--_RestoreView_--_1_--dtor$0.c)
 *     _TabletModePositioner::CreateAndInitApplicationViewOperation_::_1_::dtor$0 @ 0x18046599A (_TabletModePositioner--CreateAndInitApplicationViewOperation_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(a1);
}
