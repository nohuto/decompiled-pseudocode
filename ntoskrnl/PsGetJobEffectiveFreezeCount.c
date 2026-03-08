/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x1405A1878
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140717CC0 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1407CB7E0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 1048);
}
