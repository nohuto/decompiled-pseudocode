/*
 * XREFs of KdGetDebugDevice @ 0x1403CA200
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A1280 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
