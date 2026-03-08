/*
 * XREFs of ZwCommitRegistryTransaction @ 0x140413650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCommitRegistryTransaction(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
