/*
 * XREFs of ?PowerUpFailedPowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C000FEF8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerUpFailedPowerDown(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v2; // rdx

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v2 + 32) = ObjectHandleUnchecked;
  *(_DWORD *)(v2 + 40) = 5;
  FxPrePostCallback::InvokeStateless((FxPrePostCallback *)v2);
  return 852LL;
}
