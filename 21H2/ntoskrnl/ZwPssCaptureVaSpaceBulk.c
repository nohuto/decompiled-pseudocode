/*
 * XREFs of ZwPssCaptureVaSpaceBulk @ 0x1403FCD20
 * Callers:
 *     NtPssCaptureVaSpaceBulk @ 0x14095C110 (NtPssCaptureVaSpaceBulk.c)
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
