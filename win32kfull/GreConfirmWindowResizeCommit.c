/*
 * XREFs of GreConfirmWindowResizeCommit @ 0x1C0269ED4
 * Callers:
 *     NtUserConfirmResizeCommit @ 0x1C01CEEF0 (NtUserConfirmResizeCommit.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00296D4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreConfirmWindowResizeCommit(Gre::Base *a1)
{
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  Gre::Base *v4; // rcx
  Gre::Base *v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  v9 = *((_QWORD *)v3 + 15);
  GreAcquireSemaphore(v9);
  if ( IsDwmActive(v4) )
  {
    GreAcquireSemaphore(*((_QWORD *)v3 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v3 + 9), 7LL);
    if ( IsDwmActive(v5) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v8, (HWND)a1);
      v6 = v8;
      if ( v8 )
      {
        *(_DWORD *)(v8 + 124) = 0;
        v2 = 1;
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v2;
}
