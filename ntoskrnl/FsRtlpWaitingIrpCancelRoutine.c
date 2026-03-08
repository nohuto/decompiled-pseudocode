/*
 * XREFs of FsRtlpWaitingIrpCancelRoutine @ 0x14053CAC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelWaitingIrp @ 0x14053BE94 (FsRtlpCancelWaitingIrp.c)
 */

void __fastcall FsRtlpWaitingIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelWaitingIrp(a2, 0);
}
