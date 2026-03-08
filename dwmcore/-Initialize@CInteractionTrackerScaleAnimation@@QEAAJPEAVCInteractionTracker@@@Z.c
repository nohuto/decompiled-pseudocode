/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x180263CAC
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18022ECB0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802619B0 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::Initialize(
        CInteractionTrackerScaleAnimation *this,
        struct CInteractionTracker *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CInteractionTracker *InteractionTracker; // rax
  int v7; // xmm2_4
  int v8; // xmm0_4
  int v9; // xmm4_4
  int v10; // xmm3_4
  int v11; // xmm1_4
  _DWORD *v12; // rax

  v3 = CScrollAnimation::Initialize((__int64)this, (int *)a2, 2);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x26u, 0LL);
  }
  else
  {
    InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
    v5 = 0;
    v7 = *((_DWORD *)InteractionTracker + 144);
    v8 = *((_DWORD *)InteractionTracker + 143);
    v9 = *((_DWORD *)InteractionTracker + 138);
    v10 = *((_DWORD *)InteractionTracker + 137);
    v11 = *((_DWORD *)InteractionTracker + 136);
    *((_DWORD *)this + 117) = *((_DWORD *)this + 85);
    v12 = (_DWORD *)*((_QWORD *)this + 68);
    *((_DWORD *)this + 128) = v8;
    *((_DWORD *)this + 127) = v7;
    v12[4] = v11;
    v12[5] = v10;
    v12[6] = v9;
  }
  return v5;
}
