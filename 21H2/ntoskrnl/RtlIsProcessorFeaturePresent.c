/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x140250040
 * Callers:
 *     RtlHpGlobalsInitialize @ 0x1403C44EC (RtlHpGlobalsInitialize.c)
 *     DifExIsProcessorFeaturePresentWrapper @ 0x140608D90 (DifExIsProcessorFeaturePresentWrapper.c)
 *     PiIsDriverBlocked @ 0x14075E568 (PiIsDriverBlocked.c)
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
