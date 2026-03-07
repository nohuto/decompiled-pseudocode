__int64 __fastcall FxPkgGeneral::_CreateCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxPkgGeneral *Context)
{
  FxIrp irp; // [rsp+38h] [rbp+10h] BYREF

  irp.m_Irp = OriginalIrp;
  FxPkgGeneral::CreateCompleted(Context, &irp);
  FxIrp::PropagatePendingReturned(&irp);
  return (unsigned int)OriginalIrp->IoStatus.Status;
}
