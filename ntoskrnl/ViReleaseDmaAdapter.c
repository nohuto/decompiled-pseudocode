void __fastcall ViReleaseDmaAdapter(ULONG_PTR a1)
{
  void *RealDmaAdapter; // r14
  KIRQL v3; // al
  PVOID *v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  PVOID *v11; // rbx
  __int64 v12; // rsi
  LONG_PTR v13; // rax
  ULONG_PTR v14; // rbx

  RealDmaAdapter = (void *)ViGetRealDmaAdapter(a1 + 16);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
  v4 = *(PVOID **)(a1 + 296);
  *(_QWORD *)(a1 + 296) = 0LL;
  v5 = v3;
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 312));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( v4 )
  {
    v11 = v4;
    v12 = 32LL;
    do
    {
      if ( *v11 )
        MmFreeContiguousMemory(*v11);
      ++v11;
      --v12;
    }
    while ( v12 );
    ExFreePoolWithTag(v4, 0);
  }
  v13 = ObfDereferenceObject(RealDmaAdapter);
  v14 = v13;
  if ( *(int *)(a1 + 76) > 0 && v13 && (v13 != 1 || !*(_BYTE *)(a1 + 74)) )
  {
    ViHalPreprocessOptions(
      byte_140C0DD50,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v13,
      (__int64)RealDmaAdapter,
      a1);
    VfReportIssueWithOptions(0xE6u, 0x11uLL, v14, (ULONG_PTR)RealDmaAdapter, a1, byte_140C0DD50);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
