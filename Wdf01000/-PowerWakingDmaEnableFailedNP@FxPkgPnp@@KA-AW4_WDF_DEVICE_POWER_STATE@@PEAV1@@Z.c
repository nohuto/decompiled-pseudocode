__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableFailedNP(FxPkgPnp *This)
{
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  const void *_a2; // rax
  __int64 v4; // rdx
  int v5; // r8d

  FxPkgPnp::PowerDmaPowerDown(This);
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  if ( (int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
              &This->m_DeviceD0ExitPreInterruptsDisabled,
              ObjectHandleUnchecked,
              5u) < 0 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v4,
      0xCu,
      0x1Cu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v4 + 144),
      5u,
      v5);
  }
  return 33592LL;
}
