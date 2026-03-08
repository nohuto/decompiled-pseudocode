/*
 * XREFs of GreIsWindowResizeInProgress @ 0x1C014CCA0
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C01F27AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00296D4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

_BOOL8 __fastcall GreIsWindowResizeInProgress(Gre::Base *a1, __int64 a2)
{
  BOOL v3; // ebx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  Gre::Base *v5; // rcx
  Gre::Base *v6; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = a2;
  v3 = 0;
  v4 = Gre::Base::Globals(a1);
  v9 = *((_QWORD *)v4 + 15);
  GreAcquireSemaphore(v9);
  if ( IsDwmActive(v5) )
  {
    GreAcquireSemaphore(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
    if ( IsDwmActive(v6) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v8, (HWND)a1);
      if ( v8 )
      {
        v3 = 1;
        if ( *(int *)(v8 + 116) < 1 )
          v3 = *(_DWORD *)(v8 + 124) != 0;
        if ( v8 )
          _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v3;
}
