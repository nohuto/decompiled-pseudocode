/*
 * XREFs of ViReleaseDmaAdapter @ 0x1409D0520
 * Callers:
 *     VfGetDmaAdapter @ 0x1409CCE60 (VfGetDmaAdapter.c)
 *     VfPutDmaAdapter @ 0x1409CDC30 (VfPutDmaAdapter.c)
 *     VfIoDeleteDevice @ 0x1409D7144 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 */

void __fastcall ViReleaseDmaAdapter(ULONG_PTR a1)
{
  struct _DMA_ADAPTER *v1; // r14
  KSPIN_LOCK *v2; // rbx
  KIRQL v4; // al
  PVOID *v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  PVOID *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  ULONG_PTR v15; // rbx

  v1 = *(struct _DMA_ADAPTER **)(a1 + 16);
  v2 = (KSPIN_LOCK *)(a1 + 280);
  v1->DmaOperations = *(_DMA_OPERATIONS **)(a1 + 48);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  v5 = *(PVOID **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = 0LL;
  v6 = v4;
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  if ( v5 )
  {
    v12 = v5;
    v13 = 32LL;
    do
    {
      if ( *v12 )
        MmFreeContiguousMemory(*v12);
      ++v12;
      --v13;
    }
    while ( v13 );
    ExFreePoolWithTag(v5, 0);
  }
  HalPutDmaAdapter(v1);
  v15 = v14;
  if ( *(int *)(a1 + 36) > 0 && v14 && (v14 != 1 || !*(_BYTE *)(a1 + 34)) )
  {
    ViHalPreprocessOptions(
      byte_140C12EC0,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v14,
      (__int64)v1,
      a1);
    VfReportIssueWithOptions(0xE6u, 0x11uLL, v15, (ULONG_PTR)v1, a1, byte_140C12EC0);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
