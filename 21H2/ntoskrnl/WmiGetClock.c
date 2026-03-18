/*
 * XREFs of WmiGetClock @ 0x140630E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14022DB00 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 WmiGetClock()
{
  int v0; // edx
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // ecx

  v1 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  result = 0LL;
  if ( v0 )
  {
    if ( v0 != 2 )
    {
      if ( v0 > 2 )
      {
        if ( v0 <= 4 )
          return result;
        if ( v0 == 5 )
          return __rdtsc();
      }
      return RtlGetSystemTimePrecise();
    }
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  v3 = *(unsigned __int8 *)(v1 + 4233) - 2;
  if ( v3 )
  {
    if ( v3 == 1 )
      return __rdtsc();
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  return RtlGetSystemTimePrecise();
}
