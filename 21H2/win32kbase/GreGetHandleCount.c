/*
 * XREFs of GreGetHandleCount @ 0x1C013EEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetHandleCount()
{
  return *((unsigned int *)gpHandleManager + 1);
}
