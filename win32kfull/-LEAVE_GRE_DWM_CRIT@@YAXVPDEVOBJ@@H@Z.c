__int64 __fastcall LEAVE_GRE_DWM_CRIT(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rsi
  __int64 result; // rax

  v4 = Gre::Base::Globals(a1);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
  GreReleaseSemaphoreInternal(*((_QWORD *)a1 + 6));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
  GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 14));
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()");
  GreReleaseSemaphoreInternal(*((_QWORD *)a1 + 7));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
  GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 11));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
  result = GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 15));
  if ( a2 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    return GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 10));
  }
  return result;
}
