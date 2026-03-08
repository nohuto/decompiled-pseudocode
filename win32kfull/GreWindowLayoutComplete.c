/*
 * XREFs of GreWindowLayoutComplete @ 0x1C0098D74
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C0098EE0 (NtUserLayoutCompleted.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00296D4 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026821C (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowLayoutComplete(Gre::Base *a1, struct DWMSPRITE *a2, __int64 a3, int *a4)
{
  unsigned int v4; // edi
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  Gre::Base *v8; // rcx
  Gre::Base *v9; // rcx
  volatile signed __int32 *v10; // rbx
  int v12; // eax
  struct DWMSPRITE *v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v13 = a2;
  v4 = 0;
  v14 = 0;
  v7 = Gre::Base::Globals(a1);
  v15 = *((_QWORD *)v7 + 15);
  GreAcquireSemaphore(v15);
  if ( IsDwmActive(v8) )
  {
    GreAcquireSemaphore(*((_QWORD *)v7 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v7 + 9), 7LL);
    if ( IsDwmActive(v9) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v13, (HWND)a1);
      v10 = (volatile signed __int32 *)v13;
      if ( v13 )
      {
        v4 = 1;
        if ( *((int *)v13 + 29) >= 1 )
        {
          v12 = *((_DWORD *)v13 + 30);
          if ( v12 > 0 )
          {
            *((_DWORD *)v13 + 30) = v12 - 1;
            CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v10, 0, &v14);
          }
        }
        if ( v10 )
          _InterlockedDecrement(v10 + 3);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 9));
  }
  *a4 = v14;
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return v4;
}
