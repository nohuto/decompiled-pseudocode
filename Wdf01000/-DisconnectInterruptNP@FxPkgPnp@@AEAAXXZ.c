void __fastcall FxPkgPnp::DisconnectInterruptNP(FxPkgPnp *this)
{
  const void *_a2; // rax
  __int64 v3; // rdx

  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qq(this->m_Globals, 2u, 0xCu, 0x22u, WPP_PowerStateMachine_cpp_Traceguids, *(const void **)(v3 + 144), _a2);
  FxPkgPnp::NotifyResourceObjectsDx(this, 4u);
}
