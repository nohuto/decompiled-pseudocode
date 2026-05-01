/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@1@XZ @ 0x1801365B4
 * Callers:
 *     ??$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJXZ@Z @ 0x180129DC8 (--$ApplyTaskbarLayout@$$VP8CPinnedList@@EAAJXZ@PinManager@implementation@Shell@Internal@Windows@.c)
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@H@Z1H@Z @ 0x180129F08 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@HP8CPinnedList@@EAAJW41@H@Z@PinManager@implementation.c)
 *     ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x18012A060 (--$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@S.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B4F0 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B734 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x18013B92C (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 *     ?PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013BF90 (-PinItemFromTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITE.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x18013C100 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x18013FA44 (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 * Callees:
 *     ??0?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180135428 (--0-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180145188 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 */

__int64 *__fastcall tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax

  v3 = (__int64 *)tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(a1);
  tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
    a2,
    v3);
  return a2;
}
