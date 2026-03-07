__int64 __fastcall GreClientRgnUpdatedStable(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  Gre::Base *v2; // rcx
  int v3; // ebx
  Gre::Base *v4; // rcx

  v1 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v1 + 12));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemVisRgnUniqueness", *((_QWORD *)v1 + 12), 10LL);
  v3 = *((_DWORD *)Gre::Base::Globals(v2) + 1629);
  *((_DWORD *)Gre::Base::Globals(v4) + 1630) = v3;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemVisRgnUniqueness");
  return GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 12));
}
