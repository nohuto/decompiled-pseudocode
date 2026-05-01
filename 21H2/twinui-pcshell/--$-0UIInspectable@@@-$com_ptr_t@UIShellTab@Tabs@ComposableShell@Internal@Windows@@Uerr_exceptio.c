/*
 * XREFs of ??$?0UIInspectable@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIInspectable@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1802D2D3C
 * Callers:
 *     ?AddTabAndViewToMaps@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x1802DB9E0 (-AddTabAndViewToMaps@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z.c)
 *     ?GetTabDragType@TabViewManager@@UEAAJPEAUIInspectable@@PEAW4TAB_DRAG_TYPE@@@Z @ 0x1802E0160 (-GetTabDragType@TabViewManager@@UEAAJPEAUIInspectable@@PEAW4TAB_DRAG_TYPE@@@Z.c)
 *     ?GetViewForTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x1802E05D0 (-GetViewForTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z.c)
 *     ?RemoveTabAndViewFromMaps@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x1802E6140 (-RemoveTabAndViewFromMaps@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z.c)
 *     ?GetViewForTabInDrag@TabTransferManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x1802FE630 (-GetViewForTabInDrag@TabTransferManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z.c)
 *     ?TryGetSelectedTabForView@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18030C858 (-TryGetSelectedTabForView@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@AEAA-AV-$com_ptr.c)
 *     ?GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1803AC870 (-GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@.c)
 *     ?GetSwitchItemForTab@AppViewDataSourceAdapter@@UEAAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x1803ACA10 (-GetSwitchItemForTab@AppViewDataSourceAdapter@@UEAAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64))
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**a2)(a2, &GUID_3c3e4af7_f26d_4620_aa79_6440853c1416, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
