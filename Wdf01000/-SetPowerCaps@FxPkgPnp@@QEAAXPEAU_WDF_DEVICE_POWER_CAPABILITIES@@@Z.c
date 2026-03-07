void __fastcall FxPkgPnp::SetPowerCaps(FxPkgPnp *this, _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  _DEVICE_POWER_STATE *DeviceState; // r11
  unsigned int v4; // r10d
  unsigned int i; // ecx
  int v6; // eax
  int v7; // r8d
  _WDF_TRI_STATE DeviceD1; // ecx
  __int16 v9; // r8
  _WDF_TRI_STATE DeviceD2; // ecx
  __int16 v11; // cx
  __int16 v12; // cx
  _WDF_TRI_STATE WakeFromD0; // r8d
  __int16 v14; // ax
  _WDF_TRI_STATE WakeFromD1; // r8d
  __int16 v16; // cx
  __int16 v17; // ax
  _WDF_TRI_STATE WakeFromD2; // r8d
  __int16 v19; // cx
  __int16 v20; // ax
  _WDF_TRI_STATE WakeFromD3; // r8d
  __int16 v22; // cx
  __int16 v23; // ax

  DeviceState = PowerCapabilities->DeviceState;
  v4 = 0;
  for ( i = 0; i < 0x1C; i += 4 )
  {
    v6 = (*DeviceState & 0xF) << i;
    v7 = ~(15 << i);
    v4 = v6 | v7 & v4;
    ++DeviceState;
  }
  this->m_PowerCaps.States = v4;
  DeviceD1 = PowerCapabilities->DeviceD1;
  if ( DeviceD1 )
  {
    if ( DeviceD1 == WdfTrue )
      v9 = 1;
    else
      v9 = 2;
  }
  else
  {
    v9 = 0;
  }
  DeviceD2 = PowerCapabilities->DeviceD2;
  if ( DeviceD2 )
  {
    if ( DeviceD2 == WdfTrue )
      v11 = 4;
    else
      v11 = 8;
  }
  else
  {
    v11 = 0;
  }
  v12 = v9 | v11;
  WakeFromD0 = PowerCapabilities->WakeFromD0;
  if ( WakeFromD0 )
  {
    if ( WakeFromD0 == WdfTrue )
      v14 = 16;
    else
      v14 = 32;
  }
  else
  {
    v14 = 0;
  }
  WakeFromD1 = PowerCapabilities->WakeFromD1;
  v16 = v14 | v12;
  if ( WakeFromD1 )
  {
    if ( WakeFromD1 == WdfTrue )
      v17 = 64;
    else
      v17 = 128;
  }
  else
  {
    v17 = 0;
  }
  WakeFromD2 = PowerCapabilities->WakeFromD2;
  v19 = v17 | v16;
  if ( WakeFromD2 )
  {
    if ( WakeFromD2 == WdfTrue )
      v20 = 256;
    else
      v20 = 512;
  }
  else
  {
    v20 = 0;
  }
  WakeFromD3 = PowerCapabilities->WakeFromD3;
  v22 = v20 | v19;
  if ( WakeFromD3 )
  {
    if ( WakeFromD3 == WdfTrue )
      v23 = 1024;
    else
      v23 = 2048;
  }
  else
  {
    v23 = 0;
  }
  this->m_PowerCaps.Caps = v22 | v23;
  if ( PowerCapabilities->DeviceWake != PowerDeviceMaximum )
    this->m_PowerCaps.DeviceWake = PowerCapabilities->DeviceWake;
  if ( PowerCapabilities->SystemWake != PowerSystemMaximum )
    this->m_PowerCaps.SystemWake = PowerCapabilities->SystemWake;
  this->m_PowerCaps.D1Latency = PowerCapabilities->D1Latency;
  this->m_PowerCaps.D2Latency = PowerCapabilities->D2Latency;
  this->m_PowerCaps.D3Latency = PowerCapabilities->D3Latency;
  if ( PowerCapabilities->IdealDxStateForSx != PowerDeviceMaximum )
    this->m_PowerPolicyMachine.m_Owner->m_IdealDxStateForSx = PowerCapabilities->IdealDxStateForSx;
}
