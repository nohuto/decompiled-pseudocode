/*
 * XREFs of DrvDisableMDEV @ 0x1C0078130
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeDisableMDEV @ 0x1C00D44F0 (SafeDisableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C007865C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall DrvDisableMDEV(HDEV *a1, int a2, unsigned int a3)
{
  HDEV v6; // rbx
  int v7; // eax
  __int64 v8; // rsi
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  HDEV v17; // [rsp+30h] [rbp+8h] BYREF

  WdLogSingleEntry2(4LL, a1, a2);
  v6 = *a1;
  v17 = *a1;
  if ( a2 )
    GreSuspendDirectDraw(v6, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(*((HSEMAPHORE *)v6 + 7));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *((_QWORD *)v6 + 7), 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(*((HSEMAPHORE *)v6 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *((_QWORD *)v6 + 6), 11LL);
  v7 = DrvDisableMDEVChildren((struct _MDEV *)a1, a2, a3);
  v8 = v7;
  if ( v7 && a2 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v17, 1);
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *((_QWORD *)v6 + 6));
  v9 = (struct _ERESOURCE *)*((_QWORD *)v6 + 6);
  if ( v9 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    PsLeavePriorityRegion(v10);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v12);
  }
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *((_QWORD *)v6 + 7));
  v13 = (struct _ERESOURCE *)*((_QWORD *)v6 + 7);
  if ( v13 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v13);
    PsLeavePriorityRegion(v14);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v15);
  }
  if ( !(_DWORD)v8 && a2 )
    GreIncrementDisplaySettingsUniqueness();
  WdLogSingleEntry1(5LL, v8);
  return (unsigned int)v8;
}
