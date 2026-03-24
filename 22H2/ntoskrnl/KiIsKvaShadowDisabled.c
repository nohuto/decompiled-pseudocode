/*
 * XREFs of KiIsKvaShadowDisabled @ 0x1403B55BC
 * Callers:
 *     KiEnableKvaShadowing @ 0x14099F4C8 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaShadowDisabled()
{
  return (KiFeatureSettings & 2) != 0;
}
