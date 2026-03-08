/*
 * XREFs of ZwRollbackRegistryTransaction @ 0x140415490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRollbackRegistryTransaction(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
