/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1402331E0
 * Callers:
 *     FsRtlCancelNotify @ 0x14024CCD0 (FsRtlCancelNotify.c)
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 *     ExpAllocateHandleTable @ 0x1406A6AF8 (ExpAllocateHandleTable.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406ABC90 (FsRtlNotifyCompleteIrp.c)
 *     ExpFreeHandleTable @ 0x1406AC130 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x1406AC298 (ExpFreeTablePagedPool.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406AC2DC (FsRtlNotifyCleanupOneEntry.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1407A7378 (AlpcpReleasePagedPoolQuota.c)
 *     MiReturnVadQuota @ 0x1407BC8F0 (MiReturnVadQuota.c)
 *     LpcExitProcess @ 0x1407E0CE4 (LpcExitProcess.c)
 *     MiReturnVadCharges @ 0x140977F8C (MiReturnVadCharges.c)
 * Callees:
 *     PspReturnQuota @ 0x1403493B0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 1LL, a2);
  return result;
}
