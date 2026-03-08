/*
 * XREFs of HalpTimerQueryHostPerformanceCounter @ 0x1404FC7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerQueryHostPerformanceCounter(_QWORD *a1)
{
  __int64 v2; // rbx

  if ( !HalpPerformanceCounter || *(_DWORD *)(HalpPerformanceCounter + 228) != 7 || !qword_140C62290 || !qword_140C62128 )
    return 3221225659LL;
  v2 = qword_140C62128(0LL);
  *a1 = ((__int64 (*)(void))qword_140C62290)() + v2;
  return 0LL;
}
