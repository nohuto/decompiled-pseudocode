/*
 * XREFs of ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18007D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18007D920 (-_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x18007DF20 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18009DB18 (--$SearchApp_Dismiss@AEAY0L@$$CBG@CortanaProactiveTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A142C (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEA.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1868 (--B-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@1@XZ @ 0x1800A188C (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA-AV-$tes.c)
 *     ?OnFullActivationTestTimeoutTimer@SearchAppExperienceManager@@AEAAXXZ @ 0x1800A80F0 (-OnFullActivationTestTimeoutTimer@SearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB6E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8D54 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8D54.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD238 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??$DoInvoke@V_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@Z @ 0x18022531C (--$DoInvoke@V_lambda_9dd196aade3b74d6ebabba0926cd735f_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnMessageHandler(
        SearchAppExperienceManager *this,
        int a2,
        SearchAppExperienceManager *a3,
        int a4)
{
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a2 == *((_DWORD *)this + 114) )
    {
      SearchAppExperienceManager::_ResetActivationTimeoutPolicy(this);
    }
    else if ( a2 == *((_DWORD *)this + 118) )
    {
      SearchAppExperienceManager::_OnDeferredSuspensionTimer(this);
    }
    else if ( a2 == *((_DWORD *)this + 138) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 56LL))(*((_QWORD *)this + 54));
      CortanaProactiveTelemetry::SearchApp_Dismiss<unsigned short const (&)[11]>(L"MouseTrack");
    }
    else if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl)
           && a2 == 1025
           && a3 == this
           && a4 == 1 )
    {
      SearchAppExperienceManager::OnFullActivationTestTimeoutTimer(this);
    }
  }
  else if ( a3 == this )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
    {
      Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 640, v10);
      if ( (unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool((char *)this + 632) )
      {
        *(_DWORD *)(*(_QWORD *)tip::tip_test<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                                 (char *)this + 632,
                                 v9)
                  + 316LL) = a4;
        tip::test_data_control<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v9);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v10);
    }
    v11 = a4;
    v9[0] = v10;
    v10[0] = this;
    v9[1] = &v11;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_9dd196aade3b74d6ebabba0926cd735f_>(
      (char *)this + 312,
      v9);
  }
  return 0LL;
}
