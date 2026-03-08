/*
 * XREFs of HalpTimerInitializeVpptClockTimer @ 0x140506B84
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpVpptInitializePhysicalTimer @ 0x1405079F4 (HalpVpptInitializePhysicalTimer.c)
 */

__int64 HalpTimerInitializeVpptClockTimer()
{
  __int64 result; // rax

  result = HalpClockTimer;
  if ( *(_DWORD *)(HalpClockTimer + 228) == 11 )
    return HalpVpptInitializePhysicalTimer();
  return result;
}
