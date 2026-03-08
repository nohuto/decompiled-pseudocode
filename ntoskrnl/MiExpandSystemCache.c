/*
 * XREFs of MiExpandSystemCache @ 0x1402E9B28
 * Callers:
 *     MiObtainSystemCacheView @ 0x140335220 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020E9A0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14020F130 (MiMakeZeroedPageTablesEx.c)
 *     MiObtainSystemVa @ 0x140210534 (MiObtainSystemVa.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiExpandSystemCache(__int16 *a1)
{
  _QWORD *Pool; // rsi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int16 v5; // bx
  unsigned __int64 v6; // r14
  _QWORD *v7; // rcx
  unsigned int i; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int16 **v12; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-29h] BYREF
  __int128 v21; // [rsp+50h] [rbp-11h]
  __int128 v22; // [rsp+60h] [rbp-1h]
  unsigned __int64 v23; // [rsp+70h] [rbp+Fh]
  __int128 v24; // [rsp+78h] [rbp+17h]
  __int128 v25; // [rsp+88h] [rbp+27h]
  __int64 v26; // [rsp+98h] [rbp+37h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int64)qword_140C66988 <= 0x4000000 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x140uLL, 0x6353694Du);
  if ( !Pool )
    return 0LL;
  v3 = MiObtainSystemVa(1LL, 8u);
  v4 = v3;
  if ( !v3 )
  {
LABEL_15:
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 4088,
                        0,
                        8,
                        0) )
  {
    MiReturnSystemVa(v4, v4 + 0x200000, 8, 0LL);
    goto LABEL_15;
  }
  v5 = *a1;
  v6 = v4;
  KeAcquireInStackQueuedSpinLock(&qword_140C66D30, &LockHandle);
  v7 = Pool + 4;
  for ( i = 0; i < 8; ++i )
  {
    v9 = *v7 & 0xFFFFFFFFFFFF003FuLL;
    *(v7 - 2) = v6;
    v10 = ((unsigned __int64)(v5 & 0x3FF) << 6) | v9;
    *v7 = v10;
    v11 = v10 & 0x3FFFFFFFFFFFFFFFLL;
    if ( i )
    {
      v26 = v11;
      v24 = 0LL;
      v25 = 0LL;
      *v7 = v11;
      v12 = (__int16 **)*((_QWORD *)a1 + 248);
      if ( *v12 != a1 + 988 )
        __fastfail(3u);
      *(v7 - 3) = v12;
      *(v7 - 4) = a1 + 988;
      *v12 = (__int16 *)(v7 - 4);
      *((_QWORD *)a1 + 248) = v7 - 4;
    }
    else
    {
      v23 = v11 | 0x8000000000000000uLL;
      v21 = 0LL;
      v22 = 0LL;
      *v7 = v11 | 0x8000000000000000uLL;
    }
    v7 += 5;
    v6 += 0x40000LL;
  }
  *((_QWORD *)a1 + 249) += 7LL;
  *(_QWORD *)(48 * ((*(_QWORD *)(((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL
            + 16) = Pool;
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return Pool;
}
