/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x1405815B8
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1406CE8C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1406D49B0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 856);
}
