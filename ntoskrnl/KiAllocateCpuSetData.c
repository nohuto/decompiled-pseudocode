/*
 * XREFs of KiAllocateCpuSetData @ 0x140B3AC30
 * Callers:
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 * Callees:
 *     KiCreateCpuSetForProcessor @ 0x140A89FC8 (KiCreateCpuSetForProcessor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiAllocateCpuSetData(unsigned int a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( KiMaximumGroups != 1 )
    a1 = (unsigned __int16)KiMaximumGroups << 6;
  result = ExAllocatePool2(64LL, 32 * a1, 0x2020654Bu);
  if ( result )
  {
    KiCpuSetAffinities = (void *)result;
    v3 = 8LL * a1;
    KiCpuSetAffinitiesShadow = (void *)(v3 + result);
    KiCpuSetData = v3 + result + v3;
    LODWORD(KiCpuSetAffinitySize) = 8 * a1;
    KiCreateCpuSetForProcessor(KiProcessorBlock[0]);
    return 1LL;
  }
  return result;
}
