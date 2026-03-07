void __stdcall EngFreeModule(HANDLE h)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  char *v3; // rdi
  __int64 v4; // rcx
  bool v5; // zf
  int v6; // ebp
  __int64 v7; // rcx
  char **v8; // rax

  if ( h )
  {
    v2 = Gre::Base::Globals((Gre::Base *)h);
    v3 = (char *)h - 24;
    v4 = *((_QWORD *)v2 + 405);
    if ( v4 )
      GreAcquireSemaphore(v4);
    v5 = (*((_DWORD *)v3 + 4))-- == 1;
    v6 = *((_DWORD *)v3 + 4);
    if ( v5 )
    {
      v7 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v8 = (char **)*((_QWORD *)v3 + 1), *v8 != v3) )
        __fastfail(3u);
      *v8 = (char *)v7;
      *(_QWORD *)(v7 + 8) = v8;
    }
    if ( *((_QWORD *)v2 + 405) )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.GreEngLoadModuleAllocListLock");
      GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 405));
    }
    if ( !v6 )
    {
      vUnmapFile((PVOID *)h);
      Win32FreePool((char *)h - *((unsigned int *)v3 + 5));
    }
  }
}
