/*
 * XREFs of ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C00814A0
 * Callers:
 *     ?PnpEventFinal@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A840 (-PnpEventFinal@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxEventQueue::SetDelayedDeletion(FxEventQueue *this)
{
  const void *_a1; // rax
  __int64 v3; // rdx
  __int64 v4; // r10
  KIRQL v5; // al

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_PkgPnp->m_DeviceBase);
  WPP_IFR_SF_qq(
    *(_FX_DRIVER_GLOBALS **)(v4 + 16),
    4u,
    0xCu,
    0xBu,
    WPP_EventQueue_cpp_Traceguids,
    _a1,
    *(const void **)(v3 + 144));
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_QueueLock.m_Lock);
  this->m_QueueFlags |= 4u;
  KeReleaseSpinLock(&this->m_QueueLock.m_Lock, v5);
}
