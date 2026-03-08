/*
 * XREFs of ZwSetCachedSigningLevel @ 0x1404155D0
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x1407FA154 (SPCallServerHandleFileIntegrityUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
