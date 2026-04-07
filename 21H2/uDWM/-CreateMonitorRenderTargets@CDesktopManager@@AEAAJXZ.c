/*
 * XREFs of ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180037AAC
 * Callers:
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x1800372A4 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180052820 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x180037AFC (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ @ 0x1800860C8 (-CreateMonitorRenderTargetsDDisplay@CDesktopManager@@AEAAJXZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800BF694 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CDesktopManager::CreateMonitorRenderTargets(CDesktopManager *this)
{
  int MonitorRenderTargetsLegacy; // eax
  unsigned int v3; // ebx
  int MonitorRenderTargetsDDisplay; // eax

  if ( *((_DWORD *)this + 202) == 1 && ((unsigned int)IsKernelDebuggerPresent() || IsDebuggerPresent()) )
    __debugbreak();
  if ( *((_DWORD *)this + 202) )
  {
    MonitorRenderTargetsDDisplay = CDesktopManager::CreateMonitorRenderTargetsDDisplay(this);
    v3 = MonitorRenderTargetsDDisplay;
    if ( MonitorRenderTargetsDDisplay < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargetsDDisplay, 0x480u);
      return v3;
    }
    if ( *((_DWORD *)this + 202) )
      return v3;
  }
  MonitorRenderTargetsLegacy = CDesktopManager::CreateMonitorRenderTargetsLegacy(this);
  v3 = MonitorRenderTargetsLegacy;
  if ( MonitorRenderTargetsLegacy < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MonitorRenderTargetsLegacy, 0x488u);
  return v3;
}
