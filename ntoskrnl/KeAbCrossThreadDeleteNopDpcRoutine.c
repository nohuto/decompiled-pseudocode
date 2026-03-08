/*
 * XREFs of KeAbCrossThreadDeleteNopDpcRoutine @ 0x140300DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeAbCrossThreadDeleteNopDpcRoutine(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  _InterlockedDecrement(a3);
}
