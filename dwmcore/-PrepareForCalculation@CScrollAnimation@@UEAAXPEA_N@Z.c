/*
 * XREFs of ?PrepareForCalculation@CScrollAnimation@@UEAAXPEA_N@Z @ 0x180261BB0
 * Callers:
 *     ?PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z @ 0x180263D70 (-PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18022FBA8 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

void __fastcall CScrollAnimation::PrepareForCalculation(CScrollAnimation *this, bool *a2)
{
  CInteractionTracker *InteractionTracker; // rax
  bool v5; // r9

  if ( (*(unsigned __int8 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 312LL))(this)
    || (InteractionTracker = CScrollAnimation::GetInteractionTracker(this),
        CInteractionTracker::IsOutOfBounds(InteractionTracker)) )
  {
    v5 = 1;
  }
  *a2 = v5;
}
