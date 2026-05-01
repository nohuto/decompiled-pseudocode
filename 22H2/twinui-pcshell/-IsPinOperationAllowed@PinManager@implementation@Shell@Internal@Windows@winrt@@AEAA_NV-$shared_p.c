/*
 * XREFs of ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B4F0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012AC30 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E2A0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E2A0.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B238 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4OperationAllowedCheckResult@0@@Z @ 0x180131DA0 (--$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTe.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x1801353F8 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135D68 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@1@XZ @ 0x1801365B4 (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@.c)
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013B5C0 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinOperationAllowed(
        __int64 a1,
        _QWORD *a2,
        char a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base *v11; // rcx
  void *v12[2]; // [rsp+20h] [rbp-38h] BYREF
  char v13[8]; // [rsp+30h] [rbp-28h] BYREF

  v13[0] = a3;
  v6 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v12, a2);
  if ( (unsigned __int8)PinHistory::IsPinOperationBlocked(v7 + 128, v6) )
  {
    *(_DWORD *)(*tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                   a4,
                   (__int64 *)v12)
              + 336) = 3;
    tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
      v12,
      v8);
    LODWORD(v12[0]) = 1;
    PinManagerTelemetry::OperationAllowedChecked<bool &,enum PinManagerTelemetry::OperationAllowedCheckResult>(
      v13,
      (int *)v12);
    v9 = (std::_Ref_count_base *)a2[1];
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return 0;
  }
  else
  {
    LODWORD(v12[0]) = 0;
    PinManagerTelemetry::OperationAllowedChecked<bool &,enum PinManagerTelemetry::OperationAllowedCheckResult>(
      v13,
      (int *)v12);
    v11 = (std::_Ref_count_base *)a2[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    return 1;
  }
}
