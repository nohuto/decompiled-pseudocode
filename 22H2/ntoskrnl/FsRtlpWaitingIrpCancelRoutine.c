/*
 * XREFs of FsRtlpWaitingIrpCancelRoutine @ 0x14053EF60
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelWaitingIrp @ 0x14053E334 (FsRtlpCancelWaitingIrp.c)
 */

void __fastcall FsRtlpWaitingIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelWaitingIrp(a2, 0);
}
