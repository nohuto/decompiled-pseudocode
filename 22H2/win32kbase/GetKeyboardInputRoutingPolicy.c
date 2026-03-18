/*
 * XREFs of GetKeyboardInputRoutingPolicy @ 0x1C006A7B0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C006B304 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 GetKeyboardInputRoutingPolicy()
{
  return *(unsigned int *)(anonymous_namespace_::GetKeyboardProcessor() + 16);
}
