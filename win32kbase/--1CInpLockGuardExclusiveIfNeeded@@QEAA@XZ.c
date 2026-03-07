void __fastcall CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(CInpLockGuard **this)
{
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)this);
  if ( !*((_DWORD *)this + 12) )
    CInpLockGuard::UnLock(this[5]);
}
