/*
 * XREFs of ZwGetCompleteWnfStateSubscription @ 0x140414210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetCompleteWnfStateSubscription(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
