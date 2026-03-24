/*
 * XREFs of ldevUnloadImage @ 0x1C00153B0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0013658 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0015254 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x1C0015500 (ldevLoadDriver.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C007D560 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9900 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  void (*v8)(void); // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  if ( (*((_DWORD *)a1 + 7))-- == 1 )
  {
    v7 = WdLogNewEntry5_WdTrace(v3, v2);
    WdLogEvent5_WdTrace(v7);
    v8 = (void (*)(void))a1[16];
    if ( v8 )
      v8();
    v9 = a1[2];
    if ( v9 && (a1[4] & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v9 + 24), 8uLL);
    v10 = *a1;
    if ( *a1 )
    {
      *(_QWORD *)(v10 + 8) = a1[1];
      v10 = *a1;
    }
    v11 = (_QWORD *)a1[1];
    if ( v11 )
      *v11 = v10;
    else
      gpldevDrivers = (struct _LDEV *)v10;
    v12 = a1[2];
    if ( v12 )
    {
      Win32FreePool(*(_QWORD *)(v12 + 8));
      Win32FreePool(a1[2]);
    }
    Win32FreePool(a1);
  }
  else
  {
    v5 = WdLogNewEntry5_WdTrace(v3, v2);
    WdLogEvent5_WdTrace(v5);
  }
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    return PsLeavePriorityRegion();
  }
  return result;
}
