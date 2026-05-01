/*
 * XREFs of ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800F4EDC
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___::Invoke @ 0x1800F0F00 (CAsyncCallbackWithLambda__lambda_472a7092c1a4414452e48170d805fed1___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008EFF8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D1A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Tabs@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x1800EC920 (-Tabs@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Inte.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800EE5B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800F6CEC (-RegisterTaskbarGlom@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstrin.c)
 *     ?SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1800FA388 (-SetWindowIconAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_.c)
 *     ?TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x1800FE638 (-TileId@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z.c)
 *     ?TreatAsSecondaryTileId@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800FE820 (-TreatAsSecondaryTileId@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180100958 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18025693C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1804D6220 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  unsigned int v2; // ebx
  int v3; // edi
  _QWORD *v4; // r15
  HSTRING *v5; // rax
  PCWSTR StringRawBuffer; // rax
  const char *v7; // r9
  __int64 v8; // rdx
  const struct winrt::hstring *v10; // rax
  unsigned int v11; // eax
  HRESULT v12; // eax
  unsigned int v13; // r12d
  HRESULT v14; // r14d
  __int64 v15; // rdx
  LONG WindowLongW; // eax
  HSTRING *v17; // rax
  char v18; // di
  HSTRING v19; // r14
  const char *v20; // r9
  int v21; // [rsp+70h] [rbp-58h] BYREF
  HSTRING v22; // [rsp+78h] [rbp-50h] BYREF
  HSTRING v23[9]; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  HSTRING v25; // [rsp+D0h] [rbp+8h] BYREF
  int v26; // [rsp+D8h] [rbp+10h]
  int pvAttribute; // [rsp+E0h] [rbp+18h] BYREF
  int v28; // [rsp+E8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  v26 = 0;
  v4 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    v5 = (HSTRING *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::Tabs(
                      (__int64 *)this + 6,
                      &v25);
    v3 = 1;
    v26 = 1;
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*v5, 0LL);
  }
  else
  {
    StringRawBuffer = &szAgent;
  }
  *((_QWORD *)this + 4) = CreateWindowInBandEx(
                            0x200000LL,
                            off_1806479D0,
                            StringRawBuffer,
                            114229248LL,
                            0,
                            0,
                            1,
                            1,
                            0LL,
                            0LL,
                            &_ImageBase,
                            this,
                            3,
                            1);
  if ( (v3 & 1) != 0 )
  {
    v3 &= ~1u;
    v26 = v3;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
  }
  if ( !*((_QWORD *)this + 4) )
  {
    v8 = 252LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v7);
  }
  if ( *v4 )
  {
    if ( *((_BYTE *)this + 184) )
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync(this, &v25);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
    {
      v10 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                                             v4,
                                             &v25);
      winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TileId(this, v10);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
    }
    v25 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HSTRING *))(*(_QWORD *)*v4 + 144LL))(
            *v4,
            *((_QWORD *)this + 18),
            &v25);
    winrt::check_hresult(v11);
    *((_QWORD *)this + 19) = v25;
  }
  if ( !SetPropW(*((HWND *)this + 4), (LPCWSTR)0xA920, *((HANDLE *)this + 7)) )
  {
    v8 = 268LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v7);
  }
  if ( !SetPropW(*((HWND *)this + 4), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow", HANDLE_FLAG_INHERIT) )
  {
    v8 = 270LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
             v7);
  }
  pvAttribute = 1;
  v12 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xDu, &pvAttribute, 4u);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  v28 = 1;
  v21 = 1;
  v14 = DwmSetWindowAttribute(*((HWND *)this + 4), 7u, &v28, 4u);
  if ( v14 < 0 )
  {
    v15 = 282LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  v14 = DwmSetWindowAttribute(*((HWND *)this + 4), 0xAu, &v21, 4u);
  if ( v14 < 0 )
  {
    v15 = 287LL;
    goto LABEL_23;
  }
  WindowLongW = GetWindowLongW(*((HWND *)this + 4), -16);
  SetWindowLongW(*((HWND *)this + 4), -16, WindowLongW | 0x10000000);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
  {
    try
    {
      v25 = 0LL;
      if ( (unsigned __int8)winrt::Windows::Foundation::operator==(v4, &v25) )
      {
        v17 = (HSTRING *)winrt::hstring::hstring((winrt::hstring *)&v22, &szAgent);
        v18 = v3 | 4;
      }
      else
      {
        v17 = (HSTRING *)winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TreatAsSecondaryTileId(
                           v4,
                           v23);
        v18 = v3 | 2;
      }
      v19 = *v17;
      *v17 = 0LL;
      v25 = v19;
      if ( (v18 & 4) != 0 )
      {
        v18 &= ~4u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
      }
      if ( (v18 & 2) != 0 )
        winrt::handle_type<winrt::impl::hstring_traits>::close(v23);
      if ( v19 )
      {
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterTaskbarGlom(
          this,
          (const struct winrt::hstring *)&v25);
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::UpdateTileGuid(this);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v25);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x12F,
                             (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
                             v20);
    }
  }
  return v2;
}
