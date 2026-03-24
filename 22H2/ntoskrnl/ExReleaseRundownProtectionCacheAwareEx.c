/*
 * XREFs of ExReleaseRundownProtectionCacheAwareEx @ 0x1402DEA70
 * Callers:
 *     EtwpTraceMessageVa @ 0x14025CDC0 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1402D0790 (EtwpLogKernelEvent.c)
 *     RawEndOperation @ 0x1402DEA38 (RawEndOperation.c)
 *     EtwpCancelPendingStackwalkApcs @ 0x140321428 (EtwpCancelPendingStackwalkApcs.c)
 *     EtwpFailLogging @ 0x14036C474 (EtwpFailLogging.c)
 *     EtwpCloseLogger @ 0x1403799A8 (EtwpCloseLogger.c)
 *     EtwpFinalizePendingApc @ 0x1405A6AEC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6B80 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A6D5C (EtwpQueueStackWalkDpc.c)
 *     EtwpStackWalkDpc @ 0x1405A7020 (EtwpStackWalkDpc.c)
 *     EtwpCompressionProc @ 0x1405ACCE0 (EtwpCompressionProc.c)
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 *     EtwpFreeLoggerContext @ 0x14069817C (EtwpFreeLoggerContext.c)
 *     EtwpReleaseLoggerContext @ 0x1406BC818 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BC864 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x140711A40 (EtwpStartLogger.c)
 *     EtwInitialize @ 0x140793C24 (EtwInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
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
