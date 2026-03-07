void __fastcall FxPkgPnp::ProcessDelayedDeletion(FxPkgPnp *this)
{
  const void *_a1; // rax
  __int64 v3; // rdx

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qq(
    this->m_Globals,
    4u,
    0xCu,
    0x22u,
    (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    _a1,
    *(const void **)(v3 + 144));
  FxPkgPnp::CleanupStateMachines(this, 0);
  FxPkgPnp::DeleteDevice(this);
}
