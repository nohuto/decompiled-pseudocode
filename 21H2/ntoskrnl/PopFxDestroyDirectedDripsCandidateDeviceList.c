/*
 * XREFs of PopFxDestroyDirectedDripsCandidateDeviceList @ 0x14056AA70
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x1408E34AC (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PopFxDestroyDirectedDripsCandidateDeviceList(struct _KEVENT **a1)
{
  struct _KEVENT *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

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
  ExReleasePushLockEx((ULONG_PTR)&PopFxBlockingDeviceListLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5, v6);
}
