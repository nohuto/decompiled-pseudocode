/*
 * XREFs of IsShellFrameHangResilient @ 0x1C00A98EC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00A9974 (IsAdaptiveQueueDetachExempted.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00AC870 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1256) & 0x40000) != 0
    && tagQ::AreMultipleThreadsAttached(*(tagQ **)(a1 + 432))
    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
  {
    return (unsigned int)IsAdaptiveQueueDetachExempted(a1) == 0;
  }
  return v1;
}
