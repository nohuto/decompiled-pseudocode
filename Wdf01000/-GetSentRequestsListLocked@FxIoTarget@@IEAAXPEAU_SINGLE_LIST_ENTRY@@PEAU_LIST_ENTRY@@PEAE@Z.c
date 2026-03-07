void __fastcall FxIoTarget::GetSentRequestsListLocked(
        FxIoTarget *this,
        _SINGLE_LIST_ENTRY *RequestListHead,
        _LIST_ENTRY *SendList,
        bool *AddedToList)
{
  _LIST_ENTRY *Blink; // rsi

  Blink = SendList->Blink;
  for ( *AddedToList = SendList->Flink != SendList; Blink != SendList; Blink = Blink->Blink )
  {
    FxObject::AddRef(
      (FxObject *)&Blink[-8].Blink,
      (void *)0x6C636E43,
      608,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    Blink[1].Blink = (_LIST_ENTRY *)RequestListHead->Next;
    RequestListHead->Next = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
  }
}
