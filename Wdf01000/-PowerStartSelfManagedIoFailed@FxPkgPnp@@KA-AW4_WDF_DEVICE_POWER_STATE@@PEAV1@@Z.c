__int64 __fastcall FxPkgPnp::PowerStartSelfManagedIoFailed(FxPkgPnp *This)
{
  FxPkgIo::StopProcessingForPower(
    (FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink,
    FxIoStopProcessingForPowerHold);
  return 869LL;
}
