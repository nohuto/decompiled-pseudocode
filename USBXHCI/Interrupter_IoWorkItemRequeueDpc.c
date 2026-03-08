/*
 * XREFs of Interrupter_IoWorkItemRequeueDpc @ 0x1C003E130
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_ReleaseEventRingLock @ 0x1C000F4C4 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x1C000F4FC (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C00224FA (Interrupter_DeferToDpcOrWorkItem.c)
 */

void __fastcall Interrupter_IoWorkItemRequeueDpc(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  char v4; // al
  __int64 v5; // rcx

  ++*((_DWORD *)Context + 13);
  v4 = Interrupter_AcquireEventRingLock((__int64)Context);
  *((_DWORD *)Context + 24) &= ~8u;
  Interrupter_ReleaseEventRingLock((__int64)Context, v4);
  v5 = *(_QWORD *)Context;
  ++*((_DWORD *)Context + 16);
  Interrupter_DeferToDpcOrWorkItem(v5);
  KeSetEvent((PRKEVENT)(Context + 176), 0, 0);
}
