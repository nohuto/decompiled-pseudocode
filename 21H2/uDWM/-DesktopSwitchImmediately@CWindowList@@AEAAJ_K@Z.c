/*
 * XREFs of ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800351E0
 * Callers:
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x18000A340 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180036BA0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18000A3E0 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000D3EC (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001A5EC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180031C5C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x180035320 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x180035368 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180035448 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::DesktopSwitchImmediately(CLoginTransition **this, unsigned __int64 a2)
{
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v5; // eax
  int v6; // ebx
  CContactManager *v7; // rsi
  int v8; // eax
  int refreshed; // eax
  CBaseObject *v10; // rcx
  CLoginTransition *v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop((CWindowList *)this, a2);
  v5 = CWindowList::BringDesktopToFront((CWindowList *)this, RenderTargetRootVisualForDesktop);
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 6452;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v13);
    goto LABEL_12;
  }
  v7 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v8 = CContactManager::Reset(v7);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x83Du);
  }
  else
  {
    refreshed = CContactManager::RefreshPresentationModeSettings(v7);
    v6 = refreshed;
    if ( refreshed < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, refreshed, 0x83Eu);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1935u);
    goto LABEL_12;
  }
  v10 = this[66];
  if ( v10 )
    CBaseObject::Release(v10);
  this[66] = CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2);
  if ( CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) )
    _InterlockedIncrement((volatile signed __int32 *)CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) + 2);
  v11 = this[65];
  if ( v11 )
    CLoginTransition::StopAnimation(v11);
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL));
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 6467;
    goto LABEL_19;
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return (unsigned int)v6;
}
