/*
 * XREFs of ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180231890
 * Callers:
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x18023040C (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180231950 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::SetPositionInertiaDecayRate(
        CInteractionTracker *this,
        const struct D2DVector3 *a2)
{
  float v3; // xmm4_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+20h] [rbp-28h]

  v5 = __PAIR64__(
         COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(1.0 - *((float *)a2 + 1), 0.0))),
         COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(1.0 - *(float *)a2, 0.0))));
  v3 = fminf(1.0, fmaxf(1.0 - *((float *)a2 + 2), 0.0));
  v4 = *(_QWORD *)((char *)this + 116) - v5;
  if ( !v4 )
    v4 = *((unsigned int *)this + 31) - (unsigned __int64)LODWORD(v3);
  if ( v4 )
  {
    *(_QWORD *)((char *)this + 116) = v5;
    *((float *)this + 31) = v3;
  }
  CResource::InvalidateAnimationSources(this, 61);
}
