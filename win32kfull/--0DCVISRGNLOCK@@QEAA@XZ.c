DCVISRGNLOCK *__fastcall DCVISRGNLOCK::DCVISRGNLOCK(DCVISRGNLOCK *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx

  v2 = Gre::Base::Globals(this);
  GreAcquireSemaphore(*((_QWORD *)v2 + 11));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v2 + 11), 3LL);
  return this;
}
