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
