/*
 * XREFs of ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C002A168
 * Callers:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C00281CC (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C0028554 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0029BA0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C0029EE8 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxWmiIrpHandler::DeferUpdateLocked(FxWmiIrpHandler *this, unsigned __int8 OldIrql)
{
  if ( OldIrql )
  {
    if ( !this->m_WorkItemQueued )
    {
      _InterlockedIncrement(&this->m_UpdateCount);
      this->m_WorkItemQueued = 1;
      IoQueueWorkItem(this->m_WorkItem, FxWmiIrpHandler::_UpdateGuids, DelayedWorkQueue, this);
    }
    return 0;
  }
  else
  {
    _InterlockedIncrement(&this->m_UpdateCount);
    return 1;
  }
}
