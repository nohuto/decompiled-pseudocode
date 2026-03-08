/*
 * XREFs of PnpDisableUserModeNotifications @ 0x14055F0F8
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140555EE0 (IoRevokeHandlesForProcess.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

void __fastcall PnpDisableUserModeNotifications(struct _LIST_ENTRY *a1, __int64 a2)
{
  void **v4; // rsi
  __int64 v5; // rbp
  char *v6; // rdi
  PFAST_MUTEX i; // rbx

  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v4 = (void **)&PiUEventDevHandleClientList;
  v5 = 14LL;
  v6 = (char *)&PiUEventDevHandleClientList;
  do
  {
    for ( i = (PFAST_MUTEX)*v4; i != (PFAST_MUTEX)v6; i = *(PFAST_MUTEX *)&i->Count )
    {
      ExAcquireFastMutex(*(PFAST_MUTEX *)&i->Contention);
      if ( *(_QWORD *)&i->OldIrql == *(_QWORD *)(a2 + 1088) && i->Event.Header.WaitListHead.Flink == a1 )
        LOBYTE(i->Event.Header.WaitListHead.Blink) = 1;
      ExReleaseFastMutex(*(PFAST_MUTEX *)&i->Contention);
    }
    v6 += 16;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
}
