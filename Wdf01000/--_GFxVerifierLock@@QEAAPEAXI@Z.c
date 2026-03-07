FxVerifierLock *__fastcall FxVerifierLock::`scalar deleting destructor'(FxVerifierLock *this)
{
  FxVerifierLock::~FxVerifierLock(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
