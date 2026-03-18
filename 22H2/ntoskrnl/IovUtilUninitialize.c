/*
 * XREFs of IovUtilUninitialize @ 0x140AD3E00
 * Callers:
 *     ViIovPluginUnload @ 0x1405D1F70 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}
