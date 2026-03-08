/*
 * XREFs of ZwQueryInformationResourceManager @ 0x140414DD0
 * Callers:
 *     DifZwQueryInformationResourceManagerWrapper @ 0x1405F2510 (DifZwQueryInformationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&ResourceManagerInformationClass);
}
