/*
 * XREFs of DrvDestroyMDEV @ 0x1C00A09A8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00A074C (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  unsigned int i; // esi
  struct PDEV *v5; // rbx
  HSEMAPHORE v6; // rcx
  struct _ERESOURCE *v7; // rcx
  struct PDEV *v8; // rbx
  HSEMAPHORE v9; // rcx
  struct _ERESOURCE *v10; // rcx
  struct PDEV *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  WdLogSingleEntry1(4LL, a1);
  v3 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v3; ++i )
  {
    v6 = *(HSEMAPHORE *)(v2 + 8);
    v11 = *(struct PDEV **)(56LL * i + a1 + 40);
    v5 = v11;
    EngAcquireSemaphore(v6);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16);
    --*((_DWORD *)v5 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
    v7 = *(struct _ERESOURCE **)(v2 + 8);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion();
    }
    PDEVOBJ::vUnreferencePdev(&v11);
    v3 = *(_DWORD *)(a1 + 20);
  }
  if ( v3 > 1 )
  {
    v9 = *(HSEMAPHORE *)(v2 + 8);
    v11 = *(struct PDEV **)a1;
    v8 = v11;
    EngAcquireSemaphore(v9);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16);
    --*((_DWORD *)v8 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
    v10 = *(struct _ERESOURCE **)(v2 + 8);
    if ( v10 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion();
    }
    PDEVOBJ::vUnreferencePdev(&v11);
  }
}
