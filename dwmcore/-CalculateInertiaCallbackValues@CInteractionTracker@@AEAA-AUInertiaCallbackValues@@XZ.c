/*
 * XREFs of ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18012ECB2 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1802325C4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802348EC (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1802358E4 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18012E802 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x18022F6D0 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x18022F804 (-HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18022F824 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180261938 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180262A6C (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180262B24 (-GetNaturalEndpoint@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x180262B8C (-GetPositionVelocity@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180262F98 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x18026304C (-GetNaturalEndpoint@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802630A4 (-GetScaleVelocity@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetModifiedRestingValue@CMotion@@QEBAMXZ @ 0x18026B564 (-GetModifiedRestingValue@CMotion@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::CalculateInertiaCallbackValues(__int64 a1, __int64 a2)
{
  CInteractionTracker *v4; // rcx
  bool HasImpulse; // al
  __int64 v6; // rcx
  int v7; // xmm6_4
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  CScrollAnimation *v10; // rcx
  __int64 v11; // rcx
  CMotion *v12; // rax
  __m128 v13; // xmm6
  CMotion *v14; // rax
  __int64 v15; // rcx
  CMotion *v16; // rax
  __int64 v17; // rcx
  char v18; // si
  __int64 v19; // rcx
  __int64 v20; // rcx
  bool v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // xmm2_4
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // xmm1_4
  __int64 v30; // rcx
  int v31; // eax
  int v32; // xmm1_4
  int v33; // xmm2_4
  int v34; // xmm1_4
  int v35; // xmm3_4
  int v36; // xmm1_4
  int v37; // xmm2_4
  CScrollScaleKeyframeAnimation *v38; // rcx
  float NaturalEndpoint; // xmm7_4
  float LastKeyframeValueForScale; // xmm6_4
  float ScaleVelocity; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm1_4
  int v44; // xmm1_4
  int v45; // xmm2_4
  int v46; // xmm3_4
  int v47; // xmm1_4
  int v48; // xmm2_4
  int v49; // xmm0_4
  int v50; // xmm1_4
  int v51; // eax
  int v53; // [rsp+20h] [rbp-50h] BYREF
  int v54; // [rsp+24h] [rbp-4Ch]
  int v55; // [rsp+28h] [rbp-48h]
  int v56; // [rsp+30h] [rbp-40h] BYREF
  int v57; // [rsp+34h] [rbp-3Ch]
  int v58; // [rsp+38h] [rbp-38h]
  int v59; // [rsp+40h] [rbp-30h] BYREF
  int v60; // [rsp+44h] [rbp-2Ch]
  int v61; // [rsp+48h] [rbp-28h]

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
  {
    HasImpulse = CInteractionTracker::HasImpulse(v4);
    v6 = *(_QWORD *)(a1 + 336);
    *(_BYTE *)(a2 + 53) = HasImpulse;
    v7 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 328LL))(v6) + 48);
    v8 = (__m128)*(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 328LL))(*(_QWORD *)(a1 + 344))
                                 + 48);
    *(_DWORD *)a2 = v7;
    *(_DWORD *)(a2 + 4) = v8.m128_i32[0];
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 328LL))(*(_QWORD *)(a1 + 328))
                                     + 48);
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 336));
    v9 = v8;
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(a1 + 344));
    v61 = 0;
    v10 = *(CScrollAnimation **)(a1 + 328);
    *(_QWORD *)(a2 + 16) = _mm_unpacklo_ps(v9, v8).m128_u64[0];
    *(_DWORD *)(a2 + 24) = 0;
    v8.m128_f32[0] = CScrollAnimation::GetNaturalEndpoint(v10);
    v11 = *(_QWORD *)(a1 + 336);
    *(_DWORD *)(a2 + 28) = v8.m128_i32[0];
    v12 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 328LL))(v11);
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v12);
    v13 = v8;
    v14 = (CMotion *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 328LL))(*(_QWORD *)(a1 + 344));
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v14);
    v15 = *(_QWORD *)(a1 + 328);
    v61 = 0;
    *(_QWORD *)(a2 + 32) = _mm_unpacklo_ps(v13, v8).m128_u64[0];
    *(_DWORD *)(a2 + 40) = 0;
    v16 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 328LL))(v15);
    v8.m128_f32[0] = CMotion::GetModifiedRestingValue(v16);
    v17 = *(_QWORD *)(a1 + 336);
    *(_DWORD *)(a2 + 48) = v8.m128_i32[0];
    v18 = 1;
    v19 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 328LL))(v17) + 96);
    v21 = 0;
    if ( !v19 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19) )
    {
      v20 = *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 328LL))(*(_QWORD *)(a1 + 344)) + 96);
      if ( !v20 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20) )
        v21 = 1;
    }
    v22 = *(_QWORD *)(a1 + 328);
    *(_BYTE *)(a2 + 44) = v21;
    v23 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 328LL))(v22) + 96);
    if ( v23 )
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 48LL))(v23);
    *(_BYTE *)(a2 + 52) = v18;
  }
  else
  {
    v24 = *((_DWORD *)v4 + 20);
    v25 = *((_DWORD *)v4 + 21);
    v26 = *((_DWORD *)v4 + 22);
    if ( CInteractionTracker::HasDefaultAnimations(v4) )
    {
      *(_WORD *)(v27 + 52) = 257;
      *(_BYTE *)(v27 + 44) = 1;
      *(_DWORD *)(v27 + 16) = v24;
      *(_DWORD *)(v27 + 20) = v25;
      *(_DWORD *)(v27 + 24) = v26;
      v29 = *(_DWORD *)(v28 + 136);
      v30 = *(_QWORD *)(v28 + 464);
      v31 = *(_DWORD *)(v27 + 24);
      *(_QWORD *)(v27 + 32) = *(_QWORD *)(v27 + 16);
      *(_DWORD *)(v27 + 28) = v29;
      *(_DWORD *)(v27 + 48) = v29;
      *(_DWORD *)(v27 + 40) = v31;
      if ( v30 )
      {
        CScrollPositionKeyframeAnimation::GetNaturalEndpoint(v30, &v59);
        CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(*(_QWORD *)(a1 + 464), &v56);
        CScrollPositionKeyframeAnimation::GetPositionVelocity(*(_QWORD *)(a1 + 464), &v53);
        v32 = v54;
        v33 = v55;
        *(_DWORD *)a2 = v53;
        *(_DWORD *)(a2 + 4) = v32;
        *(_DWORD *)(a2 + 8) = v33;
        v34 = v58;
        v35 = v57;
        *(_DWORD *)(a2 + 32) = v56;
        *(_DWORD *)(a2 + 36) = v35;
        *(_DWORD *)(a2 + 40) = v34;
        v36 = v60;
        v37 = v61;
        *(_DWORD *)(a2 + 16) = v59;
        *(_DWORD *)(a2 + 20) = v36;
        *(_DWORD *)(a2 + 24) = v37;
      }
      v38 = *(CScrollScaleKeyframeAnimation **)(a1 + 472);
      if ( v38 )
      {
        NaturalEndpoint = CScrollScaleKeyframeAnimation::GetNaturalEndpoint(v38);
        LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*(CScrollScaleKeyframeAnimation **)(a1 + 472));
        ScaleVelocity = CScrollScaleKeyframeAnimation::GetScaleVelocity(*(CScrollScaleKeyframeAnimation **)(a1 + 472));
        v42 = *(_DWORD *)(a2 + 36);
        *(float *)(a2 + 12) = ScaleVelocity;
        v59 = *(_DWORD *)(a2 + 32);
        v61 = *(_DWORD *)(a2 + 40);
        *(float *)(a2 + 48) = LastKeyframeValueForScale;
        *(float *)(a2 + 28) = NaturalEndpoint;
        v60 = v42;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v56, &v59);
        v43 = *(_DWORD *)(a2 + 20);
        v59 = *(_DWORD *)(a2 + 16);
        v61 = *(_DWORD *)(a2 + 24);
        v60 = v43;
        CInteractionTracker::GetScaleAdjustedPositionIfNeeded(a1, &v53, &v59);
        v44 = v57;
        v45 = v58;
        *(_DWORD *)(a2 + 32) = v56;
        *(_DWORD *)(a2 + 36) = v44;
        *(_DWORD *)(a2 + 40) = v45;
        v46 = v54;
        v47 = v55;
        *(_DWORD *)(a2 + 16) = v53;
        *(_DWORD *)(a2 + 20) = v46;
        *(_DWORD *)(a2 + 24) = v47;
      }
    }
    else
    {
      *(_DWORD *)(v27 + 32) = v24;
      *(_DWORD *)(v27 + 36) = v25;
      *(_DWORD *)(v27 + 40) = v26;
      v48 = *(_DWORD *)(v28 + 136);
      v49 = *(_DWORD *)(v28 + 84);
      v50 = *(_DWORD *)(v28 + 88);
      v51 = *(_DWORD *)(v28 + 80);
      *(_DWORD *)(v27 + 48) = v48;
      *(_DWORD *)(v27 + 16) = v51;
      *(_DWORD *)(v27 + 20) = v49;
      *(_DWORD *)(v27 + 24) = v50;
      *(_DWORD *)(v27 + 28) = v48;
      *(_DWORD *)v27 = 0;
      *(_DWORD *)(v27 + 4) = 0;
      *(_DWORD *)(v27 + 8) = 0;
      *(_DWORD *)(v27 + 12) = 0;
    }
  }
  return a2;
}
