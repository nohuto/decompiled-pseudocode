struct _LIST_ENTRY **__fastcall BLTQUEUE::RemoveQueueHead(BLTQUEUE *this, struct _LIST_ENTRY *a2)
{
  struct _KMUTANT *v2; // rbx
  __int64 v5; // r8
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-18h]

  v2 = (struct _KMUTANT *)((char *)this + 160);
  KeWaitForSingleObject((char *)this + 160, Executive, 0, 0, 0LL);
  Flink = a2->Flink;
  if ( a2->Flink == a2 )
  {
    p_Blink = 0LL;
  }
  else
  {
    if ( Flink->Blink != a2 || (v8 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    a2->Flink = v8;
    p_Blink = &Flink[-1].Blink;
    v8->Blink = a2;
  }
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 216) && p_Blink && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v10) = *((_DWORD *)this + 65);
    McTemplateK0pqq_EtwWriteTransfer(
      (unsigned int)v10,
      &EventBltQueueRemoveEntry,
      v5,
      *((_QWORD *)this + 31),
      v10,
      *((_DWORD *)p_Blink + 15));
  }
  KeReleaseMutex(v2, 0);
  return p_Blink;
}
