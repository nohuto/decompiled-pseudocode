/*
 * XREFs of KiAddProcessorToGroupSchedulingDatabase @ 0x140A9CCE4
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14025C890 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAddProcessorToGroupSchedulingList @ 0x14057AFB0 (KiAddProcessorToGroupSchedulingList.c)
 *     KiInitializeProcessorGroupSchedulingData @ 0x14057B04C (KiInitializeProcessorGroupSchedulingData.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingDatabase(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KiInitializeProcessorGroupSchedulingData(a1);
  v3 = *(_DWORD *)(v2 + 36);
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( KiGroupSchedulingEnabled )
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v5);
      while ( *(_QWORD *)(a1 + 48) );
    }
    KiAddProcessorToGroupSchedulingList(a1, (_QWORD **)&KiSchedulingGroupList, v3);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
