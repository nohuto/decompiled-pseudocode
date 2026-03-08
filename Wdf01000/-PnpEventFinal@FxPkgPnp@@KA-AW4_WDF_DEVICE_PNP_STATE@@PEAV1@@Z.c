/*
 * XREFs of ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A840
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C00814A0 (-SetDelayedDeletion@FxEventQueue@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFinal(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  $2577F5D74A6AFCBEE1DF62E423AAEAA5 *v3; // rdi
  FxPkgPnp *v5; // rcx

  v3 = &This->96;
  if ( !This->m_DeviceRemoveProcessed )
    IoAcquireRemoveLockEx(
      (PIO_REMOVE_LOCK)&v3->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      FxPkgPnp::PnpEventFinal,
      a5,
      1u,
      0x20u);
  if ( BYTE3(v3->m_DeviceBase[1].m_Globals) )
  {
    v5 = *(FxPkgPnp **)(*(_QWORD *)&v3->m_DeviceBase[1].m_ObjectFlags + 648LL);
    if ( _InterlockedExchangeAdd(&v5->m_PendingChildCount, 0xFFFFFFFF) == 1 )
      FxPkgPnp::PnpProcessEvent(v5, PnpEventChildrenRemovalComplete, a3);
  }
  if ( This->m_DeviceRemoveProcessed )
  {
    This->m_SetDeviceRemoveProcessed = 1;
  }
  else
  {
    IoReleaseRemoveLockAndWaitEx(
      (PIO_REMOVE_LOCK)&v3->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
      FxPkgPnp::PnpEventFinal,
      0x20u);
    FxEventQueue::SetDelayedDeletion(&This->m_PnpMachine);
  }
  return 314LL;
}
