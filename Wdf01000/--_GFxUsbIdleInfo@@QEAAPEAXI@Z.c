/*
 * XREFs of ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C007A2A4
 * Callers:
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C007A208 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C007A6F4 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxUsbIdleInfo *__fastcall FxUsbIdleInfo::`scalar deleting destructor'(FxUsbIdleInfo *this)
{
  _IRP *m_Irp; // rcx

  m_Irp = this->m_IdleIrp.m_Irp;
  if ( m_Irp )
    IoFreeIrp(m_Irp);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
