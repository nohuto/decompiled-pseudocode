/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1402331B0
 * Callers:
 *     EtwpTraceMessageVa @ 0x140205450 (EtwpTraceMessageVa.c)
 *     NtTraceEvent @ 0x140230D30 (NtTraceEvent.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     RawEndOperation @ 0x14028E08C (RawEndOperation.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14028E24C (EtwpCancelPendingStackWalkApcs.c)
 *     EtwpFailLogging @ 0x1402FABEC (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x1403BC590 (EtwpCloseLogger.c)
 *     EtwpFailLoggingOld @ 0x14040C914 (EtwpFailLoggingOld.c)
 *     EtwTraceEvent @ 0x14045FE22 (EtwTraceEvent.c)
 *     EtwpFinalizePendingApc @ 0x140460334 (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x140460526 (EtwpQueueStackWalkApc.c)
 *     EtwSendTraceBuffer @ 0x1405FCD90 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x1405FCF28 (EtwTraceRaw.c)
 *     EtwpQueueStackWalkDpc @ 0x1405FD87C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1405FD990 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x140600270 (EtwpCompressionProc.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpUpdateEnableMask @ 0x140692F88 (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackProviderRegistration @ 0x1406952D0 (EtwpTrackProviderRegistration.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwInitialize @ 0x14080AAA4 (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRef, ULONG Count)
{
  _EX_RUNDOWN_REF *RunRefs; // r8
  signed __int64 v3; // r9
  unsigned __int64 v4; // r9

  RunRefs = (_EX_RUNDOWN_REF *)((char *)RunRef->RunRefs + RunRef->RunRefSize
                                                        * (KeGetPcr()->Prcb.Number % RunRef->Number));
  _m_prefetchw(RunRefs);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = RunRefs->Count;
      if ( (RunRefs->Count & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)RunRefs, v3 - 2 * Count, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    RunRefs = RunRef->RunRefs;
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, -Count) == Count )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}
