/*
 * XREFs of EtwpCloseLogger @ 0x1403799A8
 * Callers:
 *     NtTraceEvent @ 0x14025C4C0 (NtTraceEvent.c)
 *     EtwpOpenLogger @ 0x14025D3F8 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x1402D0790 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403A993C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x1403AA0E8 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x1405A5E70 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x1405A5FE0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x1405A6488 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x1407922CC (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402DEA70 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

_QWORD *__fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  _QWORD *result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
