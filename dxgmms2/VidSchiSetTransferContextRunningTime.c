/*
 * XREFs of VidSchiSetTransferContextRunningTime @ 0x1C0010B90
 * Callers:
 *     VidSchiIsQuantumLeft @ 0x1C0001054 (VidSchiIsQuantumLeft.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000FCEC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C003A850 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiRun_PriorityTable @ 0x1C00BA0C0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C0011CE0 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C00146D0 (VidSchiIncrementContextReference.c)
 */

void __fastcall VidSchiSetTransferContextRunningTime(__int64 a1, __int64 a2, char a3)
{
  struct _VIDSCH_CONTEXT *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1728LL), &LockHandle);
  if ( (*(_DWORD *)(a1 + 184) & 2) == 0 )
  {
    if ( a2 )
      VidSchiIncrementContextReference(a2);
    v6 = *(struct _VIDSCH_CONTEXT **)(a1 + 496);
    if ( v6 )
      VidSchiDecrementContextReference(v6);
    *(_QWORD *)(a1 + 496) = a2;
  }
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
