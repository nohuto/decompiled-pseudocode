/*
 * XREFs of HalpTimerInitialize @ 0x1403B11C4
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AF294 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403B06D8 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerMeasureFrequencies @ 0x1403B0A68 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerSelectRoles @ 0x1403B0F2C (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14022A3A0 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A5564 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerNoteHpetMaskingBehavior @ 0x1403B13EC (HalpTimerNoteHpetMaskingBehavior.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerInitialize(__int64 a1)
{
  __int64 InternalData; // rax
  int v3; // edi
  __int64 v4; // rax

  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
  {
    v3 = 0;
  }
  else
  {
    InternalData = HalpTimerGetInternalData(a1);
    v3 = (*(__int64 (__fastcall **)(__int64))(a1 + 104))(InternalData);
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 256) = v3;
      HalpTimerLastProblem = 15;
      *(_DWORD *)(a1 + 252) = 15;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
      *(_DWORD *)(a1 + 272) = 2563;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v4 = HalpTimerGetInternalData(a1);
        _InterlockedExchange64((volatile __int64 *)(a1 + 200), (*(__int64 (__fastcall **)(__int64))(a1 + 112))(v4));
        HalpTimerCalibratePerformanceCounter(a1, 0LL);
      }
      if ( *(_DWORD *)(a1 + 228) == 3 )
        HalpTimerNoteHpetMaskingBehavior();
    }
  }
  *(_DWORD *)(a1 + 184) |= (v3 >> 31) + 2;
  return (unsigned int)v3;
}
