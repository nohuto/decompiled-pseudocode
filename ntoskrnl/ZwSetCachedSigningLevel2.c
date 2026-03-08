/*
 * XREFs of ZwSetCachedSigningLevel2 @ 0x1404155F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
