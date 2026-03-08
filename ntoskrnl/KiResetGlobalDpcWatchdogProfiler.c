/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x140568F90
 * Callers:
 *     KeAccumulateTicks @ 0x14022F310 (KeAccumulateTicks.c)
 *     KeRelaxTimingConstraints @ 0x140568B0C (KeRelaxTimingConstraints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 34984);
  if ( v1 && *(_QWORD *)(a1 + 34992) != v1 )
  {
    result = *(unsigned int *)(a1 + 32436);
    if ( *(_DWORD *)(a1 + 32428) < (int)result )
      *(_QWORD *)(a1 + 34992) = v1;
  }
  return result;
}
