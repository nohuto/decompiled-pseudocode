FxCallbackMutexLock *__fastcall FxCallbackMutexLock::`scalar deleting destructor'(FxCallbackMutexLock *this, char a2)
{
  FxCallbackMutexLock::~FxCallbackMutexLock(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
