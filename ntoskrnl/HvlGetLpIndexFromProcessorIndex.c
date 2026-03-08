/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x140456E50
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1402ED878 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x14037F430 (HvlEnlightenProcessor.c)
 *     HvlSharedIsr @ 0x140456D60 (HvlSharedIsr.c)
 *     HvlSetPlatformIdleState @ 0x140544AF8 (HvlSetPlatformIdleState.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14099AA30 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // eax
  int *v4; // rcx

  v1 = 0;
  if ( byte_140C0CFC8 )
    return a1;
  v4 = HvlpLogicalProcessorRegions;
  if ( !(_DWORD)HvlpLogicalProcessorCount )
    return 0xFFFFFFFFLL;
  while ( v4[6] != a1 )
  {
    ++v1;
    v4 += 30;
    if ( v1 >= (unsigned int)HvlpLogicalProcessorCount )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v4[1];
}
