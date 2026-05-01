/*
 * XREFs of ?MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z @ 0x18041D7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x18041D130 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 */

void __fastcall CAsyncSwitchItemController::MoveItemToDesktop(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2,
        struct IVirtualDesktopItem *a3)
{
  __int64 v5; // rdx
  struct IVirtualDesktopItem *v6; // [rsp+30h] [rbp+8h] BYREF
  struct ISwitchItem *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
  v7 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem,IVirtualDesktopItem>(
    (int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2,
    v5,
    (__int64 *)&v7,
    (__int64 *)&v6);
}
