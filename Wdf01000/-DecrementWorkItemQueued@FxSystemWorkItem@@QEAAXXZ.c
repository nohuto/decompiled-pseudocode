/*
 * XREFs of ?DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ @ 0x1C0007908
 * Callers:
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C00078E0 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1C0042CA0 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxSystemWorkItem::DecrementWorkItemQueued(FxSystemWorkItem *this)
{
  if ( _InterlockedExchangeAdd(&this->m_OutStandingWorkItem, 0xFFFFFFFF) == 1 )
    KeSetEvent(&this->m_RemoveEvent.m_Event.m_Event, 0, 0);
}
