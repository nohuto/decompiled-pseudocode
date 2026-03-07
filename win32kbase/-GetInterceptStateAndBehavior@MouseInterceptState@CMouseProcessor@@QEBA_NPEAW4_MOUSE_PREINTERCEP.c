bool __fastcall CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
        CMouseProcessor::MouseInterceptState *this,
        enum _MOUSE_PREINTERCEPT_BEHAVIOR *a2)
{
  bool IsCurrentInputDesktopInterceptable; // si

  if ( a2 )
    *(_DWORD *)a2 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  IsCurrentInputDesktopInterceptable = CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable(this);
  if ( IsCurrentInputDesktopInterceptable && a2 )
    *(_DWORD *)a2 = *((_DWORD *)this + 5);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return IsCurrentInputDesktopInterceptable;
}
