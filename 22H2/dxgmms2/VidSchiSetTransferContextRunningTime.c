/*
 * XREFs of VidSchiSetTransferContextRunningTime @ 0x1C0013A20
 * Callers:
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C0012EAC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiIsQuantumLeft @ 0x1C0014A18 (VidSchiIsQuantumLeft.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x1C002F4D4 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiRun_PriorityTable @ 0x1C008E0A0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     VidSchiIncrementContextReference @ 0x1C0011440 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0011630 (VidSchiDecrementContextReference.c)
 */

void __fastcall VidSchiSetTransferContextRunningTime(__int64 a1, __int64 a2, char a3)
{
  struct _VIDSCH_CONTEXT *v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 1712LL), &LockHandle);
  if ( (*(_DWORD *)(a1 + 184) & 2) == 0 )
  {
    if ( a2 )
      VidSchiIncrementContextReference(a2, a2);
    v6 = *(struct _VIDSCH_CONTEXT **)(a1 + 496);
    if ( v6 )
      VidSchiDecrementContextReference(v6, 1);
    *(_QWORD *)(a1 + 496) = a2;
  }
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
