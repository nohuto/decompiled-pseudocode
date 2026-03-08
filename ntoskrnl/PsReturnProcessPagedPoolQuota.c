/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140295600
 * Callers:
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     FsRtlCancelNotify @ 0x1402F2B70 (FsRtlCancelNotify.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406D453C (AlpcpReleasePagedPoolQuota.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140703B40 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140704270 (FsRtlNotifyCompleteIrp.c)
 *     ExpFreeHandleTable @ 0x140704400 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x140704514 (ExpFreeTablePagedPool.c)
 *     MiReturnVadQuota @ 0x140704558 (MiReturnVadQuota.c)
 *     LpcExitProcess @ 0x140704CEC (LpcExitProcess.c)
 *     ExpAllocateHandleTable @ 0x140706348 (ExpAllocateHandleTable.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140775FD8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChange @ 0x140848F70 (FsRtlNotifyFilterReportChange.c)
 *     MiReturnVadCharges @ 0x140A39830 (MiReturnVadCharges.c)
 * Callees:
 *     PspReturnQuota @ 0x1403148A0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].Affinity.StaticBitmap[27], a1, 1LL, a2);
  return result;
}
