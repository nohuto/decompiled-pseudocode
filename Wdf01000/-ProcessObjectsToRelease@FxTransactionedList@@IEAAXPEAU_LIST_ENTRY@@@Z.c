void __fastcall FxTransactionedList::ProcessObjectsToRelease(FxTransactionedList *this, _LIST_ENTRY *ReleaseHead)
{
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v5; // rcx
  _LIST_ENTRY *v6; // rdi

  while ( 1 )
  {
    Flink = ReleaseHead->Flink;
    if ( ReleaseHead->Flink == ReleaseHead )
      break;
    if ( Flink->Blink != ReleaseHead || (v5 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    ReleaseHead->Flink = v5;
    v6 = Flink - 1;
    v5->Blink = ReleaseHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))Flink[1].Blink->Flink[1].Flink)(
      Flink[1].Blink,
      &Flink[-1],
      226LL,
      "minkernel\\wdf\\framework\\shared\\support\\fxtransactionedlist.cpp");
    if ( this->m_DeleteOnRemove )
      ((void (__fastcall *)(_LIST_ENTRY *))v6[2].Blink->Flink[3].Flink)(v6[2].Blink);
  }
}
