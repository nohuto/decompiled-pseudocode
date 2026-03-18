/*
 * XREFs of HalpInterruptGetPriority @ 0x14037CCA0
 * Callers:
 *     HalpInitializeDeferredErrorVector @ 0x14037C338 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x14037C3A8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpConnectThermalInterrupt @ 0x14037C510 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x14037C664 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14037CBF8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetLineState @ 0x14037CD5C (HalpInterruptSetLineState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptGetPriority(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // ecx

  v2 = a2 >> 4;
  if ( v2 <= 2u )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 252);
  if ( 15 - (unsigned int)v2 > v3 )
    return 0LL;
  else
    return v2 + v3 - 15;
}
