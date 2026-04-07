/*
 * XREFs of ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x1800369C0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036538 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x18009865C (-ModeChange@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180036A7C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z @ 0x180036FD8 (-CheckInteropDCompDevice@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800371BC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003927C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800392FC (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     McTemplateU0qqq_EtwEventWriteTransfer @ 0x180087978 (McTemplateU0qqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDesktopManager::ModeChange(CDesktopManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int MonitorRenderTargets; // eax
  int v5; // eax
  HDC DC; // rbx
  char DeviceCaps; // si
  int SystemMetrics; // ebx
  int v10; // eax
  int v11; // edx
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmProcessModeChange_Info) )
  {
    DC = GetDC(0LL);
    DeviceCaps = GetDeviceCaps(DC, 12);
    ReleaseDC(0LL, DC);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      SystemMetrics = GetSystemMetrics(1);
      v10 = GetSystemMetrics(0);
      McTemplateU0qqq_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        v11,
        v10,
        SystemMetrics,
        DeviceCaps);
    }
  }
  GetDesktopID(1LL, &v12);
  v2 = CDesktopManager::SendSwitchModeCommand(v12);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x3F5u);
  }
  else if ( *((_BYTE *)this + 16)
         && (MonitorRenderTargets = CDesktopManager::CreateMonitorRenderTargets(this),
             v3 = MonitorRenderTargets,
             MonitorRenderTargets < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargets, 0x3F9u);
  }
  else
  {
    CAnalogCompositorManager::GetInstance();
    v5 = CDesktopManager::CheckInteropDCompDevice(this, 0LL);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x401u);
  }
  CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 61));
  return v3;
}
