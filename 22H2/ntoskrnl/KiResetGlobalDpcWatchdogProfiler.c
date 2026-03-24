/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1402F1418
 * Callers:
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiWalkPageTablesRecursively @ 0x14020BD60 (MiWalkPageTablesRecursively.c)
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     KeAccumulateTicks @ 0x1402243D0 (KeAccumulateTicks.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1402F13F0 (KiDpcWatchdog.c)
 *     KeRelaxTimingConstraints @ 0x140511ED8 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  void *v1; // r9
  void *result; // rax
  __int64 v3; // r8

  v1 = *(void **)(a1 + 33960);
  if ( v1 && *(void **)(a1 + 33968) != v1 )
  {
    result = (void *)*(unsigned int *)(a1 + 31732);
    if ( *(_DWORD *)(a1 + 31724) < (int)result )
    {
      v3 = (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 33968) = v1;
      return memset(v1, 0, 8 * v3);
    }
  }
  return result;
}
