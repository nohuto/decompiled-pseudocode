/*
 * XREFs of ?GetWindowGroupInfo@TabViewManager@@UEAAJPEAUHWND__@@PEAUWINDOW_GROUP_INFO@@@Z @ 0x1802E06E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@PEAPEAUIShellTab@Tabs@ComposableShell@56@@Z @ 0x1802E0010 (-GetTabForWindowId@TabViewManager@@UEAAJUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall TabViewManager::GetWindowGroupInfo(TabViewManager *this, HWND a2, struct WINDOW_GROUP_INFO *a3)
{
  int v4; // esi
  char *v5; // rbx
  int TabForWindowId; // eax
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _BYTE v16[4]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+34h] [rbp-54h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-48h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v20; // [rsp+48h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (int)a2;
  v22 = 0LL;
  *(_OWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 2) = v22;
  v20 = 0LL;
  v5 = (char *)this + 8;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v20);
  TabForWindowId = TabViewManager::GetTabForWindowId((__int64)v5, v4, &v20);
  if ( TabForWindowId < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      353LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)TabForWindowId);
  v7 = v20;
  if ( v20 )
  {
    v19 = 0LL;
    v8 = *(_QWORD *)v20;
    v19 = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTab *, __int64 **))(v8 + 168))(
           v20,
           &v19);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        357LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
    if ( v19 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v19 + 48))(v19, &v21);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          361LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      *(_OWORD *)a3 = v21;
      v18 = 0LL;
      v11 = *v19;
      v18 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 56))(v19, &v18);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          365LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v12);
      v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 56LL))(v18, (char *)a3 + 16);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          367LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v13);
      v17 = 0;
      v16[0] = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, struct Windows::Internal::ComposableShell::Tabs::IShellTab *, int *, _BYTE *))(*(_QWORD *)v18 + 64LL))(
              v18,
              v7,
              &v17,
              v16);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          371LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v14);
      if ( v16[0] )
        *((_DWORD *)a3 + 5) = v17;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  return 0LL;
}
