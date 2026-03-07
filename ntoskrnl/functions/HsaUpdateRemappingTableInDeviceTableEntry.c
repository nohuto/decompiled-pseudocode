__int64 __fastcall HsaUpdateRemappingTableInDeviceTableEntry(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  _OWORD *v9; // rdi
  __int128 v10; // xmm1
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  __int64 result; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-40h] BYREF
  __int128 v24; // [rsp+48h] [rbp-30h]

  v23 = 0LL;
  v24 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v8) = 0x8000;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v8;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
  v9 = (_OWORD *)(*(_QWORD *)(a1 + 24) + 32LL * *a2);
  v10 = v9[1];
  v23 = *v9;
  v24 = v10;
  HsaBuildInterruptRemappingEntry(a1, a3, (__int64)&v23);
  v11 = a2[1];
  v12 = (unsigned int)(1 << v11);
  if ( (_DWORD)v12 )
  {
    v13 = 32LL * (unsigned int)(1 << (3 - v11));
    v14 = (unsigned int)v12;
    do
    {
      *((_QWORD *)v9 + 2) = v24;
      _InterlockedOr(v21, 0);
      HsaInvalidateRemappingTableEntries(a1, v12, 1LL);
      v9 = (_OWORD *)((char *)v9 + v13);
      --v14;
    }
    while ( v14 );
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
