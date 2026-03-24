/*
 * XREFs of GreGetPeakHandleCount @ 0x1C013EEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetPeakHandleCount()
{
  return *(unsigned int *)gpHandleManager;
}
