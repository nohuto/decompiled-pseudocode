/*
 * XREFs of ?CreateWindowArrangementViewForDrag@TabletModeViewManagerProxy@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x1803F3940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z @ 0x1803F3A64 (-GetTabletModeViewManager@TabletModeViewManagerProxy@@AEAAJPEAPEAUITabletModeViewManager@@@Z.c)
 */

__int64 __fastcall TabletModeViewManagerProxy::CreateWindowArrangementViewForDrag(
        TabletModeViewManagerProxy *this,
        struct IApplicationView *a2,
        struct IUnknown **a3)
{
  int TabletModeViewManager; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ITabletModeViewManager *v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  TabletModeViewManager = TabletModeViewManagerProxy::GetTabletModeViewManager(
                            (TabletModeViewManagerProxy *)((char *)this - 8),
                            &v10);
  v7 = TabletModeViewManager;
  if ( TabletModeViewManager >= 0 )
    v7 = (*(__int64 (__fastcall **)(struct ITabletModeViewManager *, struct IApplicationView *, struct IUnknown **))(*(_QWORD *)v10 + 32LL))(
           v10,
           a2,
           a3);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\tabletmodeviewmanagerproxy.cpp",
      (const char *)(unsigned int)TabletModeViewManager);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v7;
}
