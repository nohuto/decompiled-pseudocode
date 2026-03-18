/*
 * XREFs of KeSaveProcessorSpecificFeatures @ 0x14056C06C
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140A9D540 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140AA81DC (PopHandleNextState.c)
 * Callees:
 *     KiSaveXSaveSupport @ 0x140A9F72C (KiSaveXSaveSupport.c)
 */

__int64 KeSaveProcessorSpecificFeatures()
{
  return KiSaveXSaveSupport();
}
