/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1403726CC
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A864CC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
