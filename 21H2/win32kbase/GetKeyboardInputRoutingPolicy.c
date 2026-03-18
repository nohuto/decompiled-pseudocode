/*
 * XREFs of GetKeyboardInputRoutingPolicy @ 0x1C003ED30
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C003E734 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 GetKeyboardInputRoutingPolicy()
{
  return *(unsigned int *)(anonymous_namespace_::GetKeyboardProcessor() + 16);
}
