/*
 * XREFs of ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x18008C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x180011FD4 (-_StartDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800A144C (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEA.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1888 (--B-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@1@XZ @ 0x1800A18AC (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAA-AV-$tes.c)
 *     ?CompleteFullActivationTest@SearchAppExperienceManager@@AEAAX_NV?$optional@W4FullActivationTestSource@@@std@@@Z @ 0x1800A28D8 (-CompleteFullActivationTest@SearchAppExperienceManager@@AEAAX_NV-$optional@W4FullActivationTestS.c)
 *     ?_UntrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AB4F4 (-_UntrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB700 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8F04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8F04.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD3E8 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::Hide(SearchAppExperienceManager *this)
{
  __int64 v2; // rdx
  int started; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 640, &v8);
    if ( (unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool((char *)this + 632) )
    {
      *(_BYTE *)(*(_QWORD *)tip::tip_test<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                              (char *)this + 632,
                              &v7)
               + 274LL) = 1;
      tip::test_data_control<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v7);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
    LOBYTE(v2) = 1;
    SearchAppExperienceManager::CompleteFullActivationTest(this, v2, 0LL);
  }
  if ( *((_BYTE *)this + 548)
    && (started = SearchAppExperienceManager::_StartDeferredSuspensionTimer((LARGE_INTEGER *)this),
        v4 = started,
        started < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)started);
    return v4;
  }
  else
  {
    SearchAppExperienceManager::_UntrackMouseMovement(this);
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 72LL))(*((_QWORD *)this + 54));
  }
}
