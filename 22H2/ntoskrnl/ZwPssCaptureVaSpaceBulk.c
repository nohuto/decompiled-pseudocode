/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x1403FC1C0
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF90 (NtPssCaptureVaSpaceBulk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPssCaptureVaSpaceBulk(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PNTPSS_MEMORY_BULK_INFORMATION BulkInformation,
        SIZE_T BulkInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
