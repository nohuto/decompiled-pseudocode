/*
 * XREFs of ??0_parameters_@?4??PinItemToTaskbarShimAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@PEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z@QEAA@QEAU234567@01234Ususpend_never@experimental@std@@@Z @ 0x180134DD8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_InitCoro$1 @ 0x18013C62C (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_InitCoro.c)
 * Callees:
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180135104 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180135C50 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135F10 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@.c)
 *     ??1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ @ 0x180136424 (--1PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall `winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync'::`5'::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        PinManagerTelemetry::PinManagerPinItemToTaskbarShim *a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 v8; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 24,
    a5);
  *(_QWORD *)(a1 + 24) = &PinManagerTelemetry::PinManagerPinItemToTaskbarShim::`vftable';
  v8 = *a6;
  *a6 = 0LL;
  *(_QWORD *)(a1 + 336) = v8;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 344) = &tip::test_watcher<tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::`vftable';
  *(_QWORD *)(a1 + 360) = a1 + 344;
  *(_QWORD *)(a1 + 392) = 0LL;
  PinManagerTelemetry::PinManagerPinItemToTaskbarShim::~PinManagerPinItemToTaskbarShim(a5);
  wil::com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(a6);
  tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(a7);
  return a1;
}
