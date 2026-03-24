/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140298A90
 * Callers:
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     FsRtlCancelNotify @ 0x140303070 (FsRtlCancelNotify.c)
 *     ExpFreeHandleTable @ 0x140604378 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x1406044E0 (ExpFreeTablePagedPool.c)
 *     ExpAllocateHandleTable @ 0x140606154 (ExpAllocateHandleTable.c)
 *     LpcExitProcess @ 0x140614288 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14061FF64 (AlpcpReleasePagedPoolQuota.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x14063BEB0 (MiReturnVadQuota.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406746F0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140675380 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140675984 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140675EDC (FsRtlNotifyCleanupOneEntry.c)
 * Callees:
 *     PspReturnQuota @ 0x1402C2010 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 1LL, a2);
  return result;
}
