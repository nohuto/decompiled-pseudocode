/*
 * XREFs of sub_180074C10 @ 0x180074C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180074C10(__int64 a1)
{
  return Concurrency::message<enum Concurrency::agent_status>::add_ref(a1 - 24);
}
