/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00D7E30
 * Callers:
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00CE230 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00CCE70 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableDisplay(HSEMAPHORE *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _ERESOURCE *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  HSEMAPHORE *v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = a1;
  v2 = 1;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  WdLogSingleEntry1(4LL, a1);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 80));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v3 + 80), 1);
  EngAcquireSemaphore(a1[7]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[7], 4);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 112));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v3 + 112), 5);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 136));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemHT", *(_QWORD *)(v3 + 136), 6);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[6], 11);
  *(_DWORD *)(v3 + 1428) = 0;
  if ( a1[338] )
  {
    while ( !((unsigned int (__fastcall *)(HSEMAPHORE, __int64))a1[338])(a1[221], 1LL) )
      *(_DWORD *)(v3 + 1428) = 1;
  }
  else
  {
    v2 = 0;
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v20, 0);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)a1[6]);
  v4 = (struct _ERESOURCE *)a1[6];
  if ( v4 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v4);
    PsLeavePriorityRegion(v6, v5);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemHT", *(_QWORD *)(v3 + 136));
  v7 = *(struct _ERESOURCE **)(v3 + 136);
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion(v9, v8);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemSprite", *(_QWORD *)(v3 + 112));
  v10 = *(struct _ERESOURCE **)(v3 + 112);
  if ( v10 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion(v12, v11);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (int)a1[7]);
  v13 = (struct _ERESOURCE *)a1[7];
  if ( v13 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v13);
    PsLeavePriorityRegion(v15, v14);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v3 + 80));
  v16 = *(struct _ERESOURCE **)(v3 + 80);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion(v18, v17);
  }
  GreIncrementDisplaySettingsUniqueness((__int64)v16);
  return v2;
}
