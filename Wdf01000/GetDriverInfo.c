/*
 * XREFs of GetDriverInfo @ 0x1C004D2D8
 * Callers:
 *     LogDriverInfoStream @ 0x1C004D7C4 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall GetDriverInfo(_FX_DRIVER_GLOBALS *Globals, FxDevice *Fdo, FxTelemetryDriverInfo *DriverInfo)
{
  unsigned __int8 v5; // dl
  unsigned int v6; // r10d
  unsigned int v7; // r8d
  FxPkgPnp *m_PkgPnp; // rdi
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int16 m_DeviceTelemetryInfoFlags; // si
  int v11; // r8d
  FxPowerPolicyOwnerSettings *m_Owner; // r9
  unsigned int v13; // r8d
  unsigned __int8 Enabled; // al
  int v15; // ecx
  unsigned __int8 WakeFromS0Capable; // al
  FxPowerPolicyOwnerSettings *v17; // r8
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // r10d
  unsigned int v22; // r10d
  FxPowerPolicyOwnerSettings *v23; // rax

  v5 = 0;
  v6 = DriverInfo->Dword & 0xFFFFFFF3 | (4 * (Globals->FxVerifierOn & 1)) | ((unsigned __int16)Globals->FxEnhancedVerifierOptions != 0
                                                                           ? 8
                                                                           : 0);
  DriverInfo->Dword = v6;
  if ( Fdo )
  {
    m_PkgPnp = Fdo->m_PkgPnp;
    m_DeviceObject = Fdo->m_DeviceObject.m_DeviceObject;
    m_DeviceTelemetryInfoFlags = Fdo->m_DeviceTelemetryInfoFlags;
    if ( m_DeviceObject )
      v11 = (__int64)m_DeviceObject[1].CurrentIrp & 1;
    else
      v11 = 0;
    m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    v13 = (m_Owner != 0LL ? 0x80 : 0) | (v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(16
                                                                                     * LOBYTE(m_PkgPnp[1].m_DeviceBase))) & 0x10) & 0xFFFFFF1F | (32 * v11) & 0xFFFFFF3F;
    if ( m_Owner )
      Enabled = m_Owner->m_IdleSettings.Enabled;
    else
      Enabled = 0;
    v15 = v13 ^ (v13 ^ (Enabled << 8)) & 0x100;
    if ( m_Owner )
      WakeFromS0Capable = m_Owner->m_IdleSettings.WakeFromS0Capable;
    else
      WakeFromS0Capable = 0;
    v17 = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    if ( !m_Owner )
      v17 = 0LL;
    v18 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)(WakeFromS0Capable << 9)) & 0x200;
    if ( !m_Owner || !v17->m_IdleSettings.WakeFromS0Capable || (v19 = 1, !m_Owner->m_IdleSettings.UsbSSCapable) )
      v19 = 0;
    v20 = (v19 << 10) | v18 & 0xFFFFFBFF;
    if ( m_Owner )
      v21 = ((unsigned int)m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus >> 1) & 1;
    else
      v21 = 0;
    v22 = v20 & 0xFFFFF7FF | (v21 << 11);
    v23 = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    DriverInfo->Dword = v22;
    if ( v23 )
      v5 = v23->m_WakeSettings.Enabled;
    v7 = ((m_DeviceTelemetryInfoFlags & 0x180) << 14) & 0xFF7FFFFF | v22 & 0xFF000FFF | (m_PkgPnp->m_InterruptObjectCount > 1
                                                                                       ? 0x20000
                                                                                       : 0) | ((v5 & 1 | (2 * (m_DeviceTelemetryInfoFlags & 8 | m_DeviceTelemetryInfoFlags & 4 | m_DeviceTelemetryInfoFlags & 1 | m_DeviceTelemetryInfoFlags & 2 | (2 * (m_DeviceTelemetryInfoFlags & 0x200 | m_DeviceTelemetryInfoFlags & 0x70))))) << 12);
  }
  else
  {
    v7 = v6 ^ (Globals->Public.DriverFlags ^ v6) & 3;
  }
  DriverInfo->Dword = v7;
}
