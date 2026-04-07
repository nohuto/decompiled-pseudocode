/*
 * XREFs of ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x180096430
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180031850 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180017BD4 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x180094400 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180097DE4 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 */

__int64 __fastcall CWindowList::AddProjectedShadowCaster(CWindowList *this, HWND a2, void *a3, void *a4)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v9; // ebx
  struct CWindowData *v10; // rdi
  int ProjectedShadowSceneForDesktop; // eax
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-20h]
  struct CWindowData *v15; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+38h] [rbp-8h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v15);
  v9 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v10 = v15;
    if ( !v15 )
      goto LABEL_13;
    v15 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       this,
                                       *((_QWORD *)v10 + 15),
                                       a3 != 0LL,
                                       &v15);
    v9 = ProjectedShadowSceneForDesktop;
    if ( ProjectedShadowSceneForDesktop >= 0 )
    {
      if ( !v15 )
      {
        v9 = -2147019873;
        v14 = 1609;
        v12 = -2147019873;
        goto LABEL_11;
      }
      ProjectedShadowSceneForDesktop = CTopLevelWindow::AddProjectedShadowCaster(
                                         *((CTopLevelWindow **)v10 + 48),
                                         v15,
                                         a3,
                                         a4);
      v9 = ProjectedShadowSceneForDesktop;
      if ( ProjectedShadowSceneForDesktop >= 0 )
      {
LABEL_12:
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
        goto LABEL_13;
      }
      v14 = 1605;
    }
    else
    {
      v14 = 1602;
    }
    v12 = ProjectedShadowSceneForDesktop;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v14);
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x63Du);
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v9;
}
