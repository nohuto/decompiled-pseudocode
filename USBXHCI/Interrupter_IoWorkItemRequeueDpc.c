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
