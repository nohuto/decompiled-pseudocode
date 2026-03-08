/*
 * XREFs of FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x14053C850
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x14053BDB0 (FsRtlpCancelReadOnlyOplockIrp.c)
 */

void __fastcall FsRtlpReadOnlyOplockIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelReadOnlyOplockIrp(a2, 0);
}
