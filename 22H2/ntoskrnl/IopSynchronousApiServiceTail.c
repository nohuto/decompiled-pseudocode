/*
 * XREFs of IopSynchronousApiServiceTail @ 0x14067D3EC
 * Callers:
 *     NtUnlockFile @ 0x140674110 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x14067F740 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x1406C9680 (NtQueryVolumeInformationFile.c)
 *     NtSetEaFile @ 0x140731000 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076C940 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923FC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x1408910DC (IopCancelAlertedRequest.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSynchronousApiServiceTail(
        unsigned int a1,
        void *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        unsigned int *a5,
        _OWORD *a6)
{
  unsigned int v8; // edi

  v8 = a1;
  if ( a1 == 259 )
  {
    if ( KeWaitForSingleObject(a2, Executive, a4, 0, 0LL) == 192 )
      IopCancelAlertedRequest(a2, a3);
    v8 = *a5;
  }
  *a6 = *(_OWORD *)a5;
  ExFreePoolWithTag(a2, 0);
  return v8;
}
