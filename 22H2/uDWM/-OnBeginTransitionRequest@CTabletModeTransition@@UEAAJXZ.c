/*
 * XREFs of ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800AFE10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18002F7CC (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AA96C (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 */

__int64 __fastcall CTabletModeTransition::OnBeginTransitionRequest(CTabletModeTransition *this)
{
  HMONITOR v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  RECT *p_rcMonitor; // rax
  int DesktopSnapshotComponent; // eax
  int v7; // eax
  CBaseObject *v9; // [rsp+30h] [rbp-50h] BYREF
  POINT pt[2]; // [rsp+38h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF

  pt[0] = 0LL;
  v9 = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  v3 = 0;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    p_rcMonitor = &mi.rcMonitor;
    if ( *((_BYTE *)this + 120) )
      p_rcMonitor = &mi.rcWork;
    *(RECT *)&pt[0].x = *p_rcMonitor;
    DesktopSnapshotComponent = CTransitionVisualController::CreateDesktopSnapshotComponent(
                                 *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
                                 v4,
                                 (const struct tagRECT *)pt,
                                 this,
                                 (__int64 *)&v9);
    v3 = DesktopSnapshotComponent;
    if ( DesktopSnapshotComponent >= 0 )
    {
      v7 = CStoryboard::_AddAnimationComponent(this, v9);
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x1358u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        DesktopSnapshotComponent,
        0x1357u);
    }
    if ( v9 )
      CBaseObject::Release(v9);
  }
  return v3;
}
