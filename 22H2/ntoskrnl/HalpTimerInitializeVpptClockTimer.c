/*
 * XREFs of HalpTimerInitializeVpptClockTimer @ 0x140508C64
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A966C0 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpVpptInitializePhysicalTimer @ 0x140509AD4 (HalpVpptInitializePhysicalTimer.c)
 */

__int64 HalpTimerInitializeVpptClockTimer()
{
  __int64 result; // rax

  result = HalpClockTimer;
  if ( *(_DWORD *)(HalpClockTimer + 228) == 11 )
    return HalpVpptInitializePhysicalTimer();
  return result;
}
