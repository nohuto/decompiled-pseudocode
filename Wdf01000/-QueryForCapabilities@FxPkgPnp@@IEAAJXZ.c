/*
 * XREFs of ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0075194
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A930 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C0074544 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0074DA4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0080E08 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 */

__int64 __fastcall FxPkgPnp::QueryForCapabilities(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v3; // edx
  int StackCapabilities; // edi
  _BYTE *v5; // r9
  unsigned int v6; // edx
  unsigned __int8 DeviceWake; // r8
  __int64 v8; // rax
  unsigned int v9; // r8d
  _DEVICE_POWER_STATE *DeviceState; // r9
  unsigned int i; // ecx
  int v12; // eax
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int v15; // edx
  MxDeviceObject deviceObject; // [rsp+20h] [rbp-88h] BYREF
  _STACK_DEVICE_CAPABILITIES caps; // [rsp+30h] [rbp-78h] BYREF

  memset(&caps, 0, sizeof(caps));
  m_Globals = this->m_Globals;
  deviceObject.m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  StackCapabilities = GetStackCapabilities(m_Globals, &deviceObject, &this->m_D3ColdInterface, &caps);
  if ( StackCapabilities >= 0 )
  {
    this->m_SystemWake = caps.DeviceCaps.SystemWake;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v3, 0xBu) )
    {
      *(_DWORD *)v5 = 0;
      v5[4] = 0;
      v6 = 1;
      if ( this->m_SystemWake )
      {
        DeviceWake = caps.DeviceCaps.DeviceWake;
        do
        {
          v8 = v6++ - 1;
          this->m_DeviceWake[v8] = DeviceWake;
        }
        while ( v6 <= this->m_SystemWake );
      }
    }
    else
    {
      memset(v5, LOBYTE(caps.DeviceCaps.DeviceWake), 5uLL);
    }
    v9 = 0;
    DeviceState = caps.DeviceCaps.DeviceState;
    for ( i = 0; i < 0x1C; i += 4 )
    {
      v12 = *DeviceState++;
      v13 = ~(15 << i);
      v9 = ((v12 & 0xF) << i) | v13 & v9;
    }
    this->m_PowerPolicyMachine.m_Owner->m_SystemToDeviceStateMap = v9;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v13, 0xBu) )
    {
      v15 = v14 - 10;
      if ( this->m_SystemWake >= (unsigned __int8)(v14 - 10) )
      {
        do
        {
          if ( caps.DeepestWakeableDstate[v15] != DeviceWakeDepthMaximum )
            this->m_DeviceWake[v15 - 1] = caps.DeepestWakeableDstate[v15];
          ++v15;
        }
        while ( v15 <= this->m_SystemWake );
      }
    }
  }
  return (unsigned int)StackCapabilities;
}
