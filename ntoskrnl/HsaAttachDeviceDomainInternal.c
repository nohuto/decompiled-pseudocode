__int64 __fastcall HsaAttachDeviceDomainInternal(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  int v11; // r9d
  struct _KPRCB *CurrentPrcb; // r9
  unsigned __int8 v13; // al
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-A8h] BYREF
  _DWORD v18[28]; // [rsp+70h] [rbp-88h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v18, 0, sizeof(v18));
  if ( !a3 )
  {
    v6 = *(_DWORD *)(a1 + 172);
    if ( v6 == 2 )
    {
      v18[1] = 1;
    }
    else if ( v6 != 1 )
    {
      return 3221225473LL;
    }
    a3 = v18;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v9) = 0x8000;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v9;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
  LOBYTE(v11) = 1;
  HsaUpdateDeviceTableEntry(a1, *(_QWORD *)(a2 + 40), 0, v11, (__int64)a3, 1, 0);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  LOBYTE(CurrentPrcb) = 1;
  HsaFlushTbInternal(a1, 0, a3[12], (_DWORD)CurrentPrcb, 0LL, 0LL, 0, 0LL);
  return 0LL;
}
