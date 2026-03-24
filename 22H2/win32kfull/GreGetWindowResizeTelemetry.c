/*
 * XREFs of GreGetWindowResizeTelemetry @ 0x1C026F308
 * Callers:
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C020BF58 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE028 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetWindowResizeTelemetry(HWND a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[32]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v15 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v16, a1);
    v9 = v17;
    if ( v17 )
    {
      v10 = *(_DWORD *)(v17 + 136);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v17 + 132);
        *(_DWORD *)(v17 + 132) = 0;
        *(_DWORD *)(v9 + 136) = 0;
        *a2 = v11 / v10;
        v12 = *(_DWORD *)(v9 + 128);
        *(_DWORD *)(v9 + 128) = 0;
        *a3 = v12;
        v13 = *(_DWORD *)(v9 + 152);
        *(_DWORD *)(v9 + 152) = 0;
        v8 = 1;
        v9 = v17;
        *a4 = v13;
      }
      if ( v9 )
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
    }
    v17 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v16);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return v8;
}
