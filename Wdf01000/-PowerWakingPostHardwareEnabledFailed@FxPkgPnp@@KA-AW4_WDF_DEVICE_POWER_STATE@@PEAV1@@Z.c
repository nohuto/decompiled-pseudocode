/*
 * XREFs of ?PowerWakingPostHardwareEnabledFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070730
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000FEF8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00581F8 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingPostHardwareEnabledFailed(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v3; // rdx
  const void *_a2; // rax
  __int64 v5; // rdx
  int v6; // r8d

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v3 + 24) = ObjectHandleUnchecked;
  *(_DWORD *)(v3 + 32) = 5;
  if ( (int)FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v3) < 0 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v5,
      0xCu,
      0x1Eu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v5 + 144),
      5u,
      v6);
  }
  return 827LL;
}
