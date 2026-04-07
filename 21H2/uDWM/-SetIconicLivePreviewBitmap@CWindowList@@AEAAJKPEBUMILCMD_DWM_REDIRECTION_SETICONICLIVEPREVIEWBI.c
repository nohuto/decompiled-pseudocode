/*
 * XREFs of ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180099B30
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015748 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180018414 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180089A08 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180095960 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CWindowList::SetIconicLivePreviewBitmap(
        CWindowList *this,
        int a2,
        const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *a3,
        const struct _REMOTE_PORT_VIEW *a4)
{
  __int64 v8; // rcx
  HWND v9; // rdi
  int SyncedWindowDataByHwnd; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp-28h] BYREF
  CWindowData *v15; // [rsp+90h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p_EtwEventWriteTransfer(
      v8,
      (__int64)&UdwmProcessSetIconicLivePreviewBitmap_Start,
      *(_QWORD *)((char *)a3 + 4));
  v15 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v9, &v15);
  v12 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v15 && !CWindowData::IsImmersiveWindow(v15) )
      v12 = CIconicBitmapRegistry::LivePreviewBitmapReceived(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 37),
              v15,
              a2,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              (const struct tagPOINT *)((char *)a3 + 20),
              a4->ViewBase,
              a4->ViewSize,
              *((_DWORD *)a3 + 7));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p_EtwEventWriteTransfer(v11, (__int64)&UdwmProcessSetIconicLivePreviewBitmap_Stop, (__int64)v9);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1126u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v12;
}
