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
