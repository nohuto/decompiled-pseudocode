/*
 * XREFs of ?CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x180276790
 * Callers:
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1800820A4 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800820F0 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x18008B41C (-GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SearchAppDesktopExperienceView::CreateSearchAltTabProxyWindow(HWND *this)
{
  void *lpParam; // r14
  HRESULT v3; // ebx
  HWND Window; // rax
  HWND v5; // rax
  WNDCLASSEXW v6; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  LPCWSTR lpWindowName; // [rsp+E0h] [rbp+67h] BYREF
  void *ppv; // [rsp+E8h] [rbp+6Fh] BYREF

  lpParam = (void *)SearchAppDesktopExperienceView::GetHwnd((SearchAppDesktopExperienceView *)this);
  v6.cbSize = 80;
  memset_0(&v6.style, 0, 0x4CuLL);
  v6.style = 512;
  v6.lpfnWndProc = (WNDPROC)SearchAppDesktopExperienceView::s_SearchAltTabProxyWndProc;
  v6.hInstance = &_ImageBase;
  v6.lpszClassName = L"Shell_CortanaProxy";
  v6.cbWndExtra = 8;
  RegisterClassExW(&v6);
  lpWindowName = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpWindowName,
    0LL);
  lpWindowName = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v3 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4100u,
         L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(void *, _QWORD, LPCWSTR *))(*(_QWORD *)ppv + 40LL))(ppv, 0LL, &lpWindowName);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA91,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  Window = CreateWindowExW(
             0,
             v6.lpszClassName,
             lpWindowName,
             0x8000000u,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             &_ImageBase,
             lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    this + 30,
    Window);
  v5 = CreateWindowExW(
         0x200000u,
         v6.lpszClassName,
         lpWindowName,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         this[30],
         0LL,
         &_ImageBase,
         lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    this + 29,
    v5);
  if ( lpWindowName )
    CoTaskMemFree((LPVOID)lpWindowName);
}
