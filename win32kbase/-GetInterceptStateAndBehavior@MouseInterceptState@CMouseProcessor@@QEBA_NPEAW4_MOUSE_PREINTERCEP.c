/*
 * XREFs of ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C00F48D8
 * Callers:
 *     IsMouseInterceptEnabled @ 0x1C0218030 (IsMouseInterceptEnabled.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C022E0C8 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C00F4AEA (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 */

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
