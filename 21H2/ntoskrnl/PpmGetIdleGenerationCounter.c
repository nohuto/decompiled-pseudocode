/*
 * XREFs of PpmGetIdleGenerationCounter @ 0x140565F50
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmGetIdleGenerationCounter(__int64 a1)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 v4; // rcx

  _m_prefetchw((const void *)(a1 + 32800));
  v2 = *(_QWORD *)(a1 + 32800);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32800), v2, v2);
  }
  while ( v3 != v2 );
  v4 = v2;
  if ( v2 && *(_DWORD *)(a1 + 32984) == 3 )
    return (*(_QWORD *)(*(_QWORD *)(a1 + 33616) + 8LL * DWORD2(xmmword_140CED590)) >> 1) & -(__int64)((*(_QWORD *)(*(_QWORD *)(a1 + 33616) + 8LL * DWORD2(xmmword_140CED590)) & 1) != 0);
  return v4;
}
