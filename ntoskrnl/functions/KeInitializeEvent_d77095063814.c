void __stdcall KeInitializeEvent(PRKEVENT Event, EVENT_TYPE Type, BOOLEAN State)
{
  Event->Header.SignalState = State;
  Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
  Event->Header.WaitListHead.Flink = &Event->Header.WaitListHead;
  Event->Header.Type = Type;
  *(_WORD *)((char *)&Event->Header.Lock + 1) = 1536;
}
