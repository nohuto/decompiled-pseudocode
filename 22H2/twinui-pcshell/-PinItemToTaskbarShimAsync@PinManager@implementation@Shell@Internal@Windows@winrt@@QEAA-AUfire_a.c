/*
 * XREFs of ?PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@PEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013D968
 * Callers:
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013C100 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180135AE0 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135DA0 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@.c)
 *     ??1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ @ 0x1801362B4 (--1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_InitCoro$1 @ 0x18013C4BC (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_InitCoro.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        int a4,
        PinManagerTelemetry::PinManagerPinItemToTaskbarShim *a5,
        __int64 *a6,
        __int64 a7)
{
  void *v10; // rax
  int v12; // [rsp+50h] [rbp-538h] BYREF
  int v13[310]; // [rsp+58h] [rbp-530h] BYREF
  PinManagerTelemetry::PinManagerPinItemToTaskbarShim *v14; // [rsp+530h] [rbp-58h]
  __int64 *v15; // [rsp+538h] [rbp-50h]
  __int64 v16; // [rsp+540h] [rbp-48h]

  v12 = a4;
  v14 = a5;
  v15 = a6;
  v16 = a7;
  v10 = operator new(0x4D0uLL);
  v13[0] = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync__InitCoro_1(
    v13,
    (__int64)v10,
    a2,
    a3,
    &v12,
    (__int64)a5,
    a6,
    a7,
    a1);
  PinManagerTelemetry::PinManagerPinItemToTaskbarShim::~PinManagerPinItemToTaskbarShim(a5);
  wil::com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>((void **)a6);
  tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a7);
  return a2;
}
