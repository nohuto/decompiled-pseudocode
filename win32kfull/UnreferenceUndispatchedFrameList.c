void __fastcall UnreferenceUndispatchedFrameList(__int64 a1)
{
  struct _LIST_ENTRY *v1; // rbx
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *Blink; // rax
  __int64 v4; // rax

  v1 = (struct _LIST_ENTRY *)(gptiCurrent + 1184LL);
  while ( v1->Flink != v1 )
  {
    v2 = *(struct _LIST_ENTRY **)(gptiCurrent + 1192LL);
    if ( v2->Flink != v1 || (Blink = v2->Blink, Blink->Flink != v2) )
      __fastfail(3u);
    *(_QWORD *)(gptiCurrent + 1192LL) = Blink;
    Blink->Flink = v1;
    v2->Blink = v2;
    v2->Flink = v2;
    v4 = SGDGetUserSessionState(a1);
    CTouchProcessor::UnreferenceUndispatchedFrame(*(CTouchProcessor **)(v4 + 3424), v2);
  }
}
