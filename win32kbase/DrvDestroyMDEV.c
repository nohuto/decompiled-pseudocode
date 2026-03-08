/*
 * XREFs of DrvDestroyMDEV @ 0x1C00B6450
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00B61F4 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  unsigned int i; // esi
  struct PDEV *v5; // rbx
  HSEMAPHORE v6; // rcx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct PDEV *v10; // rbx
  HSEMAPHORE v11; // rcx
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct PDEV *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  WdLogSingleEntry1(4LL, a1);
  v3 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v3; ++i )
  {
    v6 = *(HSEMAPHORE *)(v2 + 8);
    v15 = *(struct PDEV **)(56LL * i + a1 + 40);
    v5 = v15;
    EngAcquireSemaphore(v6);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16);
    --*((_DWORD *)v5 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
    v7 = *(struct _ERESOURCE **)(v2 + 8);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion(v9, v8);
    }
    PDEVOBJ::vUnreferencePdev(&v15);
    v3 = *(_DWORD *)(a1 + 20);
  }
  if ( v3 > 1 )
  {
    v11 = *(HSEMAPHORE *)(v2 + 8);
    v15 = *(struct PDEV **)a1;
    v10 = v15;
    EngAcquireSemaphore(v11);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16);
    --*((_DWORD *)v10 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
    v12 = *(struct _ERESOURCE **)(v2 + 8);
    if ( v12 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v12);
      PsLeavePriorityRegion(v14, v13);
    }
    PDEVOBJ::vUnreferencePdev(&v15);
  }
}
