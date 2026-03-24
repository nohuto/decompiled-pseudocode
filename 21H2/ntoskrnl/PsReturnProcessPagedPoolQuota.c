/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x140318410
 * Callers:
 *     FsRtlCancelNotify @ 0x1402AA750 (FsRtlCancelNotify.c)
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     ExpFreeHandleTable @ 0x140604378 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x1406044E0 (ExpFreeTablePagedPool.c)
 *     LpcExitProcess @ 0x140613E28 (LpcExitProcess.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14061FB44 (AlpcpReleasePagedPoolQuota.c)
 *     ExpAllocateHandleTable @ 0x14062AF9C (ExpAllocateHandleTable.c)
 *     FsRtlNotifyFilterReportChange @ 0x14068FB50 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406907E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x140690DE4 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x14069133C (FsRtlNotifyCleanupOneEntry.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x1406EE790 (MiReturnVadQuota.c)
 * Callees:
 *     PspReturnQuota @ 0x140341980 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(struct _KPROCESS *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].AffinityPadding[7], a1, 1LL, a2);
  return result;
}
