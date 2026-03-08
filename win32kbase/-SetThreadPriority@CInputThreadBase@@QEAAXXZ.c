/*
 * XREFs of ?SetThreadPriority@CInputThreadBase@@QEAAXXZ @ 0x1C009AA98
 * Callers:
 *     SetThreadPriority @ 0x1C009AA80 (SetThreadPriority.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C007CD2C (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1C009ADB0 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

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
