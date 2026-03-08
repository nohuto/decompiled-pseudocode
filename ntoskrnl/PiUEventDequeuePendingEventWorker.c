/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x14068DE6C
 * Callers:
 *     PiUEventNotifyClient @ 0x14068032C (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x14068E028 (PiUEventHandleGetEvent.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14078DA7C (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     PiUEventDereferenceEventEntry @ 0x14068DA18 (PiUEventDereferenceEventEntry.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
