/*
 * XREFs of HalpDmaExtractFromVerifierShadowAdapter @ 0x1403A9C20
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A9AD0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannel @ 0x140452D00 (HalAllocateAdapterChannel.c)
 *     HalAllocateCrashDumpRegisters @ 0x1404FF170 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1404FF270 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x1409307C0 (HalpAllocateMapRegisters.c)
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
