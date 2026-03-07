void __fastcall FxInterrupt::_InterruptDpcThunk(
        _KDPC *Dpc,
        FxInterrupt *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  void (__fastcall *v6)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax

  m_SystemWorkItem = DeferredContext->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    FxSystemWorkItem::EnqueueWorker(m_SystemWorkItem, FxInterrupt::_InterruptWorkItemCallback, DeferredContext, 0);
  }
  else
  {
    v6 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(unk_1C009FF30 + 8LL);
    if ( v6 )
      v6(&DeferredContext->m_EvtInterruptDpc, 8LL, 2164260864LL, 3938LL, 2);
    FxInterrupt::DpcHandler(DeferredContext, DeferredContext, SystemArgument1);
  }
}
