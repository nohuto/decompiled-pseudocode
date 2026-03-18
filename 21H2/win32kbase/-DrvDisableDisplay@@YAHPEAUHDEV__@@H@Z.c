/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0077CD4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C007865C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01708D4 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0078B50 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, int a2)
{
  HSEMAPHORE v4; // rax
  int v5; // edx
  int v6; // ecx
  HSEMAPHORE v7; // rcx
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rax
  unsigned int v9; // ebx
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  HSEMAPHORE *v20; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v21[4]; // [rsp+68h] [rbp-20h] BYREF

  v20 = a1;
  WdLogSingleEntry2(4LL, a1, a2);
  GreSuspendDirectDraw((HDEV)a1, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore(a1[7]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[7], 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[6], 11LL);
  if ( a2 )
  {
    if ( ((_DWORD)a1[5] & 0x400) == 0 )
    {
      v4 = a1[316];
      v5 = *((_DWORD *)v4 + 15);
      v6 = *((_DWORD *)v4 + 14);
      v21[0] = 0;
      v21[1] = 0;
      v21[2] = v6;
      v21[3] = v5;
      if ( qword_1C029B110 )
      {
        if ( (int)qword_1C029B110() >= 0 )
        {
          v7 = a1[316];
          if ( ((_DWORD)v7[28] & 1) != 0 )
            (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v7 + 6) + 2808LL))(
              (unsigned __int64)(v7 + 6) & -(__int64)(v7 != 0LL),
              0LL,
              0LL,
              0LL,
              0LL,
              v21,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
          else
            ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt)(
              (unsigned __int64)(v7 + 6) & -(__int64)(v7 != 0LL),
              0LL,
              0LL,
              0LL,
              0LL,
              v21,
              0LL,
              0LL,
              0LL,
              0LL,
              0);
        }
      }
    }
  }
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v20,
    (struct _SURFOBJ *)((unsigned __int64)(a1[316] + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[316] >> 64)),
    0LL,
    0);
  if ( qword_1C029B6C0 && (int)qword_1C029B6C0() >= 0 && qword_1C029B6C8 )
    qword_1C029B6C8(a1);
  if ( gProtocolType == -1 )
    *((_DWORD *)a1 + 648) = 4;
  v8 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[338];
  if ( v8 )
    v9 = v8(a1[221], 0LL);
  else
    v9 = 0;
  *((_DWORD *)a1 + 648) = 0;
  if ( v9 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v20, 1);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[6]);
  v10 = (struct _ERESOURCE *)a1[6];
  if ( v10 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v12);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", a1[7]);
  v14 = (struct _ERESOURCE *)a1[7];
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
    PsLeavePriorityRegion(v15);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v16);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v17);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v18);
  }
  if ( !v9 )
    GreIncrementDisplaySettingsUniqueness();
  WdLogSingleEntry1(5LL, (int)v9);
  return v9;
}
