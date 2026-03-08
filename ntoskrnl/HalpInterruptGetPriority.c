/*
 * XREFs of HalpInterruptGetPriority @ 0x1403792F0
 * Callers:
 *     HalpInitializeDeferredErrorVector @ 0x140378988 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403789F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpConnectThermalInterrupt @ 0x140378B60 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x140378CB4 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140379248 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetLineState @ 0x1403793AC (HalpInterruptSetLineState.c)
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
