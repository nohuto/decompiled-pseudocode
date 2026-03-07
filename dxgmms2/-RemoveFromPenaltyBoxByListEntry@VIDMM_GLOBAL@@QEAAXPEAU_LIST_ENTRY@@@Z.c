void __fastcall VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(VIDMM_GLOBAL *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx

  Flink = a2->Flink;
  if ( a2->Flink )
  {
    if ( Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    a2->Flink = 0LL;
    a2->Blink = 0LL;
  }
}
