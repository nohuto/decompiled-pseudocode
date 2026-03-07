NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        char a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx

  *(_BYTE *)this = a2;
  if ( a2 )
  {
    v3 = Gre::Base::Globals(this);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v3 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v3 + 10));
  }
  return this;
}
