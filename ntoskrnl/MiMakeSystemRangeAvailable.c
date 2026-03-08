/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x14020F62C
 * Callers:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14020FC50 (RtlClearBitsEx.c)
 *     MiSystemVaToDynamicBitmap @ 0x14021055C (MiSystemVaToDynamicBitmap.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned int v4; // eax
  ULONG_PTR v5; // rsi
  ULONG_PTR *v8; // rdi
  ULONG_PTR *v9; // r12
  ULONG_PTR v10; // rbx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  _QWORD *v13; // rcx
  ULONG_PTR v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdx
  bool i; // zf
  bool v19; // zf
  ULONG_PTR v20; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  BugCheckParameter4 = (int)a3;
  v4 = 0;
  v5 = BugCheckParameter3 >> 21;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v23 = 0LL;
  if ( a3 == 5 )
  {
    if ( !KeNumberNodes )
LABEL_34:
      KeBugCheckEx(0x1Au, 0x5201uLL, BugCheckParameter2, 0LL, 0LL);
    v13 = (_QWORD *)(qword_140C65720 + 104);
    while ( BugCheckParameter2 < *(v13 - 1) || BugCheckParameter2 >= *v13 )
    {
      ++v4;
      v13 += 47;
      if ( v4 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_34;
    }
    v8 = (ULONG_PTR *)(qword_140C65720 + 376LL * v4);
  }
  else
  {
    v8 = (ULONG_PTR *)MiSystemVaToDynamicBitmap(a3);
  }
  v9 = v8;
  v10 = (BugCheckParameter2 - v8[4]) >> 21;
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    v9 = (ULONG_PTR *)&v23;
    v20 = v8[2];
    *((_QWORD *)&v23 + 1) = v8[1];
    *(_QWORD *)&v23 = v20;
  }
  KeAcquireInStackQueuedSpinLock(v8 + 8, &LockHandle);
  if ( v10 >= *v9 )
    goto LABEL_29;
  if ( v5 <= 1 )
  {
    if ( v5 == 1 && _bittest64((const signed __int64 *)(v9[1] + 8 * (v10 >> 6)), v10 & 0x3F) )
      goto LABEL_9;
LABEL_29:
    KeBugCheckEx(0x1Au, 0x2104uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( *v9 - v10 < v5 )
    goto LABEL_29;
  v14 = v9[1];
  v15 = (__int64 *)(v14 + 8 * (v10 >> 6));
  v16 = *v15;
  v17 = (__int64 *)(v14 + 8 * ((v10 + v5 - 1) >> 6));
  if ( v15 == v17 )
  {
    v19 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10) & v16) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v10;
  }
  else
  {
    for ( i = ((-1LL << v10) & v16) == -1LL << v10; ; i = *v15 == -1 )
    {
      if ( !i )
        goto LABEL_29;
      if ( ++v15 == v17 )
        break;
    }
    v19 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v10 + (unsigned __int8)v5 - 1)) & *v15) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v10 + (unsigned __int8)v5 - 1);
  }
  if ( !v19 )
    goto LABEL_29;
LABEL_9:
  RtlClearBitsEx(v9, v10, v5);
  if ( (_DWORD)BugCheckParameter4 == 13 )
  {
    LODWORD(BugCheckParameter4) = 9;
    if ( v10 < v8[6] )
      v8[6] = v10;
  }
  else if ( v10 < v8[3] )
  {
    v8[3] = v10;
  }
  _InterlockedExchangeAdd64(&qword_140C69FC8[(int)BugCheckParameter4], -(__int64)v5);
  if ( (_DWORD)BugCheckParameter4 == 8 )
    qword_140C66988 += BugCheckParameter3;
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
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
  __writecr8(OldIrql);
  return result;
}
