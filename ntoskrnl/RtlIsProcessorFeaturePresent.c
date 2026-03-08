/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1402FA0E0
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x1403AE028 (RtlHpGlobalsInitialize.c)
 *     DifExIsProcessorFeaturePresentWrapper @ 0x1405D6F60 (DifExIsProcessorFeaturePresentWrapper.c)
 *     PiIsDriverBlocked @ 0x14079DF64 (PiIsDriverBlocked.c)
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
