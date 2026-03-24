/*
 * XREFs of IsShellFrameHangResilient @ 0x1C003CDB4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0234A48 (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C003CE40 (IsAdaptiveQueueDetachExempted.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (*(_DWORD *)(a1 + 1232) & 0x40000) == 0 )
    return 0;
  v2 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 432) + 392LL) <= 1u
    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 48LL)
    || *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464) + 56LL)
    || (unsigned int)IsAdaptiveQueueDetachExempted(a1) )
  {
    return 0;
  }
  return v2;
}
