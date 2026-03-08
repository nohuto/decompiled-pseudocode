/*
 * XREFs of ExAcquireRundownProtectionCacheAwareEx @ 0x14028DD10
 * Callers:
 *     EtwpOpenLogger @ 0x140205B30 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     RawBeginOperation @ 0x14028DCD8 (RawBeginOperation.c)
 *     EtwpFailLogging @ 0x1402FABEC (EtwpFailLogging.c)
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     EtwpFailLoggingOld @ 0x14040C914 (EtwpFailLoggingOld.c)
 *     EtwpQueueStackWalkApc @ 0x140460526 (EtwpQueueStackWalkApc.c)
 *     EtwpQueueStackWalkDpc @ 0x1405FD87C (EtwpQueueStackWalkDpc.c)
 *     EtwpCompressionDpc @ 0x140600220 (EtwpCompressionDpc.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwInitialize @ 0x14080AAA4 (EtwInitialize.c)
 *     PeriodicCaptureStateTimerCallback @ 0x1409E9F70 (PeriodicCaptureStateTimerCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAwareEx(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, ULONG Count)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  v2 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v2);
  v3 = *v2;
  if ( (*v2 & 1) != 0 )
    return 0;
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(v2, 2 * Count + v3, v3);
    if ( v4 == v3 )
      break;
    if ( (v3 & 1) != 0 )
      return 0;
  }
  return 1;
}
