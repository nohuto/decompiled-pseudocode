/*
 * XREFs of ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0076064
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0073678 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C006A0D0 (-IsInSpecialUse@FxPkgPnp@@IEAAEXZ.c)
 *     ?AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C00716BC (-AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C0076630 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     WPP_IFR_SF_dddDqqd @ 0x1C0076D0C (WPP_IFR_SF_dddDqqd.c)
 */

__int64 __fastcall FxPkgPnp::SetUsageNotificationFlags(FxPkgPnp *this, __int32 Type, unsigned __int8 InPath)
{
  int _a6; // esi
  _DEVICE_OBJECT *level; // r14
  unsigned int globals; // edi
  const void *flags; // rax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  _FX_DRIVER_GLOBALS *v11; // r11
  _WDF_SPECIAL_FILE_TYPE v12; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  __int64 v14; // rdx
  const _GUID *v16; // [rsp+20h] [rbp-48h]

  _a6 = InPath;
  level = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  globals = level->Flags;
  if ( this->m_Globals->FxVerboseOn )
  {
    flags = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_dddDqqd(
      v11,
      *(_BYTE *)(v9 + 218),
      (unsigned int)flags,
      v10,
      v16,
      Type,
      _a6,
      this->m_SpecialFileCount[Type - 1],
      globals,
      level,
      flags,
      *(unsigned __int8 *)(v9 + 218));
  }
  FxPkgPnp::AdjustUsageCount(this, (_DEVICE_USAGE_NOTIFICATION_TYPE)Type, _a6);
  v12 = FxPkgPnp::_UsageToSpecialType((_DEVICE_USAGE_NOTIFICATION_TYPE)Type);
  if ( v12 == WdfSpecialFilePaging || (unsigned int)(v12 - 2) < 2 )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( BYTE1(m_DeviceBase[1].m_Globals) )
    {
      m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags = globals ^ (m_DeviceBase->m_AttachedDevice.m_DeviceObject->Flags ^ globals) & 0x6000;
    }
    else if ( (_BYTE)_a6 )
    {
      m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags &= ~0x2000u;
    }
    else if ( BYTE2(m_DeviceBase[1].m_Globals) && !FxPkgPnp::IsInSpecialUse(this) )
    {
      *(_DWORD *)(*(_QWORD *)(v14 + 144) + 48LL) |= 0x2000u;
    }
  }
  return globals;
}
