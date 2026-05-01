/*
 * XREFs of ?GetNumTabsInGroupForView@TabViewManager@@AEAAIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802DFC6C
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802DC4C4 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x1802E3EF0 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x1802EDAE0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x1801C94B4 (-end@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collecti.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1802DA594 (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Wind.c)
 *     ?GetViewForTabLockHeld@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802E0718 (-GetViewForTabLockHeld@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::GetNumTabsInGroupForView(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2,
        struct IApplicationView *a3)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *); // rax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int i; // eax
  __int64 *v13; // rax
  const char *v14; // r9
  __int64 result; // rax
  struct IApplicationView *v16; // [rsp+28h] [rbp-50h] BYREF
  int v17; // [rsp+30h] [rbp-48h]
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+48h] [rbp-30h]
  __int64 v21[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v23; // [rsp+80h] [rbp+8h] BYREF
  struct IApplicationView *v24; // [rsp+88h] [rbp+10h] BYREF
  struct IApplicationView *v25; // [rsp+98h] [rbp+20h] BYREF

  v6 = this + 179;
  AcquireSRWLockShared(this + 179);
  v7 = *(_QWORD *)a2;
  v24 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *))(v7 + 56);
  try
  {
    v9 = v8(a2);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3475LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
    v23 = 0;
    v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v24 + 56LL))(v24, &v23);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3478LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v10);
    v11 = 0;
    v25 = v24;
    v16 = v24;
    v17 = 0;
    v18 = 0LL;
    wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v25,
      (__int64)v19);
    for ( i = 0; i != v20; i = ++v17 )
    {
      v13 = wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::vector_iterator::operator*((__int64 *)&v16);
      TabViewManager::GetViewForTabLockHeld(this, &v25, *v13);
      if ( a3 == v25 )
        ++v11;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    if ( v6 )
      ReleaseSRWLockShared(v6);
    result = v11;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xDA4,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      v14);
    return 0LL;
  }
  return result;
}
