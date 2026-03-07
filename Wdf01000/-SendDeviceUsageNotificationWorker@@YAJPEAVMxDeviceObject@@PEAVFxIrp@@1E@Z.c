__int64 __fastcall SendDeviceUsageNotificationWorker(
        MxDeviceObject *RelatedDevice,
        FxIrp *RelatedIrp,
        FxIrp *OriginalIrp,
        unsigned __int8 Revert)
{
  _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  unsigned int v8; // edi

  AttachedDeviceReference = IoGetAttachedDeviceReference(RelatedDevice->m_DeviceObject);
  RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1] = *OriginalIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( Revert )
    RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock = RelatedIrp->m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetLock.Lock == 0;
  RelatedIrp->m_Irp->IoStatus.Status = -1073741637;
  v8 = FxIrp::SendIrpSynchronously(RelatedIrp, AttachedDeviceReference);
  ObfDereferenceObject(AttachedDeviceReference);
  return v8;
}
