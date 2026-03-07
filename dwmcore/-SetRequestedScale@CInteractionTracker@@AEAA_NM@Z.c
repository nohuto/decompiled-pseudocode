char __fastcall CInteractionTracker::SetRequestedScale(CInteractionTracker *this, double a2)
{
  int v3; // ecx
  char v4; // di
  float v5; // xmm0_4
  __int64 v6; // rcx
  CInteractionTrackerBindingManager *v7; // rcx

  v3 = *((_DWORD *)this + 44);
  v4 = 0;
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 2) > 1 )
      return v4;
    CInteractionTracker::TransitionToIdle(this);
  }
  v4 = 1;
  LODWORD(v5) = CInteractionTracker::ClampValueToBoundary((__int64)this, 2LL, a2).m128_u32[0];
  CInteractionTracker::SetScale(v6, v5, 0);
  v7 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 80);
  if ( v7 )
  {
    *((_BYTE *)this + 541) |= 1u;
    CInteractionTrackerBindingManager::UpdateBoundTrackerScale(v7, this, v5, 1);
    CInteractionTracker::DemoteToBoundTracker(this, 0);
  }
  return v4;
}
