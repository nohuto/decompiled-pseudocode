/*
 * XREFs of ?StartInertiaWorker@CInteractionTrackerScaleAnimation@@MEAAXM_N@Z @ 0x180267540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x180232A84 (-GetInertiaDecayRate@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026500C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18026EBF0 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x18026EEE4 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x180274B30 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        bool a3)
{
  struct CInteractionTracker *InteractionTracker; // rax
  __int64 v6; // rcx
  float *v7; // rsi
  char IsInertiaEnabledForAxis; // bl
  float *v9; // r11
  float InertiaDecayRate; // xmm6_4
  CMotion *v11; // rax
  float CurrentVelocity; // xmm0_4

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v7 = (float *)(v6 + 456);
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis((char *)InteractionTracker + 200, 2LL);
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v9, 2);
  v11 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerScaleAnimation *))(*(_QWORD *)this + 328LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v11);
  v7[11] = a2;
  CMotion::StartInertia((CMotion *)v7, CurrentVelocity, InertiaDecayRate, IsInertiaEnabledForAxis, a3);
}
