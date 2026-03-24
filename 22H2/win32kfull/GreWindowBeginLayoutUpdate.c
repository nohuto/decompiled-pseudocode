/*
 * XREFs of GreWindowBeginLayoutUpdate @ 0x1C00088D0
 * Callers:
 *     NtUserBeginLayoutUpdate @ 0x1C0130D00 (NtUserBeginLayoutUpdate.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreWindowBeginLayoutUpdate(HWND a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int v4; // eax
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v8 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v6, a1);
    v3 = v7;
    if ( v7 )
    {
      v2 = 1;
      if ( *(int *)(v7 + 116) >= 1 )
      {
        v4 = *(_DWORD *)(v7 + 120);
        if ( v4 > 0 )
        {
          *(_DWORD *)(v7 + 120) = v4 + 1;
          v3 = v7;
        }
      }
      if ( v3 )
        _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
    }
    v7 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  return v2;
}
