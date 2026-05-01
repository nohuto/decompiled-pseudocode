/*
 * XREFs of ??$HandleRequestPinItemAsync@VPinManagerRequestPinItem@PinManagerTelemetry@@@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@_N@Foundation@45@Uhstring@5@0USecondaryTile@StartScreen@UI@45@PEFBU_ITEMIDLIST@@_N3W4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x180131C38
 * Callers:
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x18013FBB4 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012A9A8 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012A9A8.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180135C50 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135F10 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x180136450 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync<PinManagerTelemetry::PinManagerRequestPinItem>(
        __int64 a1,
        __int64 *a2,
        HSTRING *a3,
        HSTRING *a4,
        __int64 *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        PinManagerTelemetry::PinManagerRequestPinItem *a10,
        __int64 a11,
        __int64 a12)
{
  void *v15; // rax
  char v17[16]; // [rsp+70h] [rbp-90h] BYREF
  char v18[8]; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h]
  HSTRING *v22; // [rsp+988h] [rbp+888h]
  HSTRING *v23; // [rsp+990h] [rbp+890h]
  __int64 *v24; // [rsp+998h] [rbp+898h]
  PinManagerTelemetry::PinManagerRequestPinItem *v25; // [rsp+9A0h] [rbp+8A0h]
  __int64 v26; // [rsp+9A8h] [rbp+8A8h]
  __int64 v27; // [rsp+9B0h] [rbp+8B0h]

  v21 = a1;
  v22 = a3;
  v23 = a4;
  v24 = a5;
  v25 = a10;
  v26 = a11;
  v27 = a12;
  v19 = 28;
  v17[0] = 0;
  v18[0] = 1;
  v15 = operator new(0x8E8uLL);
  v20 = 0;
  winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__InitCoro_1_PinManagerTelemetry::PinManagerRequestPinItem_(
    &v20,
    (__int64)v15 + 96,
    a2,
    (__int64)a3,
    (__int64)a4,
    (__int64)a5,
    0LL,
    v18,
    v17,
    &v19,
    (__int64)a10,
    a11,
    a12,
    v21);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a4);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a5);
  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem(a10);
  wil::com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(a11);
  tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a12);
  return a2;
}
