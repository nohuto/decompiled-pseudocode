/*
 * XREFs of MiCreateSystemWsles @ 0x140299B00
 * Callers:
 *     XmEmulateStream @ 0x140396B08 (XmEmulateStream.c)
 *     MiCommitPageTablesForVad @ 0x1405F91A0 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x14063C0B0 (MiReturnPageTablePageCommitment.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     MiComputeProcessUserVa @ 0x1406FC2F0 (MiComputeProcessUserVa.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiSessionCreate @ 0x14078610C (MiSessionCreate.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 * Callees:
 *     <none>
 */

__int64 MiCreateSystemWsles()
{
  return 1LL;
}
