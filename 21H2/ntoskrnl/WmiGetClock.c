/*
 * XREFs of WmiGetClock @ 0x1405A6760
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x140278F20 (RtlGetSystemTimePrecise.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall WmiGetClock(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // ecx

  v2 = a1;
  v3 = *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 108);
  result = 0LL;
  if ( v2 )
  {
    if ( v2 != 2 )
    {
      if ( v2 > 2 )
      {
        if ( v2 <= 4 )
          return result;
        if ( v2 == 5 )
          return __rdtsc();
      }
      return RtlGetSystemTimePrecise();
    }
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  v5 = *(unsigned __int8 *)(v3 + 4209) - 2;
  if ( v5 )
  {
    if ( v5 == 1 )
      return __rdtsc();
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  return RtlGetSystemTimePrecise();
}
