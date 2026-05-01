/*
 * XREFs of ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18014658C
 * Callers:
 *     ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x180141A7C (-Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z @ 0x180141CE4 (-Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z.c)
 *     ?Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x180141F4C (-Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemR.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x180142208 (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 *     ?StopActivity@PinManagerIsItemPinned@PinManagerTelemetry@@MEAAXXZ @ 0x1801426F0 (-StopActivity@PinManagerIsItemPinned@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@MEAAXXZ @ 0x180142910 (-StopActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@MEAAXXZ @ 0x180142B30 (-StopActivity@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinManagerRequestPinItem@PinManagerTelemetry@@MEAAXXZ @ 0x180142D50 (-StopActivity@PinManagerRequestPinItem@PinManagerTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@PinningActivity@TaskbarPinningTelemetry@@MEAAXXZ @ 0x18015C5A0 (-StopActivity@PinningActivity@TaskbarPinningTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x18015C7C0 (-StopActivity@TaskbarLayoutInPlaceActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x18015C9D0 (-StopActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x18015CBF0 (-StopActivity@TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800BBFFC (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v2);
  **(_DWORD **)(a1 + 48) = 2;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v2);
}
