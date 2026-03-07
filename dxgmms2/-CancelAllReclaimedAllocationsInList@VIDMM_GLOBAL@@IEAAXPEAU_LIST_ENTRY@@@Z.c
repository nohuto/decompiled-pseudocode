void __fastcall VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(
        VIDMM_GLOBAL *this,
        struct _LIST_ENTRY *a2,
        unsigned __int8 a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rbp
  struct _LIST_ENTRY *v6; // rsi
  VIDMM_SEGMENT *v7; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v8; // rdx
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *Blink; // rax

  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    p_Blink = &Flink[-22].Blink;
    v6 = Flink;
    v7 = (VIDMM_SEGMENT *)Flink[-14].Flink;
    v8 = (struct _VIDMM_GLOBAL_ALLOC *)&Flink[-22].Blink;
    Flink = Flink->Flink;
    VIDMM_SEGMENT::ReAllocateOldResource(v7, v8, a3);
    v9 = v6->Flink;
    if ( v6->Flink->Blink != v6 || (Blink = v6->Blink, Blink->Flink != v6) )
      __fastfail(3u);
    Blink->Flink = v9;
    v9->Blink = Blink;
    v6->Flink = 0LL;
    p_Blink[44] = 0LL;
  }
}
