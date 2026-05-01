/*
 * XREFs of _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A19E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___::Run @ 0x1800A98B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___--Run.c)
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180016918 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18001BA68 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ??$end@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x18009E7DC (--$end@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Wind.c)
 *     ??$wait_get@U?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@1@AEBU?$IAsyncOperation@U?$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@451@@Z @ 0x1800A07EC (--$wait_get@U-$IAsyncOperation@U-$IVectorView@UWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@Col.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800A09A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_1800A09A4.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??1SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800A1524 (--1SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEA.c)
 *     ??D?$fast_iterator@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabView@Shell@UI@Internal@Windows@2@XZ @ 0x1800A18F4 (--D-$fast_iterator@U-$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@F.c)
 *     ?ActiveTab@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowTabView@Shell@UI@Internal@Windows@3@XZ @ 0x1800A2200 (-ActiveTab@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI.c)
 *     ?FindAllAsync@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1800A30EC (-FindAllAsync@WebSearchProvider@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?IsEdgeUninstallable@?$consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics@UIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800A7C24 (-IsEdgeUninstallable@-$consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoli.c)
 *     ?SHRegValueExists@@YAHPEAUHKEY__@@PEBGPEAK@Z @ 0x1800A990C (-SHRegValueExists@@YAHPEAUHKEY__@@PEBGPEAK@Z.c)
 *     ?SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z @ 0x1800A9944 (-SetIsIndividualWebSearchProviderEnabled@SearchSettingsHelper@SearchSettings@@SAJQEBG_N@Z.c)
 *     ?Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAX_N000@Z @ 0x1800AA098 (-Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AFAC4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1801B1CF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x180265E0C (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180266C50 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_050fa47c6e91e469e941dbfe29c54c93_::operator()(__int64 a1)
{
  __int64 v1; // rsi
  bool v2; // di
  __int64 *AllAsync; // rdx
  unsigned int v4; // eax
  int v5; // ebx
  int i; // eax
  HSTRING *active; // rax
  const unsigned __int16 *StringRawBuffer; // rax
  unsigned int *v9; // r8
  int v10; // ebx
  HSTRING *v11; // rax
  const WCHAR *v12; // rax
  bool v13; // dl
  HKEY v14; // rcx
  const char *v15; // r9
  int v16; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-208h]
  char v18; // [rsp+30h] [rbp-1F8h]
  __int64 v19; // [rsp+38h] [rbp-1F0h] BYREF
  HKEY v20; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 *v22; // [rsp+50h] [rbp-1D8h] BYREF
  int v23; // [rsp+58h] [rbp-1D0h]
  __int64 v24; // [rsp+60h] [rbp-1C8h]
  _BYTE v25[8]; // [rsp+68h] [rbp-1C0h] BYREF
  int v26; // [rsp+70h] [rbp-1B8h]
  _OWORD v27[3]; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-178h]
  int v29; // [rsp+B8h] [rbp-170h]
  __int64 v30; // [rsp+C0h] [rbp-168h]
  _QWORD v31[6]; // [rsp+D0h] [rbp-158h] BYREF
  _DWORD *v32; // [rsp+100h] [rbp-128h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v1 = a1;
  v24 = a1;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    a1);
  v31[0] = &CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  if ( *v32 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v27,
      (struct wil::details::IFailureCallback *)v31,
      (const struct wil::details::StoredCallContextInfo *)(v32 + 10));
  }
  else
  {
    memset(v27, 0, sizeof(v27));
    v28 = 0LL;
    v29 = 0;
    v30 = 0LL;
  }
  try
  {
    v2 = 0;
    v18 = 0;
    AllAsync = (__int64 *)winrt::WindowsUdk::UI::Shell::WebSearchProvider::FindAllAsync();
    winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider>>>(
      (winrt *)&v21,
      AllAsync);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v19);
    v20 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &v20,
      0LL);
    v4 = RegOpenKeyExW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
           0,
           0x20019u,
           &v20);
    if ( v4 )
    {
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        (void *)0x9B6,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)v4,
        phkResult);
      JUMPOUT(0x1800A1CAFLL);
    }
    v22 = &v21;
    v5 = 0;
    v23 = 0;
    winrt::impl::end<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::UI::Shell::WebSearchProvider>,0>(
      (__int64)v25,
      &v21);
    for ( i = 0; i != v26; i = v5 )
    {
      winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>>::operator*(
        &v22,
        (winrt *)&v19);
      if ( (unsigned __int8)winrt::impl::consume_WindowsUdk_System_Profile_IIntegratedServicesGeographicRegionPoliciesStatics<winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics>::IsEdgeUninstallable(&v19) )
      {
        v2 = 1;
        v18 = 1;
        active = (HSTRING *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::ActiveTab(
                              &v19,
                              &v22);
        StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*active, 0LL);
        v10 = SHRegValueExists(v20, StringRawBuffer, v9);
        winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v22);
        if ( !v10 )
        {
          v11 = (HSTRING *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::ActiveTab(
                             &v19,
                             &v22);
          v12 = WINRT_WindowsGetStringRawBuffer(*v11, 0LL);
          SearchSettings::SearchSettingsHelper::SetIsIndividualWebSearchProviderEnabled(v12, v13);
          winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v22);
        }
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v19);
        break;
      }
      winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v19);
      v23 = ++v5;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&v20);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v21);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x9B6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      v15);
    v2 = v18;
    v1 = v24;
  }
  v16 = SHRegSetBOOL(
          v14,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
          L"HasSetWebSearchEnabledStateOnUpdate",
          1);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9B6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
  CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
    (CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v31,
    *(_BYTE *)(v1 + 312),
    *(_BYTE *)(v1 + 313),
    v2,
    phkResult);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v27);
  CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate((CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v31);
}
