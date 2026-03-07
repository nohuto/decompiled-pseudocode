HDEV __fastcall ValidateAndReferencePDEV(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  HDEV i; // rbx
  HDEV v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v2 + 1));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v2 + 1), 16LL);
  for ( i = (HDEV)*((_QWORD *)v2 + 760); i; i = *(HDEV *)i )
  {
    v5 = i;
    if ( i == (HDEV)a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v5);
      break;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
  GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 1));
  return i;
}
