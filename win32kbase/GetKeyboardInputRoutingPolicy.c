/*
 * XREFs of GetKeyboardInputRoutingPolicy @ 0x1C0081140
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0080388 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 __fastcall GetKeyboardInputRoutingPolicy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(unsigned int *)(anonymous_namespace_::GetKeyboardProcessor(a1, a2, a3, a4) + 16);
}
