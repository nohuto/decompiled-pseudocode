/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180282AB4
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180282880 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_180282880.c)
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHost@@@Z @ 0x180368074 (--$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHo.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::_lambda_e7233f2d7fbbc8c446f08901eacadde9__0 @ 0x180369C1C (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--_lambda_e7233f2d7fbbc8c446f08901eacadde9__0.c)
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x18036ED3C (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18036FB80 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ??$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewHost@@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIMultitaskingViewVisibilityServiceInternal@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x1803FD230 (--$MakeAndInitialize@VCSnapAssistViewHost@@V1@AEAPEAUIMultitaskingData@@AEAPEAUIMultitaskingView.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x180401A28 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 156), a2);
}
