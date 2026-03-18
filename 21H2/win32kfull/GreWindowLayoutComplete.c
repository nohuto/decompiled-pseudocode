/*
 * XREFs of GreWindowLayoutComplete @ 0x1C00A277C
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C00A2930 (NtUserLayoutCompleted.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B550 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowLayoutComplete(HWND a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v5; // ebx
  volatile signed __int32 *v7; // rcx
  int v8; // eax
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v13 = 0;
  v12 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v10, a1);
    v7 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      v5 = 1;
      if ( *((int *)v11 + 29) >= 1 )
      {
        v8 = *((_DWORD *)v11 + 30);
        if ( v8 > 0 )
        {
          *((_DWORD *)v11 + 30) = v8 - 1;
          CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v7, 0, &v13);
          v7 = (volatile signed __int32 *)v11;
        }
      }
      if ( v7 )
        _InterlockedDecrement(v7 + 3);
    }
    v11 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  *a4 = v13;
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v5;
}
