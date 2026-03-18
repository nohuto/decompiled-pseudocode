/*
 * XREFs of GreDwmNotifySpriteMonitorChange @ 0x1C002168C
 * Callers:
 *     UpdateWindowSpriteMonitor @ 0x1C0022AF0 (UpdateWindowSpriteMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E1818 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1C002139C (DwmAsyncNotifySpriteMonitorChange.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00217D8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmNotifySpriteMonitorChange(__int64 a1, HWND a2, HSPRITE a3, __int64 a4)
{
  unsigned int v7; // edi
  struct PDEVOBJ *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[32]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = a1;
  v7 = 0;
  v13 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v16, v8, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v14, a2, a3);
    if ( v15 )
    {
      v10 = *(_QWORD *)v15;
      v11 = (void *)UserReferenceDwmApiPort(v9);
      v7 = DwmAsyncNotifySpriteMonitorChange(v11, v10, a4);
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
    }
    v15 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v16);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v7;
}
