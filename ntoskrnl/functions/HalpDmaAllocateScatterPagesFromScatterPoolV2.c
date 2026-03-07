__int64 __fastcall HalpDmaAllocateScatterPagesFromScatterPoolV2(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int *a6)
{
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r11
  _DWORD *v27; // r9
  int v28; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v10 = *(_DWORD *)(a2 + 216);
    v9 = a2;
    v11 = *(_DWORD *)(a2 + 220);
    if ( v10 <= v11 )
      goto LABEL_3;
    v19 = v10 - v11;
    if ( a3 > v19 )
      a3 = v19;
  }
  v20 = *(_DWORD *)(a2 + 40);
  if ( a3 > v20 )
  {
    if ( a4 )
      goto LABEL_3;
    a3 = *(_DWORD *)(a2 + 40);
  }
  if ( !a3 )
  {
LABEL_3:
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    *a6 = 0;
    return 0LL;
  }
  v21 = *(_QWORD *)(a2 + 32);
  v22 = v21;
  v23 = a3;
  do
  {
    v22 = *(_QWORD *)(v22 + 8);
    --v23;
  }
  while ( v23 );
  *(_QWORD *)(a2 + 32) = v22;
  *(_DWORD *)(a2 + 40) = v20 - a3;
  if ( a5 )
    *(_DWORD *)(v9 + 216) -= a3;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v24 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v17 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  __writecr8(v24);
  result = v21;
  *a6 = a3;
  return result;
}
