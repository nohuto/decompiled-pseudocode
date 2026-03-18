/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0
 * Callers:
 *     EtwpTraceMessageVa @ 0x140226F30 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1402577C0 (NtTraceEvent.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F078 (EtwpCancelPendingStackWalkApcs.c)
 *     RawEndOperation @ 0x140321F9C (RawEndOperation.c)
 *     EtwpFailLogging @ 0x140365E7C (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x1403C1EC0 (EtwpCloseLogger.c)
 *     EtwTraceEvent @ 0x140467D22 (EtwTraceEvent.c)
 *     EtwpFinalizePendingApc @ 0x140468234 (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x140468426 (EtwpQueueStackWalkApc.c)
 *     EtwSendTraceBuffer @ 0x1405FF230 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x1405FF3C8 (EtwTraceRaw.c)
 *     EtwpQueueStackWalkDpc @ 0x1405FFD1C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1405FFE10 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x1406026C0 (EtwpCompressionProc.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpUpdateEnableMask @ 0x1406BDC94 (EtwpUpdateEnableMask.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE208 (EtwpReleaseLoggerContext.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BED1C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpTrackProviderRegistration @ 0x1406BFBE0 (EtwpTrackProviderRegistration.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 *     EtwpFreeLoggerContext @ 0x14078E1AC (EtwpFreeLoggerContext.c)
 *     EtwpStopTrace @ 0x1407F8938 (EtwpStopTrace.c)
 *     EtwInitialize @ 0x14081F5AC (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
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
