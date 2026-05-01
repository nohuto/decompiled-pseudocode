/*
 * XREFs of ??$make_agile_delegate@U?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@1@AEBU2341@@Z @ 0x1804D10F4
 * Callers:
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@3@@Z @ 0x1800F4D54 (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Wind.c)
 *     ?Completed@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEBU?$AsyncOperationCompletedHandler@_N@Foundation@Windows@3@@Z @ 0x1804D206C (-Completed@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Fo_ea_1804D206C.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     RoGetAgileReference_0 @ 0x18009139F (RoGetAgileReference_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_8cbb94e41580c6c85ce6cc2ea21e6745___ @ 0x1804D0038 (winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool_--AsyncOperationCompletedHandler.c)
 */

__int64 *__fastcall winrt::impl::make_agile_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>>(
        __int64 *a1,
        __int64 *a2)
{
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // rax
  char v6; // si
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  if ( !*a2 )
  {
    v5 = 0LL;
    v11 = 0LL;
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v11 = 0LL;
  (**v4)(v4, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v11);
  v5 = v11;
  if ( !v11 )
    goto LABEL_3;
  v6 = 1;
LABEL_4:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  v7 = *a2;
  if ( v6 )
  {
    *a1 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  }
  else
  {
    v10 = 0LL;
    RoGetAgileReference_0(
      0LL,
      (__int64)&winrt::impl::guid_storage<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>>::value,
      v7,
      (__int64)&v10);
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      v11 = v8;
      winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_8cbb94e41580c6c85ce6cc2ea21e6745___(
        a1,
        &v11);
    }
    else
    {
      *a1 = *a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
    }
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  }
  return a1;
}
