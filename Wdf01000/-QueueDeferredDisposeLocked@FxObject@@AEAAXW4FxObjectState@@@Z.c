/*
 * XREFs of ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C0047758
 * Callers:
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0001D4C (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0003460 (-DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003A80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0003ED0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 * Callees:
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0041D2C (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 */

void __fastcall FxObject::QueueDeferredDisposeLocked(FxObject *this, unsigned int NewDeferedState)
{
  unsigned __int8 v3; // r8
  FxDeviceBase *m_DeviceBase; // rcx
  FxDisposeList *m_DisposeList; // rcx

  FxObject::SetObjectStateLocked(this, NewDeferedState);
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase )
    m_DisposeList = m_DeviceBase->m_DisposeList;
  else
    m_DisposeList = this->m_Globals->Driver->m_DisposeList;
  FxDisposeList::Add(m_DisposeList, this, v3);
}
