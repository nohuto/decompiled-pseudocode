/*
 * XREFs of Amd64FreeCounter @ 0x140526ED0
 * Callers:
 *     Amd64DisableMonitoring @ 0x140526BF0 (Amd64DisableMonitoring.c)
 *     Amd64InitializeCacheStatus @ 0x140527134 (Amd64InitializeCacheStatus.c)
 *     Amd64InitializeDataFabricStatus @ 0x140527308 (Amd64InitializeDataFabricStatus.c)
 *     Amd64InitializeProfiling @ 0x140A95700 (Amd64InitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64FreeCounter(unsigned int a1)
{
  __int64 v2; // rdx
  bool v3; // cf
  __int64 result; // rax
  __int64 v5; // rcx

  if ( HalpProfileInterface == &DefaultProfileInterface )
    v2 = HalpCounterStatus;
  else
    v2 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
  v3 = a1 < Amd64NumberCoreCounters;
  *(_DWORD *)(*(_QWORD *)(v2 + 8LL * a1) + 32LL) = 0;
  result = *(_QWORD *)(v2 + 8LL * a1);
  *(_DWORD *)(result + 24) = 3;
  if ( v3 )
  {
    _mm_lfence();
    result = *(_QWORD *)(v2 + 8LL * a1);
    v5 = *(_QWORD *)(result + 16);
    if ( *(_BYTE *)(v5 + 8) )
    {
      *(_BYTE *)(v5 + 8) = 0;
      *(_DWORD *)(*(_QWORD *)(v2 + 8LL * (a1 + 1)) + 32LL) = 0;
      result = *(_QWORD *)(v2 + 8LL * (a1 + 1));
      *(_DWORD *)(result + 24) = 3;
    }
  }
  return result;
}
