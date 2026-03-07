__int64 __fastcall FxPkgFdo::_PnpStartDeviceCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxPkgPnp *Context)
{
  signed int _a1; // eax
  unsigned __int8 v6; // r8
  KIRQL v7; // bl
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  FxIrp v11; // [rsp+48h] [rbp+10h] BYREF

  _a1 = Irp->IoStatus.Status;
  v11.m_Irp = Irp;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(Context->m_Globals, 2u, 0xCu, 0x18u, WPP_fxpkgfdo_cpp_Traceguids, _a1);
    FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceFailed, v9);
    FxPkgPnp::CompletePnpRequest(Context, &v11, Irp->IoStatus.Status);
  }
  else
  {
    FxPkgPnp::SetPendingPnpIrp(Context, &v11, 1u);
    if ( Context->m_PowerPolicyMachine.m_Owner )
    {
      v7 = KfRaiseIrql(2u);
      FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceComplete, v8);
      KeLowerIrql(v7);
    }
    else
    {
      FxPkgPnp::PnpProcessEvent(Context, PnpEventStartDeviceComplete, v6);
    }
  }
  return 3221225494LL;
}
