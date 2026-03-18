/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x1C02743A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  int v2; // eax
  _QWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  UserEnterUserCritSecShared();
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0]
    && ((v6 = *(_QWORD *)(v4[0] + 48LL), (**(_DWORD **)(v4[0] + 976LL) & 1) != 0)
     || (v2 = *(_DWORD *)(v4[0] + 36LL), (v2 & 0x200) != 0) && (v2 & 0x8000) != 0)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  }
  else
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v4);
  return UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v5);
}
