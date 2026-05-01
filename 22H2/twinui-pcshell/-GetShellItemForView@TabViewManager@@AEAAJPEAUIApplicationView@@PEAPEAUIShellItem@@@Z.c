/*
 * XREFs of ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x1802DFC48
 * Callers:
 *     ?DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1802DDE90 (-DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x1802DF300 (-GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180057188 (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802DEA24 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall TabViewManager::GetShellItemForView(
        TabViewManager *this,
        struct IApplicationView *a2,
        struct IShellItem **a3)
{
  HRESULT v5; // eax
  LPVOID v6; // rbx
  int (__fastcall *v7)(LPVOID, PCWSTR, struct IShellItem **); // rdi
  PCWSTR StringRawBuffer; // rax
  HRESULT v9; // eax
  const WCHAR *v11; // rax
  HRESULT v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PCWSTR pszPath[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+70h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+20h] BYREF

  string = (HSTRING)this;
  *a3 = 0LL;
  ppv = 0LL;
  v5 = CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_de25675a_72de_44b4_9373_05170450c140, &ppv);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3078LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v5);
  GetAumid(&string, (__int64)a2);
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 **))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v19);
  if ( v19 )
  {
    v6 = ppv;
    v7 = *(int (__fastcall **)(LPVOID, PCWSTR, struct IShellItem **))(*(_QWORD *)ppv + 64LL);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( v7(v6, StringRawBuffer, a3) < 0 )
    {
      Win32ApplicationViewHelpers::GetApplicationViewImageName((__int64)pszPath, v19);
      v9 = SHCreateItemFromParsingName(pszPath[0], 0LL, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)a3);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3090LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v9);
      if ( pszPath[0] )
        CoTaskMemFree((LPVOID)pszPath[0]);
    }
    goto LABEL_9;
  }
  v11 = WindowsGetStringRawBuffer(string, 0LL);
  v12 = SHCreateItemInKnownFolder(
          &FOLDERID_AppsFolder,
          0x4100u,
          v11,
          &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
          (void **)a3);
  if ( v12 >= 0 )
  {
LABEL_9:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
    return 0LL;
  }
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    3096LL,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v12);
  __debugbreak();
  return TabViewManager::GetShellItemForView_::_1_::dtor_0(v14, v13, v15);
}
