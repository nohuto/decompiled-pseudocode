__int64 __fastcall FxDevice::_CompletionRoutineForRemlockMaintenance(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        void *Context)
{
  __int64 v3; // r8
  PVOID v4; // r9
  FxIrp v6; // [rsp+30h] [rbp+8h] BYREF

  v6.m_Irp = Irp;
  FxIrp::PropagatePendingReturned(&v6);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 336), v4, 0x20u);
  return 0LL;
}
