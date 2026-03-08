/*
 * XREFs of MiMarkSystemVaAllocated @ 0x140634E98
 * Callers:
 *     MiReservePoolMemory @ 0x1402EE008 (MiReservePoolMemory.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x14021055C (MiSystemVaToDynamicBitmap.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     MiExtendDynamicBitMap @ 0x1403A5570 (MiExtendDynamicBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMarkSystemVaAllocated(int a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // r15
  unsigned int v7; // r14d
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // r9
  __int64 *v19; // r8
  bool v20; // zf
  bool i; // zf
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v26; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v5 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 1;
  v8 = (a3 - a2) >> 3;
  v9 = a2 << 25 >> 16 << 25 >> 16;
  v10 = MiSystemVaToDynamicBitmap(a1);
  v11 = v10;
  v12 = v10[4];
  if ( v9 < v12 )
    return 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10 + 8, &LockHandle);
  v14 = (v9 - v12) >> 21;
  if ( a5 )
  {
    v15 = v14 + v8 - 1;
    if ( v15 >= *v11
      && (v15 >= v11[2]
       || !(unsigned int)MiExtendDynamicBitMap(
                           v11,
                           (unsigned __int64 *)v11,
                           (v15 - *v11 + 0x8000) & 0xFFFFFFFFFFFF8000uLL,
                           v5,
                           1)) )
    {
      goto LABEL_6;
    }
  }
  if ( !a4 )
  {
    RtlClearBitsEx((__int64)v11, v14, v8);
    v8 = -(__int64)v8;
    goto LABEL_25;
  }
  if ( v14 >= *v11 )
    goto LABEL_6;
  if ( v8 > 1 )
  {
    if ( *v11 - v14 >= v8 )
    {
      v16 = v11[1];
      v17 = (__int64 *)(v16 + 8 * (v14 >> 6));
      v18 = *v17;
      v19 = (__int64 *)(v16 + 8 * ((v14 + v8 - 1) >> 6));
      if ( v17 == v19 )
      {
        v20 = (v18 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v8) << v14)) == 0;
LABEL_22:
        if ( v20 )
          goto LABEL_23;
      }
      else
      {
        for ( i = (v18 & (-1LL << v14)) == 0; i; i = *v17 == 0 )
        {
          if ( ++v17 == v19 )
          {
            v20 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v14 + (unsigned __int8)v8 - 1)) & *v17) == 0;
            goto LABEL_22;
          }
        }
      }
    }
LABEL_6:
    v7 = 0;
    goto LABEL_26;
  }
  if ( v8 != 1 || _bittest64((const signed __int64 *)(v11[1] + 8 * (v14 >> 6)), v14 & 0x3F) )
    goto LABEL_6;
LABEL_23:
  RtlSetBitsEx((__int64)v11, v14, v8);
LABEL_25:
  _InterlockedExchangeAdd64(&MiState[v5 + 2521], v8);
LABEL_26:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v20 = (v26 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v26;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return v7;
}
