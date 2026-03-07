__int64 *__fastcall ValidUmpdHdev(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 *i; // rbx
  __int64 *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  v3 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v3 + 1));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v3 + 1), 16LL);
  for ( i = (__int64 *)*((_QWORD *)v3 + 760); i; i = (__int64 *)*i )
  {
    v5 = i;
    if ( (i[5] & 0x8000) != 0 && (Gre::Base *)i[2] == a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v5);
      break;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
  GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 1));
  return i;
}
