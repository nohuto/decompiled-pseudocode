/*
 * XREFs of EtwpCovSampCaptureContextStop @ 0x140600CB8
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x1409F08E4 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140600A20 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140600B88 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140600E90 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1409EE1B0 (EtwpCovSampCaptureFreeLookasides.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpCovSampCaptureContextStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // r14
  KIRQL v4; // al
  unsigned __int64 v5; // rsi
  __int64 *i; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v9; // eax
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf
  LARGE_INTEGER v12; // rax
  void *v13; // rcx
  void *v14; // rcx
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 632);
  --CurrentThread->KernelApcDisable;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 632));
  *(_DWORD *)(a1 + 1280) = 0;
  v5 = v4;
  if ( *(_DWORD *)(a1 + 1284) )
    *(_DWORD *)(a1 + 1284) = 0;
  for ( i = *(__int64 **)(a1 + 944); i != (__int64 *)(a1 + 944); i = (__int64 *)*i )
  {
    *((_DWORD *)i + 6) = 0;
    *((_DWORD *)i + 7) = 0;
  }
  KeResetEvent((PRKEVENT)(a1 + 1256));
  *(_DWORD *)(a1 + 1288) = 0;
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  EtwpCovSampCaptureFlushSampleBuffers(a1);
  EtwpCovSampCaptureCleanupLookasides(a1);
  for ( Timeout.QuadPart = -2500000LL; KeWaitForSingleObject((PVOID)(a1 + 1256), Executive, 0, 0, &Timeout); Timeout = v12 )
  {
    EtwpCovSampCaptureCancelApcs(a1);
    EtwpCovSampCaptureFlushSampleBuffers(a1);
    v12.QuadPart = 2 * Timeout.QuadPart;
    if ( 2 * Timeout.QuadPart < -9600000000LL )
      v12.QuadPart = -9600000000LL;
  }
  EtwpCovSampCaptureFreeLookasides(a1);
  v13 = *(void **)(a1 + 1320);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x56777445u);
    *(_QWORD *)(a1 + 1320) = 0LL;
  }
  v14 = *(void **)(a1 + 1328);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x56777445u);
    *(_QWORD *)(a1 + 1328) = 0LL;
  }
  *(_QWORD *)(a1 + 1312) = 0LL;
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
