bool __fastcall CMasterInputThread::IsInputThreadDesktopActive(CMasterInputThread *this)
{
  PKDPC BufferChainingDpc; // rsi
  bool v2; // di

  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&BufferChainingDpc->DpcListEntry, 0LL);
  v2 = 0;
  if ( !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase::InputThreadState *)&BufferChainingDpc->DeferredRoutine) )
    v2 = *((_QWORD *)BufferChainingDpc->DeferredContext + 57) == (_QWORD)grpdeskRitInput;
  ExReleasePushLockSharedEx(&BufferChainingDpc->DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
