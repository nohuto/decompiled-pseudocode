/*
 * XREFs of ldevLoadInternal @ 0x1C00C1F50
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00792B8 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, __int128 *), int a2)
{
  PVOID v4; // rdi
  __int64 Pool2; // rbx
  int v6; // r8d
  __int64 v7; // rdi
  struct _LDEV *v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-B8h] BYREF
  PVOID BackTrace[20]; // [rsp+30h] [rbp-A8h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  v4 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76646C47) == 0x76646C47
    && (v11 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v11) != 1986292807 )
    {
      if ( ++v11 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(260LL, 920LL);
    if ( !Pool2 )
      goto LABEL_24;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v4,
                              Pool2,
                              BackTrace) )
      {
        v7 = Pool2;
        goto LABEL_4;
      }
LABEL_22:
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_24:
      v7 = 0LL;
      goto LABEL_9;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v4,
                             Pool2,
                             BackTrace) )
      goto LABEL_22;
    Pool2 += 16LL;
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 904LL);
  }
  v7 = Pool2;
  if ( !Pool2 )
    goto LABEL_9;
LABEL_4:
  *(_DWORD *)(Pool2 + 60) = 0;
  *(_QWORD *)(Pool2 + 896) = Pool2 + 64;
  v12 = 0LL;
  if ( !a1(196865LL, 16LL, &v12) || !(unsigned int)ldevFillTable(Pool2, (int *)&v12) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
    goto LABEL_24;
  }
  *(_DWORD *)(Pool2 + 24) = a2;
  *(_DWORD *)(Pool2 + 28) = 1;
  if ( gpldevDrivers )
    *((_QWORD *)gpldevDrivers + 1) = Pool2;
  v8 = gpldevDrivers;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)Pool2 = v8;
  gpldevDrivers = (struct _LDEV *)Pool2;
  *(_QWORD *)(Pool2 + 16) = 0LL;
LABEL_9:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v6);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v9);
  }
  return v7;
}
