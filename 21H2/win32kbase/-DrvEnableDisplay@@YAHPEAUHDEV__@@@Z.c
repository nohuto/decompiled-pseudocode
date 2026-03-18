/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D3B90
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvEnableMDEV @ 0x1C00783A4 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C007865C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01708D4 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00616E4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C1E50 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableDisplay(HSEMAPHORE *a1)
{
  unsigned int v2; // edi
  int v3; // r8d
  int v4; // r8d
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // r8d
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  HSEMAPHORE *v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = a1;
  v2 = 1;
  WdLogSingleEntry1(4LL, a1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(a1[7]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[7], 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[6], 11);
  if ( a1[338] )
  {
    while ( !((unsigned int (__fastcall *)(HSEMAPHORE, __int64))a1[338])(a1[221], 1LL) )
      ;
  }
  else
  {
    v2 = 0;
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v16, 0);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)a1[6], v3);
  v5 = (struct _ERESOURCE *)a1[6];
  if ( v5 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    PsLeavePriorityRegion(v6);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v4);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v8);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v7);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v10);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (int)a1[7], v9);
  v12 = (struct _ERESOURCE *)a1[7];
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v11);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v14);
  }
  GreIncrementDisplaySettingsUniqueness();
  return v2;
}
