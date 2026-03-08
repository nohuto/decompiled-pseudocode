/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180263A80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18022DD74 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18022F17C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x180232960 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180262038 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1802710DC (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInContactValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        double a4,
        float *a5)
{
  float v7; // xmm7_4
  float *InteractionTracker; // rdi
  float CurrentValue; // xmm6_4
  double ActiveManipulationVelocity; // xmm0_8
  unsigned int v12; // eax
  float v13; // xmm0_4
  int updated; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx

  v7 = *(float *)&a4;
  InteractionTracker = (float *)CScrollAnimation::GetInteractionTracker(this);
  CurrentValue = CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, 2);
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(InteractionTracker + 50, 2LL);
  *((_DWORD *)this + 121) = LODWORD(ActiveManipulationVelocity);
  *(float *)&a4 = *(float *)&a4 * *((float *)this + 142);
  *((_DWORD *)this + 142) = LODWORD(a4);
  v12 = CInteractionTracker::BoundaryFromValue((__int64)InteractionTracker, *(float *)&a4, 2u);
  v13 = CScrollAnimation::UpdateValueWithChaining((__int64)this, a4, v7, v12).m128_f32[0];
  if ( v13 == CurrentValue
    || (updated = CInteractionTracker::UpdateCenterPointForState(InteractionTracker, a2, a3, 1u),
        v16 = updated,
        updated >= 0) )
  {
    v16 = 0;
    *a5 = v13;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0xE3u, 0LL);
  }
  return v16;
}
