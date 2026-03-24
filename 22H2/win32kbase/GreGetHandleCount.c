/*
 * XREFs of GreGetHandleCount @ 0x1C013F1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreGetHandleCount()
{
  return *((unsigned int *)gpHandleManager + 1);
}
