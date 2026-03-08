/*
 * XREFs of ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180261938
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18022DF28 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18022F410 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

float __fastcall CScrollAnimation::GetNaturalEndpoint(CScrollAnimation *this)
{
  __int64 v2; // rax
  struct CInteractionTracker *InteractionTracker; // rax

  v2 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 328LL))(this);
  if ( *(_DWORD *)(v2 + 16) == 2 )
    return *(float *)(v2 + 60);
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  return CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, *((_DWORD *)this + 85));
}
