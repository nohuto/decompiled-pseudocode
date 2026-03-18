/*
 * XREFs of IsShellFrameHangResilient @ 0x1C0006E08
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006E7C (IsAdaptiveQueueDetachExempted.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C01158D4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1272) & 0x40000) != 0
    && tagQ::AreMultipleThreadsAttached(*(tagQ **)(a1 + 432))
    && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 48LL)
    && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 56LL) )
  {
    return (unsigned int)IsAdaptiveQueueDetachExempted(a1) == 0;
  }
  return v1;
}
