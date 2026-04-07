/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180052710
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800157E0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180052770 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x180052900 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 */

__int64 __fastcall CWindowList::StartupEnd(CWindowList *this)
{
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 600) )
    CDesktopManager::ClearPreferences(v2);
  v3 = CDesktopManager::EnableMonitorRenderTargets(CDesktopManager::s_pDesktopManagerInstance, 1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x17C6u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
