/*
 * XREFs of EtwpCloseLogger @ 0x1403C1EC0
 * Callers:
 *     EtwpOpenLogger @ 0x140227610 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x140233C80 (EtwpLogKernelEvent.c)
 *     EtwpCCSwapFlush @ 0x140388764 (EtwpCCSwapFlush.c)
 *     EtwpLogSystemEventUnsafe @ 0x14038C540 (EtwpLogSystemEventUnsafe.c)
 *     EtwpKernelTraceRundown @ 0x140827608 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259BB0 (ExReleaseRundownProtectionCacheAwareEx.c)
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
