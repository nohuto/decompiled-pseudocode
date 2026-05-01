/*
 * XREFs of ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x180266678
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18007DB10 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 * Callees:
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x180014180 (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$InvokeAll@PEAVSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@$$T@Z @ 0x180051368 (--$InvokeAll@PEAVSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A142C (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEA.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1868 (--B-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@1@XZ @ 0x1800A188C (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA-AV-$tes.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB6E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8D54 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8D54.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD238 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x180266C7C (-_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnViewDestroyed(SearchAppExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 80, &v7);
    if ( (unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool((__int64 *)this + 79) )
    {
      *(_BYTE *)(*tip::tip_test<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                    (__int64)this + 632,
                    (__int64 *)&v6)
               + 277) = 1;
      tip::test_data_control<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v6);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  }
  v2 = SearchAppExperienceManager::_CancelDeferredSuspensionTimer(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6AD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = SearchAppExperienceManager::_UnregisterViewPresentationChanged(this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x6AE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,std::nullptr_t>(
    (__int64)this + 96,
    (__int64)this);
  return 0LL;
}
