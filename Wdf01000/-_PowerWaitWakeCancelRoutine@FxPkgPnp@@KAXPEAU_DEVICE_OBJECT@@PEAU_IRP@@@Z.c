void __fastcall FxPkgPnp::_PowerWaitWakeCancelRoutine(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  FxPkgPnp *v4; // rbx
  KIRQL v5; // al
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_ListEntry; // rcx

  IoReleaseCancelSpinLock(Irp->CancelIrql);
  v4 = *(FxPkgPnp **)(*((_QWORD *)DeviceObject->DeviceExtension - 6) + 648LL);
  v5 = KeAcquireSpinLockRaiseToDpc(&v4->m_PowerMachine.m_WaitWakeLock.m_Lock);
  Blink = v4->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink;
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  if ( Blink->Flink != &v4->m_PowerMachine.m_WaitWakeIrpToBeProcessedList )
    __fastfail(3u);
  Irp->Tail.Overlay.ListEntry.Blink = Blink;
  p_ListEntry->Flink = &v4->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
  Blink->Flink = p_ListEntry;
  v4->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink = p_ListEntry;
  Irp->IoStatus.Status = -1073741536;
  v4->m_SharedPower.m_WaitWakeIrp = 0LL;
  KeReleaseSpinLock(&v4->m_PowerMachine.m_WaitWakeLock.m_Lock, v5);
  FxPkgPnp::PowerProcessEvent(v4, 0x20u, 0);
}
