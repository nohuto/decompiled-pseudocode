/*
 * XREFs of ?add_ref@?$message@W4agent_status@Concurrency@@@Concurrency@@QEAAJXZ @ 0x18004D510
 * Callers:
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 *     sub_180074C00 @ 0x180074C00 (sub_180074C00.c)
 *     sub_180074C10 @ 0x180074C10 (sub_180074C10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::message<enum Concurrency::agent_status>::add_ref(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
}
