void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(PRKQUEUE Queue)
{
  PLIST_ENTRY v2; // rax

  while ( 1 )
  {
    do
      v2 = KeRemoveQueue(Queue, 0, 0LL);
    while ( v2 == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))v2[1].Flink)(v2[1].Blink);
  }
}
