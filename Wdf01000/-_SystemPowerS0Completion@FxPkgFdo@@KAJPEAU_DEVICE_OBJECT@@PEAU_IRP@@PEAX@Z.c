/*
 * XREFs of ?_SystemPowerS0Completion@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0083360
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

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
