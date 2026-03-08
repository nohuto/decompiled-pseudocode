/*
 * XREFs of ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C01E88B0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::FreeEdgyFrameData(Edgy *this, struct tagEDGY_DATA *a2)
{
  struct _LIST_ENTRY *v2; // rbx
  struct _LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY *Blink; // rdi
  struct _LIST_ENTRY *v6; // rax
  __int64 v7; // rax

  v2 = (struct _LIST_ENTRY *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    v4 = v2 + 74;
    while ( v4->Flink != v4 )
    {
      Blink = v4->Blink;
      if ( Blink->Flink != v4 || (v6 = Blink->Blink, v6->Flink != Blink) )
        __fastfail(3u);
      v4->Blink = v6;
      v6->Flink = v4;
      Blink->Blink = Blink;
      Blink->Flink = Blink;
      v7 = SGDGetUserSessionState(this);
      CTouchProcessor::UnreferenceUndispatchedFrame(*(CTouchProcessor **)(v7 + 3424), Blink);
    }
    *((_QWORD *)this + 36) = 0LL;
    *((_DWORD *)this + 4) = 0;
  }
}
