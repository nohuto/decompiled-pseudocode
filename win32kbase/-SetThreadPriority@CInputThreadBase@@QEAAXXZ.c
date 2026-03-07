void __fastcall CInputThreadBase::SetThreadPriority(CInputThreadBase *this)
{
  PKDPC BufferChainingDpc; // rdi

  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  RIMLockExclusive((__int64)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc->DpcListEntry);
  if ( LODWORD(BufferChainingDpc->DeferredRoutine) == 1 )
  {
    if ( CInputThreadBase::_CalledOnInputThread((CInputThreadBase *)BufferChainingDpc) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 176LL);
    SetThreadBasePriority(*(PETHREAD *)BufferChainingDpc->DeferredContext);
  }
  BufferChainingDpc->ProcessorHistory = 0LL;
  ExReleasePushLockExclusiveEx(&BufferChainingDpc->DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
}
