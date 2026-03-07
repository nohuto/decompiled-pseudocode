void __fastcall CInteractionTracker::DestroyInteractionAnimations(CInteractionTracker *this)
{
  __int64 *v1; // rdi
  CScrollAnimation *v3; // rcx
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  v1 = (__int64 *)((char *)this + 328);
  v3 = (CScrollAnimation *)*((_QWORD *)this + 41);
  if ( v3 )
  {
    CScrollAnimation::Stop(v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 42);
  if ( v4 )
  {
    CScrollAnimation::Stop(v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 42);
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 43);
  if ( v5 )
  {
    CScrollAnimation::Stop(v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 43);
  }
}
