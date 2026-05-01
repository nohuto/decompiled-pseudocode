/*
 * XREFs of ?OnViewTabAssociated@VirtualDesktopGroupedViewsEventListener@@AEAAJPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIViewTabEventArgs@3456@@Z @ 0x1804BB0AC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs____Microsoft::WRL::FtmBase___lambda_e8fc07facb963e76bc03e71e52701980___1_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs___::Invoke @ 0x1804BAFB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1804BAFB0.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopGroupedViewsEventListener::OnViewTabAssociated(
        VirtualDesktopGroupedViewsEventListener *this,
        struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *a2,
        struct Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **); // rbx
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = a2;
  v15 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs *, __int64 *))(*(_QWORD *)a3 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v6 = v5(a3, &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v14 = 0LL;
    v8 = *((_QWORD *)this + 8);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter **))(*(_QWORD *)v8 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v10 = v9(v8, v15, &v14);
    v7 = v10;
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12), &v16);
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 48LL))(
              *((_QWORD *)this + 11),
              v14,
              *((_QWORD *)this + 9),
              *((_QWORD *)this + 10));
      v7 = v11;
      if ( v11 >= 0 )
        v7 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
          (const char *)(unsigned int)v11);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v7;
}
