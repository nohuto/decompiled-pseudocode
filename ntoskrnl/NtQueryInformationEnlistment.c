/*
 * XREFs of NtQueryInformationEnlistment @ 0x1403D2670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtQueryInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength,
        PULONG ReturnLength)
{
  return __imp_NtQueryInformationEnlistment(
           EnlistmentHandle,
           EnlistmentInformationClass,
           EnlistmentInformation,
           EnlistmentInformationLength,
           ReturnLength);
}
