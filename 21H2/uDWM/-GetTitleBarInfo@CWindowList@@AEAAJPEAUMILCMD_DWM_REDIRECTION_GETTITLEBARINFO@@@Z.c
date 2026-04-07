/*
 * XREFs of ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x180004EFC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180004F94 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180018414 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::GetTitleBarInfo(CWindowList *this, struct MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // ebx
  CTopLevelWindow *v7; // rcx
  struct CWindowData *v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v9 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v9);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1714u);
  }
  else if ( v9 && (v7 = (CTopLevelWindow *)*((_QWORD *)v9 + 48)) != 0LL )
  {
    CTopLevelWindow::GetTitleBarInfo(v7, (struct tagTITLEBARINFOEX *)((char *)a2 + 12), (bool *)a2 + 152);
  }
  else
  {
    *((_DWORD *)a2 + 38) = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v6;
}
