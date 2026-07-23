/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140323160
 * Callers:
 *     FsRtlCancelNotify @ 0x140228890 (FsRtlCancelNotify.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     FsRtlNotifyFilterReportChange @ 0x1405EF9C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1405F0650 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1405F0C54 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1405F11AC (FsRtlNotifyCleanupOneEntry.c)
 *     LpcExitProcess @ 0x14067DA88 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406897B4 (AlpcpReleasePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x14069577C (ExpAllocateHandleTable.c)
 *     ExpFreeHandleTable @ 0x1406F3AA8 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x1406F3C10 (ExpFreeTablePagedPool.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x140705B70 (MiReturnVadQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x14034C6D0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 1LL, a2);
  return result;
}
