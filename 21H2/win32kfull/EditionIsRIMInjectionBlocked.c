/*
 * XREFs of EditionIsRIMInjectionBlocked @ 0x1C01E9800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionIsRIMInjectionBlocked(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( grpdeskRitInput
    && (*(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
     || PsGetCurrentProcess(gptiCurrent, grpdeskRitInput, a3) != gpepCSRSS
     && !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)) )
  {
    return 1;
  }
  return v3;
}
