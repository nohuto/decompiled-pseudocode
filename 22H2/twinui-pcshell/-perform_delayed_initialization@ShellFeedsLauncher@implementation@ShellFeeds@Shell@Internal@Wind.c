/*
 * XREFs of ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180106970
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryWriteFeedsAvailabilityToRegistry@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x180105E84 (-TryWriteFeedsAvailabilityToRegistry@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801A8D54 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1801A8D54.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1801AD238 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801B76A0 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18025693C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EC5C (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::perform_delayed_initialization(
        winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *this)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  unsigned int v5; // eax
  void *v6; // rsi
  __int64 (__fastcall *v7)(void *, _QWORD, __int64 *); // rbx
  _QWORD *v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  int AgileReference; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+20h]
  IUnknown *punk; // [rsp+50h] [rbp+28h] BYREF
  void *ppvOut; // [rsp+58h] [rbp+30h] BYREF
  __int64 v16; // [rsp+60h] [rbp+38h] BYREF
  void *v17; // [rsp+68h] [rbp+40h] BYREF

  LODWORD(punk) = 0;
  winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::TryWriteFeedsAvailabilityToRegistry(
    (__int64)this - 8,
    &punk);
  punk = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 80, &ppvOut);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)v2 + 24LL))(
           v2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &punk);
  }
  else
  {
    punk = 0LL;
    v3 = 0;
  }
  v4 = retaddr;
  if ( v3 < 0 )
    goto LABEL_11;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&ppvOut);
  ppvOut = 0LL;
  v5 = IUnknown_QueryService(
         punk,
         &stru_180565C58,
         &winrt::impl::guid_storage<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory>::value,
         &ppvOut);
  winrt::check_hresult(v5);
  v6 = ppvOut;
  v17 = ppvOut;
  if ( punk )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&punk);
  v16 = 0LL;
  v7 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v6 + 48LL);
  v16 = 0LL;
  v8 = (_QWORD *)winrt::hstring::hstring((winrt::hstring *)&punk, L"Windows.Internal.ShellExperience.ShellFeeds");
  v9 = v7(v6, *v8, &v16);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v10,
      66LL,
      (__int64)"pcshell\\twinui\\shellfeedslauncher\\lib\\shellfeedslauncher.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&punk);
  v11 = v16;
  ppvOut = 0LL;
  LODWORD(punk) = 3;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&ppvOut);
  AgileReference = RoGetAgileReference(0LL, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v11, &ppvOut);
  if ( AgileReference < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1659LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)AgileReference);
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v4,
      172LL,
      (__int64)"internal\\shellcommonshell\\inc\\winrt\\immersive_shell_component.h",
      (const char *)(unsigned int)v3);
    goto LABEL_12;
  }
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((char *)this + 88, &ppvOut);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppvOut);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
  winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v17);
}
