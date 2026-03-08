/*
 * XREFs of CcNotifyExternalCachesInternal @ 0x1403CD5F8
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403BA4E0 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcQueueLazyWriteScanThread @ 0x140534A20 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcCalculatePagesToWrite @ 0x140217524 (CcCalculatePagesToWrite.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcCalculatePagesToWriteForVolume @ 0x1402EA204 (CcCalculatePagesToWriteForVolume.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcNotifyExternalCachesInternal(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbp
  _QWORD *v7; // r14
  __int64 *v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v13; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 768), &LockHandle);
  if ( CcEnablePerVolumeLazyWriter )
  {
    v7 = (_QWORD *)(a3 + 992);
    v8 = (__int64 *)(a3 + 1248);
    v9 = CcCalculatePagesToWriteForVolume(a3, a1);
  }
  else
  {
    v7 = (_QWORD *)(a2 + 1056);
    v8 = &CcExternalCacheList;
    v9 = CcCalculatePagesToWrite(a2, a1, a2 + 1056, (unsigned __int64 *)(a2 + 1080), 0);
  }
  if ( v9 == 0xFFFFFFFFLL )
  {
    LODWORD(v10) = 100;
  }
  else if ( *v7 )
  {
    v10 = 100 * (unsigned __int64)v9 / *v7;
  }
  else
  {
    LODWORD(v10) = 0;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  if ( (_DWORD)v10 )
  {
    for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
    {
      v13 = *(i - 3);
      if ( v13 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v13 * (unsigned __int64)(unsigned int)v10 / 0x64,
          a1);
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&CcExternalCacheListLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v16 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return result;
}
