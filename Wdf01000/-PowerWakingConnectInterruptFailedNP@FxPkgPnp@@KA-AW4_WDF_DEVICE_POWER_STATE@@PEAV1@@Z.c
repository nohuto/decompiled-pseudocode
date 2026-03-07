__int64 __fastcall FxPkgPnp::PowerWakingConnectInterruptFailedNP(FxPkgPnp *This)
{
  const void *_a2; // rax
  __int64 v3; // rdx

  _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  WPP_IFR_SF_qq(This->m_Globals, 2u, 0xCu, 0x1Au, WPP_PowerStateMachine_cpp_Traceguids, *(const void **)(v3 + 144), _a2);
  FxPkgPnp::PowerConnectInterruptFailed(This);
  return 829LL;
}
