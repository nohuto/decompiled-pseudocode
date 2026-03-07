void __fastcall FxCompanionTarget::InvalidateDeviceStateAndReportFailed(FxCompanionTarget *this)
{
  const void *_a1; // rax
  __int64 v3; // r10

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)this->m_ChildListHead.Flink);
  WPP_IFR_SF_q(
    *(_FX_DRIVER_GLOBALS **)(v3 + 16),
    2u,
    0xCu,
    0xAu,
    (const _GUID *)&WPP_FxCompanionTarget_cpp_Traceguids,
    _a1);
  FxPkgPnp::SetDeviceFailed(
    (FxPkgPnp *)this->m_ChildListHead.Flink[40].Blink,
    (_FX_DRIVER_GLOBALS *)this->m_ChildListHead.Flink[1].Flink,
    WdfDeviceFailedNoRestart);
}
