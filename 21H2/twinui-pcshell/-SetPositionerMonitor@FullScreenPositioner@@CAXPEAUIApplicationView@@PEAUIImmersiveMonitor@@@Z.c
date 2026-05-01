/*
 * XREFs of ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180216BA0
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180214DD0 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x180214FB0 (-ControlLost@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180215C50 (-HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180217760 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1804E16DC (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall FullScreenPositioner::SetPositionerMonitor(struct IApplicationView *a1, struct IImmersiveMonitor *a2)
{
  struct IImmersiveApplication *ApplicationFromView; // rbx
  struct IImmersiveApplication *v4; // [rsp+40h] [rbp+18h] BYREF

  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a1, a2);
  v4 = ApplicationFromView;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v4);
  (*(void (__fastcall **)(struct IImmersiveApplication *, struct IImmersiveMonitor *))(*(_QWORD *)ApplicationFromView
                                                                                     + 360LL))(
    ApplicationFromView,
    a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
}
