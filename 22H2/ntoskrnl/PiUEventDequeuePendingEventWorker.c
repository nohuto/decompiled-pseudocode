/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x14071A334
 * Callers:
 *     PiUEventFreeClientRegistrationContext @ 0x140714E48 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x1407155B8 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x14071B1F0 (PiUEventNotifyClient.c)
 *     PiUEventHandleVetoEvent @ 0x14076DDE8 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     PiUEventDereferenceEventEntry @ 0x14071A38C (PiUEventDereferenceEventEntry.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventDequeuePendingEventWorker(__int64 a1, void *a2, char a3)
{
  void **v4; // rdx
  void **v5; // rax

  v4 = *(void ***)a2;
  if ( v4[1] != a2 || (v5 = (void **)*((_QWORD *)a2 + 1), *v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( !a3 )
    --*(_DWORD *)(a1 + 128);
  PiUEventDereferenceEventEntry(*((PVOID *)a2 + 3));
  ExFreePoolWithTag(a2, 0x59706E50u);
}
