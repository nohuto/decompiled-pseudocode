/*
 * XREFs of PpmGetIdleGenerationCounter @ 0x14023602C
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140234F00 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfApplyProcessorState @ 0x1402ED59C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmGetIdleGenerationCounter(__int64 a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rcx

  _m_prefetchw((const void *)(a1 + 33632));
  v2 = *(_QWORD *)(a1 + 33632);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 33632), v2, v2);
  }
  while ( v3 != v2 );
  v4 = v2;
  if ( (v2 & 1) == 0 )
    return 0LL;
  if ( v2 && *(_DWORD *)(a1 + 33824) == 3 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140D17680)) >> 1) & -(__int64)((*(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140D17680)) & 1) != 0);
  return v4;
}
