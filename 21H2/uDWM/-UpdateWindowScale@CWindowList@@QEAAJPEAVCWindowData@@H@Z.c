/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000BF90
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BDB4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001A20C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000B028 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012A20 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180013BCC (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001681C (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180019500 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x180020218 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002AE7C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180041270 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     floor_0 @ 0x18005814A (floor_0.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale(CWindowList *this, struct tagPOINT *a2, int a3)
{
  unsigned int v6; // edi
  int v7; // esi
  int v8; // r14d
  float v9; // xmm7_4
  CWindowList *v10; // rcx
  int v11; // eax
  CWindowList *v13; // rcx
  CTopLevelWindow *v14; // rcx
  HWND v15; // rdx
  bool v16; // [rsp+78h] [rbp+10h] BYREF
  struct tagPOINT v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  CWindowData::EstablishPixelAlignedScale((CWindowData *)a2, &v16);
  v7 = 0;
  v8 = 0;
  v9 = *(float *)&a2[38].x;
  if ( a2[23].y - a2[22].y >= 0 )
    v7 = a2[23].y - a2[22].y;
  if ( a2[24].x - a2[23].x >= 0 )
    v8 = a2[24].x - a2[23].x;
  if ( v9 != 1.0 )
  {
    v7 = (int)floor_0((float)((float)v7 * v9) + 0.5);
    v8 = (int)floor_0((float)((float)v8 * v9) + 0.5);
  }
  a2[7].x = v7 + a2[6].x;
  v10 = (CWindowList *)(unsigned int)(v8 + a2[6].y);
  a2[7].y = (int)v10;
  if ( *(_QWORD *)&a2[48] && (v11 = CWindowData::OnWindowSizeUpdated((CWindowData *)a2), v6 = v11, v11 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xD5Cu);
  }
  else if ( v16 || a3 )
  {
    CWindowList::OnClientMarginsChange(v10, (struct CWindowData *)a2);
    CWindowList::OnClientGlassChange(v13, (struct CWindowData *)a2);
    v14 = (CTopLevelWindow *)a2[48];
    if ( v14 )
      CTopLevelWindow::OnWindowScaleUpdated(v14);
    v15 = (HWND)a2[5];
    v17 = a2[6];
    v16 = 0;
    CWindowPropertyTracker::GetWindowEndPosition(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
      v15,
      &v17);
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
      (const struct CWindowData *)a2,
      v17,
      &v16);
    if ( !v16 )
      CWindowList::OnPositionChange(this, (struct CWindowData *)a2, 1);
  }
  return v6;
}
