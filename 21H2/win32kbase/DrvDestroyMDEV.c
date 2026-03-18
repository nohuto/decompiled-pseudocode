/*
 * XREFs of DrvDestroyMDEV @ 0x1C00755E0
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C0052138 (DrvCleanupAndDestroyMDEV.c)
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00717F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int i; // esi
  struct PDEV *v4; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  struct PDEV *v7; // rbx
  int v8; // r8d
  __int64 v9; // rcx
  struct PDEV *v10; // [rsp+30h] [rbp+8h] BYREF

  WdLogSingleEntry1(4LL, a1);
  v2 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v2; ++i )
  {
    v10 = *(struct PDEV **)(56LL * i + a1 + 40);
    v4 = v10;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    --*((_DWORD *)v4 + 3);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v6);
    }
    PDEVOBJ::vUnreferencePdev(&v10, 0, v5);
    v2 = *(_DWORD *)(a1 + 20);
  }
  if ( v2 > 1 )
  {
    v10 = *(struct PDEV **)a1;
    v7 = v10;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    --*((_DWORD *)v7 + 3);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v9);
    }
    PDEVOBJ::vUnreferencePdev(&v10, 0, v8);
  }
}
