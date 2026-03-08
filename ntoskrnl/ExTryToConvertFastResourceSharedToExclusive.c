/*
 * XREFs of ExTryToConvertFastResourceSharedToExclusive @ 0x140607EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExTryToConvertFastResourceSharedToExclusive2 @ 0x14040F0B8 (ExTryToConvertFastResourceSharedToExclusive2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryUpgradeResource @ 0x14060DC3C (ExpTryUpgradeResource.c)
 */

char __fastcall ExTryToConvertFastResourceSharedToExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v7; // r9
  char v8; // al
  unsigned __int8 v9; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  char v12; // di
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( FeatureFastResource2 )
    return ExTryToConvertFastResourceSharedToExclusive2((_BYTE *)BugCheckParameter2, a2);
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v7 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v7 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v7, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  v8 = *(_BYTE *)(a2 + 17);
  if ( (v8 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v8 & 4) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v8 & 4) << 14, 0LL);
  if ( !*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40 )
    KeBugCheckEx(0x1C6u, 0x13uLL, BugCheckParameter2, 0LL, 0LL);
  v9 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v9 == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (v9 + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(BugCheckParameter2 + 96), &LockHandle);
  v12 = ExpTryUpgradeResource(BugCheckParameter2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( v12 )
    *(_BYTE *)(a2 + 17) |= 4u;
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && v9 <= 0xFu && v13 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (v9 + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  return v12;
}
