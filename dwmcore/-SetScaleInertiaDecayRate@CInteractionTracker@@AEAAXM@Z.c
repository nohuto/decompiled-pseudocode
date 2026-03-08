/*
 * XREFs of ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x180231D28
 * Callers:
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x18023040C (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180231950 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::SetScaleInertiaDecayRate(CInteractionTracker *this, float a2)
{
  float v2; // xmm2_4

  v2 = fminf(1.0, fmaxf(1.0 - a2, 0.0));
  if ( *((float *)this + 43) != v2 )
    *((float *)this + 43) = v2;
  CResource::InvalidateAnimationSources(this, 64);
}
