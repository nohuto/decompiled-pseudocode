/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x1402AE770
 * Callers:
 *     KiAddThreadToScbQueue @ 0x1402AE688 (KiAddThreadToScbQueue.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14040A618 (KiReadGuestSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion(__int64 a1)
{
  bool v2; // di
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
  {
    v2 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a1, 0LL) != *(_DWORD *)(a1 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v3 = (_QWORD *)(a1 + 1008);
      if ( *v3 == 1LL )
      {
        v4 = (_QWORD *)qword_140C421A8;
        v2 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140C421A8 != &KiUpdateVpThreadPriorityListHead )
          __fastfail(3u);
        *v3 = &KiUpdateVpThreadPriorityListHead;
        v3[1] = v4;
        *v4 = v3;
        qword_140C421A8 = (__int64)v3;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
      if ( v2 )
        KiInsertQueueDpc((ULONG_PTR)&KiUpdateVpThreadPriorityDpc, 0LL, 0LL, 0LL, 0);
    }
  }
}
