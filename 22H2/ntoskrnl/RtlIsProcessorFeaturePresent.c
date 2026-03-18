/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x140364F00
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x1403985DC (RtlHpGlobalsInitialize.c)
 *     DifExIsProcessorFeaturePresentWrapper @ 0x1405D9410 (DifExIsProcessorFeaturePresentWrapper.c)
 *     PiIsDriverBlocked @ 0x140692F18 (PiIsDriverBlocked.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( a1 >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(a1 - 0x87FFFFFFD8CLL);
}
