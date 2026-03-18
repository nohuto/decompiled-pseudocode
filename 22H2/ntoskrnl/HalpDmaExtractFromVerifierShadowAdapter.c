/*
 * XREFs of HalpDmaExtractFromVerifierShadowAdapter @ 0x1403AE970
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403AE820 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannel @ 0x14045ACA0 (HalAllocateAdapterChannel.c)
 *     HalAllocateCrashDumpRegisters @ 0x140501250 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaFreeCrashDumpRegistersEx @ 0x140501350 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x1409336F0 (HalpAllocateMapRegisters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaExtractFromVerifierShadowAdapter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == 1634550870 )
    return *(_QWORD *)(a1 + 24);
  else
    return a1;
}
