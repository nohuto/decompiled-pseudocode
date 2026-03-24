/*
 * XREFs of UnreferenceUndispatchedFrameList @ 0x1C010FC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void UnreferenceUndispatchedFrameList()
{
  struct _LIST_ENTRY *v0; // rbx
  struct _LIST_ENTRY *v1; // rdx
  struct _LIST_ENTRY *Blink; // rax

  v0 = (struct _LIST_ENTRY *)(gptiCurrent + 1144LL);
  while ( v0->Flink != v0 )
  {
    v1 = *(struct _LIST_ENTRY **)(gptiCurrent + 1152LL);
    if ( v1->Flink != v0 || (Blink = v1->Blink, Blink->Flink != v1) )
      __fastfail(3u);
    *(_QWORD *)(gptiCurrent + 1152LL) = Blink;
    Blink->Flink = v0;
    v1->Blink = v1;
    v1->Flink = v1;
    CTouchProcessor::UnreferenceUndispatchedFrame(gpTouchProcessor, v1);
  }
}
