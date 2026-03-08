/*
 * XREFs of KdGetDebugDevice @ 0x140370690
 * Callers:
 *     HalpDbgInitSystem @ 0x140A85F50 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
