/*
 * XREFs of KeSaveProcessorSpecificFeatures @ 0x140569BCC
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140A9A400 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 * Callees:
 *     KiSaveXSaveSupport @ 0x140A9C5EC (KiSaveXSaveSupport.c)
 */

__int64 KeSaveProcessorSpecificFeatures()
{
  return KiSaveXSaveSupport();
}
