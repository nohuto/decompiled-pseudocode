void __fastcall DXGVIRTUALMACHINE::AddVirtualGpu(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  bool v4; // zf
  struct _LIST_ENTRY *v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 12, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  ++*((_DWORD *)this + 1);
  v4 = a2->Flink == 0LL;
  v8 = 2;
  if ( v4 )
  {
    v5 = (struct _LIST_ENTRY *)this[6];
    if ( (struct _KTHREAD **)v5->Flink != this + 5 )
      __fastfail(3u);
    a2->Flink = (struct _LIST_ENTRY *)(this + 5);
    a2->Blink = v5;
    v5->Flink = a2;
    this[6] = (struct _KTHREAD *)a2;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
