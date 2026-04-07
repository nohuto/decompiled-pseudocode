/*
 * XREFs of ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000F434
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011440 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180009B08 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18000D2FC (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18000FC5C (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000FD18 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z @ 0x180010454 (-IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001930C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025CCC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x180031F50 (-OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003FD6C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow3D::BeginDestroySprite(CTopLevelWindow3D *this, bool *a2)
{
  __int64 v2; // r15
  unsigned int v3; // ebx
  char v5; // si
  int v7; // eax
  int v8; // r12d
  int started; // eax
  struct _LIST_ENTRY *WindowListForDesktop; // r13
  struct _LIST_ENTRY *Blink; // r14
  CAnimationScheduler *v13; // r14
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  bool *v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+58h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 41);
  v3 = 0;
  v19 = a2;
  v5 = 1;
  if ( (*(_BYTE *)(v2 + 612) & 2) != 0 )
    goto LABEL_35;
  if ( !IsWindowTabEligible((const struct CWindowData *)v2) )
    goto LABEL_35;
  v8 = 1;
  if ( !(unsigned int)GetWindowGroupId(*(_QWORD *)(v2 + 40), &v16) )
    goto LABEL_35;
  if ( !v16 )
    goto LABEL_35;
  if ( !(unsigned int)GetDesktopID(1LL, &v18) )
    goto LABEL_35;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v18);
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_35;
  do
  {
    if ( Blink != (struct _LIST_ENTRY *)v2
      && Blink[24].Flink
      && (unsigned int)GetWindowGroupId(Blink[2].Blink, &v17)
      && v17 == v16 )
    {
      ++v8;
    }
    Blink = Blink->Blink;
  }
  while ( Blink != WindowListForDesktop );
  if ( v8 <= 1 )
  {
LABEL_35:
    if ( CTopLevelWindow3D::ShouldDelayTransition(this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation(this);
      v3 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x15Fu);
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, 6LL)
        || (*(_DWORD *)(*((_QWORD *)this + 41) + 100LL) & 0x20000000) != 0
        || CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        goto LABEL_5;
      }
      if ( !*((_QWORD *)this + 45) || *((_DWORD *)this + 92) != 3 )
      {
        v7 = CTopLevelWindow3D::StartAnimation(this, 6LL);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x16Au);
          goto LABEL_5;
        }
      }
    }
    v5 = 0;
    goto LABEL_5;
  }
  v20 = 0LL;
  v13 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v14 = CAnimationScheduler::OnBeginTransitionRequest(v13, 93, &AnimationClock_TabSwitch, 0LL);
  v3 = v14;
  if ( v14 >= 0 )
  {
    v15 = CAnimationScheduler::OnWindowTransitionTargetChanged(
            v13,
            *((_QWORD *)this + 41),
            537919573LL,
            &v20,
            &v20,
            &v20,
            &v20,
            &v20);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x15Bu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x15Au);
  }
LABEL_5:
  *v19 = v5;
  return v3;
}
