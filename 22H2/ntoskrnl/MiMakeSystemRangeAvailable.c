/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x14027DB94
 * Callers:
 *     MiReturnSystemVa @ 0x14027AC68 (MiReturnSystemVa.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x14027E980 (RtlClearBitsEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSystemVaToDynamicBitmap @ 0x14030B7CC (MiSystemVaToDynamicBitmap.c)
 *     MiNonPagedPoolToNode @ 0x140325F04 (MiNonPagedPoolToNode.c)
 *     MiReleaseSessionVa @ 0x14032A55C (MiReleaseSessionVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rbp
  ULONG_PTR v4; // rdi
  _SLIST_HEADER *v7; // rsi
  _SLIST_HEADER *v8; // r12
  ULONG_PTR v9; // rbx
  unsigned __int8 v10; // al
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 Region; // rcx
  __int64 *v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rdx
  unsigned __int64 Alignment; // rax
  bool i; // zf
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  BugCheckParameter4 = (int)a3;
  v4 = BugCheckParameter3 >> 21;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v21 = 0LL;
  if ( a3 == 1 )
    return MiReleaseSessionVa(BugCheckParameter2, (unsigned int)v4);
  if ( a3 == 5 )
    v7 = &SListHead[11 * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2) + 4];
  else
    v7 = (_SLIST_HEADER *)MiSystemVaToDynamicBitmap(a3);
  v8 = v7;
  v9 = (BugCheckParameter2 - v7[2].Alignment) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    v8 = (_SLIST_HEADER *)&v21;
    Alignment = v7[1].Alignment;
    *((_QWORD *)&v21 + 1) = v7->Region;
    *(_QWORD *)&v21 = Alignment;
  }
  KeAcquireInStackQueuedSpinLock(&v7[4].Alignment, &LockHandle);
  if ( v9 >= v8->Alignment )
    goto LABEL_38;
  if ( v4 > 1 )
  {
    if ( v8->Alignment - v9 >= v4 )
    {
      Region = v8->Region;
      v14 = (__int64 *)(Region + 8 * (v9 >> 6));
      v15 = *v14;
      v16 = (__int64 *)(Region + 8 * ((v9 + v4 - 1) >> 6));
      if ( v14 != v16 )
      {
        for ( i = ((-1LL << v9) & v15) == -1LL << v9; ; i = *v14 == -1 )
        {
          if ( !i )
            goto LABEL_38;
          if ( ++v14 == v16 )
            break;
        }
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v4 - 1)) & *v14) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v4 - 1) )
          goto LABEL_11;
        v10 = 0;
        goto LABEL_10;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9) & v15) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9 )
        goto LABEL_11;
    }
LABEL_38:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( v4 != 1 )
    goto LABEL_38;
  v10 = _bittest64((const signed __int64 *)v8->Region, v9);
LABEL_10:
  if ( !v10 )
    goto LABEL_38;
LABEL_11:
  RtlClearBitsEx(v8, v9, v4);
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v9 < v7[3].Alignment )
      v7[3].Alignment = v9;
  }
  else if ( v9 < v7[1].Region )
  {
    v7[1].Region = v9;
  }
  _InterlockedExchangeAdd64(&qword_140C4F948[(int)BugCheckParameter4], -(__int64)v4);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_140C4E048 += BugCheckParameter3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        i = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( i )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
