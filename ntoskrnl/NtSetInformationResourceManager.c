/*
 * XREFs of NtSetInformationResourceManager @ 0x1403D27F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtSetInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength)
{
  return __imp_NtSetInformationResourceManager(
           ResourceManagerHandle,
           ResourceManagerInformationClass,
           ResourceManagerInformation,
           ResourceManagerInformationLength);
}
