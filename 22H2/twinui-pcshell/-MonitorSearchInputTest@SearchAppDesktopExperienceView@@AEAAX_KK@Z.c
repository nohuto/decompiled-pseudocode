/*
 * XREFs of ?MonitorSearchInputTest@SearchAppDesktopExperienceView@@AEAAX_KK@Z @ 0x1800C023C
 * Callers:
 *     ?LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z @ 0x1800C0130 (-LowLevelKeyboardHookProc@SearchAppDesktopExperienceView@@CA_JH_K_J@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ @ 0x1800A1868 (--B-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA_NXZ.c)
 *     ??$SearchInputTest_KeyDownReceived@AEAI@CortanaProactiveTelemetry@@SAXAEAI@Z @ 0x1800BED0C (--$SearchInputTest_KeyDownReceived@AEAI@CortanaProactiveTelemetry@@SAXAEAI@Z.c)
 *     ??$SearchInputTest_KeyUpReceived@AEAI@CortanaProactiveTelemetry@@SAXAEAI@Z @ 0x1800BED64 (--$SearchInputTest_KeyUpReceived@AEAI@CortanaProactiveTelemetry@@SAXAEAI@Z.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA?AV?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@0@U_GUID@@@Z @ 0x1800BEDBC (--$open@V-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@@tip@@YA-AV-$ti.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BF158 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ @ 0x1800BF178 (--1-$test_data_control@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA@XZ.c)
 *     ?CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1800BF534 (-CompleteSearchInputTest@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_51607638@@@details@wil@@QEAA_NXZ @ 0x1800C0CCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_51607638@@@details@wil@@QEAA_NXZ.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@2@XZ @ 0x1800C0EC8 (-data@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAA-AV-$test_data.c)
 *     ?test_id@?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA?AU_GUID@@XZ @ 0x1800C1374 (-test_id@-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEBA-AU_GUID@@X.c)
 */

void __fastcall SearchAppDesktopExperienceView::MonitorSearchInputTest(
        SearchAppDesktopExperienceView *this,
        __int64 a2)
{
  SearchAppDesktopExperienceView *v2; // rdi
  char *v4; // rsi
  int *v5; // rcx
  int *v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-10h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+20h] BYREF
  RTL_SRWLOCK *v10; // [rsp+78h] [rbp+38h] BYREF

  v9 = this;
  v2 = `anonymous namespace'::g_searchAppExperienceView;
  v4 = (char *)`anonymous namespace'::g_searchAppExperienceView + 328;
  if ( (unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool((__int64 *)`anonymous namespace'::g_searchAppExperienceView + 41) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_51607638>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_51607638>::GetImpl'::`2'::impl)
      && !*((_BYTE *)v2 + 352) )
    {
      v7 = *(_OWORD *)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::test_id(
                        v4,
                        v8);
      tip::open<tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>>(&v9, &v7);
      if ( (unsigned __int8)tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::operator bool((__int64 *)&v9) )
        SearchAppDesktopExperienceView::CompleteSearchInputTest(v2);
      wil::com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>,wil::err_returncode_policy>((void **)&v9);
    }
    else
    {
      if ( a2 == 256 )
      {
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)v2 + 43, &v10);
        tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::data(v4, &v9);
        v5 = v9 + 67;
        ++v9[67];
        CortanaProactiveTelemetry::SearchInputTest_KeyDownReceived<unsigned int &>(v5);
      }
      else
      {
        if ( a2 != 257 )
          return;
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)v2 + 43, &v10);
        tip::tip_test<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::data(v4, &v9);
        v6 = v9 + 68;
        ++v9[68];
        CortanaProactiveTelemetry::SearchInputTest_KeyUpReceived<unsigned int &>(v6);
      }
      tip::test_data_control<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>::~test_data_control<tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>>((void **)&v9);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
    }
  }
}
