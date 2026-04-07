/*
 * XREFs of ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035880
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180030890 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180033560 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180018490 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002FFE0 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180030A18 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800339A0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x1800359EC (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800365B4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x1800366D8 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboardsForAnimationClock(
        CAnimationScheduler *this,
        struct _GUID *a2)
{
  int v3; // ebx
  struct _GUID *v4; // rcx
  struct _GUID *v5; // r12
  unsigned int v6; // r9d
  struct _GUID **v7; // r8
  __int64 v8; // r10
  signed int Data1; // r15d
  char v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  int started; // eax
  __int128 v17; // [rsp+30h] [rbp-48h]

  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
  {
    v7 = (struct _GUID **)*((_QWORD *)this + 2);
    v8 = v6;
    do
    {
      a2 = *v7;
      if ( !*(_DWORD *)(*v7)[1].Data4 && (!v4 || (signed int)v4[4].Data1 < (signed int)a2[4].Data1) )
        v4 = *v7;
      ++v7;
      --v8;
    }
    while ( v8 );
  }
  Data1 = 0;
  if ( v4 )
    Data1 = v4[4].Data1;
  v10 = 0;
  v11 = 0LL;
  if ( v6 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v11);
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v17 = *(_OWORD *)(v12 + 48);
      v13 = v17 - *(_QWORD *)&v5->Data1;
      if ( (_QWORD)v17 == *(_QWORD *)&v5->Data1 )
        v13 = *((_QWORD *)&v17 + 1) - *(_QWORD *)v5->Data4;
      if ( v13 )
        goto LABEL_20;
      if ( v3 < 0 )
        break;
      if ( *(_DWORD *)(v12 + 24) <= 1u )
      {
        if ( *(_DWORD *)(v12 + 64) < Data1 )
        {
          *(_DWORD *)(v12 + 24) = 1;
          CStoryboard::_LogStoryboardEvent(v12, (__int64)a2);
          v3 = 0;
        }
        else
        {
          v3 = CAnimationScheduler::_ScheduleStoryboard((CAnimationScheduler *)v4, (struct CStoryboard *)v12);
          if ( v3 < 0 )
            break;
          v10 = 1;
          CAnimationScheduler::_ScheduleBlockedStoryboards(this, *(_DWORD *)(v12 + 64));
        }
      }
LABEL_20:
      CStoryboard::Release((CStoryboard *)v12);
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *((_DWORD *)this + 10) )
      {
        if ( v3 >= 0 && v10 )
        {
          v14 = CTransitionVisualController::SetupZOrder(*((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance
                                                         + 31));
          v3 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x273u);
          }
          else
          {
            started = CAnimationScheduler::_ScheduleStartAnimations(this);
            v3 = started;
            if ( started < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x276u);
            else
              CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61));
          }
        }
        return (unsigned int)v3;
      }
    }
    CStoryboard::Abandon((CStoryboard *)v12);
    goto LABEL_20;
  }
  return (unsigned int)v3;
}
