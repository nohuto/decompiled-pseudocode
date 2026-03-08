/*
 * XREFs of IovUtilUninitialize @ 0x140ACFE00
 * Callers:
 *     ViIovPluginUnload @ 0x1405CFAC0 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}
