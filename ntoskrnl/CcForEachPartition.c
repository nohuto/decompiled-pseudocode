/*
 * XREFs of CcForEachPartition @ 0x140305240
 * Callers:
 *     CcGetDirtyPages @ 0x140304A20 (CcGetDirtyPages.c)
 *     CcIsThereDirtyData @ 0x1403A6CF0 (CcIsThereDirtyData.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x1403D14B0 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcCoalescingCallBack @ 0x140533080 (CcCoalescingCallBack.c)
 *     CcNotifyWriteBehind @ 0x1405345B8 (CcNotifyWriteBehind.c)
 *     MiFlushAllFilesystemPages @ 0x140626E68 (MiFlushAllFilesystemPages.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x14087C260 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetNextPartitionUnsafe @ 0x140305364 (PsGetNextPartitionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403CB270 (CcForEachPrivateVolumeCacheMap.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall CcForEachPartition(
        unsigned __int8 (__fastcall *a1)(__int64, _QWORD, __int64),
        __int64 a2,
        char a3,
        char a4)
{
  __int64 v4; // rbx
  char v5; // di
  void *i; // rcx
  LONG_PTR result; // rax
  _QWORD *v12; // rbp
  KIRQL v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  char v16; // al
  char v17; // si
  signed __int64 v18; // rax
  unsigned __int64 j; // rcx
  signed __int64 v20; // rtt
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf

  v4 = 0LL;
  v5 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    result = PsGetNextPartitionUnsafe(i);
    v12 = (_QWORD *)result;
    if ( !result )
      break;
    v13 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v14 = v12[1];
    v15 = v13;
    if ( v14 )
    {
      v4 = v12[1];
      if ( *(_BYTE *)(v14 + 1294) >= 2u )
      {
        if ( a3 )
        {
          _m_prefetchw((const void *)(v14 + 1296));
          v18 = *(_QWORD *)(v14 + 1296);
          for ( j = v18 + 1; j > 1; j = v18 + 1 )
          {
            v20 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1296), j, v18);
            if ( v20 == v18 )
              goto LABEL_6;
          }
          if ( j != 1 )
            __fastfail(0xEu);
          v5 = 0;
        }
      }
      else
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1296)) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v5 = 1;
      }
    }
    KxReleaseSpinLock((volatile signed __int64 *)&CcGlobalPartitionLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v15);
    if ( v5 )
    {
      v16 = CcEnablePerVolumeLazyWriter && !a4 ? CcForEachPrivateVolumeCacheMap(v4, a1, a2) : a1(v4, 0LL, a2);
      v17 = v16;
      CcDereferencePartition(v4);
      v5 = 0;
      if ( !v17 )
        return ObfDereferenceObjectWithTag(v12, 0x6E457350u);
    }
  }
  return result;
}
