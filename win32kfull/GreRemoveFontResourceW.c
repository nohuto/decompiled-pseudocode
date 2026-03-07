_BOOL8 __fastcall GreRemoveFontResourceW(
        Gre::Base *a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7)
{
  BOOL v7; // esi
  struct Gre::Base::SESSION_GLOBALS *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  struct PFF *v17; // rax
  struct PFF **v18; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-30h] BYREF

  v18 = 0LL;
  v7 = 0;
  if ( (a4 & 4) != 0 && a5 != (unsigned int)PsGetCurrentThreadId() )
    return 0LL;
  if ( (a4 & 8) != 0 && a5 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    return 0LL;
  v12 = Gre::Base::Globals(a1);
  v14 = *(_QWORD *)(SGDGetSessionState(v13) + 32);
  v15 = (a4 & 0x1C) != 0 ? *((_QWORD *)v12 + 796) : *(_QWORD *)(v14 + 20272);
  v19[0] = v15;
  if ( !v15 )
    return 0LL;
  GreAcquireSemaphore(*((_QWORD *)v12 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v12 + 6), 14LL);
  v17 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v19, (const unsigned __int16 *)a1, a2, a3, a6, a7, &v18, 0);
  if ( v17 )
  {
    v7 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v19, v17, v18, a4);
    if ( v7 )
      GreQuerySystemTime(v14 + 20288);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v12 + 6));
  }
  return v7;
}
