/*
 * XREFs of ldevUnloadImage @ 0x1C0075120
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ldevLoadDriver @ 0x1C0075290 (ldevLoadDriver.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C007A810 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0090BE0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 *a1)
{
  void (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void **v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  if ( (*((_DWORD *)a1 + 7))-- == 1 )
  {
    WdLogSingleEntry0(5LL);
    v3 = (void (*)(void))a1[16];
    if ( v3 )
      v3();
    v4 = a1[2];
    if ( v4 && (a1[4] & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v4 + 24), 8uLL);
    v5 = *a1;
    if ( *a1 )
    {
      *(_QWORD *)(v5 + 8) = a1[1];
      v5 = *a1;
    }
    v6 = (_QWORD *)a1[1];
    if ( v6 )
      *v6 = v5;
    else
      gpldevDrivers = (struct _LDEV *)v5;
    v7 = (void **)a1[2];
    if ( v7 )
    {
      if ( !v7[1]
        || (NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              v7[1]),
            (v7 = (void **)a1[2]) != 0LL) )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v7);
      }
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a1);
  }
  else
  {
    WdLogSingleEntry0(5LL);
  }
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    return PsLeavePriorityRegion(v9);
  }
  return result;
}
