void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  __int64 v3; // rax
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)this + 44) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    CInteractionTracker::StopCustomAnimations(this, 0);
  }
  else
  {
    v3 = CInteractionTracker::CalculateInertiaCallbackValues((__int64)this, (__int64)v4);
    *(_OWORD *)((char *)this + 580) = *(_OWORD *)v3;
    *(_OWORD *)((char *)this + 596) = *(_OWORD *)(v3 + 16);
    *(_OWORD *)((char *)this + 612) = *(_OWORD *)(v3 + 32);
    *(_QWORD *)((char *)this + 628) = *(_QWORD *)(v3 + 48);
    CInteractionTracker::DestroyInteractionAnimations(this);
  }
  CInteractionTracker::DestroyDefaultAnimations(this, 0);
  CInteractionTracker::BoostCompositorClock(this, 0);
  CInteractionTracker::SetState((__int64)this, 0, 0);
}
