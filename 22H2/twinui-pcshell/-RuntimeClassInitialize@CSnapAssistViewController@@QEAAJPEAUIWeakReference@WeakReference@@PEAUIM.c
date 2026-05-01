/*
 * XREFs of ?RuntimeClassInitialize@CSnapAssistViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18040C764
 * Callers:
 *     ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x18040C028 (--$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAU.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9AF8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 */

__int64 __fastcall CSnapAssistViewController::RuntimeClassInitialize(
        CSnapAssistViewController *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewManager *a3,
        struct IImmersiveAppCrusher *a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a5,
        struct ITabViewManager *a6)
{
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 5, (__int64)a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 7, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 10, (__int64)a5);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  v9 = (**(__int64 (__fastcall ***)(struct IMultitaskingViewManager *, GUID *, char *))a3)(
         a3,
         &GUID_4026878b_100e_4920_8bc7_baeed683a086,
         (char *)this + 152);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)(unsigned int)v9);
  return v10;
}
