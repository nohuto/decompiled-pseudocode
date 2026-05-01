/*
 * XREFs of ?Uncloak@SearchAppExperienceManager@@UEAAJXZ @ 0x18008CB80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@$$T@Z @ 0x1800A0E48 (--0-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@$$T.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A14BC (--1-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@XZ.c)
 *     ??4?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A17AC (--4-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAAEAV.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1888 (--B-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB700 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@2@XZ @ 0x1800AF160 (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@Q.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8F04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8F04.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD3E8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::Uncloak(SearchAppExperienceManager *this)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  _BYTE v5[56]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v6[64]; // [rsp+58h] [rbp-40h] BYREF
  char v7; // [rsp+A0h] [rbp+8h] BYREF

  tip::test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v5);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 640, &v7);
    if ( (unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool((char *)this + 632) )
    {
      v2 = tip::tip_test<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::watch_errors(
             (char *)this + 632,
             v6);
      tip::test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator=(
        v5,
        v2);
      tip::test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v6);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 120LL))(*((_QWORD *)this + 54));
  tip::test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_watcher<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v5);
  return v3;
}
