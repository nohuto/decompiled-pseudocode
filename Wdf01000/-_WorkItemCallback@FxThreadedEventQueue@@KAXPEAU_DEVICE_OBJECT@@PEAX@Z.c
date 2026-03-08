/*
 * XREFs of ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00815C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008124C (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, FxEventQueue *Context)
{
  FxEventQueue::EventQueueWorker(Context);
}
