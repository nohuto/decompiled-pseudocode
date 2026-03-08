/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1802326B8
 * Callers:
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18022D8A4 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18022DA04 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18022DBA8 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18022E664 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x180230B20 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180271E8C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180053D90 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800BC9EC (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B2934 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x18022DD1C (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18022EAB4 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18022EBE0 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18022ECB0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18022F17C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18022F824 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18022FBA8 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x180231D6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18023233C (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x180232AD4 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180261E20 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 */

bool __fastcall CInteractionTracker::TransitionToInertia(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ecx
  bool v6; // r14
  char v7; // r15
  int v8; // ecx
  int v9; // ecx
  CInteractionTracker *v10; // rcx
  CInteractionTracker *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  double v14; // xmm0_8
  int v15; // xmm2_4
  __int64 v16; // rcx
  double v17; // xmm0_8
  __int64 v18; // r11
  CBaseExpression **v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  CBaseExpression *v22; // rcx
  int v23; // eax
  CScrollAnimation *v24; // rbx
  float CurrentValue; // xmm0_4
  bool v27; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v28[2]; // [rsp+28h] [rbp-58h] BYREF
  int v29; // [rsp+38h] [rbp-48h]
  __int128 v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h]
  int v32; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-20h] BYREF
  __int64 v34; // [rsp+68h] [rbp-18h]
  __int64 v35; // [rsp+70h] [rbp-10h]
  __int64 v36; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 176);
  v6 = 0;
  v7 = 0;
  if ( !v4 )
    goto LABEL_5;
  v8 = v4 - 1;
  if ( !v8 )
  {
    v6 = a2 == 0;
    if ( a2 )
      return v6;
    goto LABEL_9;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return v6;
LABEL_5:
    if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1)
      && !CInteractionTracker::HasImpulse(v10)
      && a2 != 1 )
    {
      return v6;
    }
    goto LABEL_8;
  }
  if ( a2 == 1 )
  {
LABEL_8:
    v6 = 1;
    goto LABEL_9;
  }
  if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1) && !CInteractionTracker::HasImpulse(v11) )
    return v6;
  v6 = 1;
  v7 = 1;
LABEL_9:
  CInteractionTracker::BoostCompositorClock((CInteractionTracker *)a1, 1);
  CInteractionTracker::StopCustomAnimations((CInteractionTracker *)a1, 0);
  if ( a2 == 1 )
  {
    CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
  }
  else
  {
    CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)a1);
    CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1, 0);
  }
  if ( v7 )
  {
    v12 = &v33;
    v33 = *(_QWORD *)(a1 + 336);
    v34 = *(_QWORD *)(a1 + 344);
    v35 = *(_QWORD *)(a1 + 328);
    do
    {
      v13 = *v12;
      ++v2;
      ++v12;
      *(_BYTE *)(v13 + 368) |= 4u;
      *(_BYTE *)(v13 + 396) |= 1u;
    }
    while ( v2 < 3 );
  }
  else if ( !a2 )
  {
    v14 = CInteractionTracker::ValueFromBoundary(a1, 2LL, 2LL);
    v15 = LODWORD(v14);
    v17 = CInteractionTracker::ValueFromBoundary(v16, 1LL, 2LL);
    *(_DWORD *)(v18 + 520) = LODWORD(v17);
    v19 = (CBaseExpression **)&v33;
    *(_DWORD *)(v18 + 492) = v15;
    v33 = *(_QWORD *)(a1 + 328);
    v34 = *(_QWORD *)(a1 + 336);
    v35 = *(_QWORD *)(a1 + 344);
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
    v28[0] = &CExpressionValueStack::`vftable';
    v28[1] = v20;
    v29 = 0;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0;
    do
    {
      if ( *(_DWORD *)(a1 + 176) == 1
        && InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 200)) )
      {
        v21 = *(_QWORD *)(a1 + 16);
        v22 = *v19;
        v27 = 0;
        v23 = CBaseExpression::CalculateValue(v22, (struct CExpressionValueStack *)v28, *(_QWORD *)(v21 + 496), &v27);
        if ( v23 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            2868LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
            (const char *)(unsigned int)v23);
      }
      v24 = *v19;
      CurrentValue = CInteractionTracker::GetCurrentValue(a1, *((_DWORD *)*v19 + 85));
      CScrollAnimation::StartInertia(v24, CurrentValue, 0);
      *((_BYTE *)v24 + 396) |= 1u;
      ++v19;
    }
    while ( v19 != (CBaseExpression **)&v36 );
    v28[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v30);
  }
  CInteractionTracker::SetState(a1, 2, 0);
  return v6;
}
