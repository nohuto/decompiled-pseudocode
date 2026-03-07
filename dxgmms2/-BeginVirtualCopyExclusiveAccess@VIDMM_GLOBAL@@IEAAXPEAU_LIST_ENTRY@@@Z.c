void __fastcall VIDMM_GLOBAL::BeginVirtualCopyExclusiveAccess(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  _QWORD **v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *i; // rbx
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *Blink; // rax

  v2 = (_QWORD **)((char *)this + 44608);
  DXGPUSHLOCK::AcquireShared((VIDMM_GLOBAL *)((char *)this + 44512));
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    v7 = (struct _LIST_ENTRY *)(i - 2);
    if ( !*(i - 2) && *(i - 23) )
    {
      VidSchSuspendResumeDevice((_KEVENT *)*(i - 22), 1, 0, 2);
      Blink = a2->Blink;
      if ( Blink->Flink != a2 )
        __fastfail(3u);
      v7->Flink = a2;
      v7->Blink = Blink;
      Blink->Flink = v7;
      a2->Blink = v7;
    }
  }
  if ( byte_1C00769C1 < 0 )
    McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 8018);
}
