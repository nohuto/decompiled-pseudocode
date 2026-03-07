void __fastcall InteractiveControlDevice::QueueInput(
        InteractiveControlDevice *this,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Flink; // rax

  if ( !a2 )
    a2 = (struct _LIST_ENTRY *)((char *)this + 16);
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    __fastfail(3u);
  a3->Flink = Flink;
  a3->Blink = a2;
  Flink->Blink = a3;
  a2->Flink = a3;
  ++*((_DWORD *)this + 8);
  if ( !*((_DWORD *)this + 91) )
    InteractiveControlDevice::CleanQueue(this);
}
