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
