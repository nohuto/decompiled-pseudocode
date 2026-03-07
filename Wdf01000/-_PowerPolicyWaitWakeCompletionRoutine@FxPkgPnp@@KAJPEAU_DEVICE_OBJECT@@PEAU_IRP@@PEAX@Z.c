__int64 __fastcall FxPkgPnp::_PowerPolicyWaitWakeCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        void *Context)
{
  unsigned int v3; // ebx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v8; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  FxIrp Irp; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  Irp.m_Irp = OriginalIrp;
  if ( OriginalIrp->PendingReturned )
    OriginalIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(*((FxObject **)Context + 12));
  WPP_IFR_SF_qqqd(
    *((_FX_DRIVER_GLOBALS **)Context + 2),
    4u,
    0xCu,
    0x2Fu,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    _a1,
    DeviceObject,
    (__int64)OriginalIrp,
    OriginalIrp->IoStatus.Status);
  if ( OriginalIrp->IoStatus.Status >= 0 )
    FxPkgPnp::PowerPolicyUpdateSystemWakeSource((FxPkgPnp *)Context, &Irp);
  if ( *((_BYTE *)Context + 1216) )
  {
    PoSetSystemWake(OriginalIrp);
    OriginalIrp->IoStatus.Status = 0;
  }
  if ( _InterlockedExchange64((volatile __int64 *)Context + 114, 0LL)
    || _InterlockedExchange((volatile __int32 *)(*((_QWORD *)Context + 111) + 944LL), 1) == 1 )
  {
    v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
    if ( v9->FxVerboseOn )
      WPP_IFR_SF_q(v9, 5u, 0xCu, 0x30u, WPP_PowerPolicyStateMachine_cpp_Traceguids, OriginalIrp);
    PoStartNextPowerIrp(OriginalIrp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], OriginalIrp, 0x20u);
  }
  else
  {
    v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Context + 2);
    if ( v8->FxVerboseOn )
      WPP_IFR_SF_q(v8, 5u, 0xCu, 0x31u, WPP_PowerPolicyStateMachine_cpp_Traceguids, OriginalIrp);
    return (unsigned int)-1073741802;
  }
  return v3;
}
