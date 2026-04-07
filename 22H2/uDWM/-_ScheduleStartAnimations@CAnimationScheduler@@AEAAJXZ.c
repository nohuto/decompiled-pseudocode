/*
 * XREFs of ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800351AC
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035040 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x18000FFE0 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180031470 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003527C (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180035460 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180035D44 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180039468 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStartAnimations(CAnimationScheduler *this)
{
  __int64 i; // rbx
  CStoryboard *v3; // rcx
  volatile signed __int32 *v4; // rax
  CAnimationEngine *v5; // rbx
  char v6; // di
  int v7; // esi
  CAnimationEngine *v9; // rax
  CAnimationEngine *v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 80) )
  {
    v9 = CDesktopManager::AcquireAnimationEngine();
    v10 = v9;
    if ( v9 )
    {
      v11 = CAnimationEngine::RegisterForAnimationCompleteNotification(v9, this);
      v7 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x210u);
      else
        *((_BYTE *)this + 80) = 1;
      CAnimationEngine::Release(v10);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E1,
          (__int64)"clientcore\\windows\\dwm\\udwm\\animationscheduler.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_16;
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v3 = *(CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
    if ( *((_DWORD *)v3 + 6) == 2 )
      CStoryboard::ScheduleStartAnimation(v3);
  }
  v4 = (volatile signed __int32 *)CDesktopManager::AcquireAnimationEngine();
  v5 = (CAnimationEngine *)v4;
  if ( !v4 )
  {
    v7 = 0;
    goto LABEL_16;
  }
  _InterlockedIncrement(v4 + 29);
  v6 = -(CAnimationEngine::IsIdle((CAnimationEngine *)v4) != 0);
  v7 = 0;
  CAnimationEngine::Release(v5);
  if ( (v6 & 1) != 0 )
LABEL_16:
    CAnimationScheduler::_CleanupTransition(this);
  return (unsigned int)v7;
}
