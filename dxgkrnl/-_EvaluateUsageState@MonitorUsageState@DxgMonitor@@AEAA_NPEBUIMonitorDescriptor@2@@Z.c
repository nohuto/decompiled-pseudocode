char __fastcall DxgMonitor::MonitorUsageState::_EvaluateUsageState(
        DxgMonitor::MonitorUsageState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  char v4; // bl
  int v5; // edx
  bool v7; // [rsp+30h] [rbp-10h] BYREF
  int v8[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v9; // [rsp+70h] [rbp+30h] BYREF
  bool v10; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304481) && !*((_DWORD *)this + 4) )
  {
    v8[0] = 0;
    v9 = 1;
    v7 = 0;
    v10 = 1;
    if ( (int)DxgMonitor::MonitorUsageState::_GetIntendedUsageFromDescriptor(
                this,
                a2,
                (enum _DXGK_DISPLAY_USAGE *)&v9,
                &v7,
                &v10) >= 0 )
    {
      if ( (unsigned __int8)(v9 - 2) <= 1u )
      {
        v8[0] = 1;
      }
      else if ( !v10 )
      {
        v8[0] = 2;
      }
    }
    else if ( g_OSTestSigningEnabled )
    {
      v8[0] = DxgMonitor::MonitorUsageState::_ReadUsageOverridesFromRegistry(this);
    }
    DxgMonitor::MonitorUsageState::_ReadAppOverridesFromMonitorDataStore(this, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)v8);
    v5 = v8[0];
    if ( v8[0] != *((_DWORD *)this + 4) )
    {
      v4 = 1;
      *((_BYTE *)this + 20) = v7;
      *((_DWORD *)this + 4) = v5;
      DxgMonitor::MonitorUsageState::_SaveUsageOverridesToMonitorStore(this);
    }
  }
  return v4;
}
