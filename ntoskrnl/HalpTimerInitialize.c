/*
 * XREFs of HalpTimerInitialize @ 0x140377220
 * Callers:
 *     HalpTimerMeasureFrequencies @ 0x140376B78 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerSelectRoles @ 0x140376F4C (HalpTimerSelectRoles.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A05F0 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B13E0 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022CC50 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403772B8 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerNoteHpetMaskingBehavior @ 0x14037764C (HalpTimerNoteHpetMaskingBehavior.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerInitialize(__int64 a1)
{
  int v2; // edi
  __int64 InternalData; // rax
  __int64 v5; // rax

  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
  {
    v2 = 0;
  }
  else
  {
    InternalData = HalpTimerGetInternalData(a1);
    v2 = (*(__int64 (__fastcall **)(__int64))(a1 + 104))(InternalData);
    if ( v2 < 0 )
    {
      *(_DWORD *)(a1 + 256) = v2;
      HalpTimerLastProblem = 15;
      *(_DWORD *)(a1 + 252) = 15;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
      *(_DWORD *)(a1 + 272) = 2559;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v5 = HalpTimerGetInternalData(a1);
        _InterlockedExchange64((volatile __int64 *)(a1 + 200), (*(__int64 (__fastcall **)(__int64))(a1 + 112))(v5));
        HalpTimerCalibratePerformanceCounter(a1, 0LL);
      }
      if ( *(_DWORD *)(a1 + 228) == 3 )
        HalpTimerNoteHpetMaskingBehavior();
    }
  }
  *(_DWORD *)(a1 + 184) |= (v2 >> 31) + 2;
  return (unsigned int)v2;
}
