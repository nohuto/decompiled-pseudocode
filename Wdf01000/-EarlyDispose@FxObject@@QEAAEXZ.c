/*
 * XREFs of ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0001178
 * Callers:
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0008160 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C003DC68 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AB00 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C006B1D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0001D4C (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0003350 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::EarlyDispose(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v3; // al
  char v4; // di
  unsigned __int8 v5; // bp
  FxObject *m_ParentObject; // rcx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v4 = 0;
  v5 = v3;
  if ( this->m_ObjectState != 1 )
  {
    KeReleaseSpinLock(p_m_Lock, v3);
    return v4;
  }
  m_ParentObject = this->m_ParentObject;
  if ( !m_ParentObject )
  {
LABEL_3:
    this->m_ObjectFlags |= 0x100u;
    return FxObject::PerformEarlyDisposeWorkerAndUnlock(this, v5, 1u);
  }
  if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
  {
    this->m_ParentObject = 0LL;
    goto LABEL_3;
  }
  FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
  KeReleaseSpinLock(p_m_Lock, v5);
  return 0;
}
