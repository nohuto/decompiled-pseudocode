/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0015974
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013A90 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014AC8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C001635C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0143C80 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C000ED74 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0011C00 (GreSuspendDirectDraw.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0012620 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B32F0 (GreIncrementDisplaySettingsUniqueness.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  int v5; // esi
  __int64 (__fastcall *v6)(_QWORD, _QWORD); // rax
  unsigned int v7; // ebx
  struct _ERESOURCE *v8; // rcx
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HSEMAPHORE v13; // rcx
  __int64 v14; // rax
  HSEMAPHORE v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  HSEMAPHORE v20; // rdx
  __int64 v21; // r10
  HSEMAPHORE *v22; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v23[4]; // [rsp+68h] [rbp-20h] BYREF

  v2 = a2;
  v22 = a1;
  v4 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = v2;
  WdLogEvent5_WdEvent(v4);
  GreSuspendDirectDraw((HDEV)a1, 0);
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[8], 4LL);
  EngAcquireSemaphore(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[6], 11LL);
  v5 = -1073741637;
  if ( (_DWORD)v2 && ((_DWORD)a1[5] & 0x400) == 0 )
  {
    v16 = a1[319];
    v17 = *((_DWORD *)v16 + 15);
    v18 = *((_DWORD *)v16 + 14);
    v23[0] = 0;
    v23[1] = 0;
    v23[2] = v18;
    v23[3] = v17;
    v19 = qword_1C0255390 ? qword_1C0255390() : -1073741637;
    if ( v19 >= 0 )
    {
      v20 = a1[319];
      v21 = (unsigned __int64)(v20 + 6) & -(__int64)(v20 != 0LL);
      if ( ((_DWORD)v20[28] & 1) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v20 + 6) + 2832LL))(
          v21,
          0LL,
          0LL,
          0LL,
          0LL,
          v23,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      else
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt)(
          v21,
          0LL,
          0LL,
          0LL,
          0LL,
          v23,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
    }
  }
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v22,
    (struct _SURFOBJ *)((unsigned __int64)(a1[319] + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[319] >> 64)),
    0LL,
    0);
  if ( qword_1C0255950 )
    v5 = qword_1C0255950();
  if ( v5 >= 0 && qword_1C0255958 )
    qword_1C0255958(a1);
  if ( gProtocolType == -1 )
    *((_DWORD *)a1 + 654) = 4;
  v6 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[341];
  if ( v6 )
    v7 = v6(a1[225], 0LL);
  else
    v7 = 0;
  *((_DWORD *)a1 + 654) = 0;
  if ( v7 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v22, 1);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[6]);
  v8 = (struct _ERESOURCE *)a1[6];
  if ( v8 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemSprite);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", a1[8]);
  v9 = (struct _ERESOURCE *)a1[8];
  if ( v9 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v13 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  if ( !v7 )
    GreIncrementDisplaySettingsUniqueness(v13, v10, v11, v12);
  v14 = WdLogNewEntry5_WdTrace(v13, v10);
  *(_QWORD *)(v14 + 24) = (int)v7;
  WdLogEvent5_WdTrace(v14);
  return v7;
}
