/*
 * XREFs of HalpTimerGetSavedPerformanceCounter @ 0x1404FC68C
 * Callers:
 *     HalpAcpiPreSleep @ 0x140A93820 (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x1403BE604 (HalpTimerScaleCounter.c)
 */

unsigned __int64 HalpTimerGetSavedPerformanceCounter()
{
  ULONG_PTR v0; // r11
  __int64 v1; // rdx
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 result; // rax
  __int64 v6; // r8

  v0 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v1 = *(_QWORD *)(HalpPerformanceCounter + 208);
    v2 = 10000000LL;
    v3 = MEMORY[0xFFFFF780000003B8];
    if ( HalpTimerReferencePage )
      v4 = ((unsigned __int64)(*(_QWORD *)(HalpPerformanceCounter + 16) - v1)
          * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64;
    else
      v4 = HalpTimerScaleCounter(
             *(_QWORD *)(HalpPerformanceCounter + 16) - v1,
             *(_QWORD *)(HalpPerformanceCounter + 192),
             10000000LL);
    result = v3 + v4;
  }
  else
  {
    v2 = *(_QWORD *)(HalpPerformanceCounter + 192);
    result = *(_QWORD *)(HalpPerformanceCounter + 16);
  }
  if ( v0 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v6 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v6 = 10000000LL;
    return HalpTimerScaleCounter(result, v2, v6);
  }
  return result;
}
