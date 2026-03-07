__int64 __fastcall CInteractionTrackerPositionAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct CInteractionTracker *InteractionTracker; // rax
  int v8; // xmm2_4
  int v9; // xmm0_4
  int v10; // xmm4_4
  int v11; // xmm3_4
  int v12; // xmm1_4
  _DWORD *v13; // rax

  v4 = CScrollAnimation::Initialize(a1, a2, a3);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x22u, 0LL);
  }
  else
  {
    InteractionTracker = CScrollAnimation::GetInteractionTracker((CScrollAnimation *)a1);
    v6 = 0;
    v8 = *((_DWORD *)InteractionTracker + 142);
    v9 = *((_DWORD *)InteractionTracker + 141);
    v10 = *((_DWORD *)InteractionTracker + 138);
    v11 = *((_DWORD *)InteractionTracker + 137);
    v12 = *((_DWORD *)InteractionTracker + 136);
    *(_DWORD *)(a1 + 468) = *(_DWORD *)(a1 + 340);
    v13 = *(_DWORD **)(a1 + 544);
    *(_DWORD *)(a1 + 512) = v9;
    *(_DWORD *)(a1 + 508) = v8;
    v13[4] = v12;
    v13[5] = v11;
    v13[6] = v10;
  }
  return v6;
}
