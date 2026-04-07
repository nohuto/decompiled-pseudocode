/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180033160
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002FA58 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035040 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x180009B7C (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180019928 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18002AD18 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002FE8C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800314F4 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180033334 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180033544 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  __int64 i; // rbx
  signed int v6; // esi
  char v7; // r9
  __int64 k; // rsi
  __int64 v9; // rbp
  int v10; // eax
  CTransitionVisualController *v11; // rcx
  int v12; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned int v20; // edx
  __int64 j; // rbp
  __int64 v22; // r14
  __int64 v23; // r13
  CAnimationComponent *v24; // r15
  CAnimationComponent *v25; // r14
  int WindowZOrder; // ebx

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v2,
      0x6E3u);
    goto LABEL_37;
  }
  v4 = *((_DWORD *)this + 34);
  for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * i));
    v4 = *((_DWORD *)this + 34);
  }
  v6 = 0;
  if ( (int)(v4 - 1) > 0 )
  {
    v20 = v4;
    do
    {
      v4 = v20;
      for ( j = 0LL; (int)j < (int)(v4 - v6 - 1); v4 = *((_DWORD *)this + 34) )
      {
        v22 = *((_QWORD *)this + 14);
        v23 = (unsigned int)j;
        v24 = *(CAnimationComponent **)(v22 + 8 * j);
        j = (unsigned int)(j + 1);
        if ( !*((_BYTE *)v24 + 65) )
        {
          v25 = *(CAnimationComponent **)(v22 + 8 * j);
          if ( !*((_BYTE *)v25 + 65) )
          {
            WindowZOrder = CAnimationComponent::GetWindowZOrder(v25);
            if ( (int)CAnimationComponent::GetWindowZOrder(v24) > WindowZOrder )
            {
              *(_QWORD *)(*((_QWORD *)this + 14) + 8 * j) = v24;
              *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v23) = v25;
            }
          }
        }
      }
      ++v6;
      v20 = v4;
    }
    while ( v6 < (int)(v4 - 1) );
  }
  v7 = 1;
  while ( v4 > 1 && v7 )
  {
    v7 = 0;
    v14 = 0LL;
    v15 = v4 - 1;
    v16 = 8LL;
    do
    {
      v17 = *((_QWORD *)this + 14);
      v18 = *(_QWORD *)(v14 + v17);
      if ( !*(_BYTE *)(v18 + 65) )
      {
        v19 = *(_QWORD *)(v16 + v17);
        if ( !*(_BYTE *)(v19 + 65)
          && *(_QWORD *)(v18 + 128) == *(_QWORD *)(v19 + 128)
          && *(_DWORD *)(v18 + 56) > *(_DWORD *)(v19 + 56) )
        {
          *(_QWORD *)(v14 + v17) = v19;
          v7 = 1;
          *(_QWORD *)(v16 + *((_QWORD *)this + 14)) = v18;
        }
      }
      v14 += 8LL;
      v16 += 8LL;
      --v15;
    }
    while ( v15 );
    --v4;
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 34); k = (unsigned int)(k + 1) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * k);
    if ( !*(_BYTE *)(v9 + 65) )
    {
      v10 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v9 + 40) + 8LL), 0);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v10,
          0x719u);
        goto LABEL_37;
      }
      CTransitionVisualController::_UpdateClipping(v11, (struct CAnimationComponent *)v9);
    }
  }
  v12 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  v3 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v12,
      0x721u);
LABEL_37:
    CTransitionVisualController::CleanupTransition(this);
  }
  return v3;
}
