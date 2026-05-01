/*
 * XREFs of ?CloseSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x18041D570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x18041D098 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 */

void __fastcall CAsyncSwitchItemController::CloseSwitchItem(CAsyncSwitchItemController *this, struct ISwitchItem *a2)
{
  struct ISwitchItem *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v3);
  AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem>(
    (int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2,
    (__int64) Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{64,{flat}},
    (__int64 *)&v3);
}
