/*
 * XREFs of KiIsKvaLeakSimulated @ 0x140377ABC
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A89A8C (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

bool KiIsKvaLeakSimulated()
{
  return (KiFeatureSimulations & 0x10) != 0;
}
