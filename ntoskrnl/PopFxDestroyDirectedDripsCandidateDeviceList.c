/*
 * XREFs of PopFxDestroyDirectedDripsCandidateDeviceList @ 0x1405878B4
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1409806E8 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall PopFxDestroyDirectedDripsCandidateDeviceList(struct _KEVENT **a1)
{
  struct _KEVENT *v2; // rcx
  __int64 v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (struct _KEVENT *)a1 )
      break;
    v3 = *(_QWORD *)&v2->Header.Lock;
    if ( (struct _KEVENT **)v2->Header.WaitListHead.Flink != a1 || *(struct _KEVENT **)(v3 + 8) != v2 )
      __fastfail(3u);
    *a1 = (struct _KEVENT *)v3;
    *(_QWORD *)(v3 + 8) = a1;
    v2->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v2;
    *(_QWORD *)&v2->Header.Lock = v2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v2[-27].Header.WaitListHead.Blink + 1, 0xFFFFFFFF) == 1 )
      KeSetEvent(v2 - 26, 0, 0);
  }
  ExReleasePushLockEx((__int64 *)&PopFxBlockingDeviceListLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
