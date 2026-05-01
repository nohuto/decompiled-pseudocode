/*
 * XREFs of ??_GViewChangeListener@PeoplePaneViewManager@@QEAAPEAXI@Z @ 0x1802CDB14
 * Callers:
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1802CD5BC (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x1802D1E10 (-UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

PeoplePaneViewManager::ViewChangeListener *__fastcall PeoplePaneViewManager::ViewChangeListener::`scalar deleting destructor'(
        PeoplePaneViewManager::ViewChangeListener *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return this;
}
