/*
 * XREFs of ZwGetCachedSigningLevel @ 0x14041D620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetCachedSigningLevel(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
