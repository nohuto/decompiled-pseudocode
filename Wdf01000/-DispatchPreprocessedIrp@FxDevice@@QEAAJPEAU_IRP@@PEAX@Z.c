/*
 * XREFs of ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C003DED4
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C00343A0 (imp_WdfDeviceWdmDispatchIrp.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0034470 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 * Callees:
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C003DF94 (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C003F1E0 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 */

NTSTATUS __fastcall FxDevice::DispatchPreprocessedIrp(FxDevice *this, _IRP *Irp, void *DispatchContext)
{
  _IO_STACK_LOCATION *v4; // rax
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi

  v4 = --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  if ( FxDevice::_RequiresRemLock(v4->MajorFunction, v4->MinorFunction) != FxDeviceRemLockRequired )
    return DispatchWorker(this, Irp, DispatchContext);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceObject.m_DeviceObject[1], Irp, a5, 1u, 0x20u);
  v8 = v7;
  if ( v7 >= 0 )
    return DispatchWorker(this, Irp, DispatchContext);
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return v8;
}
