/*
 * XREFs of ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180265C44
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180265B8C (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeferAuditWebSearchExtensions@SearchAppExperienceManager@@AEAAXXZ @ 0x1800A2F44 (-DeferAuditWebSearchExtensions@SearchAppExperienceManager@@AEAAXXZ.c)
 *     ?IsWebSearchProvidersThirdPartyExtensionsEnabled@IntegratedServicesGeographicRegionPolicies@Profile@System@WindowsUdk@winrt@@SA@XZ @ 0x1800A803C (-IsWebSearchProvidersThirdPartyExtensionsEnabled@IntegratedServicesGeographicRegionPolicies@Prof.c)
 *     ?RegisterAppDeploymentListeners@SearchAppExperienceManager@@AEAAXXZ @ 0x1800A84F0 (-RegisterAppDeploymentListeners@SearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ @ 0x1800AB5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370823@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetUniqueCallingContext@ComTaskPool@Internal@Windows@@SAKXZ @ 0x1801BC144 (-GetUniqueCallingContext@ComTaskPool@Internal@Windows@@SAKXZ.c)
 *     ?_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ @ 0x18026601C (-_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x180266750 (-_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1802758F8 (--$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@She.c)
 */

__int64 __fastcall SearchAppExperienceManager::RuntimeClassInitialize(
        SearchAppExperienceManager *this,
        struct IServiceProvider *a2,
        __int64 (__fastcall ***a3)(struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *, GUID *, char *))
{
  __int64 (__fastcall *v6)(struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *, GUID *, char *); // rdi
  int ShellExperienceView; // ebx
  __int64 v8; // rdx
  char *v10; // r14
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // rdi
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rsi
  __int64 (__fastcall *v15)(_QWORD, GUID *, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *v17; // [rsp+50h] [rbp+8h] BYREF
  struct IServiceProvider *v18; // [rsp+60h] [rbp+18h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 51, (__int64)a2);
  v6 = **a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
  ShellExperienceView = v6(
                          (struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *)a3,
                          &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e,
                          (char *)this + 488);
  if ( ShellExperienceView < 0 )
  {
    v8 = 778LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    return (unsigned int)ShellExperienceView;
  }
  v10 = (char *)this + 424;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  *((_QWORD *)this + 53) = 0LL;
  v17 = (struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *)a3;
  v18 = a2;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<SearchAppDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IServiceProvider * &,TwinUI::Cortana::ISearchAppExperienceManagerNotification * &>(
          (char *)this + 424,
          &v18,
          &v17);
  ShellExperienceView = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB72,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v11);
    v8 = 780LL;
    goto LABEL_3;
  }
  v12 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
  v13 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v10;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 54);
  ShellExperienceView = v13(v12, &GUID_a5ed9609_5c25_43f2_92aa_7fb7051e56ec, (char *)this + 432);
  if ( ShellExperienceView < 0 )
  {
    v8 = 781LL;
    goto LABEL_3;
  }
  v14 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
  v15 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v10;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 62);
  ShellExperienceView = v15(v14, &GUID_5f2a82c6_e25c_461e_aedb_deab82507200, (char *)this + 496);
  if ( ShellExperienceView < 0 )
  {
    v8 = 782LL;
    goto LABEL_3;
  }
  ShellExperienceView = SearchAppExperienceManager::_RegisterMessages(this);
  if ( ShellExperienceView < 0 )
  {
    v8 = 784LL;
    goto LABEL_3;
  }
  ShellExperienceView = SearchAppExperienceManager::_CreateShellExperienceView(this);
  if ( ShellExperienceView < 0 )
  {
    v8 = 785LL;
    goto LABEL_3;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370823>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55370823>::GetImpl'::`2'::impl) )
  {
    if ( winrt::WindowsUdk::System::Profile::IntegratedServicesGeographicRegionPolicies::IsWebSearchProvidersThirdPartyExtensionsEnabled() )
    {
      *((_DWORD *)this + 166) = Windows::Internal::ComTaskPool::GetUniqueCallingContext();
      SearchAppExperienceManager::DeferAuditWebSearchExtensions(this);
      SearchAppExperienceManager::RegisterAppDeploymentListeners(this);
    }
  }
  return 0LL;
}
