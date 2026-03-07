__int64 __fastcall FxPkgPnp::PowerInitialSelfManagedIoFailed(FxPkgPnp *This)
{
  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerHold);
  return 872LL;
}
