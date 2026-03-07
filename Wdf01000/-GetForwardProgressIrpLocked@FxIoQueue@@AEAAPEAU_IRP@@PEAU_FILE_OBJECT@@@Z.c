_LIST_ENTRY **__fastcall FxIoQueue::GetForwardProgressIrpLocked(FxIoQueue *this, _FILE_OBJECT *FileObject)
{
  _LIST_ENTRY **p_Blink; // r8
  _LIST_ENTRY *p_m_PendedIrpList; // r10
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v5; // r9
  _LIST_ENTRY *Blink; // rax

  p_Blink = 0LL;
  p_m_PendedIrpList = &this->m_FwdProgContext->m_PendedIrpList;
  Flink = p_m_PendedIrpList->Flink;
  if ( p_m_PendedIrpList->Flink != p_m_PendedIrpList )
  {
    while ( 1 )
    {
      v5 = Flink->Flink;
      p_Blink = &Flink[-11].Blink;
      if ( !FileObject || FileObject == (_FILE_OBJECT *)p_Blink[23][3].Flink )
      {
        if ( v5->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
          __fastfail(3u);
        Blink->Flink = v5;
        v5->Blink = Blink;
        Flink->Blink = Flink;
        Flink->Flink = Flink;
        if ( _InterlockedExchange64((volatile __int64 *)p_Blink + 13, 0LL) )
          break;
      }
      p_Blink = 0LL;
      Flink = v5;
      if ( v5 == p_m_PendedIrpList )
        return p_Blink;
    }
    p_Blink[18] = 0LL;
  }
  return p_Blink;
}
