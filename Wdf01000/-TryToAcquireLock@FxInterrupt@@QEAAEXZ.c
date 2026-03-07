bool __fastcall FxInterrupt::TryToAcquireLock(FxInterrupt *this, _FX_DRIVER_GLOBALS *a2)
{
  char v2; // bl
  int v4; // eax
  __int64 timeout; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  timeout = 0LL;
  if ( !this->m_PassiveHandling )
    return 0;
  v4 = FxWaitLockInternal::AcquireLock(&this->m_WaitLock->FxWaitLockInternal, a2, (_LARGE_INTEGER *)&timeout);
  if ( v4 >= 0 )
    return v4 != 258;
  return v2;
}
