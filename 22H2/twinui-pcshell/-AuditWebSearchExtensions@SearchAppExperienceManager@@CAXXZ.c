/*
 * XREFs of ?AuditWebSearchExtensions@SearchAppExperienceManager@@CAXXZ @ 0x1800A2248
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_569f1dea4e6c93c9ba437cb5fee0370c___::Run @ 0x1800A9900 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_569f1dea4e6c93c9ba437cb5fee0370c___--Run.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@@Z @ 0x18009DC48 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009DCA0 (--$_Freenode@V-$allocator@U-$_Tree_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$end@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x18009E7DC (--$end@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Wind.c)
 *     ??$wait_get@U?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@1@AEBU?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@451@@Z @ 0x1800A07EC (--$wait_get@U-$IAsyncOperation@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Col.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??D?$fast_iterator@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabView@Shell@UI@Internal@Windows@2@XZ @ 0x1800A18F4 (--D-$fast_iterator@U-$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@F.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A1998 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?ActiveTab@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabView@Shell@UI@Internal@Windows@3@XZ @ 0x1800A2200 (-ActiveTab@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI.c)
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ @ 0x1800A2CD0 (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJXZ.c)
 *     ?DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ @ 0x1800A2FF8 (-DoKeysExistAndCanAccess@SearchSettingsHelper@SearchSettings@@SA_NXZ.c)
 *     ?FindAllAsync@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1800A30EC (-FindAllAsync@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?InstalledDate@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x1800A7A34 (-InstalledDate@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@Win.c)
 *     ?PopulateAllRegistryExtension@@YAXPEAUHKEY__@@AEAV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x1800A8254 (-PopulateAllRegistryExtension@@YAXPEAUHKEY__@@AEAV-$set@V-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?SHRegValueExists@@YAHPEAUHKEY__@@PEBGPEAK@Z @ 0x1800A990C (-SHRegValueExists@@YAHPEAUHKEY__@@PEBGPEAK@Z.c)
 *     ?SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@@Z @ 0x1800A9B4C (-SetWebSearchProviderInstalledDate@SearchSettingsHelper@SearchSettings@@SAJQEBGV-$time_point@Ucl.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@2@@Z @ 0x1800AAF64 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56277908@@@details@wil@@QEAA_NXZ @ 0x1800AB62C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56277908@@@details@wil@@QEAA_NXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFAC4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18020605C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180256C24 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180266C50 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=9
void SearchAppExperienceManager::AuditWebSearchExtensions(void)
{
  int KeyAndSetSecurityDescriptorRecursively; // eax
  __int64 *AllAsync; // rax
  unsigned int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  unsigned int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  unsigned int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  _QWORD *v8; // rax
  int v9; // r14d
  int i; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  unsigned int *v12; // r8
  const WCHAR *v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  HSTRING v21; // rax
  HSTRING v22; // rbx
  const WCHAR *v23; // rdi
  const WCHAR *v24; // rdx
  unsigned int v25; // eax
  const WCHAR *v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // eax
  const char *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int phkResult; // [rsp+20h] [rbp-98h]
  unsigned int phkResulta; // [rsp+20h] [rbp-98h]
  __int64 v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h] BYREF
  __int64 j; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v38[8]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v39; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v40; // [rsp+60h] [rbp-58h] BYREF
  int v41; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v42[2]; // [rsp+70h] [rbp-48h] BYREF
  _BYTE v43[8]; // [rsp+80h] [rbp-38h] BYREF
  int v44; // [rsp+88h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  HKEY v46; // [rsp+C0h] [rbp+8h] BYREF
  HKEY hKey; // [rsp+C8h] [rbp+10h] BYREF
  HSTRING string; // [rsp+D0h] [rbp+18h] BYREF
  HKEY v49; // [rsp+D8h] [rbp+20h] BYREF

  try
  {
    if ( SearchSettings::SearchSettingsHelper::DoKeysExistAndCanAccess()
      || (KeyAndSetSecurityDescriptorRecursively = SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively(),
          KeyAndSetSecurityDescriptorRecursively >= 0) )
    {
      AllAsync = (__int64 *)winrt::WindowsUdk::UI::Shell::WebSearchProvider::FindAllAsync();
      winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider>>>(
        (winrt *)&v36,
        AllAsync);
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&string);
      hKey = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &hKey,
        0LL);
      v2 = RegOpenKeyExW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
             0,
             0x2001Fu,
             &hKey);
      v3 = retaddr;
      if ( !v2 )
      {
        v46 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          &v46,
          0LL);
        v4 = RegOpenKeyExW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\InstalledDates",
               0,
               0x2001Fu,
               &v46);
        v5 = retaddr;
        if ( !v4 )
        {
          v49 = 0LL;
          if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56277908>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56277908>::GetImpl'::`2'::impl)
            || (wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
                  &v49,
                  0LL),
                v6 = RegOpenKeyExW(
                       HKEY_CURRENT_USER,
                       L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\Index",
                       0,
                       0x2001Fu,
                       &v49),
                v7 = retaddr,
                !v6) )
          {
            v39 = 0LL;
            v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
            *v8 = v8;
            v8[1] = v8;
            v8[2] = v8;
            *((_WORD *)v8 + 12) = 257;
            *(_QWORD *)&v39 = v8;
            PopulateAllRegistryExtension(hKey);
            PopulateAllRegistryExtension(v46);
            v40 = &v36;
            v9 = 0;
            v41 = 0;
            winrt::impl::end<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider>,0>(
              (__int64)v43,
              &v36);
            for ( i = 0; i != v44; i = v9 )
            {
              winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>>::operator*(
                &v40,
                (winrt *)&v35);
              winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::ActiveTab(
                &v35,
                &string);
              StringRawBuffer = WINRT_WindowsGetStringRawBuffer(string, 0LL);
              if ( !(unsigned int)SHRegValueExists(v46, StringRawBuffer, v12) )
              {
                winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::InstalledDate(
                  &v35,
                  v38);
                v13 = WINRT_WindowsGetStringRawBuffer(string, 0LL);
                v14 = SearchSettings::SearchSettingsHelper::SetWebSearchProviderInstalledDate(v13);
                if ( v14 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x96F,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
                    (const char *)(unsigned int)v14);
              }
              v15 = v39;
              v16 = *(_QWORD *)v39;
              for ( j = *(_QWORD *)v39; v16 != v15; v16 = j )
              {
                v17 = (_QWORD *)(v16 + 32);
                winrt::hstring::operator std::basic_string_view<unsigned short>(&string, v42);
                if ( *(_QWORD *)(v16 + 56) >= 8uLL )
                  v17 = (_QWORD *)*v17;
                if ( std::_Traits_equal<std::char_traits<unsigned short>>(
                       (__int64)v17,
                       *(_QWORD *)(v16 + 48),
                       v42[0],
                       (__int64)v42[1]) )
                {
                  break;
                }
                std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&j);
              }
              if ( v16 != (_QWORD)v39 )
              {
                v18 = (_QWORD *)std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Extract(&v39, v16);
                std::_Tree_node<std::wstring,void *>::_Freenode<std::allocator<std::_Tree_node<std::wstring,void *>>>(
                  v19,
                  v18);
              }
              winrt::handle_type<winrt::impl::hstring_traits>::close(&string);
              winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v35);
              v41 = ++v9;
            }
            v20 = v39;
            v21 = *(HSTRING *)v39;
            string = *(HSTRING *)v39;
            v22 = (HSTRING)v39;
            while ( v21 != v22 )
            {
              v23 = (const WCHAR *)(v21 + 8);
              v24 = (const WCHAR *)(v21 + 8);
              if ( *((_QWORD *)v21 + 7) >= 8uLL )
                v24 = *(const WCHAR **)v23;
              v25 = RegDeleteValueW(hKey, v24);
              if ( v25 )
                wil::details::in1diag3::_Log_Win32(
                  retaddr,
                  (void *)0x97D,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
                  (const char *)v25,
                  phkResulta);
              v26 = v23;
              if ( *((_QWORD *)v23 + 3) >= 8uLL )
                v26 = *(const WCHAR **)v23;
              v27 = RegDeleteValueW(v46, v26);
              if ( v27 )
                wil::details::in1diag3::_Log_Win32(
                  retaddr,
                  (void *)0x97F,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
                  (const char *)v27,
                  phkResulta);
              if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56277908>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56277908>::GetImpl'::`2'::impl) )
              {
                if ( *((_QWORD *)v23 + 3) >= 8uLL )
                  v23 = *(const WCHAR **)v23;
                v28 = RegDeleteValueW(v49, v23);
                if ( v28 )
                  wil::details::in1diag3::_Log_Win32(
                    retaddr,
                    (void *)0x982,
                    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
                    (const char *)v28,
                    phkResulta);
              }
              std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++((__int64 *)&string);
              v20 = v39;
              v21 = string;
            }
            std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Erase_tree<std::allocator<std::_Tree_node<std::wstring,void *>>>(
              (__int64)&v39,
              (__int64)&v39,
              *(__int64 **)(v20 + 8));
            std::_Deallocate<16,0>((void *)v39, (const struct std::nothrow_t *)0x40);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&v49);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&v46);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v36);
            return;
          }
LABEL_42:
          wil::details::in1diag3::_Throw_Win32(
            v7,
            (void *)0x95D,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
            (const char *)v6,
            phkResulta);
          __debugbreak();
          SearchAppExperienceManager::AuditWebSearchExtensions_::_1_::dtor_0(v31, v30, v32);
          return;
        }
LABEL_41:
        wil::details::in1diag3::_Throw_Win32(
          v5,
          (void *)0x958,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)v4,
          phkResulta);
        goto LABEL_42;
      }
    }
    else
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2383LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)KeyAndSetSecurityDescriptorRecursively);
    }
    wil::details::in1diag3::_Throw_Win32(
      v3,
      (void *)0x955,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)v2,
      phkResult);
    goto LABEL_41;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x986,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      v29);
  }
}
