/*
 * XREFs of PsGetJobEffectiveFreezeCount @ 0x1405A3D68
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1407160C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140739DE0 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobEffectiveFreezeCount(__int64 a1)
{
  return *(unsigned int *)(a1 + 1048);
}
