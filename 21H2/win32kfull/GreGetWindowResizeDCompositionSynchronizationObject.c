/*
 * XREFs of GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C0117B2C
 * Callers:
 *     ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C01179FC (-GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE388 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetWindowResizeDCompositionSynchronizationObject(HWND a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rax
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v10 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v8, a1);
    v5 = v9;
    if ( v9 )
    {
      v6 = *(_QWORD *)(v9 + 96);
      if ( v6 )
      {
        ObfReferenceObject(*(PVOID *)(v9 + 96));
        v6 = *(_QWORD *)(v5 + 96);
        v5 = v9;
      }
      *a2 = v6;
      v4 = 1;
      if ( v5 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 12));
    }
    v9 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v8);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v4;
}
