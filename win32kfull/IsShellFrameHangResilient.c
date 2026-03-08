/*
 * XREFs of IsShellFrameHangResilient @ 0x1C0006D64
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006DD8 (IsAdaptiveQueueDetachExempted.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00390F4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
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
