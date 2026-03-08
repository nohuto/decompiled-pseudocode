/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38
 * Callers:
 *     ExReleaseDisownedFastResource2 @ 0x14040E8BC (ExReleaseDisownedFastResource2.c)
 *     ExReleaseDisownedFastResourceExclusive2 @ 0x14040E9C0 (ExReleaseDisownedFastResourceExclusive2.c)
 *     ExReleaseDisownedFastResourceShared2 @ 0x14040EAB4 (ExReleaseDisownedFastResourceShared2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402916B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x1402C5C00 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAbCrossThreadRelease @ 0x1403C57F8 (KeAbCrossThreadRelease.c)
 *     ExpCommitWakeFastResource @ 0x14040FE18 (ExpCommitWakeFastResource.c)
 *     ExpPrepareToWakeFastResourceExclusive @ 0x140410920 (ExpPrepareToWakeFastResourceExclusive.c)
 *     ExpRemoveEntryListAndClear2 @ 0x14041128C (ExpRemoveEntryListAndClear2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceExclusive2(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  int v4; // eax
  LONG_PTR result; // rax
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  KSPIN_LOCK *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+98h] [rbp+48h] BYREF
  int v21; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int32 *v22; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 36);
  v4 = *(_DWORD *)(a2 + 32);
  v22 = 0LL;
  v18 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v21 = 0;
  v20 = 0;
  if ( v4 < 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v9 = 4;
      if ( CurrentIrql != 2 )
        v9 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v9;
    }
    v10 = (KSPIN_LOCK *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
    KxAcquireSpinLock(v10 + 209);
    ExpRemoveEntryListAndClear2(a2);
    KeReleaseSpinLockFromDpcLevel(v10 + 209);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 48), &LockHandle);
    *(_QWORD *)(a2 + 16) = 0LL;
    --*(_DWORD *)(a2 + 32);
    *(_BYTE *)(a2 + 36) = 0;
    ExpPrepareToWakeFastResourceExclusive(a1, (__int64 *)&v22, &v18, &v21, &v20);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpCommitWakeFastResource(&v22, v11, v12, v20);
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( (_BYTE)v2 )
      KeAbCrossThreadRelease(a1, v2, (__int64)v10);
    return ObfDereferenceObject(v10);
  }
  else
  {
    result = (unsigned int)(v4 - 1);
    *(_DWORD *)(a2 + 32) = result;
  }
  return result;
}
