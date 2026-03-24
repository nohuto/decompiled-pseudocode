/*
 * XREFs of KiIsKvaLeakSimulated @ 0x1403B55A8
 * Callers:
 *     KiEnableKvaShadowing @ 0x14099F4C8 (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
