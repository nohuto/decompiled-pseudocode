__int64 __fastcall FxPkgFdo::_SystemPowerSxCompletion(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxPkgPnp *Context)
{
  FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolSx, (unsigned __int8)Context);
  return 3221225494LL;
}
