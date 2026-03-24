/*
 * XREFs of ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x1C01DC238
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall _ValidateInjectionQpcCount(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  return a4 && !a1
      || !a2 && !a1
      || (a4 || (a2 || !a1 || a5) && a1 != a2 && a1 - a2 <= a3)
      && *(_QWORD *)&KeQueryPerformanceCounter(0LL) - a1 <= (unsigned __int64)gullTouchInjectionMaxTimeOffset;
}
