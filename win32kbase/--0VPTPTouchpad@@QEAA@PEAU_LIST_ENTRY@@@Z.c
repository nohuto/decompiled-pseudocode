VPTPTouchpad *__fastcall VPTPTouchpad::VPTPTouchpad(VPTPTouchpad *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rax

  *((_QWORD *)this + 4) = 0LL;
  memset((char *)this + 40, 0, 0xACuLL);
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    __fastfail(3u);
  *(_QWORD *)this = Flink;
  *((_QWORD *)this + 1) = a2;
  Flink->Blink = (struct _LIST_ENTRY *)this;
  a2->Flink = (struct _LIST_ENTRY *)this;
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  return this;
}
