/*
 * XREFs of ExpReleaseFastResourceShared2 @ 0x14041109C
 * Callers:
 *     ExReleaseFastResource2 @ 0x14040EBEC (ExReleaseFastResource2.c)
 *     ExReleaseFastResourceShared2 @ 0x14040EF54 (ExReleaseFastResourceShared2.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402916B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExpCommitWakeFastResource @ 0x14040FE18 (ExpCommitWakeFastResource.c)
 *     ExpPrepareToWakeFastResourceShared @ 0x1404109F0 (ExpPrepareToWakeFastResourceShared.c)
 *     ExpRemoveEntryListAndClear2 @ 0x14041128C (ExpRemoveEntryListAndClear2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceShared2(KSPIN_LOCK *BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  unsigned __int8 CurrentIrql; // si
  _DWORD *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v24; // [rsp+88h] [rbp+38h] BYREF
  int v25; // [rsp+90h] [rbp+40h] BYREF
  volatile signed __int32 *v26; // [rsp+98h] [rbp+48h] BYREF

  v26 = 0LL;
  v22 = 0LL;
  v25 = 0;
  v24 = 0;
  result = (unsigned int)--*(_DWORD *)(a2 + 32);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (int)result <= 0 )
  {
    _m_prefetchw(BugCheckParameter2);
    v5 = *BugCheckParameter2;
    while ( 1 )
    {
      v6 = ~(_BYTE)v5 & 3 ^ ((v5 & 0xFFFFFFFFFFFFFFFCuLL) - 1);
      if ( (v6 & 2) != 0 && (v6 < 0 || (v6 & 0xFFFFFFFFFFFFFFFCuLL) == 0) )
        break;
      v7 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v6, v5);
      if ( v7 == v5 )
      {
        _disable();
        ExpRemoveEntryListAndClear2(a2);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v10 = *SchedulerAssist;
          do
          {
            v11 = v10;
            v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
          }
          while ( v11 != v10 );
          if ( (v10 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        *(_QWORD *)(a2 + 24) = 0LL;
        goto LABEL_12;
      }
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v13 = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v14) = 4;
      if ( CurrentIrql != 2 )
        v14 = (-1LL << (CurrentIrql + 1)) & 4;
      v13[5] |= v14;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(BugCheckParameter2 + 6, &LockHandle);
    ExpPrepareToWakeFastResourceShared((signed __int64 *)BugCheckParameter2, (__int64 *)&v26, &v22, &v25, &v24);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpCommitWakeFastResource(&v26, v15, v16, v24);
    ExpRemoveEntryListAndClear2(a2);
    *(_QWORD *)(a2 + 24) = 0LL;
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    __writecr8(CurrentIrql);
LABEL_12:
    result = *(unsigned __int8 *)(a2 + 36);
    if ( (_BYTE)result )
    {
      result = KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, *(unsigned __int8 *)(a2 + 36));
      *(_BYTE *)(a2 + 36) = 0;
    }
  }
  return result;
}
