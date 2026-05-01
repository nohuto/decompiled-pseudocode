/*
 * XREFs of ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x1801FDE80
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x1802012A8 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::FlushChangeNotifications(NotificationDispatcher **this)
{
  NotificationDispatcher::DispatchNotifications(this[83]);
  return 0LL;
}
