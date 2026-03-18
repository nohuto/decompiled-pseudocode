/*
 * XREFs of ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180265694
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180265738 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 * Callees:
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180134BEE (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026500C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

void __fastcall CScrollAnimation::UpdateChainingDirection(CScrollAnimation *this, float a2)
{
  char v2; // r8
  float v4; // xmm0_4
  char v5; // r8
  struct CInteractionTracker *InteractionTracker; // rax
  struct CChainingHelper *ActiveChainingHelper; // rax
  __int64 v8; // rdx

  v2 = *((_BYTE *)this + 452);
  if ( (v2 & 1) != 0 )
  {
    v4 = (float)(int)((__PAIR64__((float)(a2 - *((float *)this + 110)) > 0.0, a2 - *((float *)this + 110))
                     - COERCE_UNSIGNED_INT(0.0)) >> 32);
    *((float *)this + 112) = v4;
    v5 = (v4 == 0.0) | v2 & 0xFE;
    *((_BYTE *)this + 452) = v5;
    if ( (v5 & 1) == 0 )
    {
      InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
      ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((struct CInteractionTracker *)((char *)InteractionTracker + 200));
      if ( ActiveChainingHelper )
      {
        v8 = 3LL * *((int *)this + 85);
        *((_BYTE *)ActiveChainingHelper + 4 * v8) |= 4u;
        *((_DWORD *)ActiveChainingHelper + v8 + 2) = -805306369;
        *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
      }
    }
  }
}
