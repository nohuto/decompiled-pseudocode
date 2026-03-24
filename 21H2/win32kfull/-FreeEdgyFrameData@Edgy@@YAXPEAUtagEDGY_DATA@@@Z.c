/*
 * XREFs of ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C0207764
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::FreeEdgyFrameData(Edgy *this, struct tagEDGY_DATA *a2)
{
  __int64 v2; // rbx
  struct _LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v6; // rax

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    v4 = (struct _LIST_ENTRY *)(v2 + 1144);
    while ( v4->Flink != v4 )
    {
      Blink = v4->Blink;
      if ( Blink->Flink != v4 || (v6 = Blink->Blink, v6->Flink != Blink) )
        __fastfail(3u);
      v4->Blink = v6;
      v6->Flink = v4;
      Blink->Blink = Blink;
      Blink->Flink = Blink;
      CTouchProcessor::UnreferenceUndispatchedFrame(gpTouchProcessor, Blink);
    }
    *((_QWORD *)this + 36) = 0LL;
    *((_DWORD *)this + 4) = 0;
  }
}
