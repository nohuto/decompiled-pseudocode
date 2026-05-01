/*
 * XREFs of ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B8A4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B3A8 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$RequestorAllowedChecked@AEA_NW4RequestorAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4RequestorAllowedCheckResult@0@@Z @ 0x180132658 (--$RequestorAllowedChecked@AEA_NW4RequestorAllowedCheckResult@PinManagerTelemetry@@@PinManagerTe.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135ED8 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@1@XZ @ 0x180136724 (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@.c)
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x180138FF8 (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 *     _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x18013AF7C (_anonymous_namespace_--IsAppsFolderEntryPresent.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FFD0 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinRequestorAllowed(
        __int64 a1,
        void *a2,
        _QWORD *a3,
        char a4,
        __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v17[16]; // [rsp+30h] [rbp-30h] BYREF
  void *v18; // [rsp+40h] [rbp-20h] BYREF
  char v19[8]; // [rsp+48h] [rbp-18h] BYREF

  v18 = a3;
  v19[0] = a4;
  if ( a4 )
  {
    v16 = *(_OWORD *)PinRequestContext::RequestorBestAvailableAppId(*a3, v17);
    if ( !anonymous_namespace_::IsAppsFolderEntryPresent(&v16, v7, v8, v9) )
    {
      *(_DWORD *)(*tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                     a5,
                     (__int64 *)&v18)
                + 336) = 5;
      tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
        &v18,
        v10);
      LODWORD(v18) = 1;
LABEL_6:
      PinManagerTelemetry::RequestorAllowedChecked<bool &,enum PinManagerTelemetry::RequestorAllowedCheckResult>(
        v19,
        (int *)&v18);
      v13 = (std::_Ref_count_base *)a3[1];
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      return 0;
    }
    v11 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(&v16, a3);
    if ( !anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements(a2, v11) )
    {
      *(_DWORD *)(*tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                     a5,
                     (__int64 *)&v18)
                + 336) = 4;
      tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
        &v18,
        v12);
      LODWORD(v18) = 2;
      goto LABEL_6;
    }
  }
  LODWORD(v18) = 0;
  PinManagerTelemetry::RequestorAllowedChecked<bool &,enum PinManagerTelemetry::RequestorAllowedCheckResult>(
    v19,
    (int *)&v18);
  v15 = (std::_Ref_count_base *)a3[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return 1;
}
