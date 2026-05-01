/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800D7040
 * Callers:
 *     ?GetOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1802A2970 (-GetOnComplete@-$AsyncBase@U-$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewMana.c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804148F0 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180466388 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1804665C4 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804681E4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x18046ACE0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18046E500 (-SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18046EDC0 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x18046F1D4 (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x18046F454 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 *     ?UnsubscribeFromServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18046F930 (-UnsubscribeFromServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x180477BE0 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180481CBC (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return a1;
}
