/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1403726B8
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A864CC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
