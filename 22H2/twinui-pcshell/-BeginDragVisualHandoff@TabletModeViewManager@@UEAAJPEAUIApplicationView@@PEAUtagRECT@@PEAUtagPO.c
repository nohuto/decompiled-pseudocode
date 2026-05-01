/*
 * XREFs of ?BeginDragVisualHandoff@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAUtagRECT@@PEAUtagPOINT@@PEAUITabletModeInputSource@@@Z @ 0x180470ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x180472150 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 */

__int64 __fastcall TabletModeViewManager::BeginDragVisualHandoff(
        TabletModeViewManager *this,
        struct IApplicationView *a2,
        struct tagRECT *a3,
        struct tagPOINT *a4,
        struct ITabletModeInputSource *a5)
{
  return TabletModeViewManager::ShowWindowArrangementView((char *)this - 88, a2, 0LL, a3, a4, 0LL, 3, 3, a5);
}
