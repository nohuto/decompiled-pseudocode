/*
 * XREFs of FsRtlRegisterMupCalls @ 0x1407D5710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FsRtlRegisterMupCalls(__int64 a1)
{
  _InterlockedExchange64(&pFsRtlpMupCalls, a1);
}
