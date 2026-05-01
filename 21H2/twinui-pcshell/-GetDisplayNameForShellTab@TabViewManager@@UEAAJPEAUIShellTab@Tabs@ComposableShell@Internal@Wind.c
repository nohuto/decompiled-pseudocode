/*
 * XREFs of ?GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1802DF570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18020B134 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x1802DFEB8 (-GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802EE9A8 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall TabViewManager::GetDisplayNameForShellTab(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2,
        HSTRING *a3)
{
  TabViewManager *v4; // rcx
  int ShellItemForView; // eax
  struct IShellItem *v6; // rbx
  HRESULT (__stdcall *GetDisplayName)(IShellItem *, SIGDN, LPWSTR *); // rdi
  int v8; // eax
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  HRESULT v11; // eax
  LPVOID pv; // [rsp+20h] [rbp-58h] BYREF
  struct IShellItem *v14; // [rsp+28h] [rbp-50h] BYREF
  struct IApplicationView *v15; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v16; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v17; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *a3 = 0LL;
  TabViewManager::TryGetViewForTab((char *)this - 160, &v15, a2);
  if ( v15 )
  {
    v14 = 0LL;
    ShellItemForView = TabViewManager::GetShellItemForView(v4, v15, &v14);
    if ( ShellItemForView < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1915LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)ShellItemForView);
    pv = 0LL;
    v6 = v14;
    GetDisplayName = v14->lpVtbl->GetDisplayName;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v8 = ((__int64 (__fastcall *)(struct IShellItem *, _QWORD, LPVOID *))GetDisplayName)(v6, 0LL, &pv);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1918LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v8);
    v16 = (const WCHAR *)pv;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v16, v9);
    v11 = WindowsDuplicateString((HSTRING)v10[1].Reserved.Reserved1, a3);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1920LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v11);
    if ( pv )
      CoTaskMemFree(pv);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v15);
  return 0LL;
}
