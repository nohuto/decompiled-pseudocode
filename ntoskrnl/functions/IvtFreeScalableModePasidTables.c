__int64 __fastcall IvtFreeScalableModePasidTables(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  void **v17; // rdi
  __int64 v18; // rsi
  void *v19; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v6) = 0x8000;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v6;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  v7 = *(_QWORD *)a2;
  v8 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2
    || *v8 != a2
    || (*v8 = v7,
        *(_QWORD *)(v7 + 8) = v8,
        v9 = *(_QWORD *)(a2 + 16),
        v10 = *(_QWORD **)(a2 + 24),
        *(_QWORD *)(v9 + 8) != a2 + 16)
    || *v10 != a2 + 16 )
  {
    __fastfail(3u);
  }
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v11 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = (unsigned int)CurrentIrql + 1;
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) != 0 )
  {
    v17 = (void **)(a2 + 56);
    v18 = (*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF;
    do
    {
      if ( *v17 )
        ExtEnvFreePhysicalMemory(v11, *v17, 0x1000u, *(_DWORD *)(a1 + 272));
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  v19 = *(void **)(a2 + 48);
  if ( v19 )
    ExtEnvFreePhysicalMemory(
      v11,
      v19,
      (8 * ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) + 4095) & 0xFFFFF000,
      *(_DWORD *)(a1 + 272));
  return ExtEnvFreeMemory(v11, a2);
}
