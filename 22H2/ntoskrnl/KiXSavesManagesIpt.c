/*
 * XREFs of KiXSavesManagesIpt @ 0x14051A544
 * Callers:
 *     KiGetSavedIptState @ 0x14051A110 (KiGetSavedIptState.c)
 *     KiQueryIptSupport @ 0x1409AF7E0 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (KeFeatureBits & 0x800000) != 0 && (MEMORY[0xFFFFF780000005F0] & 0x100) != 0;
}
