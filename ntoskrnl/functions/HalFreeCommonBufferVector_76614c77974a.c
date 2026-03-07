__int64 __fastcall HalFreeCommonBufferVector(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbp
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v5; // rdi
  KIRQL v6; // al
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  v5 = *(_QWORD *)(a2 + 16) * *(unsigned int *)(a2 + 24);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 104));
  v7 = *(_QWORD **)(a2 + 8);
  v8 = v6;
  v9 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v7 != a2 )
    __fastfail(3u);
  *v7 = v9;
  *(_QWORD *)(v9 + 8) = v7;
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 104));
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
  if ( *(_BYTE *)(a2 + 72) )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(HalpDmaIommuInterfaceFcnTable + 64))(
      *(_QWORD *)(v2 + 40),
      *(_QWORD *)(a2 + 56),
      v5 >> 12);
  HalpDmaDereferenceDomainObject(v2);
  MmUnmapLockedPages(*(PVOID *)(a2 + 48), *(PMDL *)(a2 + 40));
  MiFreePagesFromMdl(*(_QWORD *)(a2 + 40), 0);
  ExFreePoolWithTag(*(PVOID *)(a2 + 40), 0);
  HalpMmAllocCtxFree(v15, *(_QWORD *)(a2 + 64));
  return HalpMmAllocCtxFree(v16, a2);
}
