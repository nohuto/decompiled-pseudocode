__int64 *__fastcall GetModuleHandleAndIncrementRefcount(wchar_t *Str1)
{
  __int64 *v2; // rsi
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 v4; // rcx
  __int64 *i; // rbx

  v2 = 0LL;
  v3 = Gre::Base::Globals((Gre::Base *)Str1);
  v4 = *((_QWORD *)v3 + 405);
  if ( v4 )
    GreAcquireSemaphore(v4);
  for ( i = (__int64 *)*((_QWORD *)v3 + 403); i != (__int64 *)((char *)v3 + 3224) && !v2; i = (__int64 *)*i )
  {
    if ( !_wcsicmp(Str1, (const wchar_t *)((char *)i - *((unsigned int *)i + 5) + 24)) )
    {
      ++*((_DWORD *)i + 4);
      v2 = i + 3;
    }
  }
  if ( *((_QWORD *)v3 + 405) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.GreEngLoadModuleAllocListLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 405));
  }
  return v2;
}
