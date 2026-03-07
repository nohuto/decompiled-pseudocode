__int64 __fastcall FxPkgFdo::_SystemPowerS0Completion(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxPkgPnp *Context)
{
  KIRQL v6; // bl
  unsigned __int8 v7; // r8

  v6 = KfRaiseIrql(2u);
  FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolS0, v7);
  KeLowerIrql(v6);
  PoStartNextPowerIrp(OriginalIrp);
  if ( OriginalIrp->PendingReturned )
    OriginalIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], OriginalIrp, 0x20u);
  return (unsigned int)OriginalIrp->IoStatus.Status;
}
