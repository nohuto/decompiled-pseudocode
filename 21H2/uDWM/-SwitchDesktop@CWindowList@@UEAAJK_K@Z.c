/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180036BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800093FC (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000B148 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000D3EC (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001A5EC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180028714 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x180031C5C (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800351E0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180035448 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180039B6C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3135195449@@@details@wil@@QEAA_NXZ @ 0x1800579CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3135195449@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180096560 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800AD51C (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  char v6; // r14
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // edx
  CScreenRotation *v10; // rcx
  CScreenRotation *v11; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  CLoginTransition *v16; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  int started; // eax
  CLoginTransition *v19; // rcx
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 1;
  v7 = CDesktopManager::SendSwitchModeCommand(a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1957u);
    goto LABEL_30;
  }
  v10 = (CScreenRotation *)*((_QWORD *)this + 62);
  if ( v10 && *((_QWORD *)v10 + 3) )
    CScreenRotation::Stop(v10, 0);
  v11 = (CScreenRotation *)*((_QWORD *)this + 63);
  if ( v11 && *((_QWORD *)v11 + 3) )
    CScreenRotation::Stop(v11, 0);
  if ( !*((_QWORD *)this + 66) || a2 != 55 && a2 != 65 || !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
  {
LABEL_27:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3135195449>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_3135195449>::GetImpl'::`2'::impl)
      && CDesktopManager::IsLogonDesktop(a3) )
    {
      CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
    }
LABEL_30:
    if ( v8 >= 0 )
      goto LABEL_33;
    goto LABEL_31;
  }
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(this, a3);
  v13 = CWindowList::BringDesktopToFront(this, RenderTargetRootVisualForDesktop);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x196Du);
    goto LABEL_30;
  }
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30));
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                        + 16LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 16LL));
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1971u);
    goto LABEL_30;
  }
  if ( *((_QWORD *)this + 65) )
    goto LABEL_24;
  v15 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v15 )
  {
    *(_QWORD *)(v15 + 8) = 0LL;
    *(_QWORD *)v15 = &CLoginTransition::`vftable';
    *(_DWORD *)(v15 + 72) = -1;
    *(_QWORD *)(v15 + 80) = -1LL;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_QWORD *)(v15 + 40) = 0LL;
    *(_QWORD *)(v15 + 48) = 0LL;
    *(_BYTE *)(v15 + 68) = 0;
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)this + 65) = v15;
  if ( v15 )
  {
LABEL_24:
    v16 = (CLoginTransition *)*((_QWORD *)this + 65);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, a3);
    started = CLoginTransition::StartAnimation(v16, a2, *((struct CVisual **)this + 66), RootVisualForDesktop, a3);
    v8 = started;
    if ( started < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x197Au);
      goto LABEL_30;
    }
    v6 = 0;
    goto LABEL_27;
  }
  v8 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1976u);
LABEL_31:
  v19 = (CLoginTransition *)*((_QWORD *)this + 65);
  if ( v19 )
  {
    CLoginTransition::`scalar deleting destructor'(v19, v9);
    *((_QWORD *)this + 65) = 0LL;
  }
LABEL_33:
  if ( v6 )
    v8 = CWindowList::DesktopSwitchImmediately((CLoginTransition **)this, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  return (unsigned int)v8;
}
