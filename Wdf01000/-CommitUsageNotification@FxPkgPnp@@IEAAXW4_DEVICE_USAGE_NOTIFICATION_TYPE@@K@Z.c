/*
 * XREFs of ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C0071EBC
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0073678 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_dDqq @ 0x1C0076BFC (WPP_IFR_SF_dDqq.c)
 */

void __fastcall FxPkgPnp::CommitUsageNotification(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Type,
        __int16 OldFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int level; // edi
  const void *id; // rax
  unsigned int v9; // r8d
  __int64 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-38h]

  m_Globals = this->m_Globals;
  level = this->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  if ( (level & 0x2000) == 0 && (OldFlags & 0x2000) != 0 )
    FxPkgPnp::PowerProcessEvent(this, 0x400u, 0);
  if ( (level & 0x2000) != 0 && (OldFlags & 0x2000) == 0 )
    FxPkgPnp::PowerProcessEvent(this, 0x200u, 0);
  IoInvalidateDeviceState(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  if ( m_Globals->FxVerboseOn )
  {
    id = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_dDqq(
      m_Globals,
      Type - 1,
      v9,
      v10,
      v11,
      this->m_SpecialFileCount[Type - 1],
      level,
      *(const void **)(v10 + 144),
      id);
  }
}
