/*
 * XREFs of ?_WorkItemCallback@FxWorkItemEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0081660
 * Callers:
 *     <none>
 * Callees:
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008124C (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxWorkItemEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, FxEventQueue *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _DRIVER_OBJECT *m_DriverObject; // rdi

  m_Globals = Context->m_PkgPnp->m_Globals;
  m_DriverObject = m_Globals->Driver->m_DriverObject.m_DriverObject;
  FxEventQueue::EventQueueWorker(Context);
  if ( _InterlockedExchangeAdd(&m_Globals->Refcnt, 0xFFFFFFFF) == 1 )
    KeSetEvent(&m_Globals->DestroyEvent.m_Event, 0, 0);
  ObfDereferenceObject(m_DriverObject);
}
