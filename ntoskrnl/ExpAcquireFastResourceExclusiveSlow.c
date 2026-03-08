/*
 * XREFs of ExpAcquireFastResourceExclusiveSlow @ 0x14040F2AC
 * Callers:
 *     ExAcquireFastResourceWithFlags @ 0x14040CD00 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x14040D530 (ExAcquireFastResourceExclusive2.c)
 * Callees:
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402916B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x1402C5C00 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403C7520 (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList2 @ 0x14040FD90 (ExpAddFastOwnerEntryToThreadList2.c)
 *     ExpWaitForFastResource2 @ 0x140411334 (ExpWaitForFastResource2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpAcquireFastResourceExclusiveSlow(
        signed __int64 *a1,
        __int64 a2,
        KSPIN_LOCK *a3,
        __int64 a4,
        char a5)
{
  unsigned __int8 CurrentIrql; // si
  signed __int64 v9; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  char v14; // dl
  signed __int64 v15; // rtt
  __int64 v16; // rdx
  signed __int64 v17; // rax
  _QWORD *v18; // rcx
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  char v24; // bl
  int v25; // ecx
  char v26; // r15
  char v27; // r12
  int v28; // r14d
  bool v29; // r15
  int v30; // r12d
  char v31; // al
  struct _KPRCB *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  signed __int32 *v35; // r8
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  __int128 v43; // [rsp+38h] [rbp-38h] BYREF
  __int128 v44; // [rsp+48h] [rbp-28h]
  __int128 v45; // [rsp+58h] [rbp-18h] BYREF
  __int64 v46; // [rsp+68h] [rbp-8h]
  signed __int64 *v47; // [rsp+B0h] [rbp+40h]
  char v48; // [rsp+B8h] [rbp+48h]

  v46 = 0LL;
  v47 = a1 + 8;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = (unsigned int)(unsigned __int8)v46 + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)(v46 + 1)) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << ((unsigned __int8)v46 + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v11;
  }
  v48 = v9;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 6, &LockHandle);
  _m_prefetchw(a1);
  v12 = *a1;
  do
  {
    if ( v12 )
    {
      v14 = 0;
      v13 = v12 | 2;
      if ( (v12 | 2) == v12 )
        goto LABEL_15;
    }
    else
    {
      v13 = v9;
      v14 = v9;
    }
    v15 = v12;
    v12 = _InterlockedCompareExchange64(a1, v13, v12);
  }
  while ( v15 != v12 );
  if ( v14 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_31;
  }
LABEL_15:
  *((_QWORD *)&v43 + 1) = 0LL;
  *((_QWORD *)&v45 + 1) = &v45;
  *(_QWORD *)&v45 = &v45;
  v17 = a1[2];
  *((_QWORD *)&v44 + 1) = 393217LL;
  *(_QWORD *)&v44 = a3;
  v46 = a4;
  if ( v17 )
  {
    v18 = *(_QWORD **)(v17 + 8);
    if ( *v18 != v17 )
      __fastfail(3u);
    *((_QWORD *)&v43 + 1) = *(_QWORD *)(v17 + 8);
    *(_QWORD *)&v43 = v17;
    *v18 = &v43;
    *(_QWORD *)(v17 + 8) = &v43;
  }
  else
  {
    *((_QWORD *)&v43 + 1) = &v43;
    *(_QWORD *)&v43 = &v43;
    a1[2] = (signed __int64)&v43;
  }
  if ( a4 )
    KeAbPreWait((__int64 *)a4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v9) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v21 = CurrentPrcb->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + CurrentIrql));
      v23 = (v22 & v21[5]) == 0;
      v21[5] &= v22;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v48 = 0;
  ExpWaitForFastResource2(a1, &v43, 66084LL);
  if ( a4 )
    KeAbPreAcquire((__int64)a1, a4);
LABEL_31:
  v24 = v48;
  v25 = v9 + ((a5 & 0x10) != 0 ? 0xC : 0);
  v26 = v25 | 2;
  if ( v48 )
    v26 = v25;
  v27 = v26;
  v28 = v26 & 2;
  v29 = (v26 & 8) != 0;
  *((_DWORD *)v47 + 8) = 1;
  v30 = v27 & 4;
  v47[2] = (unsigned __int64)a3 | (v30 != 0);
  if ( a4 )
  {
    v31 = 2 * *(_BYTE *)(a4 + 16);
    *(_BYTE *)(a4 + 18) = 1;
    *((_BYTE *)v47 + 36) = v31 | 1;
  }
  if ( v28 )
    _disable();
  if ( v30 )
  {
    KxAcquireSpinLock(a3 + 209);
    LOBYTE(v33) = 1;
    ExpAddFastOwnerEntryToThreadList2(a3, v34, v33, v47);
    KeReleaseSpinLockFromDpcLevel(a3 + 209);
    v24 = v48;
  }
  else
  {
    ExpAddFastOwnerEntryToThreadList2(a3, v16, 0LL, v47);
  }
  if ( v28 )
  {
    v32 = KeGetCurrentPrcb();
    v35 = (signed __int32 *)v32->SchedulerAssist;
    if ( v35 )
    {
      _m_prefetchw(v35);
      v36 = *v35;
      do
      {
        v37 = v36;
        v36 = _InterlockedCompareExchange(v35, v36 & 0xFFDFFFFF, v36);
      }
      while ( v37 != v36 );
      if ( (v36 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
    _enable();
  }
  if ( v30 )
  {
    if ( v29 && a4 )
      KeAbMarkCrossThreadReleasable((__int64)v32, (__int64 *)a4);
    ObfReferenceObject(a3);
  }
  if ( v24 )
  {
    if ( KiIrqlFlags )
    {
      v38 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
    __writecr8(CurrentIrql);
  }
}
