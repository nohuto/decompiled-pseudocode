void __fastcall PDEVOBJ::vTrackObject(struct _LIST_ENTRY **this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Blink; // rcx
  HSEMAPHORE v6; // [rsp+48h] [rbp+10h] BYREF

  if ( a2->Flink != a2 )
    KeBugCheckEx(0x164u, 0x2EuLL, 0LL, 0LL, 0LL);
  v6 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8LL);
  EngAcquireSemaphore(v6);
  v4 = *this + 221;
  Blink = (*this)[221].Blink;
  if ( Blink->Flink != v4 )
    __fastfail(3u);
  a2->Blink = Blink;
  a2->Flink = v4;
  Blink->Flink = a2;
  v4->Blink = a2;
  SEMOBJ::vUnlock((PERESOURCE *)&v6);
}
