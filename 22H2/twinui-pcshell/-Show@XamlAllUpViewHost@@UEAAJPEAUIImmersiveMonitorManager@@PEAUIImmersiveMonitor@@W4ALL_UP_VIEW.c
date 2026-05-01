/*
 * XREFs of ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1803765C0
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180377C50 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010CEC (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18007E950 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18035B3DC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180369DB0 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag__ea_180369DB0.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180369EB8 (--0-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag__ea_180369EB8.c)
 *     ??1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18036C86C (--1ShowXamlTaskView@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18036CD20 (--4ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x180370410 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x180370EB0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180376C50 (-StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x180378E80 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@PEAUITabViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180387970 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
__int64 __fastcall XamlAllUpViewHost::Show(__int64 a1, __int64 a2, void *a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // r12d
  int Frames; // ebx
  __int64 v9; // rdx
  enum _TABLETMODESTATE *v11; // rdx
  TabletModeHelpers *v12; // rcx
  HRESULT v13; // eax
  unsigned int v14; // ebx
  void *v15; // rax
  void *v16; // rbx
  __int64 v17; // rdx
  void *v18; // rax
  void *v19; // rbx
  __int64 v20; // rdx
  void *ppvOut; // [rsp+60h] [rbp-2F8h] BYREF
  void *v22; // [rsp+68h] [rbp-2F0h]
  __int64 v23; // [rsp+70h] [rbp-2E8h]
  __int64 v24; // [rsp+78h] [rbp-2E0h]
  __int64 v25; // [rsp+80h] [rbp-2D8h]
  char v26; // [rsp+88h] [rbp-2D0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-2C8h]
  int v28; // [rsp+98h] [rbp-2C0h]
  _QWORD v29[40]; // [rsp+A0h] [rbp-2B8h] BYREF
  _QWORD v30[40]; // [rsp+1E0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+0h]

  LODWORD(ppvOut) = a4;
  v22 = a3;
  v24 = a1;
  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v28 = v7;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"ShowXamlTaskView");
  v29[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::StartActivity((XamlSwitcherTelemetry::ShowXamlTaskView *)v29);
  v25 = a1;
  v26 = 1;
  Frames = CMultitaskingViewHostBase<IAllUpViewHost>::_RegisterForMonitorEvents(a1, a2);
  v23 = a1 + 232;
  if ( Frames < 0 )
  {
    v9 = 237LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
      (const char *)(unsigned int)Frames);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 232));
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
    XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v29);
    if ( v7 >= 0 )
      LeaveCriticalSection(v6);
    return (unsigned int)Frames;
  }
  *(_DWORD *)(a1 + 288) = (_DWORD)ppvOut;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)(a1 + 232),
    a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 240), (__int64)v22);
  if ( TabletModeHelpers::IsTabletMode(v12, v11) )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v13 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 240),
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0,
            &ppvOut);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v26 = 0;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 232));
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(a1);
      XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v29);
      if ( v7 >= 0 )
        LeaveCriticalSection(v6);
      return v14;
    }
    v22 = Platform::Details::Heap::Allocate(0x78uLL, 0xD8uLL);
    v15 = (void *)XamlAllUpViewController::XamlAllUpViewController(
                    (_DWORD)v22,
                    a1,
                    *(_QWORD *)(a1 + 208),
                    *(_QWORD *)(a1 + 216),
                    *(_QWORD *)(a1 + 248),
                    *(_QWORD *)(a1 + 80),
                    *(_QWORD *)(a1 + 272),
                    *(_QWORD *)(a1 + 264),
                    (__int64)ppvOut,
                    0LL,
                    0LL);
    v16 = v15;
    v22 = v15;
    if ( v15 )
      v17 = (__int64)v15 + 16;
    else
      v17 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 200), v17);
    if ( v16 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    v22 = Platform::Details::Heap::Allocate(0x78uLL, 0xD8uLL);
    v18 = (void *)XamlAllUpViewController::XamlAllUpViewController(
                    (_DWORD)v22,
                    a1,
                    *(_QWORD *)(a1 + 208),
                    *(_QWORD *)(a1 + 216),
                    *(_QWORD *)(a1 + 248),
                    *(_QWORD *)(a1 + 80),
                    *(_QWORD *)(a1 + 272),
                    *(_QWORD *)(a1 + 264),
                    0LL,
                    *(_QWORD *)(a1 + 184),
                    *(_QWORD *)(a1 + 192));
    v19 = v18;
    v22 = v18;
    if ( v18 )
      v20 = (__int64)v18 + 16;
    else
      v20 = 0LL;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 200), v20);
    if ( v19 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  Frames = XamlAllUpViewHost::CreateFrames((XamlAllUpViewHost *)a1);
  if ( Frames < 0 )
  {
    v9 = 277LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
    *(_QWORD *)(a1 + 88),
    *(unsigned int *)(a1 + 72));
  *(_BYTE *)(a1 + 112) = 1;
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)v29,
    0);
  v30[0] = &XamlSwitcherTelemetry::ShowXamlTaskView::`vftable';
  XamlSwitcherTelemetry::ShowXamlTaskView::operator=((_QWORD *)(a1 + 368), (__int64)v30);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v30);
  XamlSwitcherTelemetry::ShowXamlTaskView::~ShowXamlTaskView((XamlSwitcherTelemetry::ShowXamlTaskView *)v29);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return 0LL;
}
