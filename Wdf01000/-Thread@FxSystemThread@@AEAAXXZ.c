void __fastcall FxSystemThread::Thread(FxSystemThread *this)
{
  unsigned __int8 v2; // r8
  _LIST_ENTRY *p_m_WorkList; // rsi
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v6; // dl
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *v8; // rax
  unsigned __int8 v9; // r8
  _LIST_ENTRY head; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+50h] [rbp+10h] BYREF

  head.Blink = &head;
  head.Flink = &head;
  this->m_PEThread = (_ETHREAD *)KeGetCurrentThread();
  KeSetEvent(&this->m_InitEvent.m_Event, 0, 0);
  p_m_WorkList = &this->m_WorkList;
  while ( 1 )
  {
    irql = 0;
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v2);
      Flink = p_m_WorkList->Flink;
      if ( p_m_WorkList->Flink == p_m_WorkList )
        break;
      v6 = irql;
      head.Blink = this->m_WorkList.Blink;
      head.Flink = Flink;
      Flink->Blink = &head;
      this->m_WorkList.Blink->Flink = &head;
      this->m_WorkList.Blink = &this->m_WorkList;
      p_m_WorkList->Flink = p_m_WorkList;
      FxNonPagedObject::Unlock(this, v6, v4);
      while ( 1 )
      {
        v7 = head.Flink;
        if ( head.Flink == &head )
          break;
        if ( head.Flink->Blink != &head || (v8 = head.Flink->Flink, head.Flink->Flink->Blink != head.Flink) )
          __fastfail(3u);
        head.Flink = head.Flink->Flink;
        v8->Blink = &head;
        ((void (__fastcall *)(_LIST_ENTRY *))v7[1].Flink)(v7[1].Blink);
      }
    }
    if ( this->m_Exit )
      break;
    KeClearEvent(&this->m_WorkEvent.m_Event);
    FxNonPagedObject::Unlock(this, irql, v9);
    KeWaitForSingleObject(&this->m_WorkEvent, Executive, 0, 0, 0LL);
  }
  FxNonPagedObject::Unlock(this, irql, v4);
  this->Release(
    this,
    FxSystemThread::StaticThreadThunk,
    527,
    "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxsystemthread.cpp");
  PsTerminateSystemThread(0);
}
